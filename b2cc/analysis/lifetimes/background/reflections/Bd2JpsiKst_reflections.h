//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue May 21 11:53:11 2013 by ROOT version 5.34/05
// from TTree jpsiphi/jpsiphi
// found on file: ../../data/Data_BdJpsiKstar_Strip17b_detachedJpsi_BU_Kstar1500Pi300.root
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
   Double_t        Mu1_P;
   Double_t        Mu1_Eta;
   Double_t        Mu1_Px;
   Double_t        Mu1_Py;
   Double_t        Mu1_Pz;
   Double_t        Mu1_Pt;
   Double_t        Mu1_TrackChi2ndof;
   Double_t        Mu1_DLLmu;
   Double_t        Mu1_DOCAz;
   Double_t        Mu1_DOCAz_Bshift;
   Double_t        Mu2_P;
   Double_t        Mu2_Eta;
   Double_t        Mu2_Px;
   Double_t        Mu2_Py;
   Double_t        Mu2_Pz;
   Double_t        Mu2_Pt;
   Double_t        Mu2_TrackChi2ndof;
   Double_t        Mu2_DLLmu;
   Double_t        Mu2_DOCAz;
   Double_t        Mu2_DOCAz_Bshift;
   Double_t        K1_P;
   Double_t        K1_Eta;
   Double_t        K1_Px;
   Double_t        K1_Py;
   Double_t        K1_Pz;
   Double_t        K1_Pt;
   Double_t        K1_TrackChi2ndof;
   Double_t        K1_DLLk;
   Double_t        K1_DOCAz;
   Double_t        K1_DOCAz_Bshift;
   Double_t        Pi1_P;
   Double_t        Pi1_Eta;
   Double_t        Pi1_Px;
   Double_t        Pi1_Py;
   Double_t        Pi1_Pz;
   Double_t        Pi1_Pt;
   Double_t        Pi1_TrackChi2ndof;
   Double_t        Pi1_DLLk;
   Double_t        Pi1_DOCAz;
   Double_t        Pi1_DOCAz_Bshift;
   Double_t        JPsi_P;
   Double_t        JPsi_Px;
   Double_t        JPsi_Py;
   Double_t        JPsi_Pz;
   Double_t        JPsi_Pt;
   Double_t        JPsi_M;
   Double_t        JPsi_VtxChi2ndof;
   Double_t        Kstar_P;
   Double_t        Kstar_Px;
   Double_t        Kstar_Py;
   Double_t        Kstar_Pz;
   Double_t        Kstar_Pt;
   Double_t        Kstar_M;
   Double_t        Kstar_ADOCACHI2;
   Double_t        Kstar_VtxChi2ndof;
   Double_t        Bd_P;
   Double_t        Bd_Px;
   Double_t        Bd_Py;
   Double_t        Bd_Pz;
   Double_t        Bd_Pt;
   Double_t        Bd_M;
   Double_t        Bd_VtxChi2ndof;
   Double_t        Bd_ct;
   Double_t        Bd_ctRes;
   Double_t        Bd_ctError;
   Double_t        Bd_pid;
   Double_t        Bd_hasOscillated;
   Double_t        Bd_L0DiMuon_TOS;
   Double_t        Bd_L0Muon_TOS;
   Double_t        Bd_Hlt1DiMuonHighMass_TOS;
   Double_t        Bd_Hlt1TrackAllL0_TOS;
   Double_t        Bd_Hlt1TrackMuon_TOS;
   Double_t        Bd_Hlt2DiMuonDetachedJPsi_TOS;
   Double_t        Bd_Hlt2DiMuonJPsi_TOS;
   Double_t        Bd_L0DiMuon_Dec;
   Double_t        Bd_L0Muon_Dec;
   Double_t        Bd_Hlt1DiMuonHighMass_Dec;
   Double_t        Bd_Hlt1TrackAllL0_Dec;
   Double_t        Bd_Hlt1TrackMuon_Dec;
   Double_t        Bd_Hlt2DiMuonDetachedJPsi_Dec;
   Double_t        Bd_Hlt2DiMuonJPsi_Dec;
   Double_t        Bd_PVx;
   Double_t        Bd_PVy;
   Double_t        Bd_PVz;
   Double_t        Bd_PVx_MCtrue;
   Double_t        Bd_PVy_MCtrue;
   Double_t        Bd_PVz_MCtrue;
   Double_t        Bd_decayVertex_X;
   Double_t        Bd_decayVertex_Y;
   Double_t        Bd_decayVertex_Z;
   Double_t        Bd_decayVertex_X_MCtrue;
   Double_t        Bd_decayVertex_Y_MCtrue;
   Double_t        Bd_decayVertex_Z_MCtrue;
   Double_t        Bd_PV_nTracks;
   Double_t        Bd_IPzWeight_1bin;
   Double_t        Bd_IPzWeight_4bin;
   Double_t        Bd_IPzWeight_Correlation_1bin;
   Double_t        Bd_IPzWeight_Correlation_4bin;
   Double_t        Bd_IPzWeight_p1sigma_1bin;
   Double_t        Bd_IPzWeight_p1sigma_4bin;
   Double_t        Bd_IPzWeight_m1sigma_1bin;
   Double_t        Bd_IPzWeight_m1sigma_4bin;
   Double_t        Bd_IPzWeight_Correlation_Add_1bin;
   Double_t        Bd_IPzWeight_Correlation_Add_4bin;
   Double_t        Bd_DTFChi2ndof;
   Double_t        Bd_IP;
   Double_t        Bd_IPChi2;
   Double_t        Bd_2ndBestIPChi2;
   Long64_t        Ev_EventNumber;
   Long64_t        Ev_RunNumber;
   Double_t        Ev_L0;
   Double_t        Ev_nPV;
   Double_t        Ev_nTracksBest;
   Int_t           Ev_MgPolarity;
   Int_t           Bd_hasBestDTFCHI2;
   Int_t           Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine;
   Int_t           Ev_StrippingBetaSBd2JpsiKstarDetachedLineDecision;

   // List of branches
   TBranch        *b_Mu1_P;   //!
   TBranch        *b_Mu1_Eta;   //!
   TBranch        *b_Mu1_Px;   //!
   TBranch        *b_Mu1_Py;   //!
   TBranch        *b_Mu1_Pz;   //!
   TBranch        *b_Mu1_Pt;   //!
   TBranch        *b_Mu1_TrackChi2ndof;   //!
   TBranch        *b_Mu1_DLLmu;   //!
   TBranch        *b_Mu1_DOCAz;   //!
   TBranch        *b_Mu1_DOCAz_Bshift;   //!
   TBranch        *b_Mu2_P;   //!
   TBranch        *b_Mu2_Eta;   //!
   TBranch        *b_Mu2_Px;   //!
   TBranch        *b_Mu2_Py;   //!
   TBranch        *b_Mu2_Pz;   //!
   TBranch        *b_Mu2_Pt;   //!
   TBranch        *b_Mu2_TrackChi2ndof;   //!
   TBranch        *b_Mu2_DLLmu;   //!
   TBranch        *b_Mu2_DOCAz;   //!
   TBranch        *b_Mu2_DOCAz_Bshift;   //!
   TBranch        *b_K1_P;   //!
   TBranch        *b_K1_Eta;   //!
   TBranch        *b_K1_Px;   //!
   TBranch        *b_K1_Py;   //!
   TBranch        *b_K1_Pz;   //!
   TBranch        *b_K1_Pt;   //!
   TBranch        *b_K1_TrackChi2ndof;   //!
   TBranch        *b_K1_DLLk;   //!
   TBranch        *b_K1_DOCAz;   //!
   TBranch        *b_K1_DOCAz_Bshift;   //!
   TBranch        *b_Pi1_P;   //!
   TBranch        *b_Pi1_Eta;   //!
   TBranch        *b_Pi1_Px;   //!
   TBranch        *b_Pi1_Py;   //!
   TBranch        *b_Pi1_Pz;   //!
   TBranch        *b_Pi1_Pt;   //!
   TBranch        *b_Pi1_TrackChi2ndof;   //!
   TBranch        *b_Pi1_DLLk;   //!
   TBranch        *b_Pi1_DOCAz;   //!
   TBranch        *b_Pi1_DOCAz_Bshift;   //!
   TBranch        *b_JPsi_P;   //!
   TBranch        *b_JPsi_Px;   //!
   TBranch        *b_JPsi_Py;   //!
   TBranch        *b_JPsi_Pz;   //!
   TBranch        *b_JPsi_Pt;   //!
   TBranch        *b_JPsi_M;   //!
   TBranch        *b_JPsi_VtxChi2ndof;   //!
   TBranch        *b_Kstar_P;   //!
   TBranch        *b_Kstar_Px;   //!
   TBranch        *b_Kstar_Py;   //!
   TBranch        *b_Kstar_Pz;   //!
   TBranch        *b_Kstar_Pt;   //!
   TBranch        *b_Kstar_M;   //!
   TBranch        *b_Kstar_ADOCACHI2;   //!
   TBranch        *b_Kstar_VtxChi2ndof;   //!
   TBranch        *b_Bd_P;   //!
   TBranch        *b_Bd_Px;   //!
   TBranch        *b_Bd_Py;   //!
   TBranch        *b_Bd_Pz;   //!
   TBranch        *b_Bd_Pt;   //!
   TBranch        *b_Bd_M;   //!
   TBranch        *b_Bd_VtxChi2ndof;   //!
   TBranch        *b_Bd_ct;   //!
   TBranch        *b_Bd_ctRes;   //!
   TBranch        *b_Bd_ctError;   //!
   TBranch        *b_Bd_pid;   //!
   TBranch        *b_Bd_hasOscillated;   //!
   TBranch        *b_Bd_L0DiMuon_TOS;   //!
   TBranch        *b_Bd_L0Muon_TOS;   //!
   TBranch        *b_Bd_Hlt1DiMuonHighMass_TOS;   //!
   TBranch        *b_Bd_Hlt1TrackAllL0_TOS;   //!
   TBranch        *b_Bd_Hlt1TrackMuon_TOS;   //!
   TBranch        *b_Bd_Hlt2DiMuonDetachedJPsi_TOS;   //!
   TBranch        *b_Bd_Hlt2DiMuonJPsi_TOS;   //!
   TBranch        *b_Bd_L0DiMuon_Dec;   //!
   TBranch        *b_Bd_L0Muon_Dec;   //!
   TBranch        *b_Bd_Hlt1DiMuonHighMass_Dec;   //!
   TBranch        *b_Bd_Hlt1TrackAllL0_Dec;   //!
   TBranch        *b_Bd_Hlt1TrackMuon_Dec;   //!
   TBranch        *b_Bd_Hlt2DiMuonDetachedJPsi_Dec;   //!
   TBranch        *b_Bd_Hlt2DiMuonJPsi_Dec;   //!
   TBranch        *b_Bd_PVx;   //!
   TBranch        *b_Bd_PVy;   //!
   TBranch        *b_Bd_PVz;   //!
   TBranch        *b_Bd_PVx_MCtrue;   //!
   TBranch        *b_Bd_PVy_MCtrue;   //!
   TBranch        *b_Bd_PVz_MCtrue;   //!
   TBranch        *b_Bd_decayVertex_X;   //!
   TBranch        *b_Bd_decayVertex_Y;   //!
   TBranch        *b_Bd_decayVertex_Z;   //!
   TBranch        *b_Bd_decayVertex_X_MCtrue;   //!
   TBranch        *b_Bd_decayVertex_Y_MCtrue;   //!
   TBranch        *b_Bd_decayVertex_Z_MCtrue;   //!
   TBranch        *b_Bd_PV_nTracks;   //!
   TBranch        *b_Bd_IPzWeight_1bin;   //!
   TBranch        *b_Bd_IPzWeight_4bin;   //!
   TBranch        *b_Bd_IPzWeight_Correlation_1bin;   //!
   TBranch        *b_Bd_IPzWeight_Correlation_4bin;   //!
   TBranch        *b_Bd_IPzWeight_p1sigma_1bin;   //!
   TBranch        *b_Bd_IPzWeight_p1sigma_4bin;   //!
   TBranch        *b_Bd_IPzWeight_m1sigma_1bin;   //!
   TBranch        *b_Bd_IPzWeight_m1sigma_4bin;   //!
   TBranch        *b_Bd_IPzWeight_Correlation_Add_1bin;   //!
   TBranch        *b_Bd_IPzWeight_Correlation_Add_4bin;   //!
   TBranch        *b_Bd_DTFChi2ndof;   //!
   TBranch        *b_Bd_IP;   //!
   TBranch        *b_Bd_IPChi2;   //!
   TBranch        *b_Bd_2ndBestIPChi2;   //!
   TBranch        *b_Ev_EventNumber;   //!
   TBranch        *b_Ev_RunNumber;   //!
   TBranch        *b_Ev_L0;   //!
   TBranch        *b_Ev_nPV;   //!
   TBranch        *b_Ev_nTracksBest;   //!
   TBranch        *b_Ev_MgPolarity;   //!
   TBranch        *b_Bd_hasBestDTFCHI2;   //!
   TBranch        *b_Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine;   //!
   TBranch        *b_Ev_StrippingBetaSBd2JpsiKstarDetachedLineDecision;   //!

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
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../../data/Data_BdJpsiKstar_Strip17b_detachedJpsi_BU_Kstar1500Pi300.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../../data/Data_BdJpsiKstar_Strip17b_detachedJpsi_BU_Kstar1500Pi300.root");
      }
      f->GetObject("jpsiphi",tree);

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

   fChain->SetBranchAddress("Mu1_P", &Mu1_P, &b_Mu1_P);
   fChain->SetBranchAddress("Mu1_Eta", &Mu1_Eta, &b_Mu1_Eta);
   fChain->SetBranchAddress("Mu1_Px", &Mu1_Px, &b_Mu1_Px);
   fChain->SetBranchAddress("Mu1_Py", &Mu1_Py, &b_Mu1_Py);
   fChain->SetBranchAddress("Mu1_Pz", &Mu1_Pz, &b_Mu1_Pz);
   fChain->SetBranchAddress("Mu1_Pt", &Mu1_Pt, &b_Mu1_Pt);
   fChain->SetBranchAddress("Mu1_TrackChi2ndof", &Mu1_TrackChi2ndof, &b_Mu1_TrackChi2ndof);
   fChain->SetBranchAddress("Mu1_DLLmu", &Mu1_DLLmu, &b_Mu1_DLLmu);
   fChain->SetBranchAddress("Mu1_DOCAz", &Mu1_DOCAz, &b_Mu1_DOCAz);
   fChain->SetBranchAddress("Mu1_DOCAz_Bshift", &Mu1_DOCAz_Bshift, &b_Mu1_DOCAz_Bshift);
   fChain->SetBranchAddress("Mu2_P", &Mu2_P, &b_Mu2_P);
   fChain->SetBranchAddress("Mu2_Eta", &Mu2_Eta, &b_Mu2_Eta);
   fChain->SetBranchAddress("Mu2_Px", &Mu2_Px, &b_Mu2_Px);
   fChain->SetBranchAddress("Mu2_Py", &Mu2_Py, &b_Mu2_Py);
   fChain->SetBranchAddress("Mu2_Pz", &Mu2_Pz, &b_Mu2_Pz);
   fChain->SetBranchAddress("Mu2_Pt", &Mu2_Pt, &b_Mu2_Pt);
   fChain->SetBranchAddress("Mu2_TrackChi2ndof", &Mu2_TrackChi2ndof, &b_Mu2_TrackChi2ndof);
   fChain->SetBranchAddress("Mu2_DLLmu", &Mu2_DLLmu, &b_Mu2_DLLmu);
   fChain->SetBranchAddress("Mu2_DOCAz", &Mu2_DOCAz, &b_Mu2_DOCAz);
   fChain->SetBranchAddress("Mu2_DOCAz_Bshift", &Mu2_DOCAz_Bshift, &b_Mu2_DOCAz_Bshift);
   fChain->SetBranchAddress("K1_P", &K1_P, &b_K1_P);
   fChain->SetBranchAddress("K1_Eta", &K1_Eta, &b_K1_Eta);
   fChain->SetBranchAddress("K1_Px", &K1_Px, &b_K1_Px);
   fChain->SetBranchAddress("K1_Py", &K1_Py, &b_K1_Py);
   fChain->SetBranchAddress("K1_Pz", &K1_Pz, &b_K1_Pz);
   fChain->SetBranchAddress("K1_Pt", &K1_Pt, &b_K1_Pt);
   fChain->SetBranchAddress("K1_TrackChi2ndof", &K1_TrackChi2ndof, &b_K1_TrackChi2ndof);
   fChain->SetBranchAddress("K1_DLLk", &K1_DLLk, &b_K1_DLLk);
   fChain->SetBranchAddress("K1_DOCAz", &K1_DOCAz, &b_K1_DOCAz);
   fChain->SetBranchAddress("K1_DOCAz_Bshift", &K1_DOCAz_Bshift, &b_K1_DOCAz_Bshift);
   fChain->SetBranchAddress("Pi1_P", &Pi1_P, &b_Pi1_P);
   fChain->SetBranchAddress("Pi1_Eta", &Pi1_Eta, &b_Pi1_Eta);
   fChain->SetBranchAddress("Pi1_Px", &Pi1_Px, &b_Pi1_Px);
   fChain->SetBranchAddress("Pi1_Py", &Pi1_Py, &b_Pi1_Py);
   fChain->SetBranchAddress("Pi1_Pz", &Pi1_Pz, &b_Pi1_Pz);
   fChain->SetBranchAddress("Pi1_Pt", &Pi1_Pt, &b_Pi1_Pt);
   fChain->SetBranchAddress("Pi1_TrackChi2ndof", &Pi1_TrackChi2ndof, &b_Pi1_TrackChi2ndof);
   fChain->SetBranchAddress("Pi1_DLLk", &Pi1_DLLk, &b_Pi1_DLLk);
   fChain->SetBranchAddress("Pi1_DOCAz", &Pi1_DOCAz, &b_Pi1_DOCAz);
   fChain->SetBranchAddress("Pi1_DOCAz_Bshift", &Pi1_DOCAz_Bshift, &b_Pi1_DOCAz_Bshift);
   fChain->SetBranchAddress("JPsi_P", &JPsi_P, &b_JPsi_P);
   fChain->SetBranchAddress("JPsi_Px", &JPsi_Px, &b_JPsi_Px);
   fChain->SetBranchAddress("JPsi_Py", &JPsi_Py, &b_JPsi_Py);
   fChain->SetBranchAddress("JPsi_Pz", &JPsi_Pz, &b_JPsi_Pz);
   fChain->SetBranchAddress("JPsi_Pt", &JPsi_Pt, &b_JPsi_Pt);
   fChain->SetBranchAddress("JPsi_M", &JPsi_M, &b_JPsi_M);
   fChain->SetBranchAddress("JPsi_VtxChi2ndof", &JPsi_VtxChi2ndof, &b_JPsi_VtxChi2ndof);
   fChain->SetBranchAddress("Kstar_P", &Kstar_P, &b_Kstar_P);
   fChain->SetBranchAddress("Kstar_Px", &Kstar_Px, &b_Kstar_Px);
   fChain->SetBranchAddress("Kstar_Py", &Kstar_Py, &b_Kstar_Py);
   fChain->SetBranchAddress("Kstar_Pz", &Kstar_Pz, &b_Kstar_Pz);
   fChain->SetBranchAddress("Kstar_Pt", &Kstar_Pt, &b_Kstar_Pt);
   fChain->SetBranchAddress("Kstar_M", &Kstar_M, &b_Kstar_M);
   fChain->SetBranchAddress("Kstar_ADOCACHI2", &Kstar_ADOCACHI2, &b_Kstar_ADOCACHI2);
   fChain->SetBranchAddress("Kstar_VtxChi2ndof", &Kstar_VtxChi2ndof, &b_Kstar_VtxChi2ndof);
   fChain->SetBranchAddress("Bd_P", &Bd_P, &b_Bd_P);
   fChain->SetBranchAddress("Bd_Px", &Bd_Px, &b_Bd_Px);
   fChain->SetBranchAddress("Bd_Py", &Bd_Py, &b_Bd_Py);
   fChain->SetBranchAddress("Bd_Pz", &Bd_Pz, &b_Bd_Pz);
   fChain->SetBranchAddress("Bd_Pt", &Bd_Pt, &b_Bd_Pt);
   fChain->SetBranchAddress("Bd_M", &Bd_M, &b_Bd_M);
   fChain->SetBranchAddress("Bd_VtxChi2ndof", &Bd_VtxChi2ndof, &b_Bd_VtxChi2ndof);
   fChain->SetBranchAddress("Bd_ct", &Bd_ct, &b_Bd_ct);
   fChain->SetBranchAddress("Bd_ctRes", &Bd_ctRes, &b_Bd_ctRes);
   fChain->SetBranchAddress("Bd_ctError", &Bd_ctError, &b_Bd_ctError);
   fChain->SetBranchAddress("Bd_pid", &Bd_pid, &b_Bd_pid);
   fChain->SetBranchAddress("Bd_hasOscillated", &Bd_hasOscillated, &b_Bd_hasOscillated);
   fChain->SetBranchAddress("Bd_L0DiMuon_TOS", &Bd_L0DiMuon_TOS, &b_Bd_L0DiMuon_TOS);
   fChain->SetBranchAddress("Bd_L0Muon_TOS", &Bd_L0Muon_TOS, &b_Bd_L0Muon_TOS);
   fChain->SetBranchAddress("Bd_Hlt1DiMuonHighMass_TOS", &Bd_Hlt1DiMuonHighMass_TOS, &b_Bd_Hlt1DiMuonHighMass_TOS);
   fChain->SetBranchAddress("Bd_Hlt1TrackAllL0_TOS", &Bd_Hlt1TrackAllL0_TOS, &b_Bd_Hlt1TrackAllL0_TOS);
   fChain->SetBranchAddress("Bd_Hlt1TrackMuon_TOS", &Bd_Hlt1TrackMuon_TOS, &b_Bd_Hlt1TrackMuon_TOS);
   fChain->SetBranchAddress("Bd_Hlt2DiMuonDetachedJPsi_TOS", &Bd_Hlt2DiMuonDetachedJPsi_TOS, &b_Bd_Hlt2DiMuonDetachedJPsi_TOS);
   fChain->SetBranchAddress("Bd_Hlt2DiMuonJPsi_TOS", &Bd_Hlt2DiMuonJPsi_TOS, &b_Bd_Hlt2DiMuonJPsi_TOS);
   fChain->SetBranchAddress("Bd_L0DiMuon_Dec", &Bd_L0DiMuon_Dec, &b_Bd_L0DiMuon_Dec);
   fChain->SetBranchAddress("Bd_L0Muon_Dec", &Bd_L0Muon_Dec, &b_Bd_L0Muon_Dec);
   fChain->SetBranchAddress("Bd_Hlt1DiMuonHighMass_Dec", &Bd_Hlt1DiMuonHighMass_Dec, &b_Bd_Hlt1DiMuonHighMass_Dec);
   fChain->SetBranchAddress("Bd_Hlt1TrackAllL0_Dec", &Bd_Hlt1TrackAllL0_Dec, &b_Bd_Hlt1TrackAllL0_Dec);
   fChain->SetBranchAddress("Bd_Hlt1TrackMuon_Dec", &Bd_Hlt1TrackMuon_Dec, &b_Bd_Hlt1TrackMuon_Dec);
   fChain->SetBranchAddress("Bd_Hlt2DiMuonDetachedJPsi_Dec", &Bd_Hlt2DiMuonDetachedJPsi_Dec, &b_Bd_Hlt2DiMuonDetachedJPsi_Dec);
   fChain->SetBranchAddress("Bd_Hlt2DiMuonJPsi_Dec", &Bd_Hlt2DiMuonJPsi_Dec, &b_Bd_Hlt2DiMuonJPsi_Dec);
   fChain->SetBranchAddress("Bd_PVx", &Bd_PVx, &b_Bd_PVx);
   fChain->SetBranchAddress("Bd_PVy", &Bd_PVy, &b_Bd_PVy);
   fChain->SetBranchAddress("Bd_PVz", &Bd_PVz, &b_Bd_PVz);
   fChain->SetBranchAddress("Bd_PVx_MCtrue", &Bd_PVx_MCtrue, &b_Bd_PVx_MCtrue);
   fChain->SetBranchAddress("Bd_PVy_MCtrue", &Bd_PVy_MCtrue, &b_Bd_PVy_MCtrue);
   fChain->SetBranchAddress("Bd_PVz_MCtrue", &Bd_PVz_MCtrue, &b_Bd_PVz_MCtrue);
   fChain->SetBranchAddress("Bd_decayVertex_X", &Bd_decayVertex_X, &b_Bd_decayVertex_X);
   fChain->SetBranchAddress("Bd_decayVertex_Y", &Bd_decayVertex_Y, &b_Bd_decayVertex_Y);
   fChain->SetBranchAddress("Bd_decayVertex_Z", &Bd_decayVertex_Z, &b_Bd_decayVertex_Z);
   fChain->SetBranchAddress("Bd_decayVertex_X_MCtrue", &Bd_decayVertex_X_MCtrue, &b_Bd_decayVertex_X_MCtrue);
   fChain->SetBranchAddress("Bd_decayVertex_Y_MCtrue", &Bd_decayVertex_Y_MCtrue, &b_Bd_decayVertex_Y_MCtrue);
   fChain->SetBranchAddress("Bd_decayVertex_Z_MCtrue", &Bd_decayVertex_Z_MCtrue, &b_Bd_decayVertex_Z_MCtrue);
   fChain->SetBranchAddress("Bd_PV_nTracks", &Bd_PV_nTracks, &b_Bd_PV_nTracks);
   fChain->SetBranchAddress("Bd_IPzWeight_1bin", &Bd_IPzWeight_1bin, &b_Bd_IPzWeight_1bin);
   fChain->SetBranchAddress("Bd_IPzWeight_4bin", &Bd_IPzWeight_4bin, &b_Bd_IPzWeight_4bin);
   fChain->SetBranchAddress("Bd_IPzWeight_Correlation_1bin", &Bd_IPzWeight_Correlation_1bin, &b_Bd_IPzWeight_Correlation_1bin);
   fChain->SetBranchAddress("Bd_IPzWeight_Correlation_4bin", &Bd_IPzWeight_Correlation_4bin, &b_Bd_IPzWeight_Correlation_4bin);
   fChain->SetBranchAddress("Bd_IPzWeight_p1sigma_1bin", &Bd_IPzWeight_p1sigma_1bin, &b_Bd_IPzWeight_p1sigma_1bin);
   fChain->SetBranchAddress("Bd_IPzWeight_p1sigma_4bin", &Bd_IPzWeight_p1sigma_4bin, &b_Bd_IPzWeight_p1sigma_4bin);
   fChain->SetBranchAddress("Bd_IPzWeight_m1sigma_1bin", &Bd_IPzWeight_m1sigma_1bin, &b_Bd_IPzWeight_m1sigma_1bin);
   fChain->SetBranchAddress("Bd_IPzWeight_m1sigma_4bin", &Bd_IPzWeight_m1sigma_4bin, &b_Bd_IPzWeight_m1sigma_4bin);
   fChain->SetBranchAddress("Bd_IPzWeight_Correlation_Add_1bin", &Bd_IPzWeight_Correlation_Add_1bin, &b_Bd_IPzWeight_Correlation_Add_1bin);
   fChain->SetBranchAddress("Bd_IPzWeight_Correlation_Add_4bin", &Bd_IPzWeight_Correlation_Add_4bin, &b_Bd_IPzWeight_Correlation_Add_4bin);
   fChain->SetBranchAddress("Bd_DTFChi2ndof", &Bd_DTFChi2ndof, &b_Bd_DTFChi2ndof);
   fChain->SetBranchAddress("Bd_IP", &Bd_IP, &b_Bd_IP);
   fChain->SetBranchAddress("Bd_IPChi2", &Bd_IPChi2, &b_Bd_IPChi2);
   fChain->SetBranchAddress("Bd_2ndBestIPChi2", &Bd_2ndBestIPChi2, &b_Bd_2ndBestIPChi2);
   fChain->SetBranchAddress("Ev_EventNumber", &Ev_EventNumber, &b_Ev_EventNumber);
   fChain->SetBranchAddress("Ev_RunNumber", &Ev_RunNumber, &b_Ev_RunNumber);
   fChain->SetBranchAddress("Ev_L0", &Ev_L0, &b_Ev_L0);
   fChain->SetBranchAddress("Ev_nPV", &Ev_nPV, &b_Ev_nPV);
   fChain->SetBranchAddress("Ev_nTracksBest", &Ev_nTracksBest, &b_Ev_nTracksBest);
   fChain->SetBranchAddress("Ev_MgPolarity", &Ev_MgPolarity, &b_Ev_MgPolarity);
   fChain->SetBranchAddress("Bd_hasBestDTFCHI2", &Bd_hasBestDTFCHI2, &b_Bd_hasBestDTFCHI2);
   fChain->SetBranchAddress("Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine", &Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine, &b_Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine);
   fChain->SetBranchAddress("Ev_StrippingBetaSBd2JpsiKstarDetachedLineDecision", &Ev_StrippingBetaSBd2JpsiKstarDetachedLineDecision, &b_Ev_StrippingBetaSBd2JpsiKstarDetachedLineDecision);
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
