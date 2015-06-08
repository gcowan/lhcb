#include "RooGlobalFunc.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooConstVar.h"
#include "RooGaussian.h"
#include "RooProdPdf.h"
#include "RooCBShape.h"
#include "RooVoigtian.h"
#include "RooHistPdf.h"
#include "RooProdPdf.h"
#include "RooAddPdf.h"
#include "RooAddModel.h"
#include "TCanvas.h"
#include "TROOT.h"
#include "TAxis.h"
#include "TH1.h"
#include "TFile.h"
#include "TCut.h"
#include "RooBDecay.h"
#include "RooGaussModel.h"
#include "/afs/cern.ch/user/g/gcowan/lhcb/lhcb/b2cc/analysis/Bs2psi2Sphi/resolution/src/RooGaussModelWithOffset.h"
#include "RooPlot.h"
#include <iostream>
#include <fstream>
#include <string>
#include "TMatrixDSym.h"
#include <vector>

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
double error_calc(vector<double> diff, TMatrixDSym cov, int n){
	double error = 0.;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			error+=cov(i,j)*diff[i]*diff[j];
			cout << " error " << error << endl;
		}
	}
	return sqrt(error);
}


vector<double> return_diffs(double f, double s1, double s2){
	vector<double> diffs(3);
	double c_diff = 0.5/pow((f*s1*s1+(1.-f)*s2*s2),0.5);
	diffs[0] = 1.0*(s1*s1-s2*s2)*c_diff;
	diffs[1] = 2.0*f*s1*c_diff;
	diffs[2] = 2.0*(1.-f)*s2*c_diff;
	return diffs;
}

void plot_resolution_sim_2g(){
	TFile *file = TFile::Open("/afs/cern.ch/user/d/dferguso/public/output_ntupleB_presels_data_2012_prescale_sweightedbkg.root");
	TTree *tree = (TTree*)file->Get("DecayTree");

	RooRealVar *mdau1 = new RooRealVar("mdau1", "mdau1",3630.0,3740.0);
	RooRealVar *hlt2_unbiased = new RooRealVar("hlt2_unbiased", "hlt2_unbiased",-10.0,10.0);
	RooRealVar *time = new RooRealVar("time", "t",-1.5,8.0, "ps");
	RooRealVar *sigmat = new RooRealVar("sigmat", "sigmat",0.005,0.12);
	RooRealVar *sweight = new RooRealVar("sweight_bkg", "sweight_bkg", -10000.0, 100000.0);
	RooArgList *fitArgs = new RooArgList(*time, *mdau1, *hlt2_unbiased, *sigmat, *sweight);
	TCut cut1 = "(hlt2_unbiased==1)";

	time->setRange("res",-0.4, 0.4);
	time->setRange("long",-1.0, 4.0);

	//RooDataSet * data1 = new RooDataSet("data1", "all input data", tree, *fitArgs, cut1, "sweight_bkg");
	RooDataSet * data1 = new RooDataSet("data1", "all input data", tree, *fitArgs, cut1);

	// number of entries in each bin
	Double_t entries2 = data1->numEntries();
	cout << entries2 << endl;

	RooRealVar *mean_g1 = new RooRealVar("g1 #mu","mean of g1",0.00,-0.1, 0.1);
	RooRealVar *mean_g2 = new RooRealVar("g2 #mu","mean of g2",0.00,-0.1, 0.1);
	RooRealVar *sf1 = new RooRealVar("sf1", "sf1", 1.5, 0.1, 2.);
	RooRealVar *sf2 = new RooRealVar("sf2", "sf2", 5.0, 2.0, 10.);
	RooRealVar *cf1 = new RooRealVar("cf1", "cf1", 0.010, -0.1, 0.1);
	RooRealVar *cf2 = new RooRealVar("cf2", "cf2", 0.015, -0.1, 0.1);
	RooRealVar *frac_g12 = new RooRealVar("frac_g12", "core fraction", 0.15, 0.01, 0.4);

	RooRealVar *sigma_wide = new RooRealVar("#sigma wide","width of gwide",0.15,0.01,1.5);
	RooRealVar *tau  = new RooRealVar("tau" , "tau" ,0.15, 0.1, 0.3);
	RooRealVar *tau2 = new RooRealVar("tau2", "tau2",1.30, 0.5, 5.0);
	RooRealVar *DG = new RooRealVar("DG", "DG",0.0);

	RooGaussModelWithOffset *gauss11 = new RooGaussModelWithOffset("gauss11","gauss",*time, *mean_g1, *sigmat, RooConst(1), *sf1, *cf1);
	RooGaussModelWithOffset *gauss12 = new RooGaussModelWithOffset("gauss12","gauss",*time, *mean_g1, *sigmat, RooConst(1), *sf2, *cf2);
	//RooGaussModel *gauss11 = new RooGaussModel("gauss11","gauss",*time, *mean_g1, *sigmat, RooConst(1), *sf1);
	//RooGaussModel *gauss12 = new RooGaussModel("gauss12","gauss",*time, *mean_g1, *sigmat, RooConst(1), *sf2);
	RooAddModel *res1 = new RooAddModel("res1","time core+tail gauss", RooArgList(*gauss12,*gauss11),RooArgList(*frac_g12));
	RooGaussModel *gausswide = new RooGaussModel("gausswide","gauss",*time, *mean_g2,*sigma_wide);
	RooRealVar *frac_gwide1 = new RooRealVar("frac_wide1", "core fraction wide1", 0.04, 0.0,0.1);
	RooRealVar *frac_bdc1 = new RooRealVar("frac_bdc1", "core fraction2", 0.05,0.0,0.2);
	RooRealVar *frac_tau2 = new RooRealVar("frac_tau2", "core fraction3", 0.05,0.0,0.1);

	RooBDecay *bdc1 = new RooBDecay("bdc1","bdc1",*time,*tau,*DG,RooConst(1),RooConst(0), RooConst(0), RooConst(0),RooConst(0), *res1, RooBDecay::SingleSided);
	RooBDecay *bdc12 = new RooBDecay("bdc12","bdc12",*time,*tau2,*DG,RooConst(1),RooConst(0), RooConst(0), RooConst(0),RooConst(0), *res1, RooBDecay::SingleSided);
	RooAddPdf *total_bdc1 = new RooAddPdf("total_bdc1", "total_bdc1", RooArgList(*bdc12, *bdc1),RooArgList(*frac_tau2)); 
	RooAddPdf *total1 = new RooAddPdf("total1", "total1", RooArgList(*gausswide, *total_bdc1, *res1),RooArgList(*frac_gwide1,*frac_bdc1)); 

	gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
	RooFitResult *fitresult = total1->fitTo(*data1,Save(kTRUE), NumCPU(6),SumW2Error(kTRUE), ConditionalObservables(*sigmat)); 

	RooPlot* frame1 = time->frame(Bins(60),Title("Prompt decay time1"), Range("res")) ;

	// Plot all data tagged as physics sample
	data1->plotOn(frame1) ;
	total1->plotOn(frame1,RooFit::ProjWData(*sigmat, *data1)) ;

	RooHist* hpull1 = frame1->pullHist();
	RooPlot* timepull1 = time->frame(Title("Pull Distribution"), Bins(60), Range("res")) ;
	//timepull1->addPlotable(hpull1,"P") ;
	TAxis * xachse = timepull1->GetXaxis(); TAxis * yachse = timepull1->GetYaxis();
	xachse->SetTitleFont (132);
	yachse->SetTitleFont (132);
	xachse->SetLabelFont (132);
	yachse->SetLabelFont (132);
	yachse->SetTitleOffset(0.2);
	yachse->SetTitleSize(0.2);
	yachse->SetLabelSize(0.08);
	xachse->SetLabelOffset(0.2);
	yachse->SetNdivisions(110);
	xachse->SetTitle("");
	yachse->SetTitle("Pull");

	TCanvas* c = new TCanvas("sim","sim",600,800) ;
	TPad* pad1 = new TPad("pad1","This is pad1",0.05,0.2,0.95,0.97);
	TPad* pad2 = new TPad("pad2","This is pad2",0.05,0.0,0.95,0.2);
	pad1->Draw();
	pad2->Draw();
	pad1->cd() ; gPad->SetLeftMargin(0.15) ; frame1->GetYaxis()->SetTitleOffset(1) ; frame1->Draw() ;
	pad2->cd() ; gPad->SetLeftMargin(0.15) ; timepull1->GetYaxis()->SetTitleOffset(1) ; timepull1->Draw() ;
	c->SaveAs("plot_data_sim_2g.pdf");

	RooPlot* frame2 = time->frame(Bins(60),Title("Prompt decay time1"), Range("long")) ;

	// Plot all data tagged as physics sample
	data1->plotOn(frame2) ;
	total1->plotOn(frame2,RooFit::ProjWData(*sigmat, *data1)) ;

	RooHist* hpull2 = frame2->pullHist();
	RooPlot* timepull2 = time->frame(Title("Pull Distribution"), Bins(60), Range("long")) ;
	//timepull2->addPlotable(hpull2,"P") ;
	TAxis * xachse2 = timepull2->GetXaxis(); TAxis * yachse2 = timepull2->GetYaxis();
	xachse2->SetTitleFont (132);
	yachse2->SetTitleFont (132);
	xachse2->SetLabelFont (132);
	yachse2->SetLabelFont (132);
	yachse2->SetTitleOffset(0.2);
	yachse2->SetTitleSize(0.2);
	yachse2->SetLabelSize(0.08);
	xachse2->SetLabelOffset(0.2);
	yachse2->SetNdivisions(110);
	xachse2->SetTitle("");
	yachse2->SetTitle("Pull");

	TCanvas* c2 = new TCanvas("sim2","sim",600,800) ;
	TPad* pad12 = new TPad("pad12","This is pad1",0.05,0.2,0.95,0.97);
	TPad* pad22 = new TPad("pad22","This is pad2",0.05,0.0,0.95,0.2);
	pad12->Draw();
	pad22->Draw();
	pad12->cd() ; gPad->SetLeftMargin(0.15) ; frame2->GetYaxis()->SetTitleOffset(1) ; frame2->Draw() ;
	pad22->cd() ; gPad->SetLeftMargin(0.15) ; timepull2->GetYaxis()->SetTitleOffset(1) ; timepull2->Draw() ;
	c2->SaveAs("plot_data_sim_2g_wide.pdf");
}

int main(int argv, char * argc[])
{
	plot_resolution_sim_2g();	
	return 1;
}
