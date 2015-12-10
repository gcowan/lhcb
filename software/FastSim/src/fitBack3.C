#include "RooExponential.h"
#include "TMath.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooGaussian.h"
#include "RooTruthModel.h"
#include "RooExponential.h"
#include  "RooBifurGauss.h"
#include "RooResolutionModel.h"
#include "RooGaussModel.h"
#include "RooCBShape.h"
#include "RooAddModel.h"
#include "RooAbsPdf.h"
#include "RooArgusBG.h"
#include "RooFFTConvPdf.h"
#include "RooAddPdf.h"
#include "RooHistPdf.h"
#include "RooProdPdf.h"
#include "RooDecay.h"
#include "TCanvas.h"
#include "TTree.h"
#include "TCut.h"
#include "TFile.h"
#include "RooPlot.h"
#include "TAxis.h"
#include "RooDataHist.h"
#include "TPolyLine.h"
//#include "ksfun.h"
#include "TSystem.h"
#include "RooFitResult.h"
#include  "RooHist.h"
#include "TLatex.h"
#include <string>
#include <sstream>
#include <utility>
//#include "RooStudentT.h"
#include "RooNovosibirsk.h"

using namespace RooFit ;

std::string massCandidates(double minmass, double maxmass, double nbins){

  double bsize = (maxmass - minmass)/nbins;
  std::stringstream ax; ax << "Candidates/ (" << bsize << "MeV/#font[12]{c}^{2})" ;
  return ax.str();
}

void addBlurb(TCanvas* can){

  can->cd(1);
  TLatex *myLatex = new TLatex(0.5,0.5,"");
  myLatex->SetTextFont(132); 
  myLatex->SetTextColor(1); 
  myLatex->SetTextSize(0.06); 
  myLatex->SetNDC(kTRUE); 
  myLatex->SetTextAlign(11);  
  myLatex->SetTextSize(0.06); 
  myLatex->DrawLatex(0.65, 0.78,"LHCb Simulation");
  
    
}

void fitBack3(std::string filename = "reflection_Info2.root", bool paramOn = false, double minmass = 5200, double maxmass = 5350, int nbins = 50){

  TFile* theFile = new TFile(filename.c_str());
 TTree* theTree = (TTree*)theFile->Get("bCandidates");
 //theTree->Print();

 RooRealVar m("B_s0_Mass_JpsiConstr","B_s0_Mass_JpsiConstr", minmass, maxmass);
 /*
 RooRealVar aMean("amean", "amean",  5300  , 5200, 5400);
 RooRealVar p("p", "p",  0.05  , 0, 1); // p.setConstant(true);
 RooRealVar ac("ac", "ac",  -20.  , -50, 0);// ac.setConstant(true);
 RooArgusBG argus("argus", "argus", m, aMean, ac,p); 
 */
 /* RooRealVar aMean("amean", "amean",  5280  , 5225, 5350);
 RooRealVar p("p", "p",  0.03  , 0, 1);  p.setConstant(true);
 RooRealVar ac("ac", "ac",  -15.  , -30, 30); //ac.setConstant(true);
 RooArgusBG argus("argus", "argus", m, aMean, ac,p);

 RooRealVar res_mean = RooRealVar("res_mean","res_mean",0.0); res_mean.setConstant(true);
 RooRealVar res_sigma =  RooRealVar("as","as",6,0.5,15.5,"MeV/c^{2}"); res_sigma.setConstant(true);
 RooAbsPdf* a_res = new RooGaussian("a_res","a_res",m,res_mean,res_sigma);
 RooFFTConvPdf *phi_sig = new RooFFTConvPdf("phi_sig","phi_sig",m,argus, *a_res);
 phi_sig->setBufferStrategy(RooFFTConvPdf::Flat);
 phi_sig->setBufferFraction(0.1); 
 */

 

 RooDataSet data("data","data",RooArgSet(m),Import(*theTree)) ;
 
 RooRealVar mean("mean", "Mean", 0.5*(minmass+maxmass), minmass, maxmass);
 RooRealVar s("sigma", "sigma", 40., 0., 1000);
 RooRealVar s2("sigma2", "sigma2", 20., 0., 200);
 RooRealVar a("a", "a", 2., 0., 20);
 RooRealVar n("n", "sigma", 1., 0., 10);

 RooRealVar tail("tail","tail", -0.08, -1, 1.);
 RooNovosibirsk bg("novo", "novo(x,mean,sigma,tail)", m, mean, s, tail);
 RooCBShape cb("crystalball","cb(x,mean,sigma)",m, mean,s,a,n);
 RooBifurGauss bif("bif","bif",m, mean,s,s2);

 bg.fitTo(data,NumCPU(4)); 


 // model.fitTo(data, NumCPU(2)); 
 RooPlot* mframe = m.frame();

 if (paramOn == true) bif.paramOn(mframe); //, Format("NE", AutoPrecision(1)));

 mframe->SetXTitle("M(#psi(2S) #pi^{+}#pi^{-}) [MeV/#font[12]{c}^{2}]");
 std::string axstring = massCandidates(minmass,maxmass,nbins) ;
 mframe->SetYTitle(axstring.c_str());
 mframe->SetTitle("");  
 TAxis* xachse = mframe->GetXaxis(); TAxis* yachse = mframe->GetYaxis();
 xachse->SetTitleFont (132);
 yachse->SetTitleFont (132);
 xachse->SetLabelFont (132);
 yachse->SetLabelFont (132); 
 xachse->SetTitleSize(0.052);
 yachse->SetTitleSize(0.052);
 yachse->SetTitleOffset(0.8);

 TCanvas *c1 = new TCanvas("c1", "c1",10,44,600,400);
 TPad* pad1 = new TPad("pad1","This is pad1",0.05,0.2,0.95,0.97);
 TPad* pad2 = new TPad("pad2","This is pad2",0.05,0.0,0.95,0.18);
 pad1->Draw();
 pad2->Draw();
 pad1->cd();

 data.plotOn(mframe, Binning(nbins));
 bg.plotOn(mframe, LineColor(kRed));
 mframe->Draw();
 addBlurb(c1);

 // stringstream out_2; 


  pad2->cd();
  RooPlot* frame2 =  m.frame() ; // Same way you made 'frame' 
  RooHist* phist = mframe->pullHist( );
   int np = phist->GetN();

  
   std::cout <<  " np " << np << std::endl; 
   //  std::vector<float> xv; std::vector<float> yv;
   double xv[201] ;
   double yv[201] ;
   int i = 0;
   for (i = 0; i < np; ++i){
     xv[i] = phist->GetX()[i];
     yv[i] =  phist->GetY()[i] - phist->GetErrorYlow(i)  ; 
   }


   int start = i;
   for (i = np-1; i >= 0; --i, ++start){
     xv[start] = phist->GetX()[i];
     yv[start] =  phist->GetY()[i] + phist->GetErrorYhigh(i)  ; 
   }

   xv[np*2] = xv[0];
   yv[np*2] = yv[0] -  phist->GetErrorYlow(0) ;

  TPolyLine* pline = new TPolyLine(2*np +1,xv, yv);
  pline->SetFillColor(31);
  pline->SetLineColor(2);
  pline->SetLineWidth(4);

  TPolyLine* line = new TPolyLine(np, phist->GetX(), phist->GetY());
  line->SetLineColor(2);
  line->SetLineWidth(2);

   frame2->SetMinimum(-4.5) ; 
   frame2->SetMaximum(4.5) ;
  xachse = frame2->GetXaxis(); yachse = frame2->GetYaxis();
  // mean.plotOn(xframe);
  xachse->SetTitleFont (132);
  yachse->SetTitleFont (132);
  xachse->SetLabelFont (132);
  yachse->SetLabelFont (132); 
  yachse->SetTitleOffset(0.2); 
  yachse->SetTitleSize(0.2);
  yachse->SetLabelSize(0.08);
  xachse->SetLabelOffset(0.2);
 yachse->SetNdivisions(110);
   frame2->SetXTitle("");
   frame2->SetYTitle("pull");
   frame2->SetTitle("");
 

   frame2->Draw() ; 
   pline->Draw("fsame");
   line->Draw("lsame"); 
   
  
}
