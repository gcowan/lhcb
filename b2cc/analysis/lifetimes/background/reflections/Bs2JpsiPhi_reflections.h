//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue May 21 14:11:50 2013 by ROOT version 5.34/05
// from TTree jpsiphi/jpsiphi
// found on file: ../../data/Data_BsJpsiPhi_Strip17b_detachedJpsi_BU_Phi1000.root
//////////////////////////////////////////////////////////

#ifndef Bs2JpsiPhi_reflections_h
#define Bs2JpsiPhi_reflections_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class Bs2JpsiPhi_reflections {
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
   Double_t        K2_P;
   Double_t        K2_Eta;
   Double_t        K2_Px;
   Double_t        K2_Py;
   Double_t        K2_Pz;
   Double_t        K2_Pt;
   Double_t        K2_TrackChi2ndof;
   Double_t        K2_DLLk;
   Double_t        K2_DOCAz;
   Double_t        K2_DOCAz_Bshift;
   Double_t        JPsi_P;
   Double_t        JPsi_Px;
   Double_t        JPsi_Py;
   Double_t        JPsi_Pz;
   Double_t        JPsi_Pt;
   Double_t        JPsi_M;
   Double_t        JPsi_VtxChi2ndof;
   Double_t        Phi_P;
   Double_t        Phi_Px;
   Double_t        Phi_Py;
   Double_t        Phi_Pz;
   Double_t        Phi_Pt;
   Double_t        Phi_M;
   Double_t        Phi_ADOCACHI2;
   Double_t        Phi_VtxChi2ndof;
   Double_t        Bs_P;
   Double_t        Bs_Px;
   Double_t        Bs_Py;
   Double_t        Bs_Pz;
   Double_t        Bs_Pt;
   Double_t        Bs_M;
   Double_t        Bs_VtxChi2ndof;
   Double_t        Bs_ct;
   Double_t        Bs_ctRes;
   Double_t        Bs_ctError;
   Double_t        Bs_pid;
   Double_t        Bs_hasOscillated;
   Double_t        Bs_L0DiMuon_TOS;
   Double_t        Bs_L0Muon_TOS;
   Double_t        Bs_Hlt1DiMuonHighMass_TOS;
   Double_t        Bs_Hlt1TrackAllL0_TOS;
   Double_t        Bs_Hlt1TrackMuon_TOS;
   Double_t        Bs_Hlt2DiMuonDetachedJPsi_TOS;
   Double_t        Bs_Hlt2DiMuonJPsi_TOS;
   Double_t        Bs_L0DiMuon_Dec;
   Double_t        Bs_L0Muon_Dec;
   Double_t        Bs_Hlt1DiMuonHighMass_Dec;
   Double_t        Bs_Hlt1TrackAllL0_Dec;
   Double_t        Bs_Hlt1TrackMuon_Dec;
   Double_t        Bs_Hlt2DiMuonDetachedJPsi_Dec;
   Double_t        Bs_Hlt2DiMuonJPsi_Dec;
   Double_t        Bs_PVx;
   Double_t        Bs_PVy;
   Double_t        Bs_PVz;
   Double_t        Bs_PVx_MCtrue;
   Double_t        Bs_PVy_MCtrue;
   Double_t        Bs_PVz_MCtrue;
   Double_t        Bs_decayVertex_X;
   Double_t        Bs_decayVertex_Y;
   Double_t        Bs_decayVertex_Z;
   Double_t        Bs_decayVertex_X_MCtrue;
   Double_t        Bs_decayVertex_Y_MCtrue;
   Double_t        Bs_decayVertex_Z_MCtrue;
   Double_t        Bs_PV_nTracks;
   Double_t        Bs_IPzWeight_1bin;
   Double_t        Bs_IPzWeight_4bin;
   Double_t        Bs_IPzWeight_Correlation_1bin;
   Double_t        Bs_IPzWeight_Correlation_4bin;
   Double_t        Bs_IPzWeight_p1sigma_1bin;
   Double_t        Bs_IPzWeight_p1sigma_4bin;
   Double_t        Bs_IPzWeight_m1sigma_1bin;
   Double_t        Bs_IPzWeight_m1sigma_4bin;
   Double_t        Bs_IPzWeight_Correlation_Add_1bin;
   Double_t        Bs_IPzWeight_Correlation_Add_4bin;
   Double_t        Bs_DTFChi2ndof;
   Double_t        Bs_IP;
   Double_t        Bs_IPChi2;
   Double_t        Bs_2ndBestIPChi2;
   Long64_t        Ev_EventNumber;
   Long64_t        Ev_RunNumber;
   Double_t        Ev_L0;
   Double_t        Ev_nPV;
   Double_t        Ev_nTracksBest;
   Int_t           Ev_MgPolarity;
   Int_t           Bs_hasBestDTFCHI2;
   Int_t           Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine;
   Int_t           Ev_StrippingBetaSBs2JpsiPhiDetached;

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
   TBranch        *b_K2_P;   //!
   TBranch        *b_K2_Eta;   //!
   TBranch        *b_K2_Px;   //!
   TBranch        *b_K2_Py;   //!
   TBranch        *b_K2_Pz;   //!
   TBranch        *b_K2_Pt;   //!
   TBranch        *b_K2_TrackChi2ndof;   //!
   TBranch        *b_K2_DLLk;   //!
   TBranch        *b_K2_DOCAz;   //!
   TBranch        *b_K2_DOCAz_Bshift;   //!
   TBranch        *b_JPsi_P;   //!
   TBranch        *b_JPsi_Px;   //!
   TBranch        *b_JPsi_Py;   //!
   TBranch        *b_JPsi_Pz;   //!
   TBranch        *b_JPsi_Pt;   //!
   TBranch        *b_JPsi_M;   //!
   TBranch        *b_JPsi_VtxChi2ndof;   //!
   TBranch        *b_Phi_P;   //!
   TBranch        *b_Phi_Px;   //!
   TBranch        *b_Phi_Py;   //!
   TBranch        *b_Phi_Pz;   //!
   TBranch        *b_Phi_Pt;   //!
   TBranch        *b_Phi_M;   //!
   TBranch        *b_Phi_ADOCACHI2;   //!
   TBranch        *b_Phi_VtxChi2ndof;   //!
   TBranch        *b_Bs_P;   //!
   TBranch        *b_Bs_Px;   //!
   TBranch        *b_Bs_Py;   //!
   TBranch        *b_Bs_Pz;   //!
   TBranch        *b_Bs_Pt;   //!
   TBranch        *b_Bs_M;   //!
   TBranch        *b_Bs_VtxChi2ndof;   //!
   TBranch        *b_Bs_ct;   //!
   TBranch        *b_Bs_ctRes;   //!
   TBranch        *b_Bs_ctError;   //!
   TBranch        *b_Bs_pid;   //!
   TBranch        *b_Bs_hasOscillated;   //!
   TBranch        *b_Bs_L0DiMuon_TOS;   //!
   TBranch        *b_Bs_L0Muon_TOS;   //!
   TBranch        *b_Bs_Hlt1DiMuonHighMass_TOS;   //!
   TBranch        *b_Bs_Hlt1TrackAllL0_TOS;   //!
   TBranch        *b_Bs_Hlt1TrackMuon_TOS;   //!
   TBranch        *b_Bs_Hlt2DiMuonDetachedJPsi_TOS;   //!
   TBranch        *b_Bs_Hlt2DiMuonJPsi_TOS;   //!
   TBranch        *b_Bs_L0DiMuon_Dec;   //!
   TBranch        *b_Bs_L0Muon_Dec;   //!
   TBranch        *b_Bs_Hlt1DiMuonHighMass_Dec;   //!
   TBranch        *b_Bs_Hlt1TrackAllL0_Dec;   //!
   TBranch        *b_Bs_Hlt1TrackMuon_Dec;   //!
   TBranch        *b_Bs_Hlt2DiMuonDetachedJPsi_Dec;   //!
   TBranch        *b_Bs_Hlt2DiMuonJPsi_Dec;   //!
   TBranch        *b_Bs_PVx;   //!
   TBranch        *b_Bs_PVy;   //!
   TBranch        *b_Bs_PVz;   //!
   TBranch        *b_Bs_PVx_MCtrue;   //!
   TBranch        *b_Bs_PVy_MCtrue;   //!
   TBranch        *b_Bs_PVz_MCtrue;   //!
   TBranch        *b_Bs_decayVertex_X;   //!
   TBranch        *b_Bs_decayVertex_Y;   //!
   TBranch        *b_Bs_decayVertex_Z;   //!
   TBranch        *b_Bs_decayVertex_X_MCtrue;   //!
   TBranch        *b_Bs_decayVertex_Y_MCtrue;   //!
   TBranch        *b_Bs_decayVertex_Z_MCtrue;   //!
   TBranch        *b_Bs_PV_nTracks;   //!
   TBranch        *b_Bs_IPzWeight_1bin;   //!
   TBranch        *b_Bs_IPzWeight_4bin;   //!
   TBranch        *b_Bs_IPzWeight_Correlation_1bin;   //!
   TBranch        *b_Bs_IPzWeight_Correlation_4bin;   //!
   TBranch        *b_Bs_IPzWeight_p1sigma_1bin;   //!
   TBranch        *b_Bs_IPzWeight_p1sigma_4bin;   //!
   TBranch        *b_Bs_IPzWeight_m1sigma_1bin;   //!
   TBranch        *b_Bs_IPzWeight_m1sigma_4bin;   //!
   TBranch        *b_Bs_IPzWeight_Correlation_Add_1bin;   //!
   TBranch        *b_Bs_IPzWeight_Correlation_Add_4bin;   //!
   TBranch        *b_Bs_DTFChi2ndof;   //!
   TBranch        *b_Bs_IP;   //!
   TBranch        *b_Bs_IPChi2;   //!
   TBranch        *b_Bs_2ndBestIPChi2;   //!
   TBranch        *b_Ev_EventNumber;   //!
   TBranch        *b_Ev_RunNumber;   //!
   TBranch        *b_Ev_L0;   //!
   TBranch        *b_Ev_nPV;   //!
   TBranch        *b_Ev_nTracksBest;   //!
   TBranch        *b_Ev_MgPolarity;   //!
   TBranch        *b_Bs_hasBestDTFCHI2;   //!
   TBranch        *b_Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine;   //!
   TBranch        *b_Ev_StrippingBetaSBs2JpsiPhiDetached;   //!

   Bs2JpsiPhi_reflections(TTree *tree=0);
   virtual ~Bs2JpsiPhi_reflections();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Bs2JpsiPhi_reflections_cxx
Bs2JpsiPhi_reflections::Bs2JpsiPhi_reflections(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../../data/Data_BsJpsiPhi_Strip17b_detachedJpsi_BU_Phi1000.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../../data/Data_BsJpsiPhi_Strip17b_detachedJpsi_BU_Phi1000.root");
      }
      f->GetObject("jpsiphi",tree);

   }
   Init(tree);
}

Bs2JpsiPhi_reflections::~Bs2JpsiPhi_reflections()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Bs2JpsiPhi_reflections::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Bs2JpsiPhi_reflections::LoadTree(Long64_t entry)
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

void Bs2JpsiPhi_reflections::Init(TTree *tree)
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
   fChain->SetBranchAddress("K2_P", &K2_P, &b_K2_P);
   fChain->SetBranchAddress("K2_Eta", &K2_Eta, &b_K2_Eta);
   fChain->SetBranchAddress("K2_Px", &K2_Px, &b_K2_Px);
   fChain->SetBranchAddress("K2_Py", &K2_Py, &b_K2_Py);
   fChain->SetBranchAddress("K2_Pz", &K2_Pz, &b_K2_Pz);
   fChain->SetBranchAddress("K2_Pt", &K2_Pt, &b_K2_Pt);
   fChain->SetBranchAddress("K2_TrackChi2ndof", &K2_TrackChi2ndof, &b_K2_TrackChi2ndof);
   fChain->SetBranchAddress("K2_DLLk", &K2_DLLk, &b_K2_DLLk);
   fChain->SetBranchAddress("K2_DOCAz", &K2_DOCAz, &b_K2_DOCAz);
   fChain->SetBranchAddress("K2_DOCAz_Bshift", &K2_DOCAz_Bshift, &b_K2_DOCAz_Bshift);
   fChain->SetBranchAddress("JPsi_P", &JPsi_P, &b_JPsi_P);
   fChain->SetBranchAddress("JPsi_Px", &JPsi_Px, &b_JPsi_Px);
   fChain->SetBranchAddress("JPsi_Py", &JPsi_Py, &b_JPsi_Py);
   fChain->SetBranchAddress("JPsi_Pz", &JPsi_Pz, &b_JPsi_Pz);
   fChain->SetBranchAddress("JPsi_Pt", &JPsi_Pt, &b_JPsi_Pt);
   fChain->SetBranchAddress("JPsi_M", &JPsi_M, &b_JPsi_M);
   fChain->SetBranchAddress("JPsi_VtxChi2ndof", &JPsi_VtxChi2ndof, &b_JPsi_VtxChi2ndof);
   fChain->SetBranchAddress("Phi_P", &Phi_P, &b_Phi_P);
   fChain->SetBranchAddress("Phi_Px", &Phi_Px, &b_Phi_Px);
   fChain->SetBranchAddress("Phi_Py", &Phi_Py, &b_Phi_Py);
   fChain->SetBranchAddress("Phi_Pz", &Phi_Pz, &b_Phi_Pz);
   fChain->SetBranchAddress("Phi_Pt", &Phi_Pt, &b_Phi_Pt);
   fChain->SetBranchAddress("Phi_M", &Phi_M, &b_Phi_M);
   fChain->SetBranchAddress("Phi_ADOCACHI2", &Phi_ADOCACHI2, &b_Phi_ADOCACHI2);
   fChain->SetBranchAddress("Phi_VtxChi2ndof", &Phi_VtxChi2ndof, &b_Phi_VtxChi2ndof);
   fChain->SetBranchAddress("Bs_P", &Bs_P, &b_Bs_P);
   fChain->SetBranchAddress("Bs_Px", &Bs_Px, &b_Bs_Px);
   fChain->SetBranchAddress("Bs_Py", &Bs_Py, &b_Bs_Py);
   fChain->SetBranchAddress("Bs_Pz", &Bs_Pz, &b_Bs_Pz);
   fChain->SetBranchAddress("Bs_Pt", &Bs_Pt, &b_Bs_Pt);
   fChain->SetBranchAddress("Bs_M", &Bs_M, &b_Bs_M);
   fChain->SetBranchAddress("Bs_VtxChi2ndof", &Bs_VtxChi2ndof, &b_Bs_VtxChi2ndof);
   fChain->SetBranchAddress("Bs_ct", &Bs_ct, &b_Bs_ct);
   fChain->SetBranchAddress("Bs_ctRes", &Bs_ctRes, &b_Bs_ctRes);
   fChain->SetBranchAddress("Bs_ctError", &Bs_ctError, &b_Bs_ctError);
   fChain->SetBranchAddress("Bs_pid", &Bs_pid, &b_Bs_pid);
   fChain->SetBranchAddress("Bs_hasOscillated", &Bs_hasOscillated, &b_Bs_hasOscillated);
   fChain->SetBranchAddress("Bs_L0DiMuon_TOS", &Bs_L0DiMuon_TOS, &b_Bs_L0DiMuon_TOS);
   fChain->SetBranchAddress("Bs_L0Muon_TOS", &Bs_L0Muon_TOS, &b_Bs_L0Muon_TOS);
   fChain->SetBranchAddress("Bs_Hlt1DiMuonHighMass_TOS", &Bs_Hlt1DiMuonHighMass_TOS, &b_Bs_Hlt1DiMuonHighMass_TOS);
   fChain->SetBranchAddress("Bs_Hlt1TrackAllL0_TOS", &Bs_Hlt1TrackAllL0_TOS, &b_Bs_Hlt1TrackAllL0_TOS);
   fChain->SetBranchAddress("Bs_Hlt1TrackMuon_TOS", &Bs_Hlt1TrackMuon_TOS, &b_Bs_Hlt1TrackMuon_TOS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonDetachedJPsi_TOS", &Bs_Hlt2DiMuonDetachedJPsi_TOS, &b_Bs_Hlt2DiMuonDetachedJPsi_TOS);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonJPsi_TOS", &Bs_Hlt2DiMuonJPsi_TOS, &b_Bs_Hlt2DiMuonJPsi_TOS);
   fChain->SetBranchAddress("Bs_L0DiMuon_Dec", &Bs_L0DiMuon_Dec, &b_Bs_L0DiMuon_Dec);
   fChain->SetBranchAddress("Bs_L0Muon_Dec", &Bs_L0Muon_Dec, &b_Bs_L0Muon_Dec);
   fChain->SetBranchAddress("Bs_Hlt1DiMuonHighMass_Dec", &Bs_Hlt1DiMuonHighMass_Dec, &b_Bs_Hlt1DiMuonHighMass_Dec);
   fChain->SetBranchAddress("Bs_Hlt1TrackAllL0_Dec", &Bs_Hlt1TrackAllL0_Dec, &b_Bs_Hlt1TrackAllL0_Dec);
   fChain->SetBranchAddress("Bs_Hlt1TrackMuon_Dec", &Bs_Hlt1TrackMuon_Dec, &b_Bs_Hlt1TrackMuon_Dec);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonDetachedJPsi_Dec", &Bs_Hlt2DiMuonDetachedJPsi_Dec, &b_Bs_Hlt2DiMuonDetachedJPsi_Dec);
   fChain->SetBranchAddress("Bs_Hlt2DiMuonJPsi_Dec", &Bs_Hlt2DiMuonJPsi_Dec, &b_Bs_Hlt2DiMuonJPsi_Dec);
   fChain->SetBranchAddress("Bs_PVx", &Bs_PVx, &b_Bs_PVx);
   fChain->SetBranchAddress("Bs_PVy", &Bs_PVy, &b_Bs_PVy);
   fChain->SetBranchAddress("Bs_PVz", &Bs_PVz, &b_Bs_PVz);
   fChain->SetBranchAddress("Bs_PVx_MCtrue", &Bs_PVx_MCtrue, &b_Bs_PVx_MCtrue);
   fChain->SetBranchAddress("Bs_PVy_MCtrue", &Bs_PVy_MCtrue, &b_Bs_PVy_MCtrue);
   fChain->SetBranchAddress("Bs_PVz_MCtrue", &Bs_PVz_MCtrue, &b_Bs_PVz_MCtrue);
   fChain->SetBranchAddress("Bs_decayVertex_X", &Bs_decayVertex_X, &b_Bs_decayVertex_X);
   fChain->SetBranchAddress("Bs_decayVertex_Y", &Bs_decayVertex_Y, &b_Bs_decayVertex_Y);
   fChain->SetBranchAddress("Bs_decayVertex_Z", &Bs_decayVertex_Z, &b_Bs_decayVertex_Z);
   fChain->SetBranchAddress("Bs_decayVertex_X_MCtrue", &Bs_decayVertex_X_MCtrue, &b_Bs_decayVertex_X_MCtrue);
   fChain->SetBranchAddress("Bs_decayVertex_Y_MCtrue", &Bs_decayVertex_Y_MCtrue, &b_Bs_decayVertex_Y_MCtrue);
   fChain->SetBranchAddress("Bs_decayVertex_Z_MCtrue", &Bs_decayVertex_Z_MCtrue, &b_Bs_decayVertex_Z_MCtrue);
   fChain->SetBranchAddress("Bs_PV_nTracks", &Bs_PV_nTracks, &b_Bs_PV_nTracks);
   fChain->SetBranchAddress("Bs_IPzWeight_1bin", &Bs_IPzWeight_1bin, &b_Bs_IPzWeight_1bin);
   fChain->SetBranchAddress("Bs_IPzWeight_4bin", &Bs_IPzWeight_4bin, &b_Bs_IPzWeight_4bin);
   fChain->SetBranchAddress("Bs_IPzWeight_Correlation_1bin", &Bs_IPzWeight_Correlation_1bin, &b_Bs_IPzWeight_Correlation_1bin);
   fChain->SetBranchAddress("Bs_IPzWeight_Correlation_4bin", &Bs_IPzWeight_Correlation_4bin, &b_Bs_IPzWeight_Correlation_4bin);
   fChain->SetBranchAddress("Bs_IPzWeight_p1sigma_1bin", &Bs_IPzWeight_p1sigma_1bin, &b_Bs_IPzWeight_p1sigma_1bin);
   fChain->SetBranchAddress("Bs_IPzWeight_p1sigma_4bin", &Bs_IPzWeight_p1sigma_4bin, &b_Bs_IPzWeight_p1sigma_4bin);
   fChain->SetBranchAddress("Bs_IPzWeight_m1sigma_1bin", &Bs_IPzWeight_m1sigma_1bin, &b_Bs_IPzWeight_m1sigma_1bin);
   fChain->SetBranchAddress("Bs_IPzWeight_m1sigma_4bin", &Bs_IPzWeight_m1sigma_4bin, &b_Bs_IPzWeight_m1sigma_4bin);
   fChain->SetBranchAddress("Bs_IPzWeight_Correlation_Add_1bin", &Bs_IPzWeight_Correlation_Add_1bin, &b_Bs_IPzWeight_Correlation_Add_1bin);
   fChain->SetBranchAddress("Bs_IPzWeight_Correlation_Add_4bin", &Bs_IPzWeight_Correlation_Add_4bin, &b_Bs_IPzWeight_Correlation_Add_4bin);
   fChain->SetBranchAddress("Bs_DTFChi2ndof", &Bs_DTFChi2ndof, &b_Bs_DTFChi2ndof);
   fChain->SetBranchAddress("Bs_IP", &Bs_IP, &b_Bs_IP);
   fChain->SetBranchAddress("Bs_IPChi2", &Bs_IPChi2, &b_Bs_IPChi2);
   fChain->SetBranchAddress("Bs_2ndBestIPChi2", &Bs_2ndBestIPChi2, &b_Bs_2ndBestIPChi2);
   fChain->SetBranchAddress("Ev_EventNumber", &Ev_EventNumber, &b_Ev_EventNumber);
   fChain->SetBranchAddress("Ev_RunNumber", &Ev_RunNumber, &b_Ev_RunNumber);
   fChain->SetBranchAddress("Ev_L0", &Ev_L0, &b_Ev_L0);
   fChain->SetBranchAddress("Ev_nPV", &Ev_nPV, &b_Ev_nPV);
   fChain->SetBranchAddress("Ev_nTracksBest", &Ev_nTracksBest, &b_Ev_nTracksBest);
   fChain->SetBranchAddress("Ev_MgPolarity", &Ev_MgPolarity, &b_Ev_MgPolarity);
   fChain->SetBranchAddress("Bs_hasBestDTFCHI2", &Bs_hasBestDTFCHI2, &b_Bs_hasBestDTFCHI2);
   fChain->SetBranchAddress("Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine", &Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine, &b_Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine);
   fChain->SetBranchAddress("Ev_StrippingBetaSBs2JpsiPhiDetached", &Ev_StrippingBetaSBs2JpsiPhiDetached, &b_Ev_StrippingBetaSBs2JpsiPhiDetached);
   Notify();
}

Bool_t Bs2JpsiPhi_reflections::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Bs2JpsiPhi_reflections::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Bs2JpsiPhi_reflections::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Bs2JpsiPhi_reflections_cxx
