#include "particleProperties.C"

#include "TString.h"
#include "TCut.h"
#include "TH1I.h"
#include "TH2I.h"
#include "TProfile.h"
#include "THStack.h"
#include "TPaveStats.h"
#include "TLegend.h"
#include "TF1.h"
#include "TMath.h"
#include "TFile.h"
#include "TTree.h"
#include "TROOT.h"
#include "TSystem.h"
#include "TStyle.h"
#include "TColor.h"
#include "TCanvas.h"
#include "TPad.h"
#include "TRandom3.h"

//#include "RooGlobalFunc.h"
#include "RooArgSet.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooDataHist.h"
#include "RooProdPdf.h"
#include "RooAddPdf.h"
#include "RooGaussian.h"
#include "RooEfficiency.h"
#include "RooUnblindUniform.h"
#include "RooChebychev.h"
#include "RooConstVar.h"
#include "RooExponential.h"
#include "TCanvas.h"
#include "TAxis.h"
#include "RooPlot.h"
#include "RooFitResult.h"
#include "RooStats/SPlot.h"
#include "RooCategory.h"
#include "RooAbsBinning.h"
#include "RooBinning.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;
using namespace RooFit ;

Double_t genBifGauss( TRandom3* generator, Double_t mean, Double_t sigma_L, Double_t sigma_R )
{
  if(sigma_L == 0.)
    sigma_L = sigma_R;
  if(sigma_R == 0.)
    sigma_R = sigma_L;
  
  Double_t leftFrac = sigma_L/(sigma_L+sigma_R);
  if( generator->Rndm() < leftFrac )
    return mean - TMath::Abs( generator->Gaus( mean, sigma_L ) - mean );
  else
    return mean + TMath::Abs( generator->Gaus( mean, sigma_R ) - mean );
}

Double_t corrGenValue( Double_t diff, Double_t mean, 
                       Double_t sigma_old_L, Double_t sigma_old_R,
                       Double_t sigma_L, Double_t sigma_R )
{
  if(sigma_L == 0.)
    sigma_L = sigma_R;
  if(sigma_R == 0.)
    sigma_R = sigma_L;
  if(sigma_old_L == 0.)
    sigma_old_L = sigma_old_R;
  if(sigma_old_R == 0.)
    sigma_old_R = sigma_old_L;
  if(diff<0.)
    return (diff + mean)*(sigma_L/sigma_old_L);
  else
    return (diff + mean)*(sigma_R/sigma_old_R);
}

void fluctuateAcceptance(TString const& filename, Int_t const& nbToys = 1000, Int_t const& seed = 4357)
{
  TString graphname1,histogramname1;
  TString graphnamew1,histogramnamew1;
  TString graphname2,histogramname2;
  TString outputfilename;
  TFile* inputfile = new TFile(filename);
  TObjArray* tokens = filename.Tokenize("/");
  TString prefix(((TObjString*)tokens->At(tokens->GetEntriesFast()-1))->GetString());
  outputfilename = "ROOT/toys/";
  outputfilename += prefix;
  outputfilename.ReplaceAll(".root","_Toys.root");
  prefix.ReplaceAll(".root","");
  TFile* outputfile = new TFile(outputfilename,"RECREATE");
  TRandom3* generator = new TRandom3(seed);
  TString outputhistogramname1;
  TString outputhistogramnamew1;
  TString outputhistogramname2;
  TH1D* histogram1;
  TH1D* histogram2;
  TGraphAsymmErrors* graphA;
  TGraphAsymmErrors* graphB;
  TGraphAsymmErrors* graphC;
  Double_t xA,yA,xB,yB,xC,yC;
  Double_t valueA,valueB,valueC;
  
  histogramname1 = prefix;
  histogramname1 += "_";
  histogramname1 += "Hlt1DiMuon_Hlt2DiMuonDetached";
  cout << histogramname1 << endl;
  histogram1 = (TH1D*)inputfile->Get(histogramname1); 
  histogram1->Reset();
    
  histogramname2 = prefix;
  histogramname2 += "_";
  histogramname2 += "Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached";
  cout << histogramname2 << endl;
  histogram2 = (TH1D*)inputfile->Get(histogramname2); 
  histogram2->Reset();

  graphname1 = histogramname1;
  graphname1 += "_AsymErrors";
  cout << graphname1 << endl;
  
  graphname2 = histogramname2;
  graphname2 += "_AsymErrors";
  cout << graphname2 << endl;
  
  graphA = (TGraphAsymmErrors*)inputfile->Get(graphname1+"_SetA"); 
  graphB = (TGraphAsymmErrors*)inputfile->Get(graphname1+"_SetB"); 
  graphC = (TGraphAsymmErrors*)inputfile->Get(graphname2+"_SetC"); 
  
  TH1D* histo1;
  TH1D* histo2;
  
  TH1D* histo1tot = new TH1D(*histogram1);
  TH1D* histo2tot = new TH1D(*histogram2);
  histo1tot->Reset();
  histo2tot->Reset();
  
  for(Int_t toy(0);toy<nbToys;toy++){
    if(toy%1000==999)
      cout << "Toy Number: " << toy+1 << endl;

    outputhistogramname1 = histogram1->GetName();
    outputhistogramname1 += "_Toy";
    outputhistogramname1 += toy;
    histo1 = new TH1D(*histogram1);
    histo1->Reset();
    histo1->SetName(outputhistogramname1);
    
    outputhistogramname2 = histogram2->GetName();
    outputhistogramname2 += "_Toy";
    outputhistogramname2 += toy;
    histo2 = new TH1D(*histogram2);
    histo2->Reset();
    histo2->SetName(outputhistogramname2);
    
    for(Int_t j(0);j<histogram1->GetNbinsX();j++){
      graphA->GetPoint(j,xA,yA);
      graphB->GetPoint(j,xB,yB);
      graphC->GetPoint(j,xC,yC);
      
      valueA = genBifGauss(generator,yA,graphA->GetErrorYlow(j),graphA->GetErrorYhigh(j));
      valueB = genBifGauss(generator,yB,graphB->GetErrorYlow(j),graphB->GetErrorYhigh(j));
      valueC = genBifGauss(generator,yC,graphC->GetErrorYlow(j),graphC->GetErrorYhigh(j));
      histo1->SetBinContent(j+1,valueA/(valueA+valueB));
      histo2->SetBinContent(j+1,valueC/(valueA+valueB));
      histo1tot->SetBinContent(j+1,histo1tot->GetBinContent(j+1)+valueA/(valueA+valueB)/(Double_t)nbToys);
      histo2tot->SetBinContent(j+1,histo2tot->GetBinContent(j+1)+valueC/(valueA+valueB)/(Double_t)nbToys);
    }
    
    histo1->Write();
    histo2->Write();
    
    histo1->Delete();
    histo2->Delete();
  }
  histo1tot->Write();
  histo2tot->Write();
  outputfile->Close();
}

int main(int argc, char *argv[])
{
  TString filename(argv[1]);
    
  if(argc == 2){
    fluctuateAcceptance(filename);
  }else if(argc == 3){
    TString nbtoys(argv[2]);
    fluctuateAcceptance(filename,nbtoys.Atoi());
  }else if(argc == 4){
    TString nbtoys(argv[2]);
    TString seed(argv[3]);
    fluctuateAcceptance(filename,nbtoys.Atoi(),seed.Atoi());
  }
  
  return 1;
}
