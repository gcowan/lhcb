from ROOT import TFile, TTree, TH1D, TH2D, TCanvas
from ROOT import TLorentzVector
from math import sqrt, cos, sin, pi

data = TFile('../data/selected_candidates_with_correct_angles.root', 'read')
#toy  = TFile('/home/gcowan/lhcb/Z4430/2011_2012/tomasz_data/Z4430/fits_new/spin5_withZ_withBkg_data/spin5_result_100k.root', 'read')
toyNoZ  = TFile('../xml/toy.root', 'read')
dataTree = data.Get('tuple')
#toyTree  = toy. Get('dataNTuple')
toyTreeNoZ  = toyNoZ.Get('dataNTuple')
dataEvents = dataTree.GetEntries()
#toyEvents = toyTree.GetEntries()
toyEventsNoZ = toyTreeNoZ.GetEntries()
#print dataEvents, toyEvents, toyEventsNoZ

def daughterMomentum(m, m1, m2):
  momentum = (m*m-(m1+m2)*(m1+m2))*(m*m-(m1-m2)*(m1-m2))
  momentum = sqrt(momentum)
  momentum /= (2.*m)
  return momentum

def calculateFinalStateMomenta_GOLD( mB0,  m23,  mMuMu,
                          cosTheta1,  cosTheta2,  phi,
                          mMuPlus,  mMuMinus,
                          mPi,  mK,
                          pion_ID):
  if (pion_ID > 0): # anti-B0
    if(phi >0): phi = pi - phi;
    else: phi  = -pi - phi;
    cosTheta1 = -cosTheta1;

  pJpsi = daughterMomentum(mB0, mMuMu, m23);
  p4Jpsi = TLorentzVector(0, 0, +pJpsi, sqrt(mMuMu*mMuMu+pJpsi*pJpsi));
  p4Kpi = TLorentzVector (0, 0, -pJpsi, sqrt(m23*m23+pJpsi*pJpsi));
  pB = TLorentzVector (0,0,0,mB0);

  # 4-momenta of muons, first in dimuon rest frame which are then boosted
  # using p4Jpsi to B0 rest frame
  pMu = daughterMomentum(mMuMu, mMuPlus, mMuMinus);

  pMuPlus = TLorentzVector()
  pMuMinus = TLorentzVector()
  pPi = TLorentzVector()
  pK = TLorentzVector()

  pMuPlus.SetPxPyPzE(pMu*sqrt(1-cosTheta1*cosTheta1),
             0,
             pMu*cosTheta1,
             sqrt(mMuPlus*mMuPlus+pMu*pMu));

  pMuMinus.SetPxPyPzE(-pMu*sqrt(1-cosTheta1*cosTheta1),
              0,
              -pMu*cosTheta1,
              sqrt(mMuMinus*mMuMinus+pMu*pMu));

  pMuPlus.Boost(p4Jpsi.BoostVector());
  pMuMinus.Boost(p4Jpsi.BoostVector());

  # Now kaon and pion to finish
  ppK = daughterMomentum(m23, mK, mPi);
  pz = ppK*cosTheta2;
  pT = ppK*sqrt(1-cosTheta2*cosTheta2);
  py = -pT*sin(phi);
  px = -pT*cos(phi);

  pK.SetPxPyPzE(   px, -py, -pz, sqrt(mK*mK+ppK*ppK));
  pPi.SetPxPyPzE( -px,  py,  pz, sqrt(mPi*mPi+ppK*ppK));
  pK.Boost(p4Kpi.BoostVector());
  pPi.Boost(p4Kpi.BoostVector());
  return pMuPlus, pMuMinus, pPi, pK

mB0 = 5.36677
mMuMu = 3.68609
mMuPlus = 0.1056583715
mMuMinus = 0.1056583715
mPi = 0.13957018
mK = 0.493677

dataHisto = TH1D("m13_data","m13", 15, 14.5, 23.7)
toyHisto =  TH1D("m13_toy","m13", 15, 14.5, 23.7)
toyHistoNoZ =  TH1D("m13_toy_NoZ","m13", 15, 14.5, 23.7)
dataHisto2D = TH2D("m13_data_2D","m13^2 vs m23^2", 25, 0.4, 2.8, 25, 14.5, 23.7)
toyHisto2D  = TH2D("m13_toy_2D","m13^2 vs m23^2",  25, 0.4, 2.8, 25, 14.5, 23.7)
toyHisto2DNoZ  = TH2D("m13_toy_2D_NoZ","m13^2 vs m23^2",  25, 0.4, 2.8, 25, 14.5, 23.7)
pullHisto   = TH1D("pull","m13^2 vs m23^2",  100, -5, 5)
pullHisto2D = TH2D("pull_2D","m13^2 vs m23^2",  40, 0.4, 2.8, 40, 14.5, 23.7)
pullHistoNoZ   = TH1D("pullNoZ","m13^2 vs m23^2",  100, -5, 5)
pullHisto2DNoZ = TH2D("pull_2DNoZ","m13^2 vs m23^2",  40, 0.4, 2.8, 40, 14.5, 23.7)
pullHisto.Sumw2()
pullHistoNoZ.Sumw2()
dataHisto.Sumw2()
dataHisto2D.Sumw2()
toyHisto2D.Sumw2()
from ROOT import kRed, kBlue
toyHisto.SetLineColor(kRed)
toyHistoNoZ.SetLineColor(kBlue)

dataEventsInRange = 0
for entry in dataTree:
    dataEventsInRange += entry.Bs_sig_sw
    #pMuPlus, pMuMinus, pPi, pK = calculateFinalStateMomenta_GOLD(mB0,  entry.m23/1000.,  mMuMu,
    #                        entry.cosTheta1,  entry.cosTheta2,  entry.phi,
    #                        mMuPlus,  mMuMinus,
    #                        mPi, mK,
    #                        entry.pionID)
    #m13 = (pMuPlus + pMuMinus + pPi).M()
    m13 = entry.m13/1000.
    dataHisto.Fill(m13*m13, entry.Bs_sig_sw)
    dataHisto2D.Fill(entry.m23/1000.*entry.m23/1000., m13*m13, entry.Bs_sig_sw)

print dataEventsInRange
'''
for entry in toyTree:
    pMuPlus, pMuMinus, pPi, pK = calculateFinalStateMomenta_GOLD(mB0,  entry.m23,  mMuMu,
                            entry.cosTheta1,  entry.cosTheta2,  entry.phi,
                            mMuPlus,  mMuMinus,
                            mPi, mK,
                            entry.pionID)
    m13 = (pMuPlus + pMuMinus + pPi).M()
    toyHisto.Fill(m13*m13)
    toyHisto2D.Fill(entry.m23*entry.m23, m13*m13)
'''
for entry in toyTreeNoZ:
    pMuPlus, pMuMinus, pPi, pK = calculateFinalStateMomenta_GOLD(mB0,  entry.m23,  mMuMu,
                            entry.cosTheta1,  entry.cosTheta2,  entry.phi,
                            mMuPlus,  mMuMinus,
                            mPi, mK,
                            entry.pionID)
    m13 = (pMuPlus + pMuMinus + pPi).M()
    toyHistoNoZ.Fill(m13*m13)
    toyHisto2DNoZ.Fill(entry.m23*entry.m23, m13*m13)

#toyHisto.Scale(dataEventsInRange/float(toyEvents))
toyHistoNoZ.Scale(dataEventsInRange/float(toyEventsNoZ))
#toyHisto2D.Scale(dataEventsInRange/float(toyEvents))
toyHisto2DNoZ.Scale(dataEventsInRange/float(toyEventsNoZ))

from ROOT import gStyle
gStyle.SetPalette(1)
gStyle.SetOptStat(0)

c = TCanvas("c")
dataHisto.Draw()
#toyHisto.Draw("same")
toyHistoNoZ.Draw("same")
dataHisto.GetXaxis().SetTitle("m(#psi(2S)#pi)^{2} [GeV^{2}]")
c.SaveAs("m13.pdf")

d = TCanvas("d")
d.Divide(2,1)
d.cd(1)
dataHisto2D.Draw("COLZ")
dataHisto2D.SetTitle("Data")
dataHisto2D.GetYaxis().SetTitle("m(#psi(2S)#pi)^{2} [GeV^{2}]")
dataHisto2D.GetXaxis().SetTitle("m(K#pi)^{2} [GeV^{2}]")
d.cd(2)
toyHisto2DNoZ.Draw("COLZ")
toyHisto2DNoZ.SetTitle("Toy from fit result")
toyHisto2DNoZ.GetYaxis().SetTitle("m(#psi(2S)#pi)^{2} [GeV^{2}]")
toyHisto2DNoZ.GetXaxis().SetTitle("m(K#pi)^{2} [GeV^{2}]")
d.SaveAs("dalitz_plot.pdf")

import sys
sys.exit(1)

from numpy import linspace

totChi2 = 0.
totChi2NoZ = 0.
for m23sq in linspace(0.4, 2.6, 40):
    for m13sq in linspace(14.5, 23.0, 40):
        #binNum23 = toyHisto2D.GetXaxis().FindBin(m23sq)
        #binNum13 = toyHisto2D.GetYaxis().FindBin(m13sq)
        binNum = toyHisto2D.FindBin(m23sq, m13sq)#binNum23, binNum13)
        dataContent = dataHisto2D.GetBinContent(binNum)
        dataError   = dataHisto2D.GetBinError(binNum)
        toyContent  = toyHisto2D.GetBinContent(binNum)
        toyContentNoZ = toyHisto2DNoZ.GetBinContent(binNum)
        if dataError > 0.:
            chi2 = (dataContent - toyContent)/dataError
            pullHisto2D.SetBinContent(binNum, chi2)
            pullHisto.Fill(chi2)
            totChi2 += chi2
            chi2NoZ = (dataContent - toyContentNoZ)/dataError
            pullHisto2DNoZ.SetBinContent(binNum, chi2NoZ)
            pullHistoNoZ.Fill(chi2NoZ)
            totChi2NoZ += chi2NoZ
print totChi2, totChi2NoZ

can = TCanvas("can")
pullHisto2D.Draw("COLZ")
pullHisto2D.GetYaxis().SetTitle("m(#psi(2S)#pi)^{2} [GeV^{2}]")
pullHisto2D.GetXaxis().SetTitle("m(K#pi)^{2} [GeV^{2}]")
can.SaveAs("2D_chi2.pdf")

canNoZ = TCanvas("canNoZ")
pullHisto2DNoZ.Draw("COLZ")
pullHisto2DNoZ.GetYaxis().SetTitle("m(#psi(2S)#pi)^{2} [GeV^{2}]")
pullHisto2DNoZ.GetXaxis().SetTitle("m(K#pi)^{2} [GeV^{2}]")
canNoZ.SaveAs("2D_chi2_NoZ.pdf")

gStyle.SetStatStyle(0)
gStyle.SetOptFit(1)
can2 = TCanvas("can2")
pullHisto.Draw()
pullHisto.Fit("gaus")
pullHisto.GetXaxis().SetTitle("2D #chi^{2}")
can2.SaveAs("1D_representation_of_2D_chi2.pdf")
can2NoZ = TCanvas("can2NoZ")
pullHistoNoZ.Draw()
pullHistoNoZ.Fit("gaus")
pullHistoNoZ.GetXaxis().SetTitle("2D #chi^{2}")
can2NoZ.SaveAs("1D_representation_of_2D_chi2_NoZ.pdf")

import sys
sys.exit(1)

from math import log

m23_min = 0.64
m23_max = 1.59
m23_nbins = 10
#m23_bins = linspace(m23_min, m23_max, m23_nbins)
m23_bins = [ 0.64,
          0.83655172,  0.86931034,  0.90206897,  0.93482759,  0.96758621,  1.00034483,
            1.03310345,  1.06586207,  1.09862069,  1.13137931,   1.19689655,
               1.26241379,  1.32793103,  1.36068966,  1.39344828,
                1.4262069,   1.45896552,   1.52448276,  1.59      ]


print m23_bins
cosTheta2_min = -1
cosTheta2_max = 1
cosTheta2_nbins = 16
cosTheta2_bins = linspace(cosTheta2_min, cosTheta2_max, cosTheta2_nbins)
print cosTheta2_bins
cosTheta1_min = -1
cosTheta1_max = 1
cosTheta1_nbins = 3
cosTheta1_bins = linspace(cosTheta1_min, cosTheta1_max, cosTheta1_nbins)
print cosTheta1_bins

chi2 = 0.


for i in range(len(m23_bins)-1):
    for j in range(len(cosTheta2_bins)-1):
     for k in range(len(cosTheta1_bins)-1):
        cut1 = "m23/1000. > %g && m23/1000. < %g" % (m23_bins[i], m23_bins[i+1])
        cut2 = "m23 > %g && m23 < %g"             % (m23_bins[i], m23_bins[i+1])
        cut1 += " && cosTheta2 > %g && cosTheta2< %g" % (cosTheta2_bins[j], cosTheta2_bins[j+1])
        cut2 += " && cosTheta2 > %g && cosTheta2< %g" % (cosTheta2_bins[j], cosTheta2_bins[j+1])
        cut1 += " && cosTheta1 > %g && cosTheta1< %g" % (cosTheta1_bins[k], cosTheta1_bins[k+1])
        cut2 += " && cosTheta1 > %g && cosTheta1< %g" % (cosTheta1_bins[k], cosTheta1_bins[k+1])
        n  = dataTree.GetEntries(cut1)
        mu = toyTree .GetEntries(cut2)
        if ( mu < 1. ): print cut2
        chi2 += 2.*((mu - n) + n*log(n/float(mu)))

print chi2
