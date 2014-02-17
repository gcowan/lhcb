#define Bu2JpsiK_reflections_cxx
#include "Bu2JpsiK_reflections.h"
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

void Bu2JpsiK_reflections::Loop()
{
	gROOT->ProcessLine(".x /Users/gcowan/lhcb/lhcbStyle.C");
	if (fChain == 0) return;

	Long64_t nentries = fChain->GetEntriesFast();

	TH1D * massHisto  = new TH1D("mBd_DTF", "mBd_DTF", 100, 5.15, 5.4);
	TH1D * mBd  = new TH1D("mBd", "mBd", 100, 5.15, 5.4);
	TH1D * mBs  = new TH1D("mBs", "mBs", 100, 5.20, 5.55);
	TH1D * mB_lower = new TH1D("lower_sideband", "lower_sideband", 100, 5.25, 5.33);
	TH1D * mB_upper = new TH1D("upper_sideband", "upper_sideband", 100, 5.25, 5.33);
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
      if(Mu1_Eta<2.0 || Mu1_Eta > 4.5)    continue;
      if(Mu2_Eta<2.0 || Mu2_Eta > 4.5)    continue;
      if(K1_Eta<2.0 || K1_Eta > 4.5)    continue;
      if(std::fabs(Bu_PVz)>100.) continue;

      if(Bu_VtxChi2ndof > 10) continue;
      if(Bu_DTFChi2ndof>5.) continue;   
      if(Bu_IPChi2>25.) continue;
      if(Bu_2ndBestIPChi2 < 50. && Bu_2ndBestIPChi2 > 0.)continue;
      if ((Bu_M < 5150.) || (Bu_M > 5400.))continue;


      if(K1_Pt < 1000.) continue;
      if(K1_P < 10000.) continue;
      if(K1_DLLk < 0.) continue;
      if(K1_TrackChi2ndof > 4.) continue;


      if (JPsi_M < 3030|| JPsi_M > 3150)continue;
      if(JPsi_VtxChi2ndof > 16.)continue; 
      if(Mu1_Pt<500.)    continue;
      if(Mu2_Pt<500.)     continue;
      if(Mu1_DLLmu < 0.) continue;    
      if(Mu2_DLLmu < 0.) continue;
      if(Mu1_TrackChi2ndof > 4.) continue;
      if(Mu2_TrackChi2ndof > 4.) continue;

      if(Bu_ct< 0.3) continue;
      if(Bu_ct> 14.) continue;
      if(Bu_hasBestDTFCHI2 != 1) continue;

       //Trigger
      if(Ev_L0 != 1) continue;
      if(Bu_Hlt1DiMuonHighMass_TOS != 1) continue;
      if(Bu_Hlt2DiMuonDetachedJPsi_TOS != 1) continue;  

		double mpi = 139.57018;
		double mK = 493.68;
		double mmu = 105.658;
		double mJpsi = 3096.916;
		double mp = 938.27;
		TLorentzVector Kplus(K1_Px, K1_Py, K1_Pz, sqrt(K1_Px*K1_Px+K1_Py*K1_Py+K1_Pz*K1_Pz + mK*mK));
		TLorentzVector KplusWrong(K1_Px, K1_Py, K1_Pz, sqrt(K1_Px*K1_Px+K1_Py*K1_Py+K1_Pz*K1_Pz + mpi*mpi));
		TLorentzVector muplus(Mu1_Px, Mu1_Py, Mu1_Pz, sqrt(Mu1_P*Mu1_P + mmu*mmu));
		TLorentzVector muminus(Mu2_Px, Mu2_Py, Mu2_Pz, sqrt(Mu2_P*Mu2_P + mmu*mmu));
		TLorentzVector Jpsi = muplus + muminus;
		TLorentzVector Jpsi_constr(Mu2_Px+Mu1_Px, Mu2_Py+Mu1_Py, Mu2_Pz+Mu1_Pz, sqrt(Jpsi.P()*Jpsi.P() + mJpsi*mJpsi));
		
		TLorentzVector B = Jpsi_constr + Kplus;
		TLorentzVector Bwrong = Jpsi_constr + KplusWrong;
		
		mBd->Fill(B.M()/1000.);
		massHisto->Fill(Bu_M/1000.);
		mJpsi_->Fill(Jpsi.M()/1000.);
		mJpsi_constr->Fill(Jpsi_constr.M()/1000.);
		if (Bu_M > 5320) mB_upper->Fill(Bwrong.M()/1000.);
		if (Bu_M < 5230) mB_lower->Fill(Bwrong.M()/1000.);
		if (Bu_M > 5320) tuple->Fill(Bwrong.M());
	}

	tuple->Write();
	file->Close();

	std::cout << "Number of B candidates " << mBs->GetEntries() << std::endl;

	TCanvas * c = new TCanvas("c","c",1600,600);
	c->Divide(3,1, 0.01, 0.01);
	c->cd(1);
	massHisto->Draw();
	//massHisto->SetMaximum(1500);
	mBd->SetLineColor(kRed);
	mBd->Draw("same");
	massHisto->SetTitle("");
	massHisto->GetXaxis()->SetTitle("DTF m(J/#psi K) [GeV/c^{2}]");
	c->cd(2);
	mB_lower->Draw();
	mB_lower->SetTitle("");
	mB_lower->GetXaxis()->SetTitle("m(J/#psi #pi) [GeV/c^{2}]");
	c->cd(3);
	mB_upper->Draw();
	mB_upper->SetTitle("");
	mB_upper->GetXaxis()->SetTitle("m(J/#psi #pi) [GeV/c^{2}]");
	c->SaveAs("plots_Bu2JpsiK_reflections.pdf");
}
int main(){
	Bu2JpsiK_reflections t;
	t.Loop();
	return 1;
}
