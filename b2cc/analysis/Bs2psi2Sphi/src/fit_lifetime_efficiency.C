#include "RooGlobalFunc.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooConstVar.h"
#include "RooGaussian.h"
#include "RooProdPdf.h"
#include "RooCBShape.h"
#include "RooVoigtian.h"
#include "RooHistPdf.h"
#include "RooDataHist.h"
#include "RooHist.h"
#include "RooProdPdf.h"
#include "RooAddPdf.h"
#include "RooAddModel.h"
#include "RooFormulaVar.h"
#include "RooEffProd.h"
#include "TCanvas.h"
#include "TROOT.h"
#include "TAxis.h"
#include "TH1.h"
#include "TFile.h"
#include "TCut.h"
#include "RooBDecay.h"
#include "RooGaussModel.h"
#include "RooPlot.h"
#include "RooBinning.h"
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

void fit(){
    float tau_Bd_val(1.525);
	TFile *file = TFile::Open("/Disk/ecdf-nfs-ppe/lhcb/gcowan/Bs2psi2SKpi/B_s0/data/tighter_cut/tight-mva.root"); tau_Bd_val = 1.520;
	//TFile *file = TFile::Open("/Disk/ecdf-nfs-ppe/lhcb/gcowan/Bs2psi2SKpi/B_s0/data/no_mva/signal_proton.root"); tau_Bd_val = 1.520; // signal data
	//TFile *file = TFile::Open("/Disk/ecdf-nfs-ppe/lhcb/gcowan/Bs2psi2SKpi/B_s0/data/no_mva/BdKpi-mc_proton_nomva.root"); tau_Bd_val = 1.525; // signal MC
	TTree *tree = (TTree*)file->Get("bCandidates");

	RooRealVar *mass  = new RooRealVar("B_s0_Mass_JpsiConstr", "mass", 5200., 5400., "MeV/c^{2}");
	RooRealVar *mKpi  = new RooRealVar("mkstar", "mkstar", 0.,5300., "MeV/c^{2}");
	RooRealVar *mPsi  = new RooRealVar("psi_2S_M", "mpsi", 0.,15300., "MeV/c^{2}");
	RooRealVar *Kplus_PX = new RooRealVar("Kplus_PX", "Kplus_PX", -1e6, 1e6, "MeV/c^{2}");
	RooRealVar *Kplus_PY = new RooRealVar("Kplus_PY", "Kplus_PX", -1e6, 1e6, "MeV/c^{2}");
	RooRealVar *piminus_PX = new RooRealVar("piminus_PX", "piminus_PX", -1e6, 1e6, "MeV/c^{2}");
	RooRealVar *piminus_PY = new RooRealVar("piminus_PY", "piminus_PY", -1e6, 1e6, "MeV/c^{2}");
	RooRealVar *Kplus_ProbNNk = new RooRealVar("Kplus_ProbNNk", "Kplus_ProbbNNpi", 0.,5300000., "MeV/c^{2}");
	RooRealVar *piminus_ProbNNpi = new RooRealVar("piminus_ProbNNpi", "piminus_ProbbNNpi", 0.,5300000., "MeV/c^{2}");
	RooRealVar *muplus_ProbNNmu = new RooRealVar("muplus_ProbNNmu", "muplus_ProbbNNpi", 0.,5300000., "MeV/c^{2}");
	RooRealVar *muminus_ProbNNmu = new RooRealVar("muminus_ProbNNmu", "muminus_ProbbNNpi", 0.,5300000., "MeV/c^{2}");
	RooRealVar *ctime = new RooRealVar("B_s0_LOKI_DTF_CTAU", "ct",0.08991,4.1958, "ps");
	RooRealVar *sigmat = new RooRealVar("B_s0_LOKI_DTF_CTAUERR", "sigmat",0.00,0.4);
    RooRealVar *hlt1_trackmuon  = new RooRealVar("B_s0_Hlt1TrackMuonDecision_TOS", "hlt1_trackmuon", 0, 1);
    RooRealVar *hlt1_trackalll0 = new RooRealVar("B_s0_Hlt1TrackAllL0Decision_TOS", "hlt1_trackalll0", 0, 1);
    RooRealVar *hlt1_unbiased = new RooRealVar("B_s0_Hlt1DiMuonHighMassDecision_TOS", "hlt1_unbiased", 0, 1);
    RooRealVar *hlt2_unbiased = new RooRealVar("B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS", "hlt2_unbiased", 0, 1);
	RooRealVar *sweight = new RooRealVar("Nsig_sw", "sweight", -10000.0, 100000.0);
	RooArgList *fitArgs = new RooArgList(*ctime, *hlt1_trackmuon, *hlt1_trackalll0, *hlt1_unbiased, *hlt2_unbiased, *sigmat, *sweight, *mass);
    fitArgs->add(*Kplus_PX);
    fitArgs->add(*Kplus_PY);
    fitArgs->add(*piminus_PX);
    fitArgs->add(*piminus_PY);
    fitArgs->add(*Kplus_ProbNNk);
    fitArgs->add(*piminus_ProbNNpi);
    fitArgs->add(*muplus_ProbNNmu);
    fitArgs->add(*muminus_ProbNNmu);
    fitArgs->add(*mKpi);
    fitArgs->add(*mPsi);
	
    TCut cut1 = "((B_s0_Hlt1DiMuonHighMassDecision_TOS==1||B_s0_Hlt1TrackMuonDecision_TOS==1||B_s0_Hlt1TrackAllL0Decision_TOS==1) && B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS==1) && abs(B_s0_Mass_JpsiConstr-5279)<25"; //signal
    //TCut cut1 = "((B_s0_Hlt1DiMuonHighMassDecision_TOS==1||B_s0_Hlt1TrackMuonDecision_TOS==1||B_s0_Hlt1TrackAllL0Decision_TOS==1) && B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS==1) && abs(B_s0_Mass_JpsiConstr-5190)<20"; // background
    //TCut cut1 = "abs(mkstar-896)<100&&sqrt(pow(Kplus_PX+piminus_PX,2)+pow(Kplus_PY+piminus_PY,2))>1000&&abs(psi_2S_M-3690)<40&&Kplus_ProbNNk>0.2&&piminus_ProbNNpi>0.2&&muminus_ProbNNmu>0.2&&muplus_ProbNNmu>0.2&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS==1)&&abs(B_s0_Mass_JpsiConstr-5279)<20";

	RooDataSet * data1 = new RooDataSet("data1", "all input data", tree, *fitArgs, cut1);
    
    RooFormulaVar * time_formula = new RooFormulaVar("time", "@0/0.2997", RooArgList(*ctime));
    RooRealVar * time = (RooRealVar*)data1->addColumn(*time_formula);
    time->setRange(0.3, 14.0);
    time->SetTitle("t [ps]");
    data1->Print("v");

	// number of entries in each bin
	Double_t entries2 = data1->numEntries();
	cout << entries2 << endl;

	RooRealVar *mean_g1 = new RooRealVar("g1 #mu","mean of g1",0.00);
	RooRealVar *mean_g2 = new RooRealVar("g2 #mu","mean of g2",0.00,-0.1, 0.5);
	RooRealVar *sf1 = new RooRealVar("sf1", "sf1", 0.047);
	RooRealVar *sf2 = new RooRealVar("sf2", "sf2", 5.0, 2.0, 10.);
	RooRealVar *cf1 = new RooRealVar("cf1", "cf1", 0.010, -0.1, 0.1);
	RooRealVar *cf2 = new RooRealVar("cf2", "cf2", 0.015, -0.1, 0.1);
	RooRealVar *frac_g12 = new RooRealVar("frac_g12", "core fraction", 0.15, 0.01, 0.4);

	RooRealVar * sigma_wide = new RooRealVar("#sigma wide","width of gwide",0.15,0.01,1.5);
	RooRealVar * tau  = new RooRealVar("tau" , "tau" ,0.15, 0.1, 0.6);
	RooRealVar * tau_Bd = new RooRealVar("tau_Bd", "tau_Bd", tau_Bd_val, tau_Bd_val - 0.3, tau_Bd_val + 0.3);
    //tau_Bd->setConstant();
    RooGaussian *tau_Bd_constr = new RooGaussian("tau_Bd_constr","tau2_const", *tau_Bd, RooConst(tau_Bd_val), RooConst(0.004)) ;
    RooRealVar *DG = new RooRealVar("DG", "DG",0.0);

	RooGaussModel *gauss11 = new RooGaussModel("gauss11","gauss",*time, *mean_g1, *sf1);
	RooGaussModel *gauss12 = new RooGaussModel("gauss12","gauss",*time, *mean_g1, RooConst(1), *sf2);
	RooAddModel *res1 = new RooAddModel("res1","time core+tail gauss", RooArgList(*gauss12,*gauss11),RooArgList(*frac_g12));
	RooGaussModel *gausswide = new RooGaussModel("gausswide","gauss",*time, *mean_g2,*sigma_wide);
	RooRealVar *frac_gwide1 = new RooRealVar("frac_wide1", "core fraction wide1", 0.04, 0.0,0.1);
	RooRealVar *frac_bdc1 = new RooRealVar("frac_bdc1", "core fraction2", 0.05,0.0,0.2);
	RooRealVar *frac_tau2 = new RooRealVar("frac_tau2", "core fraction3", 0.05,0.0,0.5);

	RooBDecay *background = new RooBDecay("bdc1","bdc1",*time,*tau,*DG,RooConst(1),RooConst(0), RooConst(0), RooConst(0),RooConst(0), *res1, RooBDecay::SingleSided);
	RooBDecay *signal     = new RooBDecay("bdc12","bdc12",*time,*tau_Bd,*DG,RooConst(1),RooConst(0), RooConst(0), RooConst(0),RooConst(0), *gauss11, RooBDecay::SingleSided);
    RooAddPdf *total_decay = new RooAddPdf("total_bdc1", "total_bdc1", RooArgList(*signal, *background),RooArgList(*frac_tau2)); 
	RooAddPdf *total       = new RooAddPdf("total1", "total1", RooArgList(*gausswide, *total_decay, *res1),RooArgList(*frac_gwide1,*frac_bdc1)); 

    
    // beta, beta_sq and p0 are never significant when they are floated in the fit. Nominal is to leave them fixed to zero.
	RooRealVar * beta    = new RooRealVar("beta", "beta", 0.);//-0.05,-0.15,0.15);
	RooRealVar * beta_sq = new RooRealVar("beta_sq", "beta_sq", 0.);// -0.1, 0.1);
	RooRealVar * p0   = new RooRealVar("p0", "p1", 0.);//, -0.1, 0.1);
	RooRealVar * p1   = new RooRealVar("p1", "p1", 1.,0.,3.);
	RooRealVar * p2   = new RooRealVar("p2", "p2", 2.,0.,3.);
    RooFormulaVar * eff = new RooFormulaVar("eff","(TMath::Power(@1*(@0-@5), @2)/(1 + TMath::Power(@1*(@0-@5),@2)))*(1+@3*@0+@4*@0*@0)",RooArgList(*time, *p1, *p2, *beta, *beta_sq, *p0));
    RooEffProd * modelEff = new RooEffProd("modelEff","model with efficiency", *signal, *eff);

	gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
    // Generate some events from the lifetime distribution
    RooDataSet * theory_data = signal->generate(*time, 1e6);
    const int nbins(40);
    double bins[nbins+1];
    const double t_min(0.3);
    const double t_max(14.);
    const double tau_PDG(1.5);
    double A(TMath::Exp(-t_max/tau_PDG));
    double B(TMath::Exp(-t_min/tau_PDG));
    bins[0] = t_min;
    bins[nbins] = t_max;
    for(int i(1); i < nbins; i++){
        bins[i] = -TMath::Log(((double)i*(A-B)/(double)nbins+B))*tau_PDG;
    }
    RooBinning * binning = new RooBinning(nbins, bins);
    binning->Print("V");

    TH1F * theory_hist = (TH1F*)theory_data ->createHistogram( "time", *time, RooFit::Binning(*binning) );
    TH1F *   data_hist = (TH1F*)       data1->createHistogram( "time", *time, RooFit::Binning(*binning) );
    std::cout << data1->numEntries() << " " << theory_data->numEntries() << std::endl;
    theory_hist->Scale(data1->numEntries()/float(theory_data->numEntries()));
    data_hist->Divide(theory_hist);
    TFile * ratio_file = TFile::Open("Bd2psi2SKpi_time_efficiency.root","RECREATE");
    data_hist->Write();
    ratio_file->Close();
    RooDataHist * ratio = new RooDataHist("ratio", "ratio", RooArgList(*time), data_hist);
	//time->setBinning(*binning, "default");
    RooPlot * ratio_frame = time->frame();

	RooFitResult *fitresult = modelEff->fitTo(*data1,Save(kTRUE), NumCPU(6),SumW2Error(kFALSE), ExternalConstraints(*tau_Bd_constr)); 
    
    RooPlot* frame1 = time->frame(Bins(60),Title("Prompt decay time1")) ;

	// Plot all data tagged as physics sample
	data1->plotOn(frame1) ;
    modelEff->plotOn(frame1) ;

	RooHist* hpull1 = frame1->pullHist();
	RooPlot* timepull1 = time->frame(Title("Pull Distribution"), Bins(60)) ;
	timepull1->addPlotable(hpull1,"P") ;
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

	TCanvas* d = new TCanvas("eff","eff",600,800);
    ratio->plotOn(ratio_frame);
    eff->plotOn(ratio_frame);
    ratio_frame->GetXaxis()->SetTitle("t [ps]");
    ratio_frame->GetYaxis()->SetTitle("Efficiency");
    ratio_frame->Draw();
    d->SaveAs("Bd2psi2SKpi_time_efficiency.png");

    TCanvas* c = new TCanvas("sim","sim",600,800) ;
	TPad* pad1 = new TPad("pad1","This is pad1",0.05,0.2,0.95,0.97);
	TPad* pad2 = new TPad("pad2","This is pad2",0.05,0.0,0.95,0.2);
	pad1->Draw();
	pad2->Draw();
	pad1->cd() ; gPad->SetLeftMargin(0.15) ; frame1->GetYaxis()->SetTitleOffset(1) ; frame1->Draw() ;
	pad2->cd() ; gPad->SetLeftMargin(0.15) ; timepull1->GetYaxis()->SetTitleOffset(1) ; timepull1->Draw() ;
	c->SaveAs("fitted_Bd2psi2SKpi_lifetime.pdf");
	c->SaveAs("fitted_Bd2psi2SKpi_lifetime.png");
}

int main(int argv, char * argc[])
{
	fit();	
	return 1;
}
