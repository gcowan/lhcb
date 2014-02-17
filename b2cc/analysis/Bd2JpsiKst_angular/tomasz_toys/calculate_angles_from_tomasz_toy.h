//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Feb 22 09:56:51 2013 by ROOT version 5.34/03
// from TTree RealVar/
// found on file: Noeff_all_ToyData.root
//////////////////////////////////////////////////////////

#ifndef calculate_angles_from_tomasz_toy_h
#define calculate_angles_from_tomasz_toy_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class calculate_angles_from_tomasz_toy {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        mu0px;
   Double_t        mu0py;
   Double_t        mu0pz;
   Double_t        mu0pe;
   Double_t        mu1px;
   Double_t        mu1py;
   Double_t        mu1pz;
   Double_t        mu1pe;
   Double_t        kpx;
   Double_t        kpy;
   Double_t        kpz;
   Double_t        kpe;
   Double_t        pipx;
   Double_t        pipy;
   Double_t        pipz;
   Double_t        pipe;
   Double_t        m12;
   Double_t        m13;
   Double_t        cospsi;
   Double_t        phipsi;
   Double_t        cospsi_z;
   Double_t        phipsi_z;
   Double_t        cosk;
   Double_t        cosz;
   Double_t        sig_sw;

   // List of branches
   TBranch        *b_mu0px;   //!
   TBranch        *b_mu0py;   //!
   TBranch        *b_mu0pz;   //!
   TBranch        *b_mu0pe;   //!
   TBranch        *b_mu1px;   //!
   TBranch        *b_mu1py;   //!
   TBranch        *b_mu1pz;   //!
   TBranch        *b_mu1pe;   //!
   TBranch        *b_kpx;   //!
   TBranch        *b_kpy;   //!
   TBranch        *b_kpz;   //!
   TBranch        *b_kpe;   //!
   TBranch        *b_pipx;   //!
   TBranch        *b_pipy;   //!
   TBranch        *b_pipz;   //!
   TBranch        *b_pipe;   //!
   TBranch        *b_m12;   //!
   TBranch        *b_m13;   //!
   TBranch        *b_cpspsi;   //!
   TBranch        *b_phipsi;   //!
   TBranch        *b_cospsi_z;   //!
   TBranch        *b_phipsi_z;   //!
   TBranch        *b_cosk;   //!
   TBranch        *b_cosz;   //!
   TBranch        *b_sig_sw;   //!

   calculate_angles_from_tomasz_toy(TTree *tree=0);
   virtual ~calculate_angles_from_tomasz_toy();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef calculate_angles_from_tomasz_toy_cxx
calculate_angles_from_tomasz_toy::calculate_angles_from_tomasz_toy(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      //TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Noeff_all_ToyData.root");
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Noeff_SP_ToyData.root");
      if (!f || !f->IsOpen()) {
         //f = new TFile("Noeff_all_ToyData.root");
         f = new TFile("Noeff_SP_ToyData.root");
      }
      f->GetObject("RealVar",tree);

   }
   Init(tree);
}

calculate_angles_from_tomasz_toy::~calculate_angles_from_tomasz_toy()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t calculate_angles_from_tomasz_toy::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t calculate_angles_from_tomasz_toy::LoadTree(Long64_t entry)
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

void calculate_angles_from_tomasz_toy::Init(TTree *tree)
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

   fChain->SetBranchAddress("mu0px", &mu0px, &b_mu0px);
   fChain->SetBranchAddress("mu0py", &mu0py, &b_mu0py);
   fChain->SetBranchAddress("mu0pz", &mu0pz, &b_mu0pz);
   fChain->SetBranchAddress("mu0pe", &mu0pe, &b_mu0pe);
   fChain->SetBranchAddress("mu1px", &mu1px, &b_mu1px);
   fChain->SetBranchAddress("mu1py", &mu1py, &b_mu1py);
   fChain->SetBranchAddress("mu1pz", &mu1pz, &b_mu1pz);
   fChain->SetBranchAddress("mu1pe", &mu1pe, &b_mu1pe);
   fChain->SetBranchAddress("kpx", &kpx, &b_kpx);
   fChain->SetBranchAddress("kpy", &kpy, &b_kpy);
   fChain->SetBranchAddress("kpz", &kpz, &b_kpz);
   fChain->SetBranchAddress("kpe", &kpe, &b_kpe);
   fChain->SetBranchAddress("pipx", &pipx, &b_pipx);
   fChain->SetBranchAddress("pipy", &pipy, &b_pipy);
   fChain->SetBranchAddress("pipz", &pipz, &b_pipz);
   fChain->SetBranchAddress("pipe", &pipe, &b_pipe);
   fChain->SetBranchAddress("m12", &m12, &b_m12);
   fChain->SetBranchAddress("m13", &m13, &b_m13);
   fChain->SetBranchAddress("cospsi", &cospsi, &b_cpspsi);
   fChain->SetBranchAddress("phipsi", &phipsi, &b_phipsi);
   fChain->SetBranchAddress("cospsi_z", &cospsi_z, &b_cospsi_z);
   fChain->SetBranchAddress("phipsi_z", &phipsi_z, &b_phipsi_z);
   fChain->SetBranchAddress("cosk", &cosk, &b_cosk);
   fChain->SetBranchAddress("cosz", &cosz, &b_cosz);
   fChain->SetBranchAddress("sig_sw", &sig_sw, &b_sig_sw);
   Notify();
}

Bool_t calculate_angles_from_tomasz_toy::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void calculate_angles_from_tomasz_toy::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t calculate_angles_from_tomasz_toy::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef calculate_angles_from_tomasz_toy_cxx
