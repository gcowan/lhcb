//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu May  2 09:23:56 2013 by ROOT version 5.34/05
// from TTree DecayTree/DecayTree
// found on file: ../../data/Bs2JpsiPhi_2012_20130502_Kminus_pidp_tupleB.root
//////////////////////////////////////////////////////////

#ifndef swaps_h
#define swaps_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class swaps {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

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
   Int_t           pid;
   Double_t        B_P;
   Double_t        B_Pt;
   Double_t        B_eta;
   Double_t        B_phi;
   Double_t        mass;
   Double_t        sigmam;
   Double_t        time;
   Double_t        sigmat;
   Double_t        trcostheta;
   Double_t        trcospsi;
   Double_t        trphi;
   Double_t        helcosthetaK;
   Double_t        helcosthetaL;
   Double_t        helphi;
   Int_t           tagdecision;
   Int_t           tagcat;
   Double_t        tagomega;
   Int_t           tagdecision_os;
   Int_t           tagcat_os;
   Double_t        tagomega_os;
   Int_t           tagdecision_ss;
   Double_t        tagomega_ss;
   Int_t           klClone;
   Int_t           type1Clone;
   Int_t           type2Clone;
   Int_t           polarity;
   Int_t           triggerDecisionUnbiased;
   Int_t           triggerDecisionUnbiasedPrescaled;
   Int_t           triggerDecisionBiasedExcl;
   Int_t           hlt1_unbiased;
   Int_t           hlt1_unbiased_dec;
   Int_t           hlt1_biased;
   Int_t           hlt1_excl_biased;
   Int_t           hlt1_excl_biased_dec;
   Int_t           hlt2_unbiased;
   Int_t           hlt2_biased;
   Double_t        Kplus_pidK;
   Double_t        Kplus_pidp;
   Double_t        Kminus_pidK;
   Double_t        Kminus_pidp;
   Double_t        muplus_track_chi2ndof;
   Double_t        muminus_track_chi2ndof;
   Double_t        Kplus_track_chi2ndof;
   Double_t        Kminus_track_chi2ndof;
   Double_t        muplus_track_ghostprob;
   Double_t        muminus_track_ghostprob;
   Double_t        Kplus_track_ghostprob;
   Double_t        Kminus_track_ghostprob;
   Double_t        B_s0_endvertex_chi2;
   Int_t           B_s0_endvertex_ndof;
   Double_t        B_s0_ENDVERTEX_X;
   Double_t        B_s0_ENDVERTEX_Y;
   Double_t        B_s0_ENDVERTEX_Z;
   Double_t        B_s0_OWNPV_Z;
   Double_t        phi_1020_endvertex_chi2;
   Double_t        phi_1020_endvertex_ndof;
   Double_t        phi_1020_pt;
   Double_t        muminus_P;
   Double_t        muminus_PX;
   Double_t        muminus_PY;
   Double_t        muminus_PZ;
   Double_t        muminus_LOKI_ETA;
   Double_t        muplus_P;
   Double_t        muplus_PX;
   Double_t        muplus_PY;
   Double_t        muplus_PZ;
   Double_t        muplus_LOKI_ETA;
   Double_t        Kminus_PX;
   Double_t        Kminus_PY;
   Double_t        Kminus_PZ;
   Double_t        Kminus_LOKI_ETA;
   Double_t        Kplus_PX;
   Double_t        Kplus_PY;
   Double_t        Kplus_PZ;
   Double_t        Kplus_LOKI_ETA;
   Double_t        nPV;
   Double_t        nVeloTracks;
   Double_t        nTracks;
   Int_t           sel_qualitycut;
   Int_t           sel_cleantail;
   Int_t           sel_daughter1;
   Int_t           sel_clonecut;
   Double_t        B_s0_LOKI_DTF_VCHI2NDOF;
   Int_t           sel_onecand;
   Int_t           sel;

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
   TBranch        *b_pid;   //!
   TBranch        *b_B_P;   //!
   TBranch        *b_B_Pt;   //!
   TBranch        *b_B_eta;   //!
   TBranch        *b_B_phi;   //!
   TBranch        *b_mass;   //!
   TBranch        *b_sigmam;   //!
   TBranch        *b_time;   //!
   TBranch        *b_sigmat;   //!
   TBranch        *b_trcostheta;   //!
   TBranch        *b_trcospsi;   //!
   TBranch        *b_trphi;   //!
   TBranch        *b_helcosthetaK;   //!
   TBranch        *b_helcosthetaL;   //!
   TBranch        *b_helphi;   //!
   TBranch        *b_tagdecision;   //!
   TBranch        *b_tagcat;   //!
   TBranch        *b_tagomega;   //!
   TBranch        *b_tagdecision_os;   //!
   TBranch        *b_tagcat_os;   //!
   TBranch        *b_tagomega_os;   //!
   TBranch        *b_tagdecision_ss;   //!
   TBranch        *b_tagomega_ss;   //!
   TBranch        *b_klClone;   //!
   TBranch        *b_type1Clone;   //!
   TBranch        *b_type2Clone;   //!
   TBranch        *b_polarity;   //!
   TBranch        *b_triggerDecisionUnbiased;   //!
   TBranch        *b_triggerDecisionUnbiasedPrescaled;   //!
   TBranch        *b_triggerDecisionBiasedExcl;   //!
   TBranch        *b_hlt1_unbiased;   //!
   TBranch        *b_hlt1_unbiased_dec;   //!
   TBranch        *b_hlt1_biased;   //!
   TBranch        *b_hlt1_excl_biased;   //!
   TBranch        *b_hlt1_excl_biased_dec;   //!
   TBranch        *b_hlt2_unbiased;   //!
   TBranch        *b_hlt2_biased;   //!
   TBranch        *b_Kplus_pidK;   //!
   TBranch        *b_Kplus_pidp;   //!
   TBranch        *b_Kminus_pidK;   //!
   TBranch        *b_Kminus_pidp;   //!
   TBranch        *b_muplus_track_chi2ndof;   //!
   TBranch        *b_muminus_track_chi2ndof;   //!
   TBranch        *b_Kplus_track_chi2ndof;   //!
   TBranch        *b_Kminus_track_chi2ndof;   //!
   TBranch        *b_muplus_track_ghostprob;   //!
   TBranch        *b_muminus_track_ghostprob;   //!
   TBranch        *b_Kplus_track_ghostprob;   //!
   TBranch        *b_Kminus_track_ghostprob;   //!
   TBranch        *b_B_s0_endvertex_chi2;   //!
   TBranch        *b_B_s0_endvertex_ndof;   //!
   TBranch        *b_B_s0_ENDVERTEX_X;   //!
   TBranch        *b_B_s0_ENDVERTEX_Y;   //!
   TBranch        *b_B_s0_ENDVERTEX_Z;   //!
   TBranch        *b_B_s0_OWNPV_Z;   //!
   TBranch        *b_phi_1020_endvertex_chi2;   //!
   TBranch        *b_phi_1020_endvertex_ndof;   //!
   TBranch        *b_phi_1020_pt;   //!
   TBranch        *b_muminus_P;   //!
   TBranch        *b_muminus_PX;   //!
   TBranch        *b_muminus_PY;   //!
   TBranch        *b_muminus_PZ;   //!
   TBranch        *b_muminus_LOKI_ETA;   //!
   TBranch        *b_muplus_P;   //!
   TBranch        *b_muplus_PX;   //!
   TBranch        *b_muplus_PY;   //!
   TBranch        *b_muplus_PZ;   //!
   TBranch        *b_muplus_LOKI_ETA;   //!
   TBranch        *b_Kminus_PX;   //!
   TBranch        *b_Kminus_PY;   //!
   TBranch        *b_Kminus_PZ;   //!
   TBranch        *b_Kminus_LOKI_ETA;   //!
   TBranch        *b_Kplus_PX;   //!
   TBranch        *b_Kplus_PY;   //!
   TBranch        *b_Kplus_PZ;   //!
   TBranch        *b_Kplus_LOKI_ETA;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_nVeloTracks;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_sel_qualitycut;   //!
   TBranch        *b_sel_cleantail;   //!
   TBranch        *b_sel_daughter1;   //!
   TBranch        *b_sel_clonecut;   //!
   TBranch        *b_B_s0_LOKI_DTF_VCHI2NDOF;   //!
   TBranch        *b_sel_onecand;   //!
   TBranch        *b_sel;   //!

   swaps(TTree *tree=0);
   virtual ~swaps();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef swaps_cxx
swaps::swaps(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../../../../phi_s_old/3fb/data/Bs2JpsiPhi_2012_20130502_Kminus_pidp_tupleB.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../../../../phi_s_old/3fb/data/Bs2JpsiPhi_2012_20130502_Kminus_pidp_tupleB.root");
      }
      f->GetObject("DecayTree",tree);

   }
   Init(tree);
}

swaps::~swaps()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t swaps::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t swaps::LoadTree(Long64_t entry)
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

void swaps::Init(TTree *tree)
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
   fChain->SetBranchAddress("pid", &pid, &b_pid);
   fChain->SetBranchAddress("B_P", &B_P, &b_B_P);
   fChain->SetBranchAddress("B_Pt", &B_Pt, &b_B_Pt);
   fChain->SetBranchAddress("B_eta", &B_eta, &b_B_eta);
   fChain->SetBranchAddress("B_phi", &B_phi, &b_B_phi);
   fChain->SetBranchAddress("mass", &mass, &b_mass);
   fChain->SetBranchAddress("sigmam", &sigmam, &b_sigmam);
   fChain->SetBranchAddress("time", &time, &b_time);
   fChain->SetBranchAddress("sigmat", &sigmat, &b_sigmat);
   fChain->SetBranchAddress("trcostheta", &trcostheta, &b_trcostheta);
   fChain->SetBranchAddress("trcospsi", &trcospsi, &b_trcospsi);
   fChain->SetBranchAddress("trphi", &trphi, &b_trphi);
   fChain->SetBranchAddress("helcosthetaK", &helcosthetaK, &b_helcosthetaK);
   fChain->SetBranchAddress("helcosthetaL", &helcosthetaL, &b_helcosthetaL);
   fChain->SetBranchAddress("helphi", &helphi, &b_helphi);
   fChain->SetBranchAddress("tagdecision", &tagdecision, &b_tagdecision);
   fChain->SetBranchAddress("tagcat", &tagcat, &b_tagcat);
   fChain->SetBranchAddress("tagomega", &tagomega, &b_tagomega);
   fChain->SetBranchAddress("tagdecision_os", &tagdecision_os, &b_tagdecision_os);
   fChain->SetBranchAddress("tagcat_os", &tagcat_os, &b_tagcat_os);
   fChain->SetBranchAddress("tagomega_os", &tagomega_os, &b_tagomega_os);
   fChain->SetBranchAddress("tagdecision_ss", &tagdecision_ss, &b_tagdecision_ss);
   fChain->SetBranchAddress("tagomega_ss", &tagomega_ss, &b_tagomega_ss);
   fChain->SetBranchAddress("klClone", &klClone, &b_klClone);
   fChain->SetBranchAddress("type1Clone", &type1Clone, &b_type1Clone);
   fChain->SetBranchAddress("type2Clone", &type2Clone, &b_type2Clone);
   fChain->SetBranchAddress("polarity", &polarity, &b_polarity);
   fChain->SetBranchAddress("triggerDecisionUnbiased", &triggerDecisionUnbiased, &b_triggerDecisionUnbiased);
   fChain->SetBranchAddress("triggerDecisionUnbiasedPrescaled", &triggerDecisionUnbiasedPrescaled, &b_triggerDecisionUnbiasedPrescaled);
   fChain->SetBranchAddress("triggerDecisionBiasedExcl", &triggerDecisionBiasedExcl, &b_triggerDecisionBiasedExcl);
   fChain->SetBranchAddress("hlt1_unbiased", &hlt1_unbiased, &b_hlt1_unbiased);
   fChain->SetBranchAddress("hlt1_unbiased_dec", &hlt1_unbiased_dec, &b_hlt1_unbiased_dec);
   fChain->SetBranchAddress("hlt1_biased", &hlt1_biased, &b_hlt1_biased);
   fChain->SetBranchAddress("hlt1_excl_biased", &hlt1_excl_biased, &b_hlt1_excl_biased);
   fChain->SetBranchAddress("hlt1_excl_biased_dec", &hlt1_excl_biased_dec, &b_hlt1_excl_biased_dec);
   fChain->SetBranchAddress("hlt2_unbiased", &hlt2_unbiased, &b_hlt2_unbiased);
   fChain->SetBranchAddress("hlt2_biased", &hlt2_biased, &b_hlt2_biased);
   fChain->SetBranchAddress("Kplus_pidK", &Kplus_pidK, &b_Kplus_pidK);
   fChain->SetBranchAddress("Kplus_pidp", &Kplus_pidp, &b_Kplus_pidp);
   fChain->SetBranchAddress("Kminus_pidK", &Kminus_pidK, &b_Kminus_pidK);
   fChain->SetBranchAddress("Kminus_pidp", &Kminus_pidp, &b_Kminus_pidp);
   fChain->SetBranchAddress("muplus_track_chi2ndof", &muplus_track_chi2ndof, &b_muplus_track_chi2ndof);
   fChain->SetBranchAddress("muminus_track_chi2ndof", &muminus_track_chi2ndof, &b_muminus_track_chi2ndof);
   fChain->SetBranchAddress("Kplus_track_chi2ndof", &Kplus_track_chi2ndof, &b_Kplus_track_chi2ndof);
   fChain->SetBranchAddress("Kminus_track_chi2ndof", &Kminus_track_chi2ndof, &b_Kminus_track_chi2ndof);
   fChain->SetBranchAddress("muplus_track_ghostprob", &muplus_track_ghostprob, &b_muplus_track_ghostprob);
   fChain->SetBranchAddress("muminus_track_ghostprob", &muminus_track_ghostprob, &b_muminus_track_ghostprob);
   fChain->SetBranchAddress("Kplus_track_ghostprob", &Kplus_track_ghostprob, &b_Kplus_track_ghostprob);
   fChain->SetBranchAddress("Kminus_track_ghostprob", &Kminus_track_ghostprob, &b_Kminus_track_ghostprob);
   fChain->SetBranchAddress("B_s0_endvertex_chi2", &B_s0_endvertex_chi2, &b_B_s0_endvertex_chi2);
   fChain->SetBranchAddress("B_s0_endvertex_ndof", &B_s0_endvertex_ndof, &b_B_s0_endvertex_ndof);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_X", &B_s0_ENDVERTEX_X, &b_B_s0_ENDVERTEX_X);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_Y", &B_s0_ENDVERTEX_Y, &b_B_s0_ENDVERTEX_Y);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_Z", &B_s0_ENDVERTEX_Z, &b_B_s0_ENDVERTEX_Z);
   fChain->SetBranchAddress("B_s0_OWNPV_Z", &B_s0_OWNPV_Z, &b_B_s0_OWNPV_Z);
   fChain->SetBranchAddress("phi_1020_endvertex_chi2", &phi_1020_endvertex_chi2, &b_phi_1020_endvertex_chi2);
   fChain->SetBranchAddress("phi_1020_endvertex_ndof", &phi_1020_endvertex_ndof, &b_phi_1020_endvertex_ndof);
   fChain->SetBranchAddress("phi_1020_pt", &phi_1020_pt, &b_phi_1020_pt);
   fChain->SetBranchAddress("muminus_P", &muminus_P, &b_muminus_P);
   fChain->SetBranchAddress("muminus_PX", &muminus_PX, &b_muminus_PX);
   fChain->SetBranchAddress("muminus_PY", &muminus_PY, &b_muminus_PY);
   fChain->SetBranchAddress("muminus_PZ", &muminus_PZ, &b_muminus_PZ);
   fChain->SetBranchAddress("muminus_LOKI_ETA", &muminus_LOKI_ETA, &b_muminus_LOKI_ETA);
   fChain->SetBranchAddress("muplus_P", &muplus_P, &b_muplus_P);
   fChain->SetBranchAddress("muplus_PX", &muplus_PX, &b_muplus_PX);
   fChain->SetBranchAddress("muplus_PY", &muplus_PY, &b_muplus_PY);
   fChain->SetBranchAddress("muplus_PZ", &muplus_PZ, &b_muplus_PZ);
   fChain->SetBranchAddress("muplus_LOKI_ETA", &muplus_LOKI_ETA, &b_muplus_LOKI_ETA);
   fChain->SetBranchAddress("Kminus_PX", &Kminus_PX, &b_Kminus_PX);
   fChain->SetBranchAddress("Kminus_PY", &Kminus_PY, &b_Kminus_PY);
   fChain->SetBranchAddress("Kminus_PZ", &Kminus_PZ, &b_Kminus_PZ);
   fChain->SetBranchAddress("Kminus_LOKI_ETA", &Kminus_LOKI_ETA, &b_Kminus_LOKI_ETA);
   fChain->SetBranchAddress("Kplus_PX", &Kplus_PX, &b_Kplus_PX);
   fChain->SetBranchAddress("Kplus_PY", &Kplus_PY, &b_Kplus_PY);
   fChain->SetBranchAddress("Kplus_PZ", &Kplus_PZ, &b_Kplus_PZ);
   fChain->SetBranchAddress("Kplus_LOKI_ETA", &Kplus_LOKI_ETA, &b_Kplus_LOKI_ETA);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("nVeloTracks", &nVeloTracks, &b_nVeloTracks);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("sel_qualitycut", &sel_qualitycut, &b_sel_qualitycut);
   fChain->SetBranchAddress("sel_cleantail", &sel_cleantail, &b_sel_cleantail);
   fChain->SetBranchAddress("sel_daughter1", &sel_daughter1, &b_sel_daughter1);
   fChain->SetBranchAddress("sel_clonecut", &sel_clonecut, &b_sel_clonecut);
   fChain->SetBranchAddress("B_s0_LOKI_DTF_VCHI2NDOF", &B_s0_LOKI_DTF_VCHI2NDOF, &b_B_s0_LOKI_DTF_VCHI2NDOF);
   fChain->SetBranchAddress("sel_onecand", &sel_onecand, &b_sel_onecand);
   fChain->SetBranchAddress("sel", &sel, &b_sel);
   Notify();
}

Bool_t swaps::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void swaps::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t swaps::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef swaps_cxx
