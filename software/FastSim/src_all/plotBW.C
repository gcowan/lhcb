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
#include "RooPlot.h"
#include "TAxis.h"
#include "RooDataHist.h"
//#include "ksfun.h"
#include "TSystem.h"
#include "RooFitResult.h"
#include "TLatex.h"
#include <string>
#include <sstream>
#include <utility>
#include "RooRelBreitWigner.h"

using namespace RooFit ;

void plotBW(){

 
 RooRealVar m("m","m",0.980, 1.05);


 RooRealVar m0("m0","m0", 1.019461);
RooRealVar g0("g0","g0",0.001491);
 RooRealVar spin("spin","spin",1);
 RooRealVar radius("radius","radius",3); // not used
 RooRealVar ma("ma","ma",0.493677);
 RooRealVar mb("ma","ma", 0.493677);   


 RooRelBreitWigner gs("gs","gs", m,m0,g0,radius,ma,mb,spin);
 
 RooPlot* mframe = m.frame();
 


 gs.plotOn(mframe, LineColor(2)); 

 mframe->SetTitle("");
 TAxis* xachse = mframe->GetXaxis(); TAxis* yachse = mframe->GetYaxis();
 xachse->SetTitleFont (132);
 yachse->SetTitleFont (132);
 xachse->SetLabelFont (132);
 yachse->SetLabelFont (132); 
 xachse->SetTitle("m(#pi^{+} #pi^{-}) [GeV/c^{2}]"); 
 //yachse->SetTitle("Candidates"); 
 //yachse->SetTitleOffset(1.0); 
 // xachse->SetTitleOffset(1.1);

 mframe->Draw();

 
 
}
