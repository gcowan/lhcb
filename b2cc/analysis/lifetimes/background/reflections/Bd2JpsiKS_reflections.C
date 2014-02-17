#define Bd2JpsiKS_reflections_cxx
#include "Bd2JpsiKS_reflections.h"
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

void Bd2JpsiKS_reflections::Loop()
{
	gROOT->ProcessLine(".x /Users/gcowan/lhcb/lhcbStyle.C");
	if (fChain == 0) return;

	Long64_t nentries = fChain->GetEntriesFast();

	//TH1D * mKK  = new TH1D("mKK", "mKK", 100, 0.99, 1.050);
	//TH1D * mKK  = new TH1D("mKK", "mKK", 100, 1.45, 1.55);
	TH1D * mpipi  = new TH1D("mKK", "mKK", 100, 0.4, 0.6);
	TH1D * mpiK = new TH1D("mKpi", "mKpi", 100, 0.826, 0.966);
	//TH1D * mpiK = new TH1D("mKpi", "mKpi", 60, 1.08, 1.25);
	TH1D * massHisto  = new TH1D("mBd_DTF", "mBd_DTF", 100, 5.15, 5.4);
	TH1D * mBd  = new TH1D("mBd", "mBd", 100, 5.15, 5.4);
	TH1D * mBs  = new TH1D("mBs", "mBs", 100, 5.20, 5.55);
	//TH1D * mB_lower = new TH1D("lower_sideband", "lower_sideband", 50, 5.3, 5.95); // for Lambda_b
	//TH1D * mB_upper = new TH1D("upper_sideband", "upper_sideband", 50, 5.3, 5.95); // for Lambda_b
	//TH1D * mB_lower = new TH1D("lower_sideband", "lower_sideband", 60, 5.25, 5.32); // for looking at Bs -> JpsiKK where K -> pi misid
	//TH1D * mB_upper = new TH1D("upper_sideband", "upper_sideband", 60, 5.25, 5.32);// for looking at Bs -> JpsiKK where K -> pi misid
	TH1D * mB_lower = new TH1D("lower_sideband", "lower_sideband", 40, 5.15, 5.4); // for Jpsi K*
	TH1D * mB_lower1 = new TH1D("lower_sideband1", "lower_sideband", 40, 5.15, 5.4); // for Jpsi K*
	TH1D * mB_upper = new TH1D("upper_sideband", "upper_sideband", 40, 5.15, 5.4); // for Jpsi K*
	TH1D * mJpsi_ = new TH1D("mJpsi", "mJpsi", 100, 3.03, 3.15);
	TH1D * mJpsi_constr = new TH1D("mJpsi_constr", "mJpsi", 100, 3.03, 3.15);
	mB_lower1->SetLineColor(kRed);
	
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
		//double mK = 938.27;
		double mKS = 497.614;
		TLorentzVector piplus(piplus_PX, piplus_PY, piplus_PZ, sqrt(piplus_PX*piplus_PX+piplus_PY*piplus_PY+piplus_PZ*piplus_PZ + mpi*mpi));
		TLorentzVector piminus(piminus_PX, piminus_PY, piminus_PZ, sqrt(piminus_PX*piminus_PX+piminus_PY*piminus_PY+piminus_PZ*piminus_PZ + mpi*mpi));
		TLorentzVector piplusWrong(piplus_PX, piplus_PY, piplus_PZ, sqrt(piplus_PX*piplus_PX+piplus_PY*piplus_PY+piplus_PZ*piplus_PZ + mK*mK));
		TLorentzVector piminusWrong(piminus_PX, piminus_PY, piminus_PZ, sqrt(piminus_PX*piminus_PX+piminus_PY*piminus_PY+piminus_PZ*piminus_PZ + mK*mK));
		TLorentzVector muplus(muplus_PX, muplus_PY, muplus_PZ, sqrt(muplus_P*muplus_P + mmu*mmu));
		TLorentzVector muminus(muminus_PX, muminus_PY, muminus_PZ, sqrt(muminus_P*muminus_P + mmu*mmu));
		TLorentzVector Jpsi = muplus + muminus;
		TLorentzVector KS   = piplus + piminus;
		TLorentzVector Jpsi_constr(muminus_PX+muplus_PX, muminus_PY+muplus_PY, muminus_PZ+muplus_PZ, sqrt(Jpsi.P()*Jpsi.P() + mJpsi*mJpsi));
		TLorentzVector KS_constr  (piminus_PX+piplus_PX, piminus_PY+piplus_PY, piminus_PZ+piplus_PZ, sqrt(KS.P()*KS.P() + mKS*mKS));
		
		TLorentzVector pipi = piplus + piminus;
		TLorentzVector piK = piplus + piminusWrong; // testing Bs -> JpsipiK hypothesis
		TLorentzVector Kpi = piplusWrong + piminus; // testing Bs -> JpsipiK hypothesis
		TLorentzVector B = Jpsi_constr + pipi;
		TLorentzVector BpiK = Jpsi_constr + piK;
		TLorentzVector BKpi = Jpsi_constr + Kpi;

		//if ( abs(piK.M() - 1115.683) < 15  ) continue;	
		//if ( abs(Kpi.M() - 1115.683) < 15  ) continue;	
		mpipi->Fill(pipi.M()/1000.);
		if (b_particle_MassFitConsAll_M[0] > 5320 && b_particle_MassFitConsAll_M[0] < 5350) 
			mpiK->Fill(piK.M()/1000.);
		if (b_particle_MassFitConsAll_M[0] > 5320 && b_particle_MassFitConsAll_M[0] < 5350) 
			mpiK->Fill(Kpi.M()/1000.);
		mBd->Fill(B.M()/1000.);
		massHisto->Fill(b_particle_MassFitConsAll_M[0]/1000.);
		mJpsi_->Fill(Jpsi.M()/1000.);
		mJpsi_constr->Fill(Jpsi_constr.M()/1000.);
		if (b_particle_MassFitConsAll_M[0] > 5320 && b_particle_MassFitConsAll_M[0] < 5350) 
			mB_upper->Fill(BpiK.M()/1000.);
		if (b_particle_MassFitConsAll_M[0] > 5320 && b_particle_MassFitConsAll_M[0] < 5350) 
			mB_upper->Fill(BKpi.M()/1000.);
		if (b_particle_MassFitConsAll_M[0] < 5230 && b_particle_MassFitConsAll_M[0] > 5150) mB_lower->Fill(BpiK.M()/1000.);
		if (b_particle_MassFitConsAll_M[0] < 5230 && b_particle_MassFitConsAll_M[0] > 5150) mB_lower->Fill(BKpi.M()/1000.);
		//if (b_particle_MassFitConsAll_M[0] > 5320&& b_particle_MassFitConsAll_M[0] < 5350) tuple->Fill(BpiK.M());
		//if (b_particle_MassFitConsAll_M[0] > 5320&& b_particle_MassFitConsAll_M[0] < 5350) tuple->Fill(BKpi.M());
		if (b_particle_MassFitConsAll_M[0] < 5230 && b_particle_MassFitConsAll_M[0] > 5150) tuple->Fill(BpiK.M());
		if (b_particle_MassFitConsAll_M[0] < 5230 && b_particle_MassFitConsAll_M[0] > 5150) tuple->Fill(BKpi.M());
	}

	tuple->Write();
	file->Close();

	std::cout << "Number of B candidates " << mBs->GetEntries() << std::endl;

	TCanvas * c = new TCanvas("c","c",1600,1200);
	c->SetBottomMargin(0);
	c->Divide(3,2, 0.01, 0.01);
	c->cd(1);
	mpipi->Draw();
	mpipi->SetTitle("");
	mpipi->GetXaxis()->SetTitle("m(#pi#pi) [GeV/c^{2}]");
	c->cd(2);
	mJpsi_->Draw();
	mJpsi_->SetTitle("");
	mJpsi_->GetXaxis()->SetTitle("m(#mu#mu) [GeV/c^{2}]");
	c->cd(3);
	mpiK->Draw();
	mpiK->SetTitle("");
	mpiK->GetXaxis()->SetTitle("m(K#pi) [GeV/c^{2}]");
	//mpiK->GetXaxis()->SetTitle("m(p#pi) [GeV/c^{2}]");
	c->cd(4);
	massHisto->Draw();
	//massHisto->SetMaximum(1500);
	mBd->SetLineColor(kRed);
	mBd->Draw("same");
	massHisto->SetTitle("");
	massHisto->GetXaxis()->SetTitle("DTF m(J/#psi #pi#pi) [GeV/c^{2}]");
	c->cd(5);
	mB_lower->Draw();
	mB_lower->SetTitle("");
	mB_lower->GetXaxis()->SetTitle("m(J/#psi K#pi) [GeV/c^{2}]");
	//mB_lower->GetXaxis()->SetTitle("m(J/#psi p#pi) [GeV/c^{2}]");
	//mB_lower->GetXaxis()->SetTitle("m(J/#psi KK) [GeV/c^{2}]");
	c->cd(6);
	mB_upper->Draw();
	mB_upper->SetTitle("");
	//mB_upper->GetXaxis()->SetTitle("m(J/#psi K#pi) [GeV/c^{2}]");
	mB_upper->GetXaxis()->SetTitle("m(J/#psi p#pi) [GeV/c^{2}]");
	//mB_upper->GetXaxis()->SetTitle("m(J/#psi KK) [GeV/c^{2}]");
	c->SaveAs("plots_Bd2JpsiKS_reflections.pdf");
}
int main(){
	Bd2JpsiKS_reflections t;
	t.Loop();
	return 1;
}
