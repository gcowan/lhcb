//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Mar  5 13:14:59 2014 by ROOT version 5.34/10
// from TTree RapidFitResult/RapidFitResult
// found on file: pulls_nominal002.root
//////////////////////////////////////////////////////////

#ifndef test_h
#define test_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class test {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        gamma_value;
   Double_t        gamma_error;
   Double_t        gamma_gen;
   Double_t        gamma_pull;
   Double_t        gamma_max;
   Double_t        gamma_min;
   Double_t        gamma_step;
   Double_t        gamma_errHi;
   Double_t        gamma_errLo;
   Int_t           gamma_scan;
   Int_t           gamma_fix;
   Double_t        deltaGamma_value;
   Double_t        deltaGamma_error;
   Double_t        deltaGamma_gen;
   Double_t        deltaGamma_pull;
   Double_t        deltaGamma_max;
   Double_t        deltaGamma_min;
   Double_t        deltaGamma_step;
   Double_t        deltaGamma_errHi;
   Double_t        deltaGamma_errLo;
   Int_t           deltaGamma_scan;
   Int_t           deltaGamma_fix;
   Double_t        Aperp_sq_value;
   Double_t        Aperp_sq_error;
   Double_t        Aperp_sq_gen;
   Double_t        Aperp_sq_pull;
   Double_t        Aperp_sq_max;
   Double_t        Aperp_sq_min;
   Double_t        Aperp_sq_step;
   Double_t        Aperp_sq_errHi;
   Double_t        Aperp_sq_errLo;
   Int_t           Aperp_sq_scan;
   Int_t           Aperp_sq_fix;
   Double_t        Azero_sq_value;
   Double_t        Azero_sq_error;
   Double_t        Azero_sq_gen;
   Double_t        Azero_sq_pull;
   Double_t        Azero_sq_max;
   Double_t        Azero_sq_min;
   Double_t        Azero_sq_step;
   Double_t        Azero_sq_errHi;
   Double_t        Azero_sq_errLo;
   Int_t           Azero_sq_scan;
   Int_t           Azero_sq_fix;
   Double_t        delta_para_value;
   Int_t           delta_para_scan;
   Int_t           delta_para_fix;
   Double_t        delta_perp_value;
   Int_t           delta_perp_scan;
   Int_t           delta_perp_fix;
   Double_t        delta_zero_value;
   Int_t           delta_zero_scan;
   Int_t           delta_zero_fix;
   Double_t        F_s_value;
   Int_t           F_s_scan;
   Int_t           F_s_fix;
   Double_t        delta_s_value;
   Int_t           delta_s_scan;
   Int_t           delta_s_fix;
   Double_t        Csp_value;
   Int_t           Csp_scan;
   Int_t           Csp_fix;
   Double_t        deltaM_value;
   Int_t           deltaM_scan;
   Int_t           deltaM_fix;
   Double_t        Phi_s_value;
   Int_t           Phi_s_scan;
   Int_t           Phi_s_fix;
   Double_t        lambda_value;
   Int_t           lambda_scan;
   Int_t           lambda_fix;
   Double_t        mistagP1_value;
   Int_t           mistagP1_scan;
   Int_t           mistagP1_fix;
   Double_t        mistagP0_value;
   Int_t           mistagP0_scan;
   Int_t           mistagP0_fix;
   Double_t        mistagSetPoint_value;
   Int_t           mistagSetPoint_scan;
   Int_t           mistagSetPoint_fix;
   Double_t        mistagDeltaP1_value;
   Int_t           mistagDeltaP1_scan;
   Int_t           mistagDeltaP1_fix;
   Double_t        mistagDeltaP0_value;
   Int_t           mistagDeltaP0_scan;
   Int_t           mistagDeltaP0_fix;
   Double_t        mistagDeltaSetPoint_value;
   Int_t           mistagDeltaSetPoint_scan;
   Int_t           mistagDeltaSetPoint_fix;
   Double_t        mistag_value;
   Int_t           mistag_scan;
   Int_t           mistag_fix;
   Double_t        timeResolutionScale_value;
   Int_t           timeResolutionScale_scan;
   Int_t           timeResolutionScale_fix;
   Double_t        Fit_RealTime;
   Double_t        Fit_CPUTime;
   Double_t        Fit_GLTime;
   Int_t           Fit_Status;
   Double_t        NLL;

   // List of branches
   TBranch        *b_gamma_value;   //!
   TBranch        *b_gamma_error;   //!
   TBranch        *b_gamma_gen;   //!
   TBranch        *b_gamma_pull;   //!
   TBranch        *b_gamma_max;   //!
   TBranch        *b_gamma_min;   //!
   TBranch        *b_gamma_step;   //!
   TBranch        *b_gamma_errHi;   //!
   TBranch        *b_gamma_errLo;   //!
   TBranch        *b_gamma_scan;   //!
   TBranch        *b_gamma_fix;   //!
   TBranch        *b_deltaGamma_value;   //!
   TBranch        *b_deltaGamma_error;   //!
   TBranch        *b_deltaGamma_gen;   //!
   TBranch        *b_deltaGamma_pull;   //!
   TBranch        *b_deltaGamma_max;   //!
   TBranch        *b_deltaGamma_min;   //!
   TBranch        *b_deltaGamma_step;   //!
   TBranch        *b_deltaGamma_errHi;   //!
   TBranch        *b_deltaGamma_errLo;   //!
   TBranch        *b_deltaGamma_scan;   //!
   TBranch        *b_deltaGamma_fix;   //!
   TBranch        *b_Aperp_sq_value;   //!
   TBranch        *b_Aperp_sq_error;   //!
   TBranch        *b_Aperp_sq_gen;   //!
   TBranch        *b_Aperp_sq_pull;   //!
   TBranch        *b_Aperp_sq_max;   //!
   TBranch        *b_Aperp_sq_min;   //!
   TBranch        *b_Aperp_sq_step;   //!
   TBranch        *b_Aperp_sq_errHi;   //!
   TBranch        *b_Aperp_sq_errLo;   //!
   TBranch        *b_Aperp_sq_scan;   //!
   TBranch        *b_Aperp_sq_fix;   //!
   TBranch        *b_Azero_sq_value;   //!
   TBranch        *b_Azero_sq_error;   //!
   TBranch        *b_Azero_sq_gen;   //!
   TBranch        *b_Azero_sq_pull;   //!
   TBranch        *b_Azero_sq_max;   //!
   TBranch        *b_Azero_sq_min;   //!
   TBranch        *b_Azero_sq_step;   //!
   TBranch        *b_Azero_sq_errHi;   //!
   TBranch        *b_Azero_sq_errLo;   //!
   TBranch        *b_Azero_sq_scan;   //!
   TBranch        *b_Azero_sq_fix;   //!
   TBranch        *b_delta_para_value;   //!
   TBranch        *b_delta_para_scan;   //!
   TBranch        *b_delta_para_fix;   //!
   TBranch        *b_delta_perp_value;   //!
   TBranch        *b_delta_perp_scan;   //!
   TBranch        *b_delta_perp_fix;   //!
   TBranch        *b_delta_zero_value;   //!
   TBranch        *b_delta_zero_scan;   //!
   TBranch        *b_delta_zero_fix;   //!
   TBranch        *b_F_s_value;   //!
   TBranch        *b_F_s_scan;   //!
   TBranch        *b_F_s_fix;   //!
   TBranch        *b_delta_s_value;   //!
   TBranch        *b_delta_s_scan;   //!
   TBranch        *b_delta_s_fix;   //!
   TBranch        *b_Csp_value;   //!
   TBranch        *b_Csp_scan;   //!
   TBranch        *b_Csp_fix;   //!
   TBranch        *b_deltaM_value;   //!
   TBranch        *b_deltaM_scan;   //!
   TBranch        *b_deltaM_fix;   //!
   TBranch        *b_Phi_s_value;   //!
   TBranch        *b_Phi_s_scan;   //!
   TBranch        *b_Phi_s_fix;   //!
   TBranch        *b_lambda_value;   //!
   TBranch        *b_lambda_scan;   //!
   TBranch        *b_lambda_fix;   //!
   TBranch        *b_mistagP1_value;   //!
   TBranch        *b_mistagP1_scan;   //!
   TBranch        *b_mistagP1_fix;   //!
   TBranch        *b_mistagP0_value;   //!
   TBranch        *b_mistagP0_scan;   //!
   TBranch        *b_mistagP0_fix;   //!
   TBranch        *b_mistagSetPoint_value;   //!
   TBranch        *b_mistagSetPoint_scan;   //!
   TBranch        *b_mistagSetPoint_fix;   //!
   TBranch        *b_mistagDeltaP1_value;   //!
   TBranch        *b_mistagDeltaP1_scan;   //!
   TBranch        *b_mistagDeltaP1_fix;   //!
   TBranch        *b_mistagDeltaP0_value;   //!
   TBranch        *b_mistagDeltaP0_scan;   //!
   TBranch        *b_mistagDeltaP0_fix;   //!
   TBranch        *b_mistagDeltaSetPoint_value;   //!
   TBranch        *b_mistagDeltaSetPoint_scan;   //!
   TBranch        *b_mistagDeltaSetPoint_fix;   //!
   TBranch        *b_mistag_value;   //!
   TBranch        *b_mistag_scan;   //!
   TBranch        *b_mistag_fix;   //!
   TBranch        *b_timeResolutionScale_value;   //!
   TBranch        *b_timeResolutionScale_scan;   //!
   TBranch        *b_timeResolutionScale_fix;   //!
   TBranch        *b_Fit_RealTime;   //!
   TBranch        *b_Fit_CPUTime;   //!
   TBranch        *b_Fit_GLTime;   //!
   TBranch        *b_Fit_Status;   //!
   TBranch        *b_NLL;   //!

   test(TTree *tree=0);
   virtual ~test();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef test_cxx
test::test(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("pulls_nominal002.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("pulls_nominal002.root");
      }
      f->GetObject("RapidFitResult",tree);

   }
   Init(tree);
}

test::~test()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t test::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t test::LoadTree(Long64_t entry)
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

void test::Init(TTree *tree)
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

   fChain->SetBranchAddress("gamma_value", &gamma_value, &b_gamma_value);
   fChain->SetBranchAddress("gamma_error", &gamma_error, &b_gamma_error);
   fChain->SetBranchAddress("gamma_gen", &gamma_gen, &b_gamma_gen);
   fChain->SetBranchAddress("gamma_pull", &gamma_pull, &b_gamma_pull);
   fChain->SetBranchAddress("gamma_max", &gamma_max, &b_gamma_max);
   fChain->SetBranchAddress("gamma_min", &gamma_min, &b_gamma_min);
   fChain->SetBranchAddress("gamma_step", &gamma_step, &b_gamma_step);
   fChain->SetBranchAddress("gamma_errHi", &gamma_errHi, &b_gamma_errHi);
   fChain->SetBranchAddress("gamma_errLo", &gamma_errLo, &b_gamma_errLo);
   fChain->SetBranchAddress("gamma_scan", &gamma_scan, &b_gamma_scan);
   fChain->SetBranchAddress("gamma_fix", &gamma_fix, &b_gamma_fix);
   fChain->SetBranchAddress("deltaGamma_value", &deltaGamma_value, &b_deltaGamma_value);
   fChain->SetBranchAddress("deltaGamma_error", &deltaGamma_error, &b_deltaGamma_error);
   fChain->SetBranchAddress("deltaGamma_gen", &deltaGamma_gen, &b_deltaGamma_gen);
   fChain->SetBranchAddress("deltaGamma_pull", &deltaGamma_pull, &b_deltaGamma_pull);
   fChain->SetBranchAddress("deltaGamma_max", &deltaGamma_max, &b_deltaGamma_max);
   fChain->SetBranchAddress("deltaGamma_min", &deltaGamma_min, &b_deltaGamma_min);
   fChain->SetBranchAddress("deltaGamma_step", &deltaGamma_step, &b_deltaGamma_step);
   fChain->SetBranchAddress("deltaGamma_errHi", &deltaGamma_errHi, &b_deltaGamma_errHi);
   fChain->SetBranchAddress("deltaGamma_errLo", &deltaGamma_errLo, &b_deltaGamma_errLo);
   fChain->SetBranchAddress("deltaGamma_scan", &deltaGamma_scan, &b_deltaGamma_scan);
   fChain->SetBranchAddress("deltaGamma_fix", &deltaGamma_fix, &b_deltaGamma_fix);
   fChain->SetBranchAddress("Aperp_sq_value", &Aperp_sq_value, &b_Aperp_sq_value);
   fChain->SetBranchAddress("Aperp_sq_error", &Aperp_sq_error, &b_Aperp_sq_error);
   fChain->SetBranchAddress("Aperp_sq_gen", &Aperp_sq_gen, &b_Aperp_sq_gen);
   fChain->SetBranchAddress("Aperp_sq_pull", &Aperp_sq_pull, &b_Aperp_sq_pull);
   fChain->SetBranchAddress("Aperp_sq_max", &Aperp_sq_max, &b_Aperp_sq_max);
   fChain->SetBranchAddress("Aperp_sq_min", &Aperp_sq_min, &b_Aperp_sq_min);
   fChain->SetBranchAddress("Aperp_sq_step", &Aperp_sq_step, &b_Aperp_sq_step);
   fChain->SetBranchAddress("Aperp_sq_errHi", &Aperp_sq_errHi, &b_Aperp_sq_errHi);
   fChain->SetBranchAddress("Aperp_sq_errLo", &Aperp_sq_errLo, &b_Aperp_sq_errLo);
   fChain->SetBranchAddress("Aperp_sq_scan", &Aperp_sq_scan, &b_Aperp_sq_scan);
   fChain->SetBranchAddress("Aperp_sq_fix", &Aperp_sq_fix, &b_Aperp_sq_fix);
   fChain->SetBranchAddress("Azero_sq_value", &Azero_sq_value, &b_Azero_sq_value);
   fChain->SetBranchAddress("Azero_sq_error", &Azero_sq_error, &b_Azero_sq_error);
   fChain->SetBranchAddress("Azero_sq_gen", &Azero_sq_gen, &b_Azero_sq_gen);
   fChain->SetBranchAddress("Azero_sq_pull", &Azero_sq_pull, &b_Azero_sq_pull);
   fChain->SetBranchAddress("Azero_sq_max", &Azero_sq_max, &b_Azero_sq_max);
   fChain->SetBranchAddress("Azero_sq_min", &Azero_sq_min, &b_Azero_sq_min);
   fChain->SetBranchAddress("Azero_sq_step", &Azero_sq_step, &b_Azero_sq_step);
   fChain->SetBranchAddress("Azero_sq_errHi", &Azero_sq_errHi, &b_Azero_sq_errHi);
   fChain->SetBranchAddress("Azero_sq_errLo", &Azero_sq_errLo, &b_Azero_sq_errLo);
   fChain->SetBranchAddress("Azero_sq_scan", &Azero_sq_scan, &b_Azero_sq_scan);
   fChain->SetBranchAddress("Azero_sq_fix", &Azero_sq_fix, &b_Azero_sq_fix);
   fChain->SetBranchAddress("delta_para_value", &delta_para_value, &b_delta_para_value);
   fChain->SetBranchAddress("delta_para_scan", &delta_para_scan, &b_delta_para_scan);
   fChain->SetBranchAddress("delta_para_fix", &delta_para_fix, &b_delta_para_fix);
   fChain->SetBranchAddress("delta_perp_value", &delta_perp_value, &b_delta_perp_value);
   fChain->SetBranchAddress("delta_perp_scan", &delta_perp_scan, &b_delta_perp_scan);
   fChain->SetBranchAddress("delta_perp_fix", &delta_perp_fix, &b_delta_perp_fix);
   fChain->SetBranchAddress("delta_zero_value", &delta_zero_value, &b_delta_zero_value);
   fChain->SetBranchAddress("delta_zero_scan", &delta_zero_scan, &b_delta_zero_scan);
   fChain->SetBranchAddress("delta_zero_fix", &delta_zero_fix, &b_delta_zero_fix);
   fChain->SetBranchAddress("F_s_value", &F_s_value, &b_F_s_value);
   fChain->SetBranchAddress("F_s_scan", &F_s_scan, &b_F_s_scan);
   fChain->SetBranchAddress("F_s_fix", &F_s_fix, &b_F_s_fix);
   fChain->SetBranchAddress("delta_s_value", &delta_s_value, &b_delta_s_value);
   fChain->SetBranchAddress("delta_s_scan", &delta_s_scan, &b_delta_s_scan);
   fChain->SetBranchAddress("delta_s_fix", &delta_s_fix, &b_delta_s_fix);
   fChain->SetBranchAddress("Csp_value", &Csp_value, &b_Csp_value);
   fChain->SetBranchAddress("Csp_scan", &Csp_scan, &b_Csp_scan);
   fChain->SetBranchAddress("Csp_fix", &Csp_fix, &b_Csp_fix);
   fChain->SetBranchAddress("deltaM_value", &deltaM_value, &b_deltaM_value);
   fChain->SetBranchAddress("deltaM_scan", &deltaM_scan, &b_deltaM_scan);
   fChain->SetBranchAddress("deltaM_fix", &deltaM_fix, &b_deltaM_fix);
   fChain->SetBranchAddress("Phi_s_value", &Phi_s_value, &b_Phi_s_value);
   fChain->SetBranchAddress("Phi_s_scan", &Phi_s_scan, &b_Phi_s_scan);
   fChain->SetBranchAddress("Phi_s_fix", &Phi_s_fix, &b_Phi_s_fix);
   fChain->SetBranchAddress("lambda_value", &lambda_value, &b_lambda_value);
   fChain->SetBranchAddress("lambda_scan", &lambda_scan, &b_lambda_scan);
   fChain->SetBranchAddress("lambda_fix", &lambda_fix, &b_lambda_fix);
   fChain->SetBranchAddress("mistagP1_value", &mistagP1_value, &b_mistagP1_value);
   fChain->SetBranchAddress("mistagP1_scan", &mistagP1_scan, &b_mistagP1_scan);
   fChain->SetBranchAddress("mistagP1_fix", &mistagP1_fix, &b_mistagP1_fix);
   fChain->SetBranchAddress("mistagP0_value", &mistagP0_value, &b_mistagP0_value);
   fChain->SetBranchAddress("mistagP0_scan", &mistagP0_scan, &b_mistagP0_scan);
   fChain->SetBranchAddress("mistagP0_fix", &mistagP0_fix, &b_mistagP0_fix);
   fChain->SetBranchAddress("mistagSetPoint_value", &mistagSetPoint_value, &b_mistagSetPoint_value);
   fChain->SetBranchAddress("mistagSetPoint_scan", &mistagSetPoint_scan, &b_mistagSetPoint_scan);
   fChain->SetBranchAddress("mistagSetPoint_fix", &mistagSetPoint_fix, &b_mistagSetPoint_fix);
   fChain->SetBranchAddress("mistagDeltaP1_value", &mistagDeltaP1_value, &b_mistagDeltaP1_value);
   fChain->SetBranchAddress("mistagDeltaP1_scan", &mistagDeltaP1_scan, &b_mistagDeltaP1_scan);
   fChain->SetBranchAddress("mistagDeltaP1_fix", &mistagDeltaP1_fix, &b_mistagDeltaP1_fix);
   fChain->SetBranchAddress("mistagDeltaP0_value", &mistagDeltaP0_value, &b_mistagDeltaP0_value);
   fChain->SetBranchAddress("mistagDeltaP0_scan", &mistagDeltaP0_scan, &b_mistagDeltaP0_scan);
   fChain->SetBranchAddress("mistagDeltaP0_fix", &mistagDeltaP0_fix, &b_mistagDeltaP0_fix);
   fChain->SetBranchAddress("mistagDeltaSetPoint_value", &mistagDeltaSetPoint_value, &b_mistagDeltaSetPoint_value);
   fChain->SetBranchAddress("mistagDeltaSetPoint_scan", &mistagDeltaSetPoint_scan, &b_mistagDeltaSetPoint_scan);
   fChain->SetBranchAddress("mistagDeltaSetPoint_fix", &mistagDeltaSetPoint_fix, &b_mistagDeltaSetPoint_fix);
   fChain->SetBranchAddress("mistag_value", &mistag_value, &b_mistag_value);
   fChain->SetBranchAddress("mistag_scan", &mistag_scan, &b_mistag_scan);
   fChain->SetBranchAddress("mistag_fix", &mistag_fix, &b_mistag_fix);
   fChain->SetBranchAddress("timeResolutionScale_value", &timeResolutionScale_value, &b_timeResolutionScale_value);
   fChain->SetBranchAddress("timeResolutionScale_scan", &timeResolutionScale_scan, &b_timeResolutionScale_scan);
   fChain->SetBranchAddress("timeResolutionScale_fix", &timeResolutionScale_fix, &b_timeResolutionScale_fix);
   fChain->SetBranchAddress("Fit_RealTime", &Fit_RealTime, &b_Fit_RealTime);
   fChain->SetBranchAddress("Fit_CPUTime", &Fit_CPUTime, &b_Fit_CPUTime);
   fChain->SetBranchAddress("Fit_GLTime", &Fit_GLTime, &b_Fit_GLTime);
   fChain->SetBranchAddress("Fit_Status", &Fit_Status, &b_Fit_Status);
   fChain->SetBranchAddress("NLL", &NLL, &b_NLL);
   Notify();
}

Bool_t test::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void test::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t test::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef test_cxx
