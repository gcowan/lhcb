//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Feb 10 14:35:07 2016 by ROOT version 6.04/02
// from TTree DecayTree/DecayTree
// found on file: ../data/bd_data_sweighted.root
//////////////////////////////////////////////////////////

#ifndef Bd_swaps_h
#define Bd_swaps_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH1D.h>

// Header file for the classes stored in the TTree if any.

class Bd_swaps {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   ULong64_t       eventNumber;
   UInt_t          runNumber;
   Int_t           piddau1;
   Double_t        mdau1;
   Double_t        sigmadau1;
   Int_t           piddau2;
   Double_t        mdau2;
   Double_t        sigmamdau2;
   Int_t           decaytype;
   Double_t        muplus_ProbNNghost;
   Double_t        muminus_ProbNNghost;
   Double_t        muplus_ProbNNmu;
   Double_t        muminus_ProbNNmu;
   Double_t        Kplus_ProbNNghost;
   Double_t        piminus_ProbNNghost;
   Double_t        Kplus_ProbNNk;
   Double_t        Kplus_ProbNNp;
   Double_t        piminus_ProbNNk;
   Double_t        piminus_ProbNNpi;
   Double_t        piminus_ProbNNp;
   Int_t           pid;
   Double_t        B_P;
   Double_t        B_Pt;
   Double_t        B_eta;
   Double_t        B_phi;
   Double_t        B_FDS;
   Double_t        B_FD_OWNPV;
   Double_t        B_DIRA_OWNPV;
   Double_t        mass_JpsiConstr;
   Double_t        mass_psiConstr;
   Double_t        mass;
   Double_t        sigmam;
   Double_t        time;
   Double_t        sigmat;
   Double_t        trcostheta;
   Double_t        trcospsi;
   Double_t        trphi;
   Double_t        totCandidates;
   Double_t        helcosthetaK;
   Double_t        helcosthetaL;
   Double_t        helphi;
   Int_t           tagdecision_os_cb;
   Double_t        tagomega_os_cb;
   Int_t           tagdecision_ss_nn;
   Double_t        tagomega_ss_nn;
   Int_t           klClone;
   Int_t           type1Clone;
   Int_t           type2Clone;
   Int_t           polarity;
   Int_t           B_s0_Hlt2DiMuonPsi2SDecision_TOS;
   Int_t           B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS;
   Int_t           B_s0_Hlt2DiMuonDetachedHeavyDecision_TOS;
   Int_t           HLTTCK;
   Int_t           triggerDecisionUnbiased;
   Int_t           triggerDecisionUnbiased_2012;
   Int_t           triggerDecisionUnbiasedPrescaled;
   Int_t           triggerDecisionBiasedExcl;
   Int_t           triggerDecisionBiasedExcl_2012;
   Int_t           hlt1_unbiased;
   Int_t           hlt1_unbiased_dec;
   Int_t           hlt1_biased;
   Int_t           hlt1_excl_biased;
   Int_t           hlt1_excl_biased_dec;
   Int_t           hlt2_unbiased;
   Int_t           hlt2_biased;
   Double_t        Kplus_PIDK;
   Double_t        Kplus_PIDp;
   Double_t        piminus_PIDK;
   Double_t        piminus_PIDp;
   Double_t        muplus_PIDmu;
   Double_t        muminus_PIDmu;
   Double_t        muplus_track_chi2ndof;
   Double_t        muminus_track_chi2ndof;
   Double_t        Kplus_track_chi2ndof;
   Double_t        piminus_track_chi2ndof;
   Double_t        muplus_track_ghostprob;
   Double_t        muminus_track_ghostprob;
   Double_t        Kplus_track_ghostprob;
   Double_t        piminus_track_ghostprob;
   Double_t        muplus_MINIPCHI2;
   Double_t        muminus_MINIPCHI2;
   Double_t        Kplus_MINIPCHI2;
   Double_t        piminus_MINIPCHI2;
   Double_t        muplus_MINIP;
   Double_t        muminus_MINIP;
   Double_t        Kplus_MINIP;
   Double_t        piminus_MINIP;
   Double_t        B0_endvertex_chi2;
   Double_t        B0_ip_ownpv;
   Int_t           B0_endvertex_ndof;
   Double_t        B0_ENDVERTEX_X;
   Double_t        B0_ENDVERTEX_Y;
   Double_t        B0_ENDVERTEX_Z;
   Double_t        B0_OWNPV_Z;
   Double_t        B0_pt;
   Double_t        psi_2S_endvertex_chi2;
   Double_t        Kst_892_0_endvertex_chi2;
   Double_t        Kst_892_0_endvertex_ndof;
   Double_t        Kst_892_0_pt;
   Double_t        psi_2S_pt;
   Double_t        muminus_P;
   Double_t        muminus_PX;
   Double_t        muminus_PY;
   Double_t        muminus_PZ;
   Double_t        muminus_PT;
   Double_t        muminus_LOKI_ETA;
   Double_t        muplus_P;
   Double_t        muplus_PX;
   Double_t        muplus_PY;
   Double_t        muplus_PZ;
   Double_t        muplus_PT;
   Double_t        muplus_LOKI_ETA;
   Double_t        piminus_PX;
   Double_t        piminus_PY;
   Double_t        piminus_PZ;
   Double_t        piminus_PT;
   Double_t        piminus_LOKI_ETA;
   Double_t        Kplus_PX;
   Double_t        Kplus_PY;
   Double_t        Kplus_PZ;
   Double_t        Kplus_PT;
   Double_t        Kplus_LOKI_ETA;
   Double_t        nPV;
   Double_t        nVeloTracks;
   Double_t        nTracks;
   Int_t           sel_qualitycut;
   Int_t           sel_cleantail;
   Int_t           sel_daughter1;
   Int_t           sel_clonecut;
   Double_t        B0_LOKI_DTF_VCHI2NDOF;
   Double_t        B0_LOKI_DTF_CHI2NDOF;
   Int_t           sel;
   Double_t        bdt_score;
   Float_t         sweight_bs0;

   // List of branches
   TBranch        *b_eventNumber;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_piddau1;   //!
   TBranch        *b_mdau1;   //!
   TBranch        *b_sigmadau1;   //!
   TBranch        *b_piddau2;   //!
   TBranch        *b_mdau2;   //!
   TBranch        *b_sigmamdau2;   //!
   TBranch        *b_decaytype;   //!
   TBranch        *b_muplus_ProbNNghost;   //!
   TBranch        *b_muminus_ProbNNghost;   //!
   TBranch        *b_muplus_ProbNNmu;   //!
   TBranch        *b_muminus_ProbNNmu;   //!
   TBranch        *b_Kplus_ProbNNghost;   //!
   TBranch        *b_piminus_ProbNNghost;   //!
   TBranch        *b_Kplus_ProbNNk;   //!
   TBranch        *b_Kplus_ProbNNp;   //!
   TBranch        *b_piminus_ProbNNk;   //!
   TBranch        *b_piminus_ProbNNpi;   //!
   TBranch        *b_piminus_ProbNNp;   //!
   TBranch        *b_pid;   //!
   TBranch        *b_B_P;   //!
   TBranch        *b_B_Pt;   //!
   TBranch        *b_B_eta;   //!
   TBranch        *b_B_phi;   //!
   TBranch        *b_B_FDS;   //!
   TBranch        *b_B_FD_OWNPV;   //!
   TBranch        *b_B_DIRA_OWNPV;   //!
   TBranch        *b_mass_JpsiConstr;   //!
   TBranch        *b_mass_psiConstr;   //!
   TBranch        *b_mass;   //!
   TBranch        *b_sigmam;   //!
   TBranch        *b_time;   //!
   TBranch        *b_sigmat;   //!
   TBranch        *b_trcostheta;   //!
   TBranch        *b_trcospsi;   //!
   TBranch        *b_trphi;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_helcosthetaK;   //!
   TBranch        *b_helcosthetaL;   //!
   TBranch        *b_helphi;   //!
   TBranch        *b_tagdecision_os_cb;   //!
   TBranch        *b_tagomega_os_cb;   //!
   TBranch        *b_tagdecision_ss_nn;   //!
   TBranch        *b_tagomega_ss_nn;   //!
   TBranch        *b_klClone;   //!
   TBranch        *b_type1Clone;   //!
   TBranch        *b_type2Clone;   //!
   TBranch        *b_polarity;   //!
   TBranch        *b_B_s0_Hlt2DiMuonPsi2SDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedHeavyDecision_TOS;   //!
   TBranch        *b_HLTTCK;   //!
   TBranch        *b_triggerDecisionUnbiased;   //!
   TBranch        *b_triggerDecisionUnbiased_2012;   //!
   TBranch        *b_triggerDecisionUnbiasedPrescaled;   //!
   TBranch        *b_triggerDecisionBiasedExcl;   //!
   TBranch        *b_triggerDecisionBiasedExcl_2012;   //!
   TBranch        *b_hlt1_unbiased;   //!
   TBranch        *b_hlt1_unbiased_dec;   //!
   TBranch        *b_hlt1_biased;   //!
   TBranch        *b_hlt1_excl_biased;   //!
   TBranch        *b_hlt1_excl_biased_dec;   //!
   TBranch        *b_hlt2_unbiased;   //!
   TBranch        *b_hlt2_biased;   //!
   TBranch        *b_Kplus_PIDK;   //!
   TBranch        *b_Kplus_PIDp;   //!
   TBranch        *b_piminus_PIDK;   //!
   TBranch        *b_piminus_PIDp;   //!
   TBranch        *b_muplus_PIDmu;   //!
   TBranch        *b_muminus_PIDmu;   //!
   TBranch        *b_muplus_track_chi2ndof;   //!
   TBranch        *b_muminus_track_chi2ndof;   //!
   TBranch        *b_Kplus_track_chi2ndof;   //!
   TBranch        *b_piminus_track_chi2ndof;   //!
   TBranch        *b_muplus_track_ghostprob;   //!
   TBranch        *b_muminus_track_ghostprob;   //!
   TBranch        *b_Kplus_track_ghostprob;   //!
   TBranch        *b_piminus_track_ghostprob;   //!
   TBranch        *b_muplus_MINIPCHI2;   //!
   TBranch        *b_muminus_MINIPCHI2;   //!
   TBranch        *b_Kplus_MINIPCHI2;   //!
   TBranch        *b_piminus_MINIPCHI2;   //!
   TBranch        *b_muplus_MINIP;   //!
   TBranch        *b_muminus_MINIP;   //!
   TBranch        *b_Kplus_MINIP;   //!
   TBranch        *b_piminus_MINIP;   //!
   TBranch        *b_B0_endvertex_chi2;   //!
   TBranch        *b_B0_ip_ownpv;   //!
   TBranch        *b_B0_endvertex_ndof;   //!
   TBranch        *b_B0_ENDVERTEX_X;   //!
   TBranch        *b_B0_ENDVERTEX_Y;   //!
   TBranch        *b_B0_ENDVERTEX_Z;   //!
   TBranch        *b_B0_OWNPV_Z;   //!
   TBranch        *b_B0_pt;   //!
   TBranch        *b_psi_2S_endvertex_chi2;   //!
   TBranch        *b_Kst_892_0_endvertex_chi2;   //!
   TBranch        *b_Kst_892_0_endvertex_ndof;   //!
   TBranch        *b_Kst_892_0_pt;   //!
   TBranch        *b_psi_2S_pt;   //!
   TBranch        *b_muminus_P;   //!
   TBranch        *b_muminus_PX;   //!
   TBranch        *b_muminus_PY;   //!
   TBranch        *b_muminus_PZ;   //!
   TBranch        *b_muminus_PT;   //!
   TBranch        *b_muminus_LOKI_ETA;   //!
   TBranch        *b_muplus_P;   //!
   TBranch        *b_muplus_PX;   //!
   TBranch        *b_muplus_PY;   //!
   TBranch        *b_muplus_PZ;   //!
   TBranch        *b_muplus_PT;   //!
   TBranch        *b_muplus_LOKI_ETA;   //!
   TBranch        *b_piminus_PX;   //!
   TBranch        *b_piminus_PY;   //!
   TBranch        *b_piminus_PZ;   //!
   TBranch        *b_piminus_PT;   //!
   TBranch        *b_piminus_LOKI_ETA;   //!
   TBranch        *b_Kplus_PX;   //!
   TBranch        *b_Kplus_PY;   //!
   TBranch        *b_Kplus_PZ;   //!
   TBranch        *b_Kplus_PT;   //!
   TBranch        *b_Kplus_LOKI_ETA;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_nVeloTracks;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_sel_qualitycut;   //!
   TBranch        *b_sel_cleantail;   //!
   TBranch        *b_sel_daughter1;   //!
   TBranch        *b_sel_clonecut;   //!
   TBranch        *b_B0_LOKI_DTF_VCHI2NDOF;   //!
   TBranch        *b_B0_LOKI_DTF_CHI2NDOF;   //!
   TBranch        *b_sel;   //!
   TBranch        *b_eval;   //!
   TBranch        *b_sw;   //!

   Bd_swaps(TTree *tree=0);
   virtual ~Bd_swaps();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual int      Loop(TH1D * mKK, TH1D * mpipi, TH1D * MKpi, TH1D * mJpsiKpi, TH1D * mJpsiKpiwrong, TH1D * mJpsipiKwrong);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Bd_swaps_cxx
Bd_swaps::Bd_swaps(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../data/bd_data_sweighted.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../data/bd_data_sweighted.root");
      }
      f->GetObject("DecayTree",tree);

   }
   Init(tree);
}

Bd_swaps::~Bd_swaps()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Bd_swaps::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Bd_swaps::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Bd_swaps::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("piddau1", &piddau1, &b_piddau1);
   fChain->SetBranchAddress("mdau1", &mdau1, &b_mdau1);
   fChain->SetBranchAddress("sigmadau1", &sigmadau1, &b_sigmadau1);
   fChain->SetBranchAddress("piddau2", &piddau2, &b_piddau2);
   fChain->SetBranchAddress("mdau2", &mdau2, &b_mdau2);
   fChain->SetBranchAddress("sigmamdau2", &sigmamdau2, &b_sigmamdau2);
   fChain->SetBranchAddress("decaytype", &decaytype, &b_decaytype);
   fChain->SetBranchAddress("muplus_ProbNNghost", &muplus_ProbNNghost, &b_muplus_ProbNNghost);
   fChain->SetBranchAddress("muminus_ProbNNghost", &muminus_ProbNNghost, &b_muminus_ProbNNghost);
   fChain->SetBranchAddress("muplus_ProbNNmu", &muplus_ProbNNmu, &b_muplus_ProbNNmu);
   fChain->SetBranchAddress("muminus_ProbNNmu", &muminus_ProbNNmu, &b_muminus_ProbNNmu);
   fChain->SetBranchAddress("Kplus_ProbNNghost", &Kplus_ProbNNghost, &b_Kplus_ProbNNghost);
   fChain->SetBranchAddress("piminus_ProbNNghost", &piminus_ProbNNghost, &b_piminus_ProbNNghost);
   fChain->SetBranchAddress("Kplus_ProbNNk", &Kplus_ProbNNk, &b_Kplus_ProbNNk);
   fChain->SetBranchAddress("Kplus_ProbNNp", &Kplus_ProbNNp, &b_Kplus_ProbNNp);
   fChain->SetBranchAddress("piminus_ProbNNk", &piminus_ProbNNk, &b_piminus_ProbNNk);
   fChain->SetBranchAddress("piminus_ProbNNpi", &piminus_ProbNNpi, &b_piminus_ProbNNpi);
   fChain->SetBranchAddress("piminus_ProbNNp", &piminus_ProbNNp, &b_piminus_ProbNNp);
   fChain->SetBranchAddress("pid", &pid, &b_pid);
   fChain->SetBranchAddress("B_P", &B_P, &b_B_P);
   fChain->SetBranchAddress("B_Pt", &B_Pt, &b_B_Pt);
   fChain->SetBranchAddress("B_eta", &B_eta, &b_B_eta);
   fChain->SetBranchAddress("B_phi", &B_phi, &b_B_phi);
   fChain->SetBranchAddress("B_FDS", &B_FDS, &b_B_FDS);
   fChain->SetBranchAddress("B_FD_OWNPV", &B_FD_OWNPV, &b_B_FD_OWNPV);
   fChain->SetBranchAddress("B_DIRA_OWNPV", &B_DIRA_OWNPV, &b_B_DIRA_OWNPV);
   fChain->SetBranchAddress("mass_JpsiConstr", &mass_JpsiConstr, &b_mass_JpsiConstr);
   fChain->SetBranchAddress("mass_psiConstr", &mass_psiConstr, &b_mass_psiConstr);
   fChain->SetBranchAddress("mass", &mass, &b_mass);
   fChain->SetBranchAddress("sigmam", &sigmam, &b_sigmam);
   fChain->SetBranchAddress("time", &time, &b_time);
   fChain->SetBranchAddress("sigmat", &sigmat, &b_sigmat);
   fChain->SetBranchAddress("trcostheta", &trcostheta, &b_trcostheta);
   fChain->SetBranchAddress("trcospsi", &trcospsi, &b_trcospsi);
   fChain->SetBranchAddress("trphi", &trphi, &b_trphi);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("helcosthetaK", &helcosthetaK, &b_helcosthetaK);
   fChain->SetBranchAddress("helcosthetaL", &helcosthetaL, &b_helcosthetaL);
   fChain->SetBranchAddress("helphi", &helphi, &b_helphi);
   fChain->SetBranchAddress("tagdecision_os_cb", &tagdecision_os_cb, &b_tagdecision_os_cb);
   fChain->SetBranchAddress("tagomega_os_cb", &tagomega_os_cb, &b_tagomega_os_cb);
   fChain->SetBranchAddress("tagdecision_ss_nn", &tagdecision_ss_nn, &b_tagdecision_ss_nn);
   fChain->SetBranchAddress("tagomega_ss_nn", &tagomega_ss_nn, &b_tagomega_ss_nn);
   fChain->SetBranchAddress("klClone", &klClone, &b_klClone);
   fChain->SetBranchAddress("type1Clone", &type1Clone, &b_type1Clone);
   fChain->SetBranchAddress("type2Clone", &type2Clone, &b_type2Clone);
   fChain->SetBranchAddress("polarity", &polarity, &b_polarity);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonPsi2SDecision_TOS", &B_s0_Hlt2DiMuonPsi2SDecision_TOS, &b_B_s0_Hlt2DiMuonPsi2SDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS", &B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS, &b_B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedHeavyDecision_TOS", &B_s0_Hlt2DiMuonDetachedHeavyDecision_TOS, &b_B_s0_Hlt2DiMuonDetachedHeavyDecision_TOS);
   fChain->SetBranchAddress("HLTTCK", &HLTTCK, &b_HLTTCK);
   fChain->SetBranchAddress("triggerDecisionUnbiased", &triggerDecisionUnbiased, &b_triggerDecisionUnbiased);
   fChain->SetBranchAddress("triggerDecisionUnbiased_2012", &triggerDecisionUnbiased_2012, &b_triggerDecisionUnbiased_2012);
   fChain->SetBranchAddress("triggerDecisionUnbiasedPrescaled", &triggerDecisionUnbiasedPrescaled, &b_triggerDecisionUnbiasedPrescaled);
   fChain->SetBranchAddress("triggerDecisionBiasedExcl", &triggerDecisionBiasedExcl, &b_triggerDecisionBiasedExcl);
   fChain->SetBranchAddress("triggerDecisionBiasedExcl_2012", &triggerDecisionBiasedExcl_2012, &b_triggerDecisionBiasedExcl_2012);
   fChain->SetBranchAddress("hlt1_unbiased", &hlt1_unbiased, &b_hlt1_unbiased);
   fChain->SetBranchAddress("hlt1_unbiased_dec", &hlt1_unbiased_dec, &b_hlt1_unbiased_dec);
   fChain->SetBranchAddress("hlt1_biased", &hlt1_biased, &b_hlt1_biased);
   fChain->SetBranchAddress("hlt1_excl_biased", &hlt1_excl_biased, &b_hlt1_excl_biased);
   fChain->SetBranchAddress("hlt1_excl_biased_dec", &hlt1_excl_biased_dec, &b_hlt1_excl_biased_dec);
   fChain->SetBranchAddress("hlt2_unbiased", &hlt2_unbiased, &b_hlt2_unbiased);
   fChain->SetBranchAddress("hlt2_biased", &hlt2_biased, &b_hlt2_biased);
   fChain->SetBranchAddress("Kplus_PIDK", &Kplus_PIDK, &b_Kplus_PIDK);
   fChain->SetBranchAddress("Kplus_PIDp", &Kplus_PIDp, &b_Kplus_PIDp);
   fChain->SetBranchAddress("piminus_PIDK", &piminus_PIDK, &b_piminus_PIDK);
   fChain->SetBranchAddress("piminus_PIDp", &piminus_PIDp, &b_piminus_PIDp);
   fChain->SetBranchAddress("muplus_PIDmu", &muplus_PIDmu, &b_muplus_PIDmu);
   fChain->SetBranchAddress("muminus_PIDmu", &muminus_PIDmu, &b_muminus_PIDmu);
   fChain->SetBranchAddress("muplus_track_chi2ndof", &muplus_track_chi2ndof, &b_muplus_track_chi2ndof);
   fChain->SetBranchAddress("muminus_track_chi2ndof", &muminus_track_chi2ndof, &b_muminus_track_chi2ndof);
   fChain->SetBranchAddress("Kplus_track_chi2ndof", &Kplus_track_chi2ndof, &b_Kplus_track_chi2ndof);
   fChain->SetBranchAddress("piminus_track_chi2ndof", &piminus_track_chi2ndof, &b_piminus_track_chi2ndof);
   fChain->SetBranchAddress("muplus_track_ghostprob", &muplus_track_ghostprob, &b_muplus_track_ghostprob);
   fChain->SetBranchAddress("muminus_track_ghostprob", &muminus_track_ghostprob, &b_muminus_track_ghostprob);
   fChain->SetBranchAddress("Kplus_track_ghostprob", &Kplus_track_ghostprob, &b_Kplus_track_ghostprob);
   fChain->SetBranchAddress("piminus_track_ghostprob", &piminus_track_ghostprob, &b_piminus_track_ghostprob);
   fChain->SetBranchAddress("muplus_MINIPCHI2", &muplus_MINIPCHI2, &b_muplus_MINIPCHI2);
   fChain->SetBranchAddress("muminus_MINIPCHI2", &muminus_MINIPCHI2, &b_muminus_MINIPCHI2);
   fChain->SetBranchAddress("Kplus_MINIPCHI2", &Kplus_MINIPCHI2, &b_Kplus_MINIPCHI2);
   fChain->SetBranchAddress("piminus_MINIPCHI2", &piminus_MINIPCHI2, &b_piminus_MINIPCHI2);
   fChain->SetBranchAddress("muplus_MINIP", &muplus_MINIP, &b_muplus_MINIP);
   fChain->SetBranchAddress("muminus_MINIP", &muminus_MINIP, &b_muminus_MINIP);
   fChain->SetBranchAddress("Kplus_MINIP", &Kplus_MINIP, &b_Kplus_MINIP);
   fChain->SetBranchAddress("piminus_MINIP", &piminus_MINIP, &b_piminus_MINIP);
   fChain->SetBranchAddress("B0_endvertex_chi2", &B0_endvertex_chi2, &b_B0_endvertex_chi2);
   fChain->SetBranchAddress("B0_ip_ownpv", &B0_ip_ownpv, &b_B0_ip_ownpv);
   fChain->SetBranchAddress("B0_endvertex_ndof", &B0_endvertex_ndof, &b_B0_endvertex_ndof);
   fChain->SetBranchAddress("B0_ENDVERTEX_X", &B0_ENDVERTEX_X, &b_B0_ENDVERTEX_X);
   fChain->SetBranchAddress("B0_ENDVERTEX_Y", &B0_ENDVERTEX_Y, &b_B0_ENDVERTEX_Y);
   fChain->SetBranchAddress("B0_ENDVERTEX_Z", &B0_ENDVERTEX_Z, &b_B0_ENDVERTEX_Z);
   fChain->SetBranchAddress("B0_OWNPV_Z", &B0_OWNPV_Z, &b_B0_OWNPV_Z);
   fChain->SetBranchAddress("B0_pt", &B0_pt, &b_B0_pt);
   fChain->SetBranchAddress("psi_2S_endvertex_chi2", &psi_2S_endvertex_chi2, &b_psi_2S_endvertex_chi2);
   fChain->SetBranchAddress("Kst_892_0_endvertex_chi2", &Kst_892_0_endvertex_chi2, &b_Kst_892_0_endvertex_chi2);
   fChain->SetBranchAddress("Kst_892_0_endvertex_ndof", &Kst_892_0_endvertex_ndof, &b_Kst_892_0_endvertex_ndof);
   fChain->SetBranchAddress("Kst_892_0_pt", &Kst_892_0_pt, &b_Kst_892_0_pt);
   fChain->SetBranchAddress("psi_2S_pt", &psi_2S_pt, &b_psi_2S_pt);
   fChain->SetBranchAddress("muminus_P", &muminus_P, &b_muminus_P);
   fChain->SetBranchAddress("muminus_PX", &muminus_PX, &b_muminus_PX);
   fChain->SetBranchAddress("muminus_PY", &muminus_PY, &b_muminus_PY);
   fChain->SetBranchAddress("muminus_PZ", &muminus_PZ, &b_muminus_PZ);
   fChain->SetBranchAddress("muminus_PT", &muminus_PT, &b_muminus_PT);
   fChain->SetBranchAddress("muminus_LOKI_ETA", &muminus_LOKI_ETA, &b_muminus_LOKI_ETA);
   fChain->SetBranchAddress("muplus_P", &muplus_P, &b_muplus_P);
   fChain->SetBranchAddress("muplus_PX", &muplus_PX, &b_muplus_PX);
   fChain->SetBranchAddress("muplus_PY", &muplus_PY, &b_muplus_PY);
   fChain->SetBranchAddress("muplus_PZ", &muplus_PZ, &b_muplus_PZ);
   fChain->SetBranchAddress("muplus_PT", &muplus_PT, &b_muplus_PT);
   fChain->SetBranchAddress("muplus_LOKI_ETA", &muplus_LOKI_ETA, &b_muplus_LOKI_ETA);
   fChain->SetBranchAddress("piminus_PX", &piminus_PX, &b_piminus_PX);
   fChain->SetBranchAddress("piminus_PY", &piminus_PY, &b_piminus_PY);
   fChain->SetBranchAddress("piminus_PZ", &piminus_PZ, &b_piminus_PZ);
   fChain->SetBranchAddress("piminus_PT", &piminus_PT, &b_piminus_PT);
   fChain->SetBranchAddress("piminus_LOKI_ETA", &piminus_LOKI_ETA, &b_piminus_LOKI_ETA);
   fChain->SetBranchAddress("Kplus_PX", &Kplus_PX, &b_Kplus_PX);
   fChain->SetBranchAddress("Kplus_PY", &Kplus_PY, &b_Kplus_PY);
   fChain->SetBranchAddress("Kplus_PZ", &Kplus_PZ, &b_Kplus_PZ);
   fChain->SetBranchAddress("Kplus_PT", &Kplus_PT, &b_Kplus_PT);
   fChain->SetBranchAddress("Kplus_LOKI_ETA", &Kplus_LOKI_ETA, &b_Kplus_LOKI_ETA);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("nVeloTracks", &nVeloTracks, &b_nVeloTracks);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("sel_qualitycut", &sel_qualitycut, &b_sel_qualitycut);
   fChain->SetBranchAddress("sel_cleantail", &sel_cleantail, &b_sel_cleantail);
   fChain->SetBranchAddress("sel_daughter1", &sel_daughter1, &b_sel_daughter1);
   fChain->SetBranchAddress("sel_clonecut", &sel_clonecut, &b_sel_clonecut);
   fChain->SetBranchAddress("B0_LOKI_DTF_VCHI2NDOF", &B0_LOKI_DTF_VCHI2NDOF, &b_B0_LOKI_DTF_VCHI2NDOF);
   fChain->SetBranchAddress("B0_LOKI_DTF_CHI2NDOF", &B0_LOKI_DTF_CHI2NDOF, &b_B0_LOKI_DTF_CHI2NDOF);
   fChain->SetBranchAddress("sel", &sel, &b_sel);
   fChain->SetBranchAddress("bdt_score", &bdt_score, &b_eval);
   fChain->SetBranchAddress("sweight_bs0", &sweight_bs0, &b_sw);
   Notify();
}

Bool_t Bd_swaps::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Bd_swaps::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Bd_swaps::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Bd_swaps_cxx
