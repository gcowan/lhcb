#define MakePlots_cxx
#include "MakePlots.h"
#include <TLorentzVector.h>
#include <TNtuple.h>
#include <TFile.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void MakePlots::Loop()
{
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   TFile * file = TFile::Open("file.root","RECREATE");
   TNtuple * tuple = new TNtuple("tuple","tuple", "mJpsiK:mKK");

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
   
	if ( !((B_s0_LOKI_DTF_CTAU/0.2997>1)&&(B_s0_Hlt1TrackAllL0Decision_TOS==1||B_s0_Hlt1TrackMuonDecision_TOS==1)&&(B_s0_Hlt2TopoMu2BodyBBDTDecision_TOS==1||B_s0_Hlt2TopoMu3BodyBBDTDecision_TOS==1||B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS==1) ) ) continue;

		double mK = 139.57018;
		double mpi = 493.68;
		double mmu = 105.658;
		double mJpsi = 3096.916;
		//double mpi = 938.27;	
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
		TLorentzVector JpsiKp = Jpsi_constr + Kplus;
		TLorentzVector JpsiKm = Jpsi_constr + Kminus;
		TLorentzVector B = Jpsi_constr + KK;
		TLorentzVector BKpi = Jpsi_constr + Kpi;
		TLorentzVector BpiK = Jpsi_constr + piK;

		tuple->Fill(JpsiKp.M(), KK.M());
		tuple->Fill(JpsiKm.M(), KK.M());

	}
	gROOT->ProcessLine(".x /home/gcowan/lhcb/lhcbStyle.C");
	
	TCanvas * c = new TCanvas();
	tuple->Draw("mJpsiK*mJpsiK:mKK*mKK");
	c->SaveAs("dalitz.pdf");

	tuple->Write();	
	file->Close();

}

int main(){
	MakePlots t;
	t.Loop();
	return 1;
}

