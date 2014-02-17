#define Lambdab2JpsiLambda_reflections_cxx
#include "Lambdab2JpsiLambda_reflections.h"
#include <TNtuple.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TH1D.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLorentzVector.h>
#include <iostream>
using namespace std;

void Lambdab2JpsiLambda_reflections::Loop()
{
	gROOT->ProcessLine(".x /Users/gcowan/lhcb/lhcbStyle.C");
	if (fChain == 0) return;

	Long64_t nentries = fChain->GetEntriesFast();

	TH1D * mppi  = new TH1D("mKK", "mKK", 100, 1.08, 1.2);
	TH1D * mpipi = new TH1D("mKpi", "mKpi", 70, 0.3, 0.6);
	TH1D * massHisto  = new TH1D("mBd_DTF", "mBd_DTF", 100, 5.45, 5.8);
	TH1D * mBd  = new TH1D("mBd", "mBd", 100, 5.4, 5.8);
	TH1D * mBs  = new TH1D("mBs", "mBs", 100, 5.20, 5.55);
	TH1D * mB_lower = new TH1D("lower_sideband", "lower_sideband", 50, 5.15, 5.55);
	TH1D * mB_upper = new TH1D("upper_sideband", "upper_sideband", 50, 5.15, 5.55);
	//TH1D * mB_lower = new TH1D("lower_sideband", "lower_sideband", 60, 5.25, 5.32); // for looking at Bs -> JpsiKK where K -> pi misid
	//TH1D * mB_upper = new TH1D("upper_sideband", "upper_sideband", 60, 5.25, 5.32);// for looking at Bs -> JpsiKK where K -> pi misid
	//TH1D * mB_lower = new TH1D("lower_sideband", "lower_sideband", 40, 5.55, 5.7);
	//TH1D * mB_upper = new TH1D("upper_sideband", "upper_sideband", 40, 5.55, 5.7);
	TH1D * mJpsi_ = new TH1D("mJpsi", "mJpsi", 100, 3.03, 3.15);
	TH1D * mJpsi_constr = new TH1D("mJpsi_constr", "mJpsi", 100, 3.03, 3.15);
	
	Long64_t nbytes = 0, nb = 0;

	TFile * file = TFile::Open("reflection_upper_sideband.root", "RECREATE");
	TNtuple * tuple = new TNtuple("DecayTree","DecayTree", "mass");

	for (Long64_t jentry=0; jentry<nentries;jentry++) {
	//for (Long64_t jentry=0; jentry<1000;jentry++) {
		Long64_t ientry = LoadTree(jentry);
		if (ientry < 0) break;
		nb = fChain->GetEntry(jentry);   nbytes += nb;

      //Fiducial cuts!
      if(hasBestDTFCHI2 == 0)    continue;
      //if(b_particle_TAU < 1.5/1000)    continue;

		double mpi = 139.57018;
		double mK = 493.68;
		double mmu = 105.658;
		double mJpsi = 3096.916;
		double mp = 938.27;
		double mKS = 497.614;
		TLorentzVector pplus(pplus_PX, pplus_PY, pplus_PZ, sqrt(pplus_PX*pplus_PX+pplus_PY*pplus_PY+pplus_PZ*pplus_PZ + mp*mp));
		TLorentzVector piminus(piminus_PX, piminus_PY, piminus_PZ, sqrt(piminus_PX*piminus_PX+piminus_PY*piminus_PY+piminus_PZ*piminus_PZ + mpi*mpi));
		TLorentzVector pplusWrong(pplus_PX, pplus_PY, pplus_PZ, sqrt(pplus_PX*pplus_PX+pplus_PY*pplus_PY+pplus_PZ*pplus_PZ + mpi*mpi));
		TLorentzVector piminusWrong(piminus_PX, piminus_PY, piminus_PZ, sqrt(piminus_PX*piminus_PX+piminus_PY*piminus_PY+piminus_PZ*piminus_PZ + mK*mK));
		TLorentzVector muplus(muplus_PX, muplus_PY, muplus_PZ, sqrt(muplus_P*muplus_P + mmu*mmu));
		TLorentzVector muminus(muminus_PX, muminus_PY, muminus_PZ, sqrt(muminus_P*muminus_P + mmu*mmu));
		TLorentzVector Jpsi = muplus + muminus;
		TLorentzVector Jpsi_constr(muminus_PX+muplus_PX, muminus_PY+muplus_PY, muminus_PZ+muplus_PZ, sqrt(Jpsi.P()*Jpsi.P() + mJpsi*mJpsi));
		
		TLorentzVector ppi = pplus + piminus;
		TLorentzVector pipi = pplusWrong + piminus; // testing Bs -> JpsipiK hypothesis
		TLorentzVector B = Jpsi_constr + ppi;
		TLorentzVector Bpipi = Jpsi_constr + pipi;

		//if ( abs(pipi.M() - mKS) < 15  ) continue;	
		if (b_particle_MM < 5550) 
			mpipi->Fill(pipi.M()/1000.);
		mppi->Fill(ppi.M()/1000.);
		mBd->Fill(B.M()/1000.);
		massHisto->Fill(b_particle_MM/1000.);
		mJpsi_->Fill(Jpsi.M()/1000.);
		mJpsi_constr->Fill(Jpsi_constr.M()/1000.);
		if (b_particle_MM > 5680) 
			mB_upper->Fill(Bpipi.M()/1000.);
		if (b_particle_MM < 5550) mB_lower->Fill(Bpipi.M()/1000.);
		if (b_particle_MM < 5550) tuple->Fill(Bpipi.M());
	}

	tuple->Write();
	file->Close();

	std::cout << "Number of B candidates " << mBs->GetEntries() << std::endl;

	TCanvas * c = new TCanvas("c","c",1600,1200);
	c->SetBottomMargin(0);
	c->Divide(3,2, 0.01, 0.01);
	c->cd(1);
	mppi->Draw();
	mppi->SetTitle("");
	mppi->GetXaxis()->SetTitle("m(p#pi) [GeV/c^{2}]");
	c->cd(2);
	mJpsi_->Draw();
	mJpsi_->SetTitle("");
	mJpsi_->GetXaxis()->SetTitle("m(#mu#mu) [GeV/c^{2}]");
	c->cd(3);
	mpipi->Draw();
	mpipi->SetTitle("");
	//mpiK->GetXaxis()->SetTitle("m(K#pi) [GeV/c^{2}]");
	mpipi->GetXaxis()->SetTitle("m(#pi#pi) [GeV/c^{2}]");
	c->cd(4);
	massHisto->Draw();
	//massHisto->SetMaximum(1500);
	mBd->SetLineColor(kRed);
	mBd->Draw("same");
	massHisto->SetTitle("");
	massHisto->GetXaxis()->SetTitle("DTF m(J/#psi p#pi) [GeV/c^{2}]");
	c->cd(5);
	mB_lower->Draw();
	mB_lower->SetTitle("");
	//mB_lower->GetXaxis()->SetTitle("m(J/#psi K#pi) [GeV/c^{2}]");
	mB_lower->GetXaxis()->SetTitle("m(J/#psi #pi#pi) [GeV/c^{2}]");
	//mB_lower->GetXaxis()->SetTitle("m(J/#psi KK) [GeV/c^{2}]");
	c->cd(6);
	mB_upper->Draw();
	mB_upper->SetTitle("");
	//mB_upper->GetXaxis()->SetTitle("m(J/#psi K#pi) [GeV/c^{2}]");
	mB_upper->GetXaxis()->SetTitle("m(J/#psi #pi#pi) [GeV/c^{2}]");
	//mB_upper->GetXaxis()->SetTitle("m(J/#psi KK) [GeV/c^{2}]");
	c->SaveAs("plots_Lambdab2JpsiLambda_reflections.pdf");
}
int main(){
	Lambdab2JpsiLambda_reflections t;
	t.Loop();
	return 1;
}
