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

	Long64_t nbytes = 0, nb = 0;

	TFile * file = TFile::Open("mass_and_ipz.root", "RECREATE");
	TNtuple * tuple = new TNtuple("DecayTree","DecayTree", "mass:mu1_ipz:mu2_ipz:kaon_ipz:pion_ipz");

	for (Long64_t jentry=0; jentry<nentries;jentry++) {
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

	    tuple->Fill(Bd_M, Mu1_DOCAz_Bshift, Mu2_DOCAz_Bshift, K1_DOCAz_Bshift, Pi1_DOCAz_Bshift);	
	}

	tuple->Write();
	file->Close();

}
int main(){
	Bd2JpsiKst_reflections t;
	t.Loop();
	return 1;
}
