#include "RooGlobalFunc.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooConstVar.h"
#include "RooFormulaVar.h"
#include "RooGaussian.h"
#include "RooProdPdf.h"
#include "RooCBShape.h"
#include "RooVoigtian.h"
#include "TCanvas.h"
#include "TAxis.h"
#include "TH1.h"
#include "TFile.h"
#include "TCut.h"
#include "TF1.h"
#include "TROOT.h"
#include "TStyle.h"
#include "TGraphErrors.h"
#include "TGraphAsymmErrors.h"
#include "RooBDecay.h"
#include "RooAddModel.h"
#include "RooGaussModel.h"
#include "RooPlot.h"
#include "RooHist.h"
#include "RooAddPdf.h"
#include <iostream>
#include <fstream>
#include <string>
//using std::cout;
//using std::endl;
//using namespace RooStats;
using namespace RooFit;
using namespace std;

string write_string(int a){
	stringstream ss;
	ss << a;
	return ss.str();
}

string write_string_d(double a){
	stringstream ss;
	ss << a;
	return ss.str();
}

void fit_timeresolution_data_bins(){
  cout << "1" << endl;
  TFile *f = TFile::Open("../data/2011data_psi2s_prescaled_ntupleB_noBVars_selsapp.root");
  TTree *tree = (TTree*)f->Get("DecayTree");

  RooRealVar *mdau1 = new RooRealVar("mdau1", "mdau1",3630.0,3740.0);
  RooRealVar *hlt1_unbiased = new RooRealVar("hlt1_unbiased", "hlt1_unbiased",-10.0,10.0);
  RooRealVar *hlt2_unbiased = new RooRealVar("hlt2_unbiased", "hlt2_unbiased",-10.0,10.0);
  RooRealVar *time = new RooRealVar("time", "time",-1.5,10.0);
  RooRealVar *sigmat = new RooRealVar("sigmat", "sigmat",0.0,0.12);

  RooArgList *fitArgs = new RooArgList(*time, *mdau1, *hlt1_unbiased, *hlt2_unbiased, *sigmat);
  TCut cut1 = "hlt1_unbiased==1&&hlt2_unbiased==1&&sigmat<0.12";
  TCut cut2 = "hlt1_unbiased==1&&hlt2_unbiased==1&&sigmat>=0.022&&sigmat<0.026";
  TCut cut3 = "hlt1_unbiased==1&&hlt2_unbiased==1&&sigmat>=0.026&&sigmat<0.03";
  TCut cut4 = "hlt1_unbiased==1&&hlt2_unbiased==1&&sigmat>=0.030&&sigmat<0.034";
  TCut cut5 = "hlt1_unbiased==1&&hlt2_unbiased==1&&sigmat>=0.034&&sigmat<0.04";
  TCut cut6 = "hlt1_unbiased==1&&hlt2_unbiased==1&&sigmat>=0.04&&sigmat<0.12";
  TCut cut7 = "hlt1_unbiased==1&&hlt2_unbiased==1&&sigmat>=0.05&&sigmat<0.06";
  TCut cut8 = "hlt1_unbiased==1&&hlt2_unbiased==1&&sigmat>=0.06&&sigmat<0.12";
  RooDataSet * data1 = new RooDataSet("data1", "all input data", tree, *fitArgs, cut1);
  RooDataSet * data2 = new RooDataSet("data2", "all input data", tree, *fitArgs, cut2);
  RooDataSet * data3 = new RooDataSet("data3", "all input data", tree, *fitArgs, cut3);
  RooDataSet * data4 = new RooDataSet("data4", "all input data", tree, *fitArgs, cut4);
  RooDataSet * data5 = new RooDataSet("data5", "all input data", tree, *fitArgs, cut5);
  RooDataSet * data6 = new RooDataSet("data6", "all input data", tree, *fitArgs, cut6);
  RooDataSet * data7 = new RooDataSet("data7", "all input data", tree, *fitArgs, cut7);
  RooDataSet * data8 = new RooDataSet("data8", "all input data", tree, *fitArgs, cut8);
  Double_t entries2 = data1->numEntries();
  cout << entries2 << endl;
  entries2 = data2->numEntries();
  cout << entries2 << endl;
  entries2 = data3->numEntries();
  cout << entries2 << endl;
  entries2 = data4->numEntries();
  cout << entries2 << endl;
  entries2 = data5->numEntries();
  cout << entries2 << endl;
  entries2 = data6->numEntries();
  cout << entries2 << endl;
  //entries2 = data7->numEntries();
  //cout << entries2 << endl;
  //entries2 = data8->numEntries();
  //cout << entries2 << endl;
  double x[8] = {0.018, 0.024, 0.028, 0.032, 0.037, 0.0485};//, 0.055, 0.09};
  //double x[8] = {0.011, 0.024, 0.028, 0.032, 0.036, 0.079};//, 0.055, 0.09};
  double s1[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double s2[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double seff[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double seff2[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double mu[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double f1[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double f2[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double fr[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  
  double tau1[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double tau22[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double ftau1[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double ftau2[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};

  double s3[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double mu3[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double f3[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};

  double s1_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double s2_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double seff_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double seff2_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double mu_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double f1_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double f2_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double fr_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double fp_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};

  double tau1_e[6] = {0., 0., 0., 0., 0., 0};//., 0., 0.};
  double tau2_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double ftau1_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double ftau2_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};

  double s3_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double mu3_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double f3_e[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double ex[6] = {0., 0., 0., 0., 0., 0.};//, 0., 0.};
  double exh[6] = {0.004, 0.002, 0.002, 0.002, 0.003, 0.0715};// 0.0025,0.04};
  double exl[6] = {0.018, 0.002, 0.002, 0.002, 0.003, 0.0085};// 0.0025,0.04};
  
  RooRealVar *mean_g1 = new RooRealVar("g1 #mu","mean of g1",0.0, -0.1, 0.1);
  RooRealVar *mean_g2 = new RooRealVar("g2 #mu","mean of g2",0.0, -1.0, 1.0);
  //RooRealVar *sf = new RooRealVar("#sigma 1","width of g1",1.,0.1,10,"");
  RooRealVar *sigma_g1 = new RooRealVar("#sigma 1","width of g1",0.012,0.01,0.1,"");
  RooRealVar *sigma_g2 = new RooRealVar("#sigma 2","width of g2",0.05,0.018,0.3,"");
  RooRealVar *sigma_g3 = new RooRealVar("#sigma 3","width of g3", 0.54,0.2,1.0,"");
  RooRealVar *tau = new RooRealVar("tau", "tau",0.16, 0.05, 0.5);
  RooRealVar *tau2 = new RooRealVar("tau2", "tau2",1.2, 0.5, 2.7);
  RooRealVar *DG = new RooRealVar("DG", "DG",0.0);
  RooRealVar *frac_g1 = new RooRealVar("frac_g1", "core fraction", 0.8,0.06,1.0);
  RooRealVar *frac_g2 = new RooRealVar("frac_g2", "core fractionb", 0.1,0.01,0.4);
  RooRealVar *frac_g3 = new RooRealVar("frac_g3", "core fraction3", 0.04, 0.001,0.9);
  RooRealVar *frac_res = new RooRealVar("frac_res", "core fraction2", 0.7,0.4,1.0);
  RooRealVar *frac_tau1 = new RooRealVar("frac_tau1", "core fraction3", 0.16,0.01,0.41);
  /*
  RooRealVar *sigma_g1 = new RooRealVar("#sigma 1","width of g1",0.01,0.001,0.1,"");
  RooRealVar *sigma_g2 = new RooRealVar("#sigma 2","width of g2",0.02,0.01,0.3,"");
  RooFormulaVar * sigmabar = new RooFormulaVar("sigmabar","-sqrt(@0/(1-@0))*@1+@2", RooArgList(*frac_g1, *sigma_g1, *sigma_g2));
  RooFormulaVar * sigma    = new RooFormulaVar("sigma"," sqrt((1-@0)/@0)*@1+@2", RooArgList(*frac_g1, *sigma_g1, *sigma_g2));
  RooGaussModel *gauss1 = new RooGaussModel("gauss1","gauss",*time, *mean_g1,*sigma);
  RooGaussModel *gauss2 = new RooGaussModel("gauss2","gauss",*time, *mean_g1,*sigmabar);
  */
  //RooGaussModel *gauss1 = new RooGaussModel("gauss1","gauss",*time, *mean_g1,*sf, *sigmat);
  RooGaussModel *gauss1 = new RooGaussModel("gauss1","gauss",*time, *mean_g1,*sigma_g1);
  RooGaussModel *gauss2 = new RooGaussModel("gauss2","gauss",*time, *mean_g1,*sigma_g2);
  RooGaussian *gauss3 = new RooGaussian("gauss3","gauss",*time, RooConst(0), *sigma_g3);
 
  //RooAddModel *res = new RooAddModel("res","time core+tail gauss", RooArgList(*gauss1,*gauss2, *gauss3),RooArgList(*frac_g1, *frac_g2));
  //RooAddModel *res = new RooAddModel("res","time core+tail gauss", RooArgList(*gauss1,*gauss2),RooArgList(*frac_g1));
  RooGaussModel *res = gauss1;

  RooBDecay *bdc  = new RooBDecay("bdc" ,"bdc" ,*time,*tau ,*DG,RooConst(1),RooConst(0), RooConst(0), RooConst(0),RooConst(0), *res, RooBDecay::SingleSided);
  RooBDecay *bdc2 = new RooBDecay("bdc2","bdc2",*time,*tau2,*DG,RooConst(1),RooConst(0), RooConst(0), RooConst(0),RooConst(0), *res, RooBDecay::SingleSided);

  //frac_g1->setVal(1.0);
  //frac_g1->setConstant();
  //sigma_g2->setConstant();
  RooAddPdf *total = new RooAddPdf("total", "total", RooArgList(*res, *bdc, *bdc2, *gauss3),RooArgList(*frac_res, *frac_tau1, *frac_g3)); 
  //RooAddPdf *total = new RooAddPdf("total", "total", RooArgList(*res, *bdc, *bdc2, *gauss3),RooArgList(*frac_res, *frac_tau1, *frac_core4)); 
  //RooAddPdf *total = new RooAddPdf("total", "total", RooArgList(*res, *bdc, *bdc2),RooArgList(*frac_res, *frac_tau1)); 

  gROOT->ProcessLine(".x $HOME/lhcbStyle.C");
  TCanvas* fit_time = new TCanvas("fit_time","fit_time", 1200, 600);
  fit_time->Divide(3,2);
  fit_time->cd(1);
  // signal bkg pdfs
  RooFitResult *fitresult = total->fitTo(*data1,Save(kTRUE), Minos(kFALSE), NumCPU(6), ConditionalObservables(*sigmat));
  exit(-1);
  double tmp1 = sigma_g1->getVal();
  double tmp2 = sigma_g2->getVal();
  //if ( tmp1 < tmp2 ){
  	s1[0]=sigma_g1->getVal();
  	s2[0]=sigma_g2->getVal();
  	f1[0]=frac_g1->getVal();
  /*}
  else {
  	s1[0]=sigma_g2->getVal();
  	s2[0]=sigma_g1->getVal();
  	f1[0]=1.-frac_g1->getVal();
  }*/
  s3[0]=sigma_g3->getVal();
  mu[0]=mean_g1->getVal();
  mu3[0]=mean_g2->getVal();
  //f2[0]=frac_g2->getVal();
  f3[0]=frac_g3->getVal();
  fr[0]=frac_res->getVal();

  tau1[0]=tau->getVal();
  tau22[0]=tau2->getVal();
  ftau1[0]=frac_tau1->getVal();

  s1_e[0]=sigma_g1->getError();
  s2_e[0]=sigma_g2->getError();
  mu_e[0]=mean_g1->getError();
  f1_e[0]=frac_g1->getError();
  //f2_e[0]=frac_g2->getError();
  f3_e[0]=frac_g3->getError();
  fr_e[0]=frac_res->getError();
  tau1_e[0]=tau->getError();
  tau2_e[0]=tau2->getError();
  ftau1_e[0]=frac_tau1->getError();
  s3_e[0]=sigma_g3->getError();
  mu3_e[0]=mean_g2->getError();

  RooPlot *timeplot = time->frame(Range(-1.5,5.0),Title("2012 prompt: sigmat<0.022"),Bins(60));
  gPad->SetLogy();
  data1->plotOn(timeplot, MarkerSize(0.01));
  total->plotOn(timeplot);
  total->plotOn(timeplot, Components("gauss3"), LineColor(kRed));
  RooHist* hpull = timeplot->pullHist();
  hpull->SetMarkerSize(0.01);
  timeplot->Draw();
  RooPlot* timepull = time->frame(Range(-1.5, 5.0), Title("Pull Distribution"), Bins(60)) ;
  timepull->addPlotable(hpull,"P") ;

  fit_time->cd(4);
  timepull->Draw();
  fit_time->Update();
  //exit(-1);

  fit_time->cd(2);
  frac_g1->setVal(0.95);
  ;
  //sigma_g1->setVal(0.02);
  //sigma_g2->setVal(0.05);
  RooFitResult *fitresult2 = total->fitTo(*data2,Save(kTRUE), Minos(kFALSE), NumCPU(6));
  tmp1 = sigma_g1->getVal();
  tmp2 = sigma_g2->getVal();
  //if ( tmp1 < tmp2 ){
  	s1[1]=sigma_g1->getVal();
  	s2[1]=sigma_g2->getVal();
  	f1[1]=frac_g1->getVal();
  //}
  //else {
  //	s1[1]=sigma_g2->getVal();
  //	s2[1]=sigma_g1->getVal();
  // 	f1[1]=1.-frac_g1->getVal();
  //}
  s3[1]=sigma_g3->getVal();
  mu[1]=mean_g1->getVal();
  mu3[1]=mean_g2->getVal();
  //f2[1]=frac_g2->getVal();
  f3[1]=frac_g3->getVal();
  fr[1]=frac_res->getVal();

  tau1[1]=tau->getVal();
  tau22[1]=tau2->getVal();
  ftau1[1]=frac_tau1->getVal();

  s1_e[1]=sigma_g1->getError();
  s2_e[1]=sigma_g2->getError();
  mu_e[1]=mean_g1->getError();
  f1_e[1]=frac_g1->getError();
  //f2_e[1]=frac_g2->getError();
  f3_e[1]=frac_g3->getError();
  fp_e[1]=frac_res->getError();

  tau1_e[1]=tau->getError();
  tau2_e[1]=tau2->getError();
  ftau1_e[1]=frac_tau1->getError();
  s3_e[1]=sigma_g3->getError();
  mu3_e[1]=mean_g2->getError();

  RooPlot *timeplot2 = time->frame(Range(-1.5,5.0),Title("2012 prompt: sigmat[0.022,0.026)"),Bins(60));
  gPad->SetLogy();
  data2->plotOn(timeplot2, MarkerSize(0.01));
  total->plotOn(timeplot2);
  total->plotOn(timeplot2, Components("gauss3"),LineColor(kRed));
  RooHist* hpull2 = timeplot2->pullHist();
  hpull2->SetMarkerSize(0.01);
  timeplot2->Draw();
  RooPlot* timepull2 = time->frame(Range(-1.5, 5.0), Title("Pull Distribution"), Bins(60)) ;
  timepull2->addPlotable(hpull2,"P") ;
  fit_time->cd(5);
  timepull2->Draw();
  fit_time->Update();

  fit_time->cd(3);
  // signal bkg pdfs
  frac_g1->setVal(0.9);
  ;
  //sigma_g1->setVal(0.02);
  //sigma_g2->setVal(0.05);
  RooFitResult *fitresult3 = total->fitTo(*data3,Save(kTRUE), Minos(kFALSE), NumCPU(6));
  tmp1 = sigma_g1->getVal();
  tmp2 = sigma_g2->getVal();
  //if ( tmp1 < tmp2 ){
  	s1[2]=sigma_g1->getVal();
  	s2[2]=sigma_g2->getVal();
  	f1[2]=frac_g1->getVal();
  //}
  //else {
  //	s1[2]=sigma_g2->getVal();
  // 	s2[2]=sigma_g1->getVal();
  //	f1[2]=1.-frac_g1->getVal();
  //}
  s3[2]=sigma_g3->getVal();
  mu[2]=mean_g1->getVal();
  //f2[2]=frac_g2->getVal();
  f3[2]=frac_g3->getVal();
  fr[2]=frac_res->getVal();
  mu3[2]=mean_g2->getVal();

  tau1[2]=tau->getVal();
  tau22[2]=tau2->getVal();
  ftau1[2]=frac_tau1->getVal();

  s1_e[2]=sigma_g1->getError();
  s2_e[2]=sigma_g2->getError();
  mu_e[2]=mean_g1->getError();
  f1_e[2]=frac_g1->getError();
  //f2_e[2]=frac_g2->getError();
  f3_e[2]=frac_g3->getError();
  fr_e[2]=frac_res->getError();

  tau1_e[2]=tau->getError();
  tau2_e[2]=tau2->getError();
  ftau1_e[2]=frac_tau1->getError();
  s3_e[2]=sigma_g3->getError();
  mu3_e[2]=mean_g2->getError();

  RooPlot *timeplot3 = time->frame(Range(-1.5,5.0),Title("2012 prompt: sigmat[0.026,0.030)"),Bins(60));
  gPad->SetLogy();
  data3->plotOn(timeplot3, MarkerSize(0.01));
  total->plotOn(timeplot3);
  total->plotOn(timeplot3, Components("gauss3"),LineColor(kRed));
  RooHist* hpull3 = timeplot3->pullHist();
  hpull3->SetMarkerSize(0.01);
  timeplot3->Draw();
  RooPlot* timepull3 = time->frame(Range(-1.5, 5.0), Title("Pull Distribution"), Bins(60)) ;
  timepull3->addPlotable(hpull3,"P") ;
  fit_time->cd(6);
  timepull3->Draw();
  fit_time->Update();
  fit_time->SaveAs("res_calib_2012_dg_histos.pdf");

  TCanvas* fit_time2 = new TCanvas("fit_time2","fit_time2", 1200, 600);
  fit_time2->Divide(3,2);
  fit_time2->cd(1);
  // signal bkg pdfs
  frac_g1->setVal(0.9);
  ;
  //sigma_g1->setVal(0.02);
  //sigma_g2->setVal(0.05);
  RooFitResult *fitresult4 = total->fitTo(*data4,Save(kTRUE), Minos(kFALSE), NumCPU(6));
  tmp1 = sigma_g1->getVal();
  tmp2 = sigma_g2->getVal();
  //if ( tmp1 < tmp2 ){
  	s1[3]=sigma_g1->getVal();
  	s2[3]=sigma_g2->getVal();
  	f1[3]=frac_g1->getVal();
  //}
  //else {
  //	s1[3]=sigma_g2->getVal();
 // 	s2[3]=sigma_g1->getVal();
 // 	f1[3]=1.-frac_g1->getVal();
  //}
  mu[3]=mean_g1->getVal();
  //f2[3]=frac_g2->getVal();
  f3[3]=frac_g3->getVal();
  fr[3]=frac_res->getVal();
  s3[3]=sigma_g3->getVal();
  mu3[3]=mean_g2->getVal();

  tau1[3]=tau->getVal();
  tau22[3]=tau2->getVal();
  ftau1[3]=frac_tau1->getVal();

  s1_e[3]=sigma_g1->getError();
  s2_e[3]=sigma_g2->getError();
  mu_e[3]=mean_g1->getError();
  f1_e[3]=frac_g1->getError();
  //f2_e[3]=frac_g2->getError();
  f3_e[3]=frac_g3->getError();
  fr_e[3]=frac_res->getError();

  tau1_e[3]=tau->getError();
  tau2_e[3]=tau2->getError();
  ftau1_e[3]=frac_tau1->getError();
  s3_e[3]=sigma_g3->getError();
  mu3_e[3]=mean_g2->getError();
  RooPlot *timeplot4 = time->frame(Range(-1.5,5.0),Title("2012 prompt: sigmat[0.030,0.034)"),Bins(60));
  gPad->SetLogy();
  data4->plotOn(timeplot4, MarkerSize(0.01));
  total->plotOn(timeplot4);
  total->plotOn(timeplot4, Components("gauss3"),LineColor(kRed));
  RooHist* hpull4 = timeplot4->pullHist();
  hpull4->SetMarkerSize(0.01);
  timeplot4->Draw();
  RooPlot* timepull4 = time->frame(Range(-1.5, 5.0), Title("Pull Distribution"), Bins(60)) ;
  timepull4->addPlotable(hpull4,"P") ;
  fit_time2->cd(4);
  timepull4->Draw();
  fit_time2->Update();
  
  fit_time2->cd(2);
  // signal bkg pdfs
  frac_g1->setVal(0.9);
  ;
  //sigma_g1->setVal(0.02);
  //sigma_g2->setVal(0.05);
  RooFitResult *fitresult5 = total->fitTo(*data5,Save(kTRUE), Minos(kFALSE), NumCPU(6));
tmp1 = sigma_g1->getVal();
  tmp2 = sigma_g2->getVal();
  //if ( tmp1 < tmp2 ){
  	s1[4]=sigma_g1->getVal();
  	s2[4]=sigma_g2->getVal();
  	f1[4]=frac_g1->getVal();
  //}
  //else {
  //	s1[4]=sigma_g2->getVal();
  //	s2[4]=sigma_g1->getVal();
  //	f1[4]=1.-frac_g1->getVal();
  //}
  mu[4]=mean_g1->getVal();
  //f2[4]=frac_g2->getVal();
  f3[4]=frac_g3->getVal();
  fr[4]=frac_res->getVal();
  s3[4]=sigma_g3->getVal();
  mu3[4]=mean_g2->getVal();

  tau1[4]=tau->getVal();
  tau22[4]=tau2->getVal();
  ftau1[4]=frac_tau1->getVal();

  s1_e[4]=sigma_g1->getError();
  s2_e[4]=sigma_g2->getError();
  mu_e[4]=mean_g1->getError();
  f1_e[4]=frac_g1->getError();
  //f2_e[4]=frac_g2->getError();
  f3_e[4]=frac_g3->getError();
  fr_e[4]=frac_res->getError();

  tau1_e[4]=tau->getError();
  tau2_e[4]=tau2->getError();
  ftau1_e[4]=frac_tau1->getError();
  s3_e[4]=sigma_g3->getError();
  mu3_e[4]=mean_g2->getError();
  RooPlot *timeplot5 = time->frame(Range(-1.5,5.0),Title("2012 prompt: sigmat[0.034,0.04)"),Bins(60));
  gPad->SetLogy();
  data5->plotOn(timeplot5, MarkerSize(0.01));
  total->plotOn(timeplot5);
  total->plotOn(timeplot5, Components("gauss3"),LineColor(kRed));
  RooHist* hpull5 = timeplot5->pullHist();
  hpull5->SetMarkerSize(0.01);
  timeplot5->Draw();
  RooPlot* timepull5 = time->frame(Range(-1.5, 5.0), Title("Pull Distribution"), Bins(60)) ;
  timepull5->addPlotable(hpull5,"P") ;
  fit_time2->cd(5);
  timepull5->Draw();
  fit_time2->Update();

  fit_time2->cd(3);
  // signal bkg pdfs
  frac_g1->setVal(0.95);
  ;
  //sigma_g1->setVal(0.02);
  //sigma_g2->setVal(0.05);
  RooFitResult *fitresult6 = total->fitTo(*data6,Save(kTRUE), Minos(kFALSE), NumCPU(6));
  tmp1 = sigma_g1->getVal();
  tmp2 = sigma_g2->getVal();
  //if ( tmp1 < tmp2 ){
  	s1[5]=sigma_g1->getVal();
  	s2[5]=sigma_g2->getVal();
  	f1[5]=frac_g1->getVal();
  //}
  //else {
  //	s1[5]=sigma_g2->getVal();
  //	s2[5]=sigma_g1->getVal();
  //	f1[5]=1.-frac_g1->getVal();
  //}
  mu[5]=mean_g1->getVal();
  f3[5]=frac_g3->getVal();
  //f2[5]=frac_g2->getVal();
  fr[5]=frac_res->getVal();

  tau1[5]=tau->getVal();
  tau22[5]=tau2->getVal();
  ftau1[5]=frac_tau1->getVal();
  s3[5]=sigma_g3->getVal();
  mu3[5]=mean_g2->getVal();

  s1_e[5]=sigma_g1->getError();
  s2_e[5]=sigma_g2->getError();
  mu_e[5]=mean_g1->getError();
  f1_e[5]=frac_g1->getError();
  //f2_e[5]=frac_g2->getError();
  f3_e[5]=frac_g3->getError();
  fr_e[5]=frac_res->getError();

  tau1_e[5]=tau->getError();
  tau2_e[5]=tau2->getError();
  ftau1_e[5]=frac_tau1->getError();
  s3_e[5]=sigma_g3->getError();
  mu3_e[5]=mean_g2->getError();

  RooPlot *timeplot6 = time->frame(Range(-1.5,5.0),Title("2012 prompt: sigmat[0.04,0.12)"),Bins(60));
  gPad->SetLogy();
  data6->plotOn(timeplot6, MarkerSize(0.01));
  total->plotOn(timeplot6);
  total->plotOn(timeplot6, Components("gauss3"),LineColor(kRed));
  RooHist* hpull6 = timeplot6->pullHist();
  hpull6->SetMarkerSize(0.01);
  timeplot6->Draw();

  RooPlot* timepull6 = time->frame(Range(-1.5, 5.0), Title("Pull Distribution"), Bins(60)) ;
  timepull6->addPlotable(hpull6,"P") ;

  fit_time2->cd(6);
  timepull6->Draw();
  fit_time2->Update();
  fit_time2->SaveAs("res_calib_2012_dg_histos2.pdf");
  gStyle->SetOptFit(1);	

  TF1 * line = new TF1("line","pol1", 0, 1);
  line->SetLineColor(kRed);
  TCanvas * c = new TCanvas("c","c",1200, 600);
  c->Divide(3,2);
  c->cd(1);
  TGraphAsymmErrors * graph = new TGraphAsymmErrors(6, x, s1, ex, ex, s1_e, s1_e);
  graph->Draw("AP");
  graph->Fit("line");
  graph->GetXaxis()->SetTitle("#sigma_{t} [ps]");
  graph->GetYaxis()->SetTitle("width g1 [ps]");
  gPad->SetLeftMargin(0.2);
  graph->GetYaxis()->SetTitleOffset(1.15);
  graph->GetXaxis()->SetLimits(0., 0.06);
  graph->SetMinimum(0.);
  graph->SetMaximum(0.1);

  c->cd(2);
  TF1 * line2 = new TF1("line2","pol1", 0, 1);
  line2->SetLineColor(kRed);
  TGraphAsymmErrors * graph2 = new TGraphAsymmErrors(6, x, s2, ex, ex, s2_e, s2_e);
  graph2->Draw("AP");
  graph2->Fit("line2");
  graph2->GetXaxis()->SetTitle("#sigma_{t} [ps]");
  graph2->GetYaxis()->SetTitle("width g2 [ps]");
  gPad->SetLeftMargin(0.2);
  graph2->GetYaxis()->SetTitleOffset(1.15);
  graph2->GetXaxis()->SetLimits(0., 0.06);
  graph2->SetMinimum(0.);
  graph2->SetMaximum(0.5);
  /*
  for(int i=0; i<6; i++){
	f3[i] = 1.0-f1[i]-f2[i];
	f3_e[i] = sqrt(f1_e[i]**2 + f2_e[i]**2 );
  } 
  */ 
  c->cd(3);
  TF1 * line2b = new TF1("line2b","pol1", 0, 1);
  //line2->SetLineColor(kRed);
  TGraphAsymmErrors * graph2b = new TGraphAsymmErrors(6, x, s3, ex, ex, s3_e, s3_e);
  graph2b->Draw("AP");
  graph2b->Fit("line2b");
  graph2b->GetXaxis()->SetTitle("#sigma_{t} [ps]");
  graph2b->GetYaxis()->SetTitle("width g3 [ps]");
  gPad->SetLeftMargin(0.2);
  graph2b->GetYaxis()->SetTitleOffset(1.15);
  //gPad->SetLeftMargin(0.2);
  //graph2->GetYaxis()->SetTitleOffset(1.15);
  graph2b->GetXaxis()->SetLimits(0., 0.06);
  graph2b->SetMinimum(0.);
  graph2b->SetMaximum(0.8);
  
  c->cd(4);	
  TF1 * quad2 = new TF1("quad2","pol2", 0, 1);
  quad2->SetLineColor(kBlue);
  //quad->FixParameter(1,0);
  TGraphAsymmErrors * graph3 = new TGraphAsymmErrors(6, x, f1, ex, ex, f1_e, f1_e);
  graph3->Draw("AP");
  graph3->Fit("quad2");
  graph3->GetXaxis()->SetTitle("#sigma_{t} [ps]");
  graph3->GetYaxis()->SetTitle("fraction 1 [ps]");
  gPad->SetLeftMargin(0.2);
  graph3->GetYaxis()->SetTitleOffset(1.15);
  graph3->SetMaximum(1.1);
  for(int i=0; i<6; i++){
	f2[i] = 1.0-f1[i];
	//f2_e[i] = sqrt(f1_e[i]**2);
  } 

  c->cd(5);	
  TF1 * quad2b = new TF1("quad2b","pol2", 0, 1);
  quad2b->SetLineColor(kBlue);
  //quad->FixParameter(1,0);
  TGraphAsymmErrors * graph3b = new TGraphAsymmErrors(6, x, f2, ex, ex, f2_e, f2_e);
  graph3b->Draw("AP");
  graph3b->Fit("quad2b");
  graph3b->GetXaxis()->SetTitle("#sigma_{t} [ps]");
  graph3b->GetYaxis()->SetTitle("fraction 2 [ps]");
  gPad->SetLeftMargin(0.2);
  graph3b->GetYaxis()->SetTitleOffset(1.15);
  graph3b->SetMaximum(1.1);

  c->cd(6);	
  TF1 * quad2c= new TF1("quad2c","pol2", 0, 1);
  quad2c->SetLineColor(kBlue);
  //quad->FixParameter(1,0);
  TGraphAsymmErrors * graph3c = new TGraphAsymmErrors(6, x, f3, ex, ex, f3_e, f3_e);
  graph3c->Draw("AP");
  graph3c->Fit("quad2c");
  graph3c->GetXaxis()->SetTitle("#sigma_{t} [ps]");
  graph3c->GetYaxis()->SetTitle("fraction 3 [ps]");
  gPad->SetLeftMargin(0.2);
  graph3c->GetYaxis()->SetTitleOffset(1.15);
  graph3c->SetMaximum(1.1);
  c->SaveAs("res_calib_2012_dg_respars.pdf");
  
  gStyle->SetOptFit(1);	
  TF1 * linea = new TF1("linea","pol1", 0, 1);
  linea->SetLineColor(kRed);
  TCanvas * c2 = new TCanvas("c2","c2",1200, 600);
  c2->Divide(2,2);
  c2->cd(1);
  TGraphAsymmErrors * graph4 = new TGraphAsymmErrors(6, x, tau1, ex, ex, tau1_e, tau1_e);
  graph4->Draw("AP");
  graph4->Fit("linea");
  graph4->GetXaxis()->SetTitle("#sigma_{t} [ps]");
  graph4->GetYaxis()->SetTitle("tau1 [ps]");
  gPad->SetLeftMargin(0.2);
  graph4->GetYaxis()->SetTitleOffset(1.15);
  graph4->SetMinimum(0.);
  graph4->SetMaximum(0.4);

  c2->cd(2);	
  TF1 * quada = new TF1("quada","pol1", 0, 1);
  quada->SetLineColor(kRed);
  //quad->FixParameter(1,0);
  TGraphAsymmErrors * graph5 = new TGraphAsymmErrors(6, x, tau22, ex, ex, tau2_e, tau2_e);
  graph5->Draw("AP");
  graph5->Fit("quada");
  graph5->GetXaxis()->SetTitle("#sigma_{t} [ps]");
  graph5->GetYaxis()->SetTitle("tau2 [ps]");
  gPad->SetLeftMargin(0.2);
  graph5->GetYaxis()->SetTitleOffset(1.15);
  gPad->SetLeftMargin(0.2);
  graph5->SetMinimum(0.);

  c2->cd(3);	
  TF1 * quadb = new TF1("quadb","pol2", 0, 1);
  quadb->SetLineColor(kBlue);
  //quad->FixParameter(1,0);
  TGraphAsymmErrors * graph6 = new TGraphAsymmErrors(6, x, ftau1, ex, ex, ftau1_e, ftau1_e);
  graph6->Draw("AP");
  graph6->Fit("quadb");
  graph6->GetXaxis()->SetTitle("#sigma_{t} [ps]");
  graph6->GetYaxis()->SetTitle("ftau1 [ps]");
  gPad->SetLeftMargin(0.2);
  graph6->GetYaxis()->SetTitleOffset(1.15);
  //gPad->SetLeftMargin(0.2);
  graph6->GetYaxis()->SetTitleOffset(1.15);
  for(int i=0; i<6; i++){
	ftau2[i] = 1.0-ftau2[i]-fr[i]-f3[i];
	//ftau2_e[i] = sqrt(ftau1_e[i]**2 + fr_e[i]**2+ f3_e[i]**2);
  } 

  c2->cd(4);	
  TF1 * quadc = new TF1("quadc","pol2", 0, 1);
  quadc->SetLineColor(kBlue);
  //quad->FixParameter(1,0);
  TGraphAsymmErrors * graph6b = new TGraphAsymmErrors(6, x, ftau2, ex, ex, ftau2_e, ftau2_e);
  graph6b->Draw("AP");
  graph6b->Fit("quadc");
  graph6b->GetXaxis()->SetTitle("#sigma_{t} [ps]");
  graph6b->GetYaxis()->SetTitle("ftau2 [ps]");
  gPad->SetLeftMargin(0.2);
  graph6b->GetYaxis()->SetTitleOffset(1.15);
  //gPad->SetLeftMargin(0.2);
  graph6b->GetYaxis()->SetTitleOffset(1.15);
  c2->SaveAs("res_calib_2012_dg_lifetimepars.pdf");
  /*
  gStyle->SetOptFit(1);	
  TF1 * line3 = new TF1("line3","pol1", 0, 0.12);
  line3->SetLineColor(kRed);
  TCanvas * c4 = new TCanvas("c4","c4",1200, 600);
  for(i=0; i<6; i++){
	seff[i] = sqrt(f1[i]*s1[i]*s1[i] + f2[i]*s2[i]*s2[i] + (1.0-f1[i]-f2[i])*s3[i]*s3[i]);
	double t1 = f1[i]*s1[i]*s1[i];
	double t2 = (f2[i])*s2[i]*s2[i];
	double t3 = (1.0-f1[i]-f2[i])*s2[i]*s2[i];
	
	double e1=t1*sqrt(2.0*(s1_e[i]/s1[i])*(s1_e[i]/s1[i]) + (f1_e[i]/f1[i])*(f1_e[i]/f1[i]));
	double e2=t2*sqrt(2.0*(s2_e[i]/s2[i])*(s2_e[i]/s2[i]) + (f2_e[i]/f2[i])*(f2_e[i]/f2[i]));
	double e3=t3*sqrt(2.0*(s3_e[i]/s3[i])*(s3_e[i]/s3[i]) + (f3_e[i]/f3[i])*(f3_e[i]/f3[i]));
	double e4 = sqrt(e1*e1+e2*e2+e3*e3);

	seff_e[i]=0.5*e4/seff[i];		
	cout <<  s1[i] << " " << s2[i] << " " <<  f1[i] << " " << seff[i] << " " << s1_e[i] << " " << s2_e[i] << " " << f1_e[i] << " " << seff_e[i] << endl;
  }  
  cout << " fit final" << endl;
  TGraphAsymmErrors * graph9 = new TGraphAsymmErrors(6, x, seff, ex, ex, seff_e, seff_e);
  graph9->Draw("AP");
  graph9->Fit("line3", "EFM");
  graph9->GetXaxis()->SetTitle("#sigma_{t} [ps]");
  graph9->GetYaxis()->SetTitle("eff width [ps]");
  gPad->SetLeftMargin(0.2);
  graph9->GetYaxis()->SetTitleOffset(1.15);
  //gPad->SetLeftMargin(0.2);
  graph9->GetYaxis()->SetTitleOffset(1.15);
  graph9->SetMinimum(0.);
  graph9->SetMaximum(0.3);
  c4->SaveAs("res_calib_2012_effective.pdf");
  */
  gStyle->SetOptFit(1);	
  TF1 * line4 = new TF1("line45","pol1", 0, 1);
  line4->SetLineColor(kRed);
  TCanvas * c5 = new TCanvas("c5","c5",1200, 600);
  for(int i=0; i<6; i++){
	seff2[i] = sqrt(f1[i]*s1[i]*s1[i] + (1-f1[i])*s2[i]*s2[i]);
	double t1 = f1[i]    *s1[i]*s1[i];
	double t2 = (1-f1[i])*s2[i]*s2[i];
	
	double ds_ds1 = s1[i]*f1[i]/sqrt(s1[i]*s1[i]*f1[i] + s2[i]*s2[i]*(-f1[i] + 1));
	double ds_ds2 = s2[i]*(-f1[i] + 1)/sqrt(s1[i]*s1[i]*f1[i] + s2[i]*s2[i]*(-f1[i] + 1));
	double ds_df1 = (s1[i]*s1[i]/2 - s2[i]*s2[i]/2)/sqrt(s1[i]*s1[i]*f1[i] + s2[i]*s2[i]*(-f1[i] + 1));

	double e4 = sqrt( ds_ds1*ds_ds1*s1_e[i]*s1_e[i] + ds_ds2*ds_ds2*s2_e[i]*s2_e[i] + ds_df1*ds_df1*f1_e[i]*f1_e[i] );

	//double e1=t1*sqrt(2.0*(s1_e[i]/s1[i])*(s1_e[i]/s1[i]) + (f1_e[i]/f1[i])*(f1_e[i]/f1[i]));
	//double e2=t2*sqrt(2.0*(s2_e[i]/s2[i])*(s2_e[i]/s2[i]) + (f2_e[i]/f2[i])*(f2_e[i]/f2[i]));
	//double e4 = sqrt(e1*e1+e2*e2);
	if(f1[i]==0){
		seff2_e[i]=f2_e[i];
		cout << "f1 = 0 " << endl;
	}
	else if(f2[i]==0){
		seff2_e[i]=f1_e[i];
		cout << "f2 = 0 " << endl;
	}
	else{
		//seff2_e[i]=0.5*e4/seff2[i];		
		seff2_e[i]=e4;		
	}
  } 
 
  TGraphErrors * graph10 = new TGraphErrors(6, x, seff2, ex, seff2_e);
  graph10->Draw("AP");
  graph10->Fit("line45");
  graph10->GetXaxis()->SetTitle("#sigma_{t} [ps]");
  graph10->GetYaxis()->SetTitle("eff width of two gaussians [ps]");
  gPad->SetLeftMargin(0.2);
  graph10->GetYaxis()->SetTitleOffset(1.15);
  graph10->GetXaxis()->SetLimits(0., 0.12);
  graph10->SetMinimum(0.);
  c5->SaveAs("res_calib_2012_dg_effective2.pdf");

  std::ofstream myFile;
  myFile.open ("fit_output.txt");
  std::string output;
  for(int i=0; i<6; i++){
	output =  "Fit "+write_string(i)+"\n";
	myFile << output;
	output =  "sigma 1 "+write_string_d(s1[i])+" "+write_string_d(s1_e[i])+"\n";
	myFile << output;
	output =  "sigma 2 "+write_string_d(s2[i])+" "+write_string_d(s2_e[i])+"\n";
	myFile << output;
	output =  "sigma 3 "+write_string_d(s3[i])+" "+write_string_d(s3_e[i])+"\n";
	myFile << output;
	output =  "mu 1+2 "+write_string_d(mu[i])+" "+write_string_d(mu_e[i])+"\n";
	myFile << output;
	output =  "sigma eff 3 "+write_string_d(seff[i])+" "+write_string_d(seff_e[i])+"\n";
	myFile << output;
	output =  "sigma eff 2 "+write_string_d(seff2[i])+" "+write_string_d(seff2_e[i])+"\n";
	myFile << output;
	output =  "mu 3 "+write_string_d(mu3[i])+" "+write_string_d(mu3_e[i])+"\n";
	myFile << output;
	output =  "fraction g1 "+write_string_d(f1[i])+" "+write_string_d(f1_e[i])+"\n";
	myFile << output;
	output =  "fraction g2 "+write_string_d(f2[i])+" "+write_string_d(f2_e[i])+"\n";
	myFile << output;
	output =  "fraction g2 "+write_string_d(f3[i])+" "+write_string_d(f3_e[i])+"\n";
	myFile << output;
	output =  "tau1  "+write_string_d(tau1[i])+" "+write_string_d(tau1_e[i])+"\n";
	myFile << output;
	output =  "tau2  "+write_string_d(tau22[i])+" "+write_string_d(tau2_e[i])+"\n";
	myFile << output;
	output =  "fraction tau1  "+write_string_d(ftau1[i])+" "+write_string_d(ftau1_e[i])+"\n";
	myFile << output;
	output =  "fraction tau2  "+write_string_d(ftau2[i])+" "+write_string_d(ftau2_e[i])+"\n";
	myFile << output;
	myFile << "\n";
  }
  myFile.close();

}

int main()
{
	fit_timeresolution_data_bins();
	return 0;
}

