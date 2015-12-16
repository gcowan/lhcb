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
#include "TH1F.h"
#include "TFile.h"
//#include "RooProdPdf.h"
#include "RooVoigtian.h"
#include "RooDecay.h"
#include "TCanvas.h"
#include "TTree.h"
#include "TCut.h"
#include "TCanvas.h"
#include "TFile.h"
#include "RooPlot.h"
#include "TAxis.h"
#include "RooDataHist.h"
//#include "ksfun.h"
#include "TSystem.h"
#include "RooFitResult.h"
#include "RooWindowPdf.h"
#include "TLatex.h"
#include <string>
#include <sstream>
#include <utility>
#include "RooFFTConvPdf.h"
#include "RooRelBreitWigner.h"

using namespace RooFit ;

void fitWindow(std::string filename = "radiative_chic0.root"){

 TFile* file = new TFile(filename.c_str());
 TH1F* histo = (TH1F*)file->Get("h1");

 RooRealVar m("m","m",4.9, 5.3);
 RooDataHist data("data", "dataset", m , histo); 


 RooRealVar mlow("mlow","mlow",5., 4.7,5.3  );
 RooRealVar mhigh("mhigh","mhigh",5.2, 5., 5.3);

 RooRealVar meanres("mean","mean", 0 );
 RooRealVar s("s","s",2e-3, 0, 100e-3  );
 RooGaussian gauss("gauss","gauss(x,mean,sigma)",m, meanres,s);

 RooWindowPdf window("erf","erf", m, mhigh, mlow);
 
 RooFFTConvPdf* convfun = new RooFFTConvPdf("convPdf1","convPdf1",  m, window,gauss);

 convfun->fitTo(data); 
 RooPlot* mframe = m.frame();
 
 data.plotOn(mframe);
 window.plotOn(mframe, LineColor(2)); 

 mframe->SetTitle("");
 TAxis* xachse = mframe->GetXaxis(); TAxis* yachse = mframe->GetYaxis();
 xachse->SetTitleFont (132);
 yachse->SetTitleFont (132);
 xachse->SetLabelFont (132);
 yachse->SetLabelFont (132); 
 xachse->SetTitle("m(K^{+} K^{-} #pi^{+} #pi^{-}) [GeV/c^{2}]"); 
 //yachse->SetTitle("Candidates"); 
 //yachse->SetTitleOffset(1.0); 
 // xachse->SetTitleOffset(1.1);

 mframe->Draw();

 
 
}
