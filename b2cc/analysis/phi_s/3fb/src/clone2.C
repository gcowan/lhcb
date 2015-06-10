#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TChain.h>
#include <TNtuple.h>
#include <TFile.h>
#include <TLorentzVector.h>
#include <iostream>

void clone2();

void clone2() {
	TChain * chain = new TChain("DecayTree","");
	chain->Add("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_Bs2JpsiPhi_minimal_truth_with_IPz_weights_v2.root");
	
	chain->SetBranchStatus("*",0);
	chain->SetBranchStatus("runNumber",1);
	chain->SetBranchStatus("eventNumber",1);
	chain->SetBranchStatus("B_s0_LOKI_MASS_JpsiConstr",1);
	chain->SetBranchStatus("B_s0_TRUETAU",1);
	chain->SetBranchStatus("B_s0_LOKI_DTF_CTAU",1);
	chain->SetBranchStatus("B_s0_LOKI_DTF_CTAUERR",1);
	chain->SetBranchStatus("B_s0_LOKI_DTF_CHI2NDOF",1);
	chain->SetBranchStatus("B_s0_LOKI_DTF_VCHI2NDOF",1);
	chain->SetBranchStatus("B_s0_ENDVERTEX_CHI2",1);
	chain->SetBranchStatus("B_s0_ENDVERTEX_NDOF",1);
	chain->SetBranchStatus("B_s0_IPCHI2_OWNPV",1);
	chain->SetBranchStatus("B_s0_MINIPCHI2NEXTBEST",1);
	chain->SetBranchStatus("B_s0_BKGCAT",1); 
	chain->SetBranchStatus("helcosthetaL",1); // None of these angular variables are working
	chain->SetBranchStatus("helcosthetaK",1); // so need to calculate them myself
	chain->SetBranchStatus("helphi",1);    // for both truth and reconstructed variables
	chain->SetBranchStatus("cosTheta",1);
	chain->SetBranchStatus("cosPsi",1); 
	chain->SetBranchStatus("phi",1); 
	chain->SetBranchStatus("B_s0_TRUEID",1); 
	chain->SetBranchStatus("B_s0_Hlt1DiMuonHighMassDecision_TOS",1); 
	chain->SetBranchStatus("B_s0_Hlt1TrackMuonDecision_TOS", 1);
	chain->SetBranchStatus("B_s0_Hlt1TrackAllL0Decision_TOS", 1);
	chain->SetBranchStatus("B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS",1); 
	chain->SetBranchStatus("B_s0_Hlt2DiMuonJPsiDecision_TOS",1); 
	chain->SetBranchStatus("nPVs",1); 
	chain->SetBranchStatus("muplus_PT",1); 
	chain->SetBranchStatus("muminus_PT",1); 
	chain->SetBranchStatus("Kplus_PT",1); 
	chain->SetBranchStatus("Kminus_PT",1); 
	chain->SetBranchStatus("muminus_PIDmu",1); 
	chain->SetBranchStatus("muplus_PIDmu",1); 
	chain->SetBranchStatus("Kminus_PIDK",1); 
	chain->SetBranchStatus("Kplus_PIDK",1); 
	chain->SetBranchStatus("J_psi_1S_MM",1); 
	chain->SetBranchStatus("muplus_TRACK_CHI2NDOF",1); 
	chain->SetBranchStatus("muminus_TRACK_CHI2NDOF",1); 
	chain->SetBranchStatus("Kplus_TRACK_CHI2NDOF",1); 
	chain->SetBranchStatus("Kminus_TRACK_CHI2NDOF",1); 
	chain->SetBranchStatus("phi_1020_PT",1); 
	chain->SetBranchStatus("phi_1020_M",1); 
	chain->SetBranchStatus("phi_1020_ENDVERTEX_CHI2",1); 
	chain->SetBranchStatus("J_psi_1S_ENDVERTEX_NDOF",1); 
	chain->SetBranchStatus("J_psi_1S_ENDVERTEX_CHI2",1); 
	chain->SetBranchStatus("phi_1020_ENDVERTEX_NDOF",1); 
	chain->SetBranchStatus("B_velo_eff_weight_with_trigger",1); 
	chain->SetBranchStatus("B_velo_eff_weight_with_track_trigger",1); 
	
	TEntryList * elist = new TEntryList("elist");
	chain->Draw(">>elist");
	// Create a new file + a clone2 of old tree in new file
	TFile * newfile = new TFile("/tmp/small.root","recreate");
	TTree * newtree = chain->CloneTree();
	newtree->Print();
	newtree->AutoSave();
	delete chain;
	delete newfile;
}

int main()
{
	clone2();
	return 1;
}
