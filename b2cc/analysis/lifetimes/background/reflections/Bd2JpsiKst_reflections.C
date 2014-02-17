#define Bd2JpsiKst_reflections_cxx
#include "Bd2JpsiKst_reflections.h"
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

void Bd2JpsiKst_reflections::Loop()
{
	gROOT->ProcessLine(".x /Users/gcowan/lhcb/lhcbStyle.C");
	if (fChain == 0) return;

	Long64_t nentries = fChain->GetEntriesFast();

	//TH1D * mKK  = new TH1D("mKK", "mKK", 100, 0.99, 1.050);
	TH1D * mKK  = new TH1D("mKK", "mKK", 100, 0.826, 0.966);
	//TH1D * mKK  = new TH1D("mKK", "mKK", 100, 1.45, 1.55);
	//TH1D * mKK  = new TH1D("mKK", "mKK", 100, 0.4, 0.6);
	TH1D * mKpi = new TH1D("mKpi", "mKpi", 100, 0.826, 0.966);
	TH1D * massHisto  = new TH1D("mBd_DTF", "mBd_DTF", 100, 5.15, 5.4);
	TH1D * mBd  = new TH1D("mBd", "mBd", 100, 5.15, 5.4);
	TH1D * mBs  = new TH1D("mBs", "mBs", 100, 5.20, 5.55);
	TH1D * mB_lower = new TH1D("lower_sideband", "lower_sideband", 100, 5.15, 5.4);
	TH1D * mB_upper = new TH1D("upper_sideband", "upper_sideband", 100, 5.15, 5.4);
	//TH1D * mB_lower = new TH1D("lower_sideband", "lower_sideband", 60, 5.3, 5.45); // for looking at Bs -> JpsiKK where K -> pi misid
	//TH1D * mB_upper = new TH1D("upper_sideband", "upper_sideband", 60, 5.3, 5.45);// for looking at Bs -> JpsiKK where K -> pi misid
	//TH1D * mB_lower = new TH1D("lower_sideband", "lower_sideband", 40, 5.55, 5.7);
	//TH1D * mB_upper = new TH1D("upper_sideband", "upper_sideband", 40, 5.55, 5.7);
	TH1D * mJpsi_ = new TH1D("mJpsi", "mJpsi", 100, 3.03, 3.15);
	TH1D * mJpsi_constr = new TH1D("mJpsi_constr", "mJpsi", 100, 3.03, 3.15);
	TH1D * kaonPX_lab = new TH1D("kaonPX_lab", "kaon PX lab", 100, 0, 10);
	TH1D * kaonPX_B = new TH1D("kaonPX_B", "kaon PX B-frame", 100, 0, 5);
	TH1D * kaonPX_B2 = new TH1D("kaonPX_B2", "kaon PX B-frame", 100, 0, 5);
	kaonPX_B2->SetLineColor(kRed);

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
      if(Pi1_Eta<2.0 || Pi1_Eta > 4.5)    continue;
      if(std::fabs(Bd_PVz)>100.) continue;

      if(Bd_DTFChi2ndof>3.) continue;   
      if(Bd_IPChi2>25.) continue;
      if(Bd_2ndBestIPChi2 < 50. && Bd_2ndBestIPChi2 > 0.)continue;
      if ((Bd_M < 5150.) || (Bd_M > 5400.))continue;


      if(K1_DLLk < 0.) continue;
      if(Pi1_DLLk > 0.) continue;
      if(K1_TrackChi2ndof > 4.) continue;
      if(Pi1_TrackChi2ndof > 4.) continue;
      if(Kstar_Pt < 1500.) continue;
      if(Kstar_M < 822. || Kstar_M > 962.)continue;
      if(Pi1_Pt < 300.) continue;

      if(JPsi_M < 3030. || JPsi_M > 3150.)continue;
      if(JPsi_VtxChi2ndof > 16.)continue; 
      if(Mu1_Pt<550.)    continue;
      if(Mu2_Pt<550.)     continue;
      if(Mu1_DLLmu < 0.) continue;    
      if(Mu2_DLLmu < 0.) continue;
      if(Mu1_TrackChi2ndof > 4.) continue;
      if(Mu2_TrackChi2ndof > 4.) continue;

      if(Bd_ct< 0.3) continue;
      if(Bd_ct> 14.) continue;
      if(Bd_hasBestDTFCHI2 != 1) continue;

      //Trigger
      if(Ev_L0 != 1) continue;
      if(Bd_Hlt1DiMuonHighMass_TOS != 1) continue;
      if(Bd_Hlt2DiMuonDetachedJPsi_TOS != 1) continue;  

		double mpi = 139.57018;
		double mK = 493.68;
		double mmu = 105.658;
		double mJpsi = 3096.916;
		double mp = 938.27;
		TLorentzVector Kplus(K1_Px, K1_Py, K1_Pz, sqrt(K1_Px*K1_Px+K1_Py*K1_Py+K1_Pz*K1_Pz + mK*mK));
		TLorentzVector Piminus(Pi1_Px, Pi1_Py, Pi1_Pz, sqrt(Pi1_Px*Pi1_Px+Pi1_Py*Pi1_Py+Pi1_Pz*Pi1_Pz + mpi*mpi));
		TLorentzVector KplusWrong(K1_Px, K1_Py, K1_Pz, sqrt(K1_Px*K1_Px+K1_Py*K1_Py+K1_Pz*K1_Pz + mpi*mpi));
		TLorentzVector PiminusWrong(Pi1_Px, Pi1_Py, Pi1_Pz, sqrt(Pi1_Px*Pi1_Px+Pi1_Py*Pi1_Py+Pi1_Pz*Pi1_Pz + mK*mK));
		//TLorentzVector PiminusWrong(Pi1_Px, Pi1_Py, Pi1_Pz, sqrt(Pi1_Px*Pi1_Px+Pi1_Py*Pi1_Py+Pi1_Pz*Pi1_Pz + mp*mp));
		TLorentzVector muplus(Mu1_Px, Mu1_Py, Mu1_Pz, sqrt(Mu1_P*Mu1_P + mmu*mmu));
		TLorentzVector muminus(Mu2_Px, Mu2_Py, Mu2_Pz, sqrt(Mu2_P*Mu2_P + mmu*mmu));
		TLorentzVector Jpsi = muplus + muminus;
		TLorentzVector Jpsi_constr(Mu2_Px+Mu1_Px, Mu2_Py+Mu1_Py, Mu2_Pz+Mu1_Pz, sqrt(Jpsi.P()*Jpsi.P() + mJpsi*mJpsi));
		
		//TLorentzVector KK = Kplus + PiminusWrong; // testing Bs -> JpsiKK hypothesis
		//TLorentzVector KK = Piminus + KplusWrong; // testing Bd -> Jpsi pipi hypothesis
		TLorentzVector KK = PiminusWrong + KplusWrong; // testing Bd -> Jpsi piK hypothesis (double mis-ID)
		TLorentzVector Kpi = Kplus + Piminus;
		TLorentzVector B = Jpsi_constr + Kpi;
		TLorentzVector BKK = Jpsi_constr + KK;
		
		mKK->Fill(KK.M()/1000.);
		mKpi->Fill(Kpi.M()/1000.);
		mBd->Fill(B.M()/1000.);
		massHisto->Fill(Bd_M/1000.);
		mJpsi_->Fill(Jpsi.M()/1000.);
		mJpsi_constr->Fill(Jpsi_constr.M()/1000.);
		//if (Bd_M > 5320) 
			mB_upper->Fill(BKK.M()/1000.);
		//if (Bd_M < 5230) 
			mB_lower->Fill(BKK.M()/1000.);
		if (Bd_M > 5320) tuple->Fill(BKK.M());

		double mB = 5279.;
		kaonPX_lab->Fill(sqrt(K1_Px/1000.*K1_Px/1000. + K1_Py/1000.*K1_Py/1000.));
		TLorentzVector Bd(Bd_Px, Bd_Py, Bd_Pz, sqrt(Bd_Px*Bd_Px+Bd_Py*Bd_Py+Bd_Pz*Bd_Pz + mB*mB));		
		Kplus.Boost(-Bd.BoostVector());
		Bd.Boost(-Bd.BoostVector());
		kaonPX_B->Fill(sqrt(Kplus.X()/1000.*Kplus.X()/1000. + Kplus.Y()/1000.*Kplus.Y()/1000.));
		if (sqrt(K1_Px/1000.*K1_Px/1000. + K1_Py/1000.*K1_Py/1000.) > 1.) kaonPX_B2->Fill(sqrt(Kplus.X()/1000.*Kplus.X()/1000. + Kplus.Y()/1000.*Kplus.Y()/1000.));
		//std::cout << Bd.X() << " " << Bd.Y() << " " << Bd.Z() << " " << Bd.M() << std::endl;
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
	//mKK->GetXaxis()->SetTitle("m(KK) [GeV/c^{2}]");
	//mKK->GetXaxis()->SetTitle("m(Kp) [GeV/c^{2}]");
	mKK->GetXaxis()->SetTitle("m(#pi K) [GeV/c^{2}]");
	c->cd(2);
	mJpsi_->Draw();
	mJpsi_->SetTitle("");
	mJpsi_->GetXaxis()->SetTitle("m(#mu#mu) [GeV/c^{2}]");
	c->cd(3);
	mKpi->Draw();
	mKpi->SetTitle("");
	mKpi->GetXaxis()->SetTitle("m(K#pi) [GeV/c^{2}]");
	c->cd(4);
	massHisto->Draw();
	//massHisto->SetMaximum(1500);
	mBd->SetLineColor(kRed);
	mBd->Draw("same");
	massHisto->SetTitle("");
	massHisto->GetXaxis()->SetTitle("DTF m(J/#psi K#pi) [GeV/c^{2}]");
	c->cd(5);
	mB_lower->Draw();
	mB_lower->SetTitle("");
	mB_lower->GetXaxis()->SetTitle("m(J/#psi #pi K) [GeV/c^{2}]");
	//mB_lower->GetXaxis()->SetTitle("m(J/#psi Kp) [GeV/c^{2}]");
	//mB_lower->GetXaxis()->SetTitle("m(J/#psi KK) [GeV/c^{2}]");
	c->cd(6);
	mB_upper->Draw();
	mB_upper->SetTitle("");
	mB_upper->GetXaxis()->SetTitle("m(J/#psi #pi K) [GeV/c^{2}]");
	//mB_upper->GetXaxis()->SetTitle("m(J/#psi Kp) [GeV/c^{2}]");
	//mB_upper->GetXaxis()->SetTitle("m(J/#psi KK) [GeV/c^{2}]");
	c->SaveAs("plots_Bd2JpsiKst_reflections.pdf");

	TCanvas * d = new TCanvas();
	d->Divide(2,1);
	d->cd(1);
	kaonPX_lab->Draw();
	kaonPX_lab->GetXaxis()->SetTitle("kaon PT (lab-frame) [GeV/c^{2}]");
	d->cd(2);
	kaonPX_B->Draw();
	kaonPX_B2->Draw("same");
	kaonPX_B->GetXaxis()->SetTitle("kaon PT (B-frame) [GeV/c^{2}]");
	d->SaveAs("momenta.pdf");
	

}
int main(){
	Bd2JpsiKst_reflections t;
	t.Loop();
	return 1;
}
