//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jan 30 18:47:50 2014 by ROOT version 5.34/10
// from TTree tuple/tuple
// found on file: ../data/selected_candidates_with_correct_angles.root
//////////////////////////////////////////////////////////

#ifndef plot_legendre_moments_h
#define plot_legendre_moments_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class plot_legendre_moments {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Float_t         m23;
   Float_t         m13;
   Float_t         phi;
   Float_t         cosTheta2;
   Float_t         cosTheta1;
   Float_t         pionID;
   Float_t         Bd_sig_sw;
   Float_t         Bs_sig_sw;
   Float_t         B_s0_Mass_JpsiConstr;

   // List of branches
   TBranch        *b_m23;   //!
   TBranch        *b_m13;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_cosTheta2;   //!
   TBranch        *b_cosTheta1;   //!
   TBranch        *b_pionID;   //!
   TBranch        *b_Bd_sig_sw;   //!
   TBranch        *b_Bs_sig_sw;   //!
   TBranch        *b_B_s0_Mass_JpsiConstr;   //!

   plot_legendre_moments(TTree *tree=0);
   virtual ~plot_legendre_moments();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef plot_legendre_moments_cxx
plot_legendre_moments::plot_legendre_moments(TTree *tree) : fChain(0)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../data/selected_candidates_with_correct_angles.root");
      //TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../../2011_2012/tomasz_data/selected_candidates_with_correct_angles_data.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../data/selected_candidates_with_correct_angles.root");
         //f = new TFile("../../2011_2012/tomasz_data/selected_candidates_with_correct_angles_data.root");
      }
      f->GetObject("tuple",tree);

   }
   Init(tree);
}

plot_legendre_moments::~plot_legendre_moments()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t plot_legendre_moments::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t plot_legendre_moments::LoadTree(Long64_t entry)
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

void plot_legendre_moments::Init(TTree *tree)
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

   fChain->SetBranchAddress("m23", &m23, &b_m23);
   fChain->SetBranchAddress("m13", &m13, &b_m13);
   fChain->SetBranchAddress("phi", &phi, &b_phi);
   fChain->SetBranchAddress("cosTheta2", &cosTheta2, &b_cosTheta2);
   fChain->SetBranchAddress("cosTheta1", &cosTheta1, &b_cosTheta1);
   fChain->SetBranchAddress("pionID", &pionID, &b_pionID);
   fChain->SetBranchAddress("Bd_sig_sw", &Bd_sig_sw, &b_Bd_sig_sw);
   fChain->SetBranchAddress("Bs_sig_sw", &Bs_sig_sw, &b_Bs_sig_sw);
   fChain->SetBranchAddress("B_s0_Mass_JpsiConstr", &B_s0_Mass_JpsiConstr, &b_B_s0_Mass_JpsiConstr);
   Notify();
}

Bool_t plot_legendre_moments::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void plot_legendre_moments::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t plot_legendre_moments::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef plot_legendre_moments_cxx
