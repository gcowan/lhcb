//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Apr 26 10:04:26 2013 by ROOT version 5.34/05
// from TTree RealVar/
// found on file: data_gp_2011_2012.root
//////////////////////////////////////////////////////////

#ifndef calculate_helicity_angles_h
#define calculate_helicity_angles_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class calculate_helicity_angles {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           BkgCat;
   Double_t        dll;
   Double_t        piipchi2;
   Double_t        mu0px;
   Double_t        mu0py;
   Double_t        mu0pz;
   Double_t        mu0pe;
   Double_t        mu0gp;
   Double_t        mu1px;
   Double_t        mu1py;
   Double_t        mu1pz;
   Double_t        mu1pe;
   Double_t        mu1gp;
   Double_t        kpx;
   Double_t        kpy;
   Double_t        kpz;
   Double_t        kpe;
   Double_t        kgp;
   Double_t        pipx;
   Double_t        pipy;
   Double_t        pipz;
   Double_t        pipe;
   Double_t        pigp;
   Double_t        BMass;
   Double_t        m12;
   Double_t        m13;
   Double_t        cosk;
   Double_t        cospsi;
   Double_t        phipsi;
   Double_t        cosz;
   Double_t        cospsi_z;
   Double_t        phipsi_z;
   Double_t        rf2m12;
   Double_t        rf2m13;
   Double_t        rf2cospsi;
   Double_t        rf2phipsi;
   Double_t        mcm12;
   Double_t        mcm13;
   Double_t        mccospsi;
   Double_t        mcphipsi;
   Double_t        sig_sw;
   Double_t        bkg_sw;
   Double_t        bip;
   Double_t        pidweight;
   Double_t        psimass;
   Double_t        bipchi2;
   Double_t        bvertex;
   Double_t        pol1;
   Double_t        pol2;
   Double_t        pol3;
   Double_t        pol4;
   Double_t        pol5;
   Double_t        pol6;
   Double_t        pol7;
   Int_t           BCharge;
   Double_t        Bp;
   Double_t        Bpt;
   Double_t        MuPlusp;
   Double_t        MuPluspt;
   Double_t        Kp;
   Double_t        Kpt;
   Double_t        Pip;
   Double_t        Pipt;
   Double_t        MuPlusPID;
   Double_t        KPID;
   Double_t        PiPID;
   Int_t           isphi;
   Double_t        sig_sw_old;

   // List of branches
   TBranch        *b_BkgCat;   //!
   TBranch        *b_dll;   //!
   TBranch        *b_piipchi2;   //!
   TBranch        *b_mu0px;   //!
   TBranch        *b_mu0py;   //!
   TBranch        *b_mu0pz;   //!
   TBranch        *b_mu0pe;   //!
   TBranch        *b_mu0gp;   //!
   TBranch        *b_mu1px;   //!
   TBranch        *b_mu1py;   //!
   TBranch        *b_mu1pz;   //!
   TBranch        *b_mu1pe;   //!
   TBranch        *b_mu1gp;   //!
   TBranch        *b_kpx;   //!
   TBranch        *b_kpy;   //!
   TBranch        *b_kpz;   //!
   TBranch        *b_kpe;   //!
   TBranch        *b_kgp;   //!
   TBranch        *b_pipx;   //!
   TBranch        *b_pipy;   //!
   TBranch        *b_pipz;   //!
   TBranch        *b_pipe;   //!
   TBranch        *b_pigp;   //!
   TBranch        *b_BMass;   //!
   TBranch        *b_m12;   //!
   TBranch        *b_m13;   //!
   TBranch        *b_cosk;   //!
   TBranch        *b_cospsi;   //!
   TBranch        *b_phipsi;   //!
   TBranch        *b_cosz;   //!
   TBranch        *b_cospsi_z;   //!
   TBranch        *b_phipsi_z;   //!
   TBranch        *b_rf2m12;   //!
   TBranch        *b_rf2m13;   //!
   TBranch        *b_rf2cospsi;   //!
   TBranch        *b_rf2phipsi;   //!
   TBranch        *b_mcm12;   //!
   TBranch        *b_mcm13;   //!
   TBranch        *b_mccospsi;   //!
   TBranch        *b_mcphipsi;   //!
   TBranch        *b_sig_sw;   //!
   TBranch        *b_bkg_sw;   //!
   TBranch        *b_bip;   //!
   TBranch        *b_pidweight;   //!
   TBranch        *b_psimass;   //!
   TBranch        *b_bipchi2;   //!
   TBranch        *b_bvertex;   //!
   TBranch        *b_pol1;   //!
   TBranch        *b_pol2;   //!
   TBranch        *b_pol3;   //!
   TBranch        *b_pol4;   //!
   TBranch        *b_pol5;   //!
   TBranch        *b_pol6;   //!
   TBranch        *b_pol7;   //!
   TBranch        *b_BCharge;   //!
   TBranch        *b_Bp;   //!
   TBranch        *b_Bpt;   //!
   TBranch        *b_MuPlusp;   //!
   TBranch        *b_MuPluspt;   //!
   TBranch        *b_Kp;   //!
   TBranch        *b_Kpt;   //!
   TBranch        *b_Pip;   //!
   TBranch        *b_Pipt;   //!
   TBranch        *b_MuPlusPID;   //!
   TBranch        *b_KPID;   //!
   TBranch        *b_PiPID;   //!
   TBranch        *b_isphi;   //!
   TBranch        *b_sig_sw_old;   //!

   calculate_helicity_angles(TTree *tree=0);
   virtual ~calculate_helicity_angles();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef calculate_helicity_angles_cxx
calculate_helicity_angles::calculate_helicity_angles(TTree *tree) : fChain(0)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("data_gp_2011_2012.root");
      //TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("mc_gp_2011_2012.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("data_gp_2011_2012.root");
         //f = new TFile("mc_gp_2011_2012.root");
      }
      f->GetObject("RealVar",tree);
      //f->GetObject("MCVar",tree);

   }
   Init(tree);
}

calculate_helicity_angles::~calculate_helicity_angles()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t calculate_helicity_angles::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t calculate_helicity_angles::LoadTree(Long64_t entry)
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

void calculate_helicity_angles::Init(TTree *tree)
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

   fChain->SetBranchAddress("BkgCat", &BkgCat, &b_BkgCat);
   fChain->SetBranchAddress("dll", &dll, &b_dll);
   fChain->SetBranchAddress("piipchi2", &piipchi2, &b_piipchi2);
   fChain->SetBranchAddress("mu0px", &mu0px, &b_mu0px);
   fChain->SetBranchAddress("mu0py", &mu0py, &b_mu0py);
   fChain->SetBranchAddress("mu0pz", &mu0pz, &b_mu0pz);
   fChain->SetBranchAddress("mu0pe", &mu0pe, &b_mu0pe);
   fChain->SetBranchAddress("mu0gp", &mu0gp, &b_mu0gp);
   fChain->SetBranchAddress("mu1px", &mu1px, &b_mu1px);
   fChain->SetBranchAddress("mu1py", &mu1py, &b_mu1py);
   fChain->SetBranchAddress("mu1pz", &mu1pz, &b_mu1pz);
   fChain->SetBranchAddress("mu1pe", &mu1pe, &b_mu1pe);
   fChain->SetBranchAddress("mu1gp", &mu1gp, &b_mu1gp);
   fChain->SetBranchAddress("kpx", &kpx, &b_kpx);
   fChain->SetBranchAddress("kpy", &kpy, &b_kpy);
   fChain->SetBranchAddress("kpz", &kpz, &b_kpz);
   fChain->SetBranchAddress("kpe", &kpe, &b_kpe);
   fChain->SetBranchAddress("kgp", &kgp, &b_kgp);
   fChain->SetBranchAddress("pipx", &pipx, &b_pipx);
   fChain->SetBranchAddress("pipy", &pipy, &b_pipy);
   fChain->SetBranchAddress("pipz", &pipz, &b_pipz);
   fChain->SetBranchAddress("pipe", &pipe, &b_pipe);
   fChain->SetBranchAddress("pigp", &pigp, &b_pigp);
   fChain->SetBranchAddress("BMass", &BMass, &b_BMass);
   fChain->SetBranchAddress("m12", &m12, &b_m12);
   fChain->SetBranchAddress("m13", &m13, &b_m13);
   fChain->SetBranchAddress("cosk", &cosk, &b_cosk);
   fChain->SetBranchAddress("cospsi", &cospsi, &b_cospsi);
   fChain->SetBranchAddress("phipsi", &phipsi, &b_phipsi);
   fChain->SetBranchAddress("cosz", &cosz, &b_cosz);
   fChain->SetBranchAddress("cospsi_z", &cospsi_z, &b_cospsi_z);
   fChain->SetBranchAddress("phipsi_z", &phipsi_z, &b_phipsi_z);
   fChain->SetBranchAddress("rf2m12", &rf2m12, &b_rf2m12);
   fChain->SetBranchAddress("rf2m13", &rf2m13, &b_rf2m13);
   fChain->SetBranchAddress("rf2cospsi", &rf2cospsi, &b_rf2cospsi);
   fChain->SetBranchAddress("rf2phipsi", &rf2phipsi, &b_rf2phipsi);
   fChain->SetBranchAddress("mcm12", &mcm12, &b_mcm12);
   fChain->SetBranchAddress("mcm13", &mcm13, &b_mcm13);
   fChain->SetBranchAddress("mccospsi", &mccospsi, &b_mccospsi);
   fChain->SetBranchAddress("mcphipsi", &mcphipsi, &b_mcphipsi);
   fChain->SetBranchAddress("sig_sw", &sig_sw, &b_sig_sw);
   fChain->SetBranchAddress("bkg_sw", &bkg_sw, &b_bkg_sw);
   fChain->SetBranchAddress("bip", &bip, &b_bip);
   fChain->SetBranchAddress("pidweight", &pidweight, &b_pidweight);
   fChain->SetBranchAddress("psimass", &psimass, &b_psimass);
   fChain->SetBranchAddress("bipchi2", &bipchi2, &b_bipchi2);
   fChain->SetBranchAddress("bvertex", &bvertex, &b_bvertex);
   fChain->SetBranchAddress("pol1", &pol1, &b_pol1);
   fChain->SetBranchAddress("pol2", &pol2, &b_pol2);
   fChain->SetBranchAddress("pol3", &pol3, &b_pol3);
   fChain->SetBranchAddress("pol4", &pol4, &b_pol4);
   fChain->SetBranchAddress("pol5", &pol5, &b_pol5);
   fChain->SetBranchAddress("pol6", &pol6, &b_pol6);
   fChain->SetBranchAddress("pol7", &pol7, &b_pol7);
   fChain->SetBranchAddress("BCharge", &BCharge, &b_BCharge);
   fChain->SetBranchAddress("Bp", &Bp, &b_Bp);
   fChain->SetBranchAddress("Bpt", &Bpt, &b_Bpt);
   fChain->SetBranchAddress("MuPlusp", &MuPlusp, &b_MuPlusp);
   fChain->SetBranchAddress("MuPluspt", &MuPluspt, &b_MuPluspt);
   fChain->SetBranchAddress("Kp", &Kp, &b_Kp);
   fChain->SetBranchAddress("Kpt", &Kpt, &b_Kpt);
   fChain->SetBranchAddress("Pip", &Pip, &b_Pip);
   fChain->SetBranchAddress("Pipt", &Pipt, &b_Pipt);
   fChain->SetBranchAddress("MuPlusPID", &MuPlusPID, &b_MuPlusPID);
   fChain->SetBranchAddress("KPID", &KPID, &b_KPID);
   fChain->SetBranchAddress("PiPID", &PiPID, &b_PiPID);
   fChain->SetBranchAddress("isphi", &isphi, &b_isphi);
   fChain->SetBranchAddress("sig_sw_old", &sig_sw_old, &b_sig_sw_old);
   Notify();
}

Bool_t calculate_helicity_angles::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void calculate_helicity_angles::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t calculate_helicity_angles::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef calculate_helicity_angles_cxx
