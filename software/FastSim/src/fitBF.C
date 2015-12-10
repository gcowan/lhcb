#include "TROOT.h"
#include "TMath.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooGaussian.h"
#include "RooTruthModel.h"
#include "RooChebychev.h"
#include "RooExponential.h"
#include "RooResolutionModel.h"
#include "RooGaussModel.h"
#include "RooCBShape.h"
#include "RooAddModel.h"
#include "RooAbsPdf.h"
#include "RooAddPdf.h"
#include "RooDstD0BG.h"
#include "RooHistPdf.h"
//#include "RooBackPdf.h"
//#include "RooProdPdf.h"
#include "RooVoigtian.h"
#include "RooDecay.h"
#include "TCanvas.h"
#include "TTree.h"
#include "TCut.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TH1F.h"
#include "RooPlot.h"
#include "TAxis.h"
#include "RooDataHist.h"
//#include "ksfun.h"
#include "TSystem.h"
#include "RooFitResult.h"
//#include "RooWindowPdf.h"
#include "TLatex.h"
#include <string>
#include <sstream>
#include <utility>
#include "RooRelBreitWigner.h"
#include  "RooBifurGauss.h"
#include "RooNovosibirsk.h"
#include "RooHistPdf.h"

using namespace RooFit ;

void addBlurb(TCanvas* can){

  can->cd(1);
  TLatex *myLatex = new TLatex(0.5,0.5,"");
  myLatex->SetTextFont(132); 
  myLatex->SetTextColor(1); 
  myLatex->SetTextSize(0.06); 
  myLatex->SetNDC(kTRUE); 
  myLatex->SetTextAlign(11);  
  myLatex->SetTextSize(0.05); 
  myLatex->DrawLatex(0.62, 0.85,"easybgen Simulation");
  
    
}

std::string createOutputName(std::string& name, std::string& trailer){
  // helper for making the output name
  std::string outputName = name.substr(0,name.size() - 5);
  outputName += trailer;
  return outputName;
}

void fitBF(std::string filename = "radiative_chic0.root", std::string trailer = ".eps"){

 gROOT -> ProcessLine( ".x ./mattStyle.C" );  


 TFile* file = new TFile(filename.c_str());
 TH1F* histo = (TH1F*)file->Get("h1");

 TCanvas* can = new TCanvas("can", "can", 800, 600 );  

 RooRealVar m("m","m",4800, 5400);
 RooDataHist data("data", "dataset", m , histo); 


 RooHistPdf histpdf("histpdf","histpdf", m,data,1);

 RooPlot* mframe = m.frame();
 
 data.plotOn(mframe);
 histpdf.plotOn(mframe, LineColor(2)); 

 mframe->SetTitle("");
 TAxis* xachse = mframe->GetXaxis(); TAxis* yachse = mframe->GetYaxis();
 xachse->SetTitleFont (132);
 yachse->SetTitleFont (132);
 xachse->SetLabelFont (132);
 yachse->SetLabelFont (132); 
 xachse->SetTitle("m(K^{+} K^{-} #pi^{+} #pi^{-}) [MeV/c^{2}]"); 
 yachse->SetTitle("Candidates"); 
 yachse->SetTitleOffset(1.3); 
 // xachse->SetTitleOffset(1.1);

 mframe->Draw();
 addBlurb(can);
 can->Print(createOutputName(filename,trailer).c_str());

 RooArgSet nset(m) ;
 m.setRange("signal", 5150, 5400) ;
 RooAbsReal* igx_sig = histpdf.createIntegral(m,NormSet(m),Range("signal")) ;
 std::cout <<igx_sig->getVal() << std::endl;
}
