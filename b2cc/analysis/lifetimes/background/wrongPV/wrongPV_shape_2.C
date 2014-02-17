#define wrongPV_shape_2_cxx
#include "wrongPV_shape_2.h"
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

void wrongPV_shape_2::Loop()
{
	if (fChain == 0) return;

	Long64_t nentries = fChain->GetEntriesFast();

	TFile * file = TFile::Open("time_wrongPV_2.root", "RECREATE");
	TNtuple * tuple = new TNtuple("DecayTree","DecayTree", "mass:timeWrongPV");

	double mpi = 139.57018;
	double mK = 493.68;
	double mmu = 105.658;
	double mJpsi = 3096.916;
	double mp = 938.27;

	double decaytime(0.);
	double decaylength(0.);
	double mass(0.);
	double momentum(0.);

	Long64_t nbytes = 0, nb = 0;
	for (Long64_t jentry=0; jentry<nentries;jentry++) {
		Long64_t ientry = LoadTree(jentry);
		if (ientry < 0 ) break;
		nb = fChain->GetEntry(jentry);   nbytes += nb;

		TLorentzVector Kplus(K1_Px, K1_Py, K1_Pz, sqrt(K1_Px*K1_Px+K1_Py*K1_Py+K1_Pz*K1_Pz + mK*mK));
		TLorentzVector muplus(Mu1_Px, Mu1_Py, Mu1_Pz, sqrt(Mu1_P*Mu1_P + mmu*mmu));
		TLorentzVector muminus(Mu2_Px, Mu2_Py, Mu2_Pz, sqrt(Mu2_P*Mu2_P + mmu*mmu));
		TLorentzVector Jpsi = muplus + muminus;
		TLorentzVector Jpsi_constr(Mu2_Px+Mu1_Px, Mu2_Py+Mu1_Py, Mu2_Pz+Mu1_Pz, sqrt(Jpsi.P()*Jpsi.P() + mJpsi*mJpsi));
		TLorentzVector B = Jpsi_constr + Kplus;

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

		//if(Bu_ct< 0.3) continue;
		//if(Bu_ct> 14.) continue;
		if(Bu_hasBestDTFCHI2 != 1) continue;

		//Trigger
		if(Ev_L0 != 1) continue;
		if(Bu_Hlt1DiMuonHighMass_TOS != 1) continue;
		if(Bu_Hlt2DiMuonDetachedJPsi_TOS != 1) continue;  

		//std::cout << decaytime << std::endl;
		tuple->Fill(Bu_M,Bu_ct);
	}

	tuple->Write();
	file->Close();
}

int main(){
	wrongPV_shape_2 t;
	t.Loop();
	return 1;
}
