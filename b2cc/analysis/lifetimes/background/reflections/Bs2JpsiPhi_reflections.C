#define Bs2JpsiPhi_reflections_cxx
#include "Bs2JpsiPhi_reflections.h"
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

void Bs2JpsiPhi_reflections::Loop()
{
	gROOT->ProcessLine(".x /Users/gcowan/lhcb/lhcbStyle.C");
	if (fChain == 0) return;

	Long64_t nentries = fChain->GetEntriesFast();

	TH1D * mKK  = new TH1D("mKK", "mKK", 100, 0.99, 1.050);
	//TH1D * mKpi = new TH1D("mKpi", "mKpi", 100, 0.826, 0.966);
	TH1D * mKpi  = new TH1D("mKp", "mKp", 50, 1.45, 1.55);
	TH1D * massHisto  = new TH1D("mBd_DTF", "mBd_DTF", 100, 5.2, 5.55);
	TH1D * mBd  = new TH1D("mBd", "mBd", 100, 5.2, 5.55);
	TH1D * mBs  = new TH1D("mBs", "mBs", 100, 5.20, 5.55);
	//TH1D * mB_lower = new TH1D("lower_sideband", "lower_sideband", 100, 4.0, 5.5);
	//TH1D * mB_upper = new TH1D("upper_sideband", "upper_sideband", 100, 4.0, 5.5);
	//TH1D * mB_lower = new TH1D("lower_sideband", "lower_sideband", 60, 5.2, 5.4); // Bd -> JpsiKpi where pi -> K misid
	//TH1D * mB_upper = new TH1D("upper_sideband", "upper_sideband", 60, 5.2, 5.4); // Bd -> JpsiKpi where pi -> K misid
	TH1D * mB_lower = new TH1D("lower_sideband", "lower_sideband", 40, 5.55, 5.7);  // Lambda_b -> JpsipK where p -> K
	TH1D * mB_upper = new TH1D("upper_sideband", "upper_sideband", 40, 5.55, 5.7);  // Lambda_b -> JpsipK where p -> K
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

     //For corrected Fiducial cuts!
      if(Mu1_Eta<2.0 || Mu1_Eta > 4.5)    continue;
      if(Mu2_Eta<2.0 || Mu2_Eta > 4.5)    continue;
      if(K1_Eta<2.0 || K1_Eta > 4.5)    continue;
      if(K2_Eta<2.0 || K2_Eta > 4.5)    continue;
      if(std::fabs(Bs_PVz)>100.) continue;


      if(Bs_DTFChi2ndof>3.) continue;   
      if(Bs_IPChi2>25.) continue;
      if(Bs_2ndBestIPChi2 < 50. && Bs_2ndBestIPChi2 > 0.)continue;
      if ((Bs_M < 5200.) || (Bs_M > 5550.))continue;

      if(Phi_M < 1008. || Phi_M > 1032.)continue;
      if(Phi_Pt < 1000.) continue;  

      if (JPsi_M < 3030|| JPsi_M > 3150)continue;
      if(JPsi_VtxChi2ndof > 16.)continue; 

      if(K1_DLLk < 0.) continue;
      if(K2_DLLk < 0.) continue;
      if(K1_TrackChi2ndof > 4.) continue;
      if(K2_TrackChi2ndof > 4.) continue;
      if(Mu1_Pt<550.)    continue;
      if(Mu2_Pt<550.)     continue;
      if(Mu1_DLLmu < 0.) continue;    
      if(Mu2_DLLmu < 0.) continue;
      if(Mu1_TrackChi2ndof > 4.) continue;
      if(Mu2_TrackChi2ndof > 4.) continue;

      if(Bs_ct< 0.3) continue;
      if(Bs_ct> 14.) continue;
      if(Bs_hasBestDTFCHI2 != 1) continue;

       //Trigger
      if(Ev_L0 != 1) continue;
      if(Bs_Hlt1DiMuonHighMass_TOS != 1) continue;
      if(Bs_Hlt2DiMuonDetachedJPsi_TOS != 1) continue;  

		//double mpi = 139.57018;
		double mK = 493.68;
		double mmu = 105.658;
		double mJpsi = 3096.916;
		double mpi = 938.27;
		TLorentzVector Kplus(K1_Px, K1_Py, K1_Pz, sqrt(K1_Px*K1_Px+K1_Py*K1_Py+K1_Pz*K1_Pz + mK*mK));
		TLorentzVector Kminus(K2_Px, K2_Py, K2_Pz, sqrt(K2_Px*K2_Px+K2_Py*K2_Py+K2_Pz*K2_Pz + mK*mK));
		TLorentzVector KplusWrong(K1_Px, K1_Py, K1_Pz, sqrt(K1_Px*K1_Px+K1_Py*K1_Py+K1_Pz*K1_Pz + mpi*mpi));
		TLorentzVector KminusWrong(K2_Px, K2_Py, K2_Pz, sqrt(K2_Px*K2_Px+K2_Py*K2_Py+K2_Pz*K2_Pz + mpi*mpi));
		TLorentzVector muplus(Mu1_Px, Mu1_Py, Mu1_Pz, sqrt(Mu1_P*Mu1_P + mmu*mmu));
		TLorentzVector muminus(Mu2_Px, Mu2_Py, Mu2_Pz, sqrt(Mu2_P*Mu2_P + mmu*mmu));
		TLorentzVector Jpsi = muplus + muminus;
		TLorentzVector Jpsi_constr(Mu2_Px+Mu1_Px, Mu2_Py+Mu1_Py, Mu2_Pz+Mu1_Pz, sqrt(Jpsi.P()*Jpsi.P() + mJpsi*mJpsi));
		
		TLorentzVector KK = Kplus + Kminus;
		TLorentzVector Kpi = Kplus + KminusWrong;
		TLorentzVector piK = KplusWrong + Kminus;
		TLorentzVector B = Jpsi_constr + KK;
		TLorentzVector BWrong1 = Jpsi_constr + Kpi;
		TLorentzVector BWrong2 = Jpsi_constr + piK;
		
		mKK->Fill(KK.M()/1000.);
		mKpi->Fill(Kpi.M()/1000.);
		mBd->Fill(B.M()/1000.);
		massHisto->Fill(Bs_M/1000.);
		mJpsi_->Fill(Jpsi.M()/1000.);
		mJpsi_constr->Fill(Jpsi_constr.M()/1000.);
		if (Bs_M > 5400 && Kpi.M() > 1555) mB_upper->Fill(BWrong1.M()/1000.);
		if (Bs_M < 5330&& Kpi.M() > 1555) mB_lower->Fill(BWrong1.M()/1000.);
		if (Bs_M > 5400&& Kpi.M() > 1555) mB_upper->Fill(BWrong2.M()/1000.);
		if (Bs_M < 5330&& Kpi.M() > 1555) mB_lower->Fill(BWrong2.M()/1000.);
		if (Bs_M > 5400) tuple->Fill(BWrong1.M());
		if (Bs_M > 5400) tuple->Fill(BWrong2.M());
	}

	tuple->Write();
	file->Close();

	std::cout << "Number of B candidates " << mBs->GetEntries() << std::endl;

	TCanvas * c = new TCanvas("c","c",1600,1200);
	c->SetBottomMargin(0);
	c->Divide(3,2, 0.01, 0.01);
	c->cd(1);
	mKK->Draw();
	mKK->SetTitle("");
	mKK->GetXaxis()->SetTitle("m(KK) [GeV/c^{2}]");
	c->cd(2);
	mJpsi_->Draw();
	mJpsi_->SetTitle("");
	mJpsi_->GetXaxis()->SetTitle("m(#mu#mu) [GeV/c^{2}]");
	c->cd(3);
	mKpi->Draw();
	mKpi->SetTitle("");
	mKpi->GetXaxis()->SetTitle("m(K#pi) [GeV/c^{2}]");
	//mKpi->GetXaxis()->SetTitle("m(Kp) [GeV/c^{2}]");
	c->cd(4);
	massHisto->Draw();
	//massHisto->SetMaximum(1500);
	mBd->SetLineColor(kRed);
	mBd->Draw("same");
	massHisto->SetTitle("");
	massHisto->GetXaxis()->SetTitle("DTF m(J/#psi KK) [GeV/c^{2}]");
	c->cd(5);
	mB_lower->Draw();
	mB_lower->SetTitle("");
	mB_lower->GetXaxis()->SetTitle("m(J/#psi K#pi) [GeV/c^{2}]");
	//mB_lower->GetXaxis()->SetTitle("m(J/#psi Kp) [GeV/c^{2}]");
	c->cd(6);
	mB_upper->Draw();
	mB_upper->SetTitle("");
	mB_upper->GetXaxis()->SetTitle("m(J/#psi K#pi) [GeV/c^{2}]");
	//mB_upper->GetXaxis()->SetTitle("m(J/#psi Kp) [GeV/c^{2}]");
	c->SaveAs("plots_Bs2JpsiPhi_reflections.pdf");
}
int main(){
	Bs2JpsiPhi_reflections t;
	t.Loop();
	return 1;
}

