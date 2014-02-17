#ifndef __CINT__
#include "RooGlobalFunc.h"
#endif
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooGaussian.h"
#include "RooConstVar.h"
#include "RooCategory.h"
#include "RooBMixDecay.h"
#include "RooBCPEffDecay.h"
#include "RooBDecay.h"
#include "RooFormulaVar.h"
#include "RooTruthModel.h"
#include "TCanvas.h"
#include "TAxis.h"
#include "TH1D.h"
#include "RooPlot.h"
#include "RooMCStudy.h"
using namespace RooFit ;

void correlation_toy()
{
  RooRealVar dt("dt","dt",0,10) ;

  // Parameters
  RooRealVar dm("dm","delta m(B0)",0.5) ;
  RooRealVar dg("dg","delta Gamma",0.) ;
  RooRealVar tau("tau","tau (B0)",1.5, 1., 3.) ;

  // Use delta function resolution model
  RooTruthModel tm("tm","truth model",dt) ;

  // Construct Bdecay with mixing
  RooBDecay bmix("bmix","decay",dt,tau,dg, RooRealConstant::value(1), RooRealConstant::value(0), RooRealConstant::value(1), RooRealConstant::value(0), dm, tm,RooBMixDecay::SingleSided) ;
  RooBDecay bexp("bexp","decay",dt,tau,dg, RooRealConstant::value(1), RooRealConstant::value(0), RooRealConstant::value(0), RooRealConstant::value(0), dm, tm,RooBMixDecay::SingleSided) ;
  
  // Generate some data
  RooDataSet* data = bmix.generate(RooArgSet(dt),100000) ;

  RooPlot* frame1 = dt.frame(Title("B decay distribution")) ;

  data->plotOn(frame1);
  bmix.plotOn(frame1); 
  bexp.fitTo(*data);
  bexp.plotOn(frame1, LineColor(kRed));

  TCanvas* c1 = new TCanvas("rf708_bphysics","rf708_bphysics",1200,800) ;
  c1->cd(1) ; gPad->SetLogy(1); gPad->SetLeftMargin(0.15) ; frame1->GetYaxis()->SetTitleOffset(1.6) ; frame1->Draw() ;
  c1->Update();

  /*
  // MC study
  RooMCStudy* mcstudy = new RooMCStudy(bmixEff, dt, FitModel(bmixEff), FitOptions(Save(kTRUE)));
  //RooMCStudy* mcstudy = new RooMCStudy(bmix, dt, FitModel(bmix), FitOptions(Save(kTRUE)));
  int nfits = 300;
  mcstudy->generateAndFit(nfits, 10000) ;

  // E x p l o r e   r e s u l t s   o f   s t u d y
  // ------------------------------------------------

  // Make plots of the distributions of mean, the error on mean and the pull of mean
  RooPlot* frame1 = mcstudy->plotParam(dm,Bins(40)) ;
  RooPlot* frame2 = mcstudy->plotError(dm,Bins(40)) ;
  RooPlot* frame3 = mcstudy->plotPull(dm,Bins(40),FitGauss(kTRUE)) ;
  RooPlot* frame11 = mcstudy->plotParam(phis,Bins(40)) ;
  RooPlot* frame22 = mcstudy->plotError(phis,Bins(40)) ;
  RooPlot* frame33 = mcstudy->plotPull(phis,Bins(40),FitGauss(kTRUE)) ;

  // Plot distribution of minimized likelihood
  RooPlot* frame4 = mcstudy->plotNLL(Bins(40)) ;

  TH1D * correlations = new TH1D("correlations", "correlations", 100, -1, 1);
  correlations->Sumw2();
  for ( int i = 0; i < nfits; i++ ){
	correlations->Fill(mcstudy->fitResult(i)->correlation("dm","phis"));
  }

  // Access some of the saved fit results from individual toys
  TH2* corrHist000 = mcstudy->fitResult(0)->correlationHist("c000") ;
  TH2* corrHist127 = mcstudy->fitResult(12)->correlationHist("c12") ;
  TH2* corrHist953 = mcstudy->fitResult(9)->correlationHist("c9") ;

  // Draw all plots on a canvas
  gStyle->SetPalette(1) ;
  gStyle->SetOptStat(0) ;
  TCanvas* c = new TCanvas("rf801_mcstudy","rf801_mcstudy",900,900) ;
  c->Divide(3,4) ;
  c->cd(1) ; gPad->SetLeftMargin(0.15) ; frame1->GetYaxis()->SetTitleOffset(1.4) ; frame1->Draw() ;
  c->cd(2) ; gPad->SetLeftMargin(0.15) ; frame2->GetYaxis()->SetTitleOffset(1.4) ; frame2->Draw() ;
  c->cd(3) ; gPad->SetLeftMargin(0.15) ; frame3->GetYaxis()->SetTitleOffset(1.4) ; frame3->Draw() ;
  c->cd(4) ; gPad->SetLeftMargin(0.15) ; frame11->GetYaxis()->SetTitleOffset(1.4) ; frame11->Draw() ;
  c->cd(5) ; gPad->SetLeftMargin(0.15) ; frame22->GetYaxis()->SetTitleOffset(1.4) ; frame22->Draw() ;
  c->cd(6) ; gPad->SetLeftMargin(0.15) ; frame33->GetYaxis()->SetTitleOffset(1.4) ; frame33->Draw() ;
  c->cd(7) ; gPad->SetLeftMargin(0.15) ; frame4->GetYaxis()->SetTitleOffset(1.4) ; frame4->Draw() ;
  c->cd(8) ; correlations->Draw();
  c->cd(10) ; gPad->SetLeftMargin(0.15) ; corrHist000->GetYaxis()->SetTitleOffset(1.4) ; corrHist000->Draw("colz") ; corrHist000->GetZaxis()->SetRangeUser(-0.5, 0.5);
  c->cd(11) ; gPad->SetLeftMargin(0.15) ; corrHist127->GetYaxis()->SetTitleOffset(1.4) ; corrHist127->Draw("colz") ; corrHist127->GetZaxis()->SetRangeUser(-0.5, 0.5);
  c->cd(12) ; gPad->SetLeftMargin(0.15) ; corrHist953->GetYaxis()->SetTitleOffset(1.4) ; corrHist953->Draw("colz") ; corrHist953->GetZaxis()->SetRangeUser(-0.5, 0.5);

  // Make RooMCStudy object available on command line after
  // macro finishes
  gDirectory->Add(mcstudy) ;
  c->SaveAs("mcstudy_biased_gen.pdf");
    */
  }
