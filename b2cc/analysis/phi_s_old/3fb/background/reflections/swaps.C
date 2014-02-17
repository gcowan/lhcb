#define swaps_cxx
#include "swaps.h"
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

void swaps::Loop()
{
	gROOT->ProcessLine(".x /home/gcowan/lhcb/lhcbStyle.C");
	if (fChain == 0) return;

	Long64_t nentries = fChain->GetEntriesFast();

	TH1D * mKK  = new TH1D("mKK", "mKK", 100, 0.99, 1.050);
	TH1D * mKpi = new TH1D("mKpi", "mKpi", 100, 0.826, 0.966);
	TH1D * mKp  = new TH1D("mKp", "mKp", 50, 1.45, 1.55);
	TH1D * massHisto  = new TH1D("mJpsiKK_DTF", "mJpsiKK_DTF", 100, 5.20, 5.55);
	TH1D * mBs  = new TH1D("mJpsiKK", "mJpsiKK", 100, 5.20, 5.55);
	TH1D * mBsVeto = new TH1D("mJpsiKKveto", "mJpsiKKveto", 100, 5.20, 5.55);
	//TH1D * mBsKpi = new TH1D("upper_Bs_sideband", "mJpsiKpi", 40, 5.21, 5.41);
	//TH1D * mBspiK = new TH1D("lower_Bs_sideband", "mJpsipiK", 40, 5.04, 5.24);
	TH1D * mBsKpi = new TH1D("upper_Bs_sideband", "mJpsiKpi", 40, 5.51, 5.71);
	TH1D * mBspiK = new TH1D("lower_Bs_sideband", "mJpsipiK", 40, 5.34, 5.54);
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

		if ( !(sel_cleantail==1&&sel==1&&(triggerDecisionUnbiased==1||triggerDecisionBiasedExcl==1)&&time>.3&&time<14&&sigmat>0&&sigmat<0.12
//			&&(Kplus_pidK-Kplus_pidp)>-5
//			&&(Kminus_pidK-Kminus_pidp)>-5
		   )
			) continue;


		//double mpi = 139.57018;
		double mK = 493.68;
		double mmu = 105.658;
		double mJpsi = 3096.916;
		double mpi = 938.27;
		TLorentzVector Kplus(Kplus_PX, Kplus_PY, Kplus_PZ, sqrt(Kplus_PX*Kplus_PX+Kplus_PY*Kplus_PY+Kplus_PZ*Kplus_PZ + mK*mK));
		TLorentzVector Kminus(Kminus_PX, Kminus_PY, Kminus_PZ, sqrt(Kminus_PX*Kminus_PX+Kminus_PY*Kminus_PY+Kminus_PZ*Kminus_PZ + mK*mK));
		TLorentzVector KplusWrong(Kplus_PX, Kplus_PY, Kplus_PZ, sqrt(Kplus_PX*Kplus_PX+Kplus_PY*Kplus_PY+Kplus_PZ*Kplus_PZ + mpi*mpi));
		TLorentzVector KminusWrong(Kminus_PX, Kminus_PY, Kminus_PZ, sqrt(Kminus_PX*Kminus_PX+Kminus_PY*Kminus_PY+Kminus_PZ*Kminus_PZ + mpi*mpi));
		TLorentzVector muplus(muplus_PX, muplus_PY, muplus_PZ, sqrt(muplus_P*muplus_P + mmu*mmu));
		TLorentzVector muminus(muminus_PX, muminus_PY, muminus_PZ, sqrt(muminus_P*muminus_P + mmu*mmu));
		TLorentzVector Jpsi = muplus + muminus;
		TLorentzVector Jpsi_constr(muminus_PX+muplus_PX, muminus_PY+muplus_PY, muminus_PZ+muplus_PZ, sqrt(Jpsi.P()*Jpsi.P() + mJpsi*mJpsi));
		
		TLorentzVector KK = Kplus + Kminus;
		TLorentzVector Kpi = Kplus + KminusWrong;
		TLorentzVector piK = KplusWrong + Kminus;
		TLorentzVector B = Jpsi_constr + KK;
		TLorentzVector BKpi = Jpsi_constr + Kpi;
		TLorentzVector BpiK = Jpsi_constr + piK;
		//if ( ((BpiK.M() > 5600 && BpiK.M() < 5640) || (BKpi.M() > 5600 && BKpi.M() < 5640)) ) mBsVeto->Fill(mass/1000.); 
		//if ( ( Kpi.M() > 1490 && Kpi.M() < 1550 ) || ( piK.M() > 1490 && piK.M() < 1550 ) ) continue;//mBsVeto->Fill(mass/1000.); 
		mKK->Fill(KK.M()/1000.);
		mKp->Fill(Kpi.M()/1000.);
		mKp->Fill(piK.M()/1000.);
		mBs->Fill(B.M()/1000.);
		massHisto->Fill(mass/1000.);
		mJpsi_->Fill(Jpsi.M()/1000.);
		mJpsi_constr->Fill(Jpsi_constr.M()/1000.);
		if (mass > 5420) mBsKpi->Fill(BKpi.M()/1000.);
		if (mass > 5420) mBsKpi->Fill(BpiK.M()/1000.);
		if (mass < 5330) mBspiK->Fill(BKpi.M()/1000.);
		if (mass < 5330) mBspiK->Fill(BpiK.M()/1000.);
		if (mass > 5400) tuple->Fill(BKpi.M());
		if (mass > 5400) tuple->Fill(BpiK.M());
	}

	tuple->Write();
	file->Close();

	std::cout << "Number of B candidates " << mBs->GetEntries() << std::endl;
	std::cout << "Number of B candidates after Lambda_b veto" << mBsVeto->GetEntries() << std::endl;

	gROOT->SetStyle("Plain");
	
	TCanvas * c = new TCanvas("c","c",1600,1200);
	c->Divide(3,2);
	c->cd(1);
	mKK->Draw();
	mKK->SetTitle("");
	mKK->GetXaxis()->SetTitle("m(KK) [GeV/c^{2}]");
	c->cd(2);
	mJpsi_->Draw();
	mJpsi_->SetTitle("");
	mJpsi_->GetXaxis()->SetTitle("m(#mu#mu) [GeV/c^{2}]");
	c->cd(3);
	//mKp->Draw();
	mKp->SetTitle("");
	mKp->GetXaxis()->SetTitle("m(Kp) [GeV/c^{2}]");
	c->cd(4);
	massHisto->Draw();
	//massHisto->SetMaximum(1500);
	mBs->SetLineColor(kRed);
	mBs->Draw("same");
	mBsVeto->SetLineColor(kOrange);
	mBsVeto->Draw("same");
	massHisto->SetTitle("");
	massHisto->GetXaxis()->SetTitle("DTF m(J/#psi K^{+}K^{-}) [GeV/c^{2}]");
	c->cd(5);
	mBspiK->Draw();
	mBspiK->SetTitle("");
	//mBspiK->GetXaxis()->SetTitle("m(J/#psi K#pi) [GeV/c^{2}]");
	mBspiK->GetXaxis()->SetTitle("m(J/#psi Kp) [GeV/c^{2}]");
	c->cd(6);
	mBsKpi->Draw();
	mBsKpi->SetTitle("");
	//mBsKpi->GetXaxis()->SetTitle("m(J/#psi K#pi) [GeV/c^{2}]");
	mBsKpi->GetXaxis()->SetTitle("m(J/#psi Kp) [GeV/c^{2}]");
	c->SaveAs("plots_swaps.pdf");
}
int main(){
	swaps t;
	t.Loop();
	return 1;
}
