//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed May 29 13:31:56 2013 by ROOT version 5.34/05
// from TTree DecayTree/DecayTree
// found on file: ../../dataFiles/Bd2JpsiKstar_ntupleB_for_fitting_20120203_biased_RapidFit.root
//////////////////////////////////////////////////////////

#ifndef Bd2JpsiKst_reflections_h
#define Bd2JpsiKst_reflections_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class Bd2JpsiKst_reflections {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           eventNumber;
   Int_t           runNumber;
   Int_t           piddau1;
   Float_t         mdau1;
   Float_t         sigmadau1;
   Int_t           piddau2;
   Float_t         mdau2;
   Float_t         sigmamdau2;
   Int_t           decaytype;
   Int_t           pid;
   Float_t         B_P;
   Float_t         B_Pt;
   Float_t         B_eta;
   Float_t         B_phi;
   Float_t         mass;
   Float_t         sigmam;
   Float_t         time;
   Float_t         sigmat;
   Float_t         trcostheta;
   Float_t         trcospsi;
   Float_t         trphi;
   Float_t         helcosthetaK;
   Float_t         helcosthetaL;
   Float_t         helphi;
   Int_t           tagdecision;
   Int_t           tagcat;
   Float_t         tagomega;
   Int_t           tagdecision_os;
   Int_t           tagcat_os;
   Float_t         tagomega_os;
   Int_t           tagdecision_ss;
   Float_t         tagomega_ss;
   Int_t           klClone;
   Int_t           type1Clone;
   Int_t           type2Clone;
   Int_t           polarity;
   Int_t           triggerDecision;
   Int_t           triggerDecisionUnbiased;
   Float_t         piminus_pidK;
   Float_t         piminus_pidp;
   Float_t         Kplus_pidK;
   Float_t         Kplus_pidp;
   Float_t         Kplus_track_chi2ndof;
   Float_t         piminus_track_chi2ndof;
   Float_t         B0_endvertex_chi2;
   Int_t           B0_endvertex_ndof;
   Float_t         Kst_892_0_endvertex_chi2;
   Int_t           Kst_892_0_endvertex_ndof;
   Float_t         Kst_892_0_pt;
   Int_t           sel_qualitycut;
   Int_t           sel_cleantail;
   Int_t           sel_daughter1;
   Int_t           sel_clonecut;
   Float_t         B0_LOKI_DTF_VCHI2NDOF;
   Int_t           sel_onecand;
   Int_t           sel;
   Float_t         cosTheta;
   Float_t         cosPsi;
   Float_t         phi;
   Int_t           KstarFlavour;

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
   TBranch        *b_triggerDecision;   //!
   TBranch        *b_triggerDecisionUnbiased;   //!
   TBranch        *b_piminus_pidK;   //!
   TBranch        *b_piminus_pidp;   //!
   TBranch        *b_Kplus_pidK;   //!
   TBranch        *b_Kplus_pidp;   //!
   TBranch        *b_Kplus_track_chi2ndof;   //!
   TBranch        *b_piminus_track_chi2ndof;   //!
   TBranch        *b_B0_endvertex_chi2;   //!
   TBranch        *b_B0_endvertex_ndof;   //!
   TBranch        *b_Kst_892_0_endvertex_chi2;   //!
   TBranch        *b_Kst_892_0_endvertex_ndof;   //!
   TBranch        *b_Kst_892_0_pt;   //!
   TBranch        *b_sel_qualitycut;   //!
   TBranch        *b_sel_cleantail;   //!
   TBranch        *b_sel_daughter1;   //!
   TBranch        *b_sel_clonecut;   //!
   TBranch        *b_B0_LOKI_DTF_VCHI2NDOF;   //!
   TBranch        *b_sel_onecand;   //!
   TBranch        *b_sel;   //!
   TBranch        *b_cosTheta;   //!
   TBranch        *b_cosPsi;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_KstarFlavour;   //!

   Bd2JpsiKst_reflections(TTree *tree=0);
   virtual ~Bd2JpsiKst_reflections();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Bd2JpsiKst_reflections_cxx
Bd2JpsiKst_reflections::Bd2JpsiKst_reflections(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../../dataFiles/Bd2JpsiKstar_ntupleB_for_fitting_20120203_biased_RapidFit.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../../dataFiles/Bd2JpsiKstar_ntupleB_for_fitting_20120203_biased_RapidFit.root");
      }
      f->GetObject("DecayTree",tree);

   }
   Init(tree);
}

Bd2JpsiKst_reflections::~Bd2JpsiKst_reflections()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Bd2JpsiKst_reflections::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Bd2JpsiKst_reflections::LoadTree(Long64_t entry)
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

void Bd2JpsiKst_reflections::Init(TTree *tree)
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
   fChain->SetBranchAddress("triggerDecision", &triggerDecision, &b_triggerDecision);
   fChain->SetBranchAddress("triggerDecisionUnbiased", &triggerDecisionUnbiased, &b_triggerDecisionUnbiased);
   fChain->SetBranchAddress("piminus_pidK", &piminus_pidK, &b_piminus_pidK);
   fChain->SetBranchAddress("piminus_pidp", &piminus_pidp, &b_piminus_pidp);
   fChain->SetBranchAddress("Kplus_pidK", &Kplus_pidK, &b_Kplus_pidK);
   fChain->SetBranchAddress("Kplus_pidp", &Kplus_pidp, &b_Kplus_pidp);
   fChain->SetBranchAddress("Kplus_track_chi2ndof", &Kplus_track_chi2ndof, &b_Kplus_track_chi2ndof);
   fChain->SetBranchAddress("piminus_track_chi2ndof", &piminus_track_chi2ndof, &b_piminus_track_chi2ndof);
   fChain->SetBranchAddress("B0_endvertex_chi2", &B0_endvertex_chi2, &b_B0_endvertex_chi2);
   fChain->SetBranchAddress("B0_endvertex_ndof", &B0_endvertex_ndof, &b_B0_endvertex_ndof);
   fChain->SetBranchAddress("Kst_892_0_endvertex_chi2", &Kst_892_0_endvertex_chi2, &b_Kst_892_0_endvertex_chi2);
   fChain->SetBranchAddress("Kst_892_0_endvertex_ndof", &Kst_892_0_endvertex_ndof, &b_Kst_892_0_endvertex_ndof);
   fChain->SetBranchAddress("Kst_892_0_pt", &Kst_892_0_pt, &b_Kst_892_0_pt);
   fChain->SetBranchAddress("sel_qualitycut", &sel_qualitycut, &b_sel_qualitycut);
   fChain->SetBranchAddress("sel_cleantail", &sel_cleantail, &b_sel_cleantail);
   fChain->SetBranchAddress("sel_daughter1", &sel_daughter1, &b_sel_daughter1);
   fChain->SetBranchAddress("sel_clonecut", &sel_clonecut, &b_sel_clonecut);
   fChain->SetBranchAddress("B0_LOKI_DTF_VCHI2NDOF", &B0_LOKI_DTF_VCHI2NDOF, &b_B0_LOKI_DTF_VCHI2NDOF);
   fChain->SetBranchAddress("sel_onecand", &sel_onecand, &b_sel_onecand);
   fChain->SetBranchAddress("sel", &sel, &b_sel);
   fChain->SetBranchAddress("cosTheta", &cosTheta, &b_cosTheta);
   fChain->SetBranchAddress("cosPsi", &cosPsi, &b_cosPsi);
   fChain->SetBranchAddress("phi", &phi, &b_phi);
   fChain->SetBranchAddress("KstarFlavour", &KstarFlavour, &b_KstarFlavour);
   Notify();
}

Bool_t Bd2JpsiKst_reflections::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Bd2JpsiKst_reflections::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Bd2JpsiKst_reflections::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Bd2JpsiKst_reflections_cxx
