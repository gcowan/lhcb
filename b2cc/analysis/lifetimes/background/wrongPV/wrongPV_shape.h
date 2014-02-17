//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed May 22 11:02:04 2013 by ROOT version 5.34/05
// from TTree jpsiphi/jpsiphi
// found on file: ../../data/Data_BuJpsiK_Strip17b_Bu2JpsiKdetachedLine.root
//////////////////////////////////////////////////////////

#ifndef wrongPV_shape_h
#define wrongPV_shape_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class wrongPV_shape {
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
   Double_t        K1_DLLp;
   Double_t        K1_DOCAz;
   Double_t        K1_DOCAz_Bshift;
   Double_t        JPsi_P;
   Double_t        JPsi_Px;
   Double_t        JPsi_Py;
   Double_t        JPsi_Pz;
   Double_t        JPsi_Pt;
   Double_t        JPsi_M;
   Double_t        JPsi_VtxChi2ndof;
   Double_t        Bu_P;
   Double_t        Bu_Px;
   Double_t        Bu_Py;
   Double_t        Bu_Pz;
   Double_t        Bu_Pt;
   Double_t        Bu_M;
   Double_t        Bu_VtxChi2ndof;
   Double_t        Bu_ct;
   Double_t        Bu_ctRes;
   Double_t        Bu_ctError;
   Double_t        Bu_pid;
   Double_t        Bu_hasOscillated;
   Double_t        Bu_L0DiMuon_TOS;
   Double_t        Bu_L0Muon_TOS;
   Double_t        Bu_Hlt1DiMuonHighMass_TOS;
   Double_t        Bu_Hlt1TrackAllL0_TOS;
   Double_t        Bu_Hlt1TrackMuon_TOS;
   Double_t        Bu_Hlt2DiMuonDetachedJPsi_TOS;
   Double_t        Bu_Hlt2DiMuonJPsi_TOS;
   Double_t        Bu_L0DiMuon_Dec;
   Double_t        Bu_L0Muon_Dec;
   Double_t        Bu_Hlt1DiMuonHighMass_Dec;
   Double_t        Bu_Hlt1TrackAllL0_Dec;
   Double_t        Bu_Hlt1TrackMuon_Dec;
   Double_t        Bu_Hlt2DiMuonDetachedJPsi_Dec;
   Double_t        Bu_Hlt2DiMuonJPsi_Dec;
   Double_t        Bu_PVx;
   Double_t        Bu_PVy;
   Double_t        Bu_PVz;
   Double_t        Bu_PVx_MCtrue;
   Double_t        Bu_PVy_MCtrue;
   Double_t        Bu_PVz_MCtrue;
   Double_t        Bu_decayVertex_X;
   Double_t        Bu_decayVertex_Y;
   Double_t        Bu_decayVertex_Z;
   Double_t        Bu_decayVertex_X_MCtrue;
   Double_t        Bu_decayVertex_Y_MCtrue;
   Double_t        Bu_decayVertex_Z_MCtrue;
   Double_t        Bu_PV_nTracks;
   Double_t        Bu_IPzWeight_1bin;
   Double_t        Bu_IPzWeight_4bin;
   Double_t        Bu_IPzWeight_Correlation_1bin;
   Double_t        Bu_IPzWeight_Correlation_4bin;
   Double_t        Bu_IPzWeight_p1sigma_1bin;
   Double_t        Bu_IPzWeight_p1sigma_4bin;
   Double_t        Bu_IPzWeight_m1sigma_1bin;
   Double_t        Bu_IPzWeight_m1sigma_4bin;
   Double_t        Bu_IPzWeight_Correlation_Add_1bin;
   Double_t        Bu_IPzWeight_Correlation_Add_4bin;
   Double_t        Bu_DTFChi2ndof;
   Double_t        Bu_IP;
   Double_t        Bu_IPChi2;
   Double_t        Bu_2ndBestIPChi2;
   Long64_t        Ev_EventNumber;
   Long64_t        Ev_RunNumber;
   Double_t        Ev_L0;
   Double_t        Ev_nPV;
   Double_t        Ev_nTracksBest;
   Int_t           Ev_MgPolarity;
   Int_t           Bu_hasBestDTFCHI2;
   Int_t           Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine;
   Int_t           Ev_StrippingBetaSBs2JpsiPhiDetached;
   Int_t           Ev_StrippingBetaSBu2JpsiKDetachedLineDecision;
   Int_t           Ev_StrippingBetaSBu2JpsiKNoPIDDetachedLineDecision;
   Int_t           Ev_StrippingBetaSBu2JpsiKPrescaledLineDecision;
   Int_t           Ev_StrippingBs2MuMuLinesBu2JPsiKLineDecision;

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
   TBranch        *b_K1_DLLp;   //!
   TBranch        *b_K1_DOCAz;   //!
   TBranch        *b_K1_DOCAz_Bshift;   //!
   TBranch        *b_JPsi_P;   //!
   TBranch        *b_JPsi_Px;   //!
   TBranch        *b_JPsi_Py;   //!
   TBranch        *b_JPsi_Pz;   //!
   TBranch        *b_JPsi_Pt;   //!
   TBranch        *b_JPsi_M;   //!
   TBranch        *b_JPsi_VtxChi2ndof;   //!
   TBranch        *b_Bu_P;   //!
   TBranch        *b_Bu_Px;   //!
   TBranch        *b_Bu_Py;   //!
   TBranch        *b_Bu_Pz;   //!
   TBranch        *b_Bu_Pt;   //!
   TBranch        *b_Bu_M;   //!
   TBranch        *b_Bu_VtxChi2ndof;   //!
   TBranch        *b_Bu_ct;   //!
   TBranch        *b_Bu_ctRes;   //!
   TBranch        *b_Bu_ctError;   //!
   TBranch        *b_Bu_pid;   //!
   TBranch        *b_Bu_hasOscillated;   //!
   TBranch        *b_Bu_L0DiMuon_TOS;   //!
   TBranch        *b_Bu_L0Muon_TOS;   //!
   TBranch        *b_Bu_Hlt1DiMuonHighMass_TOS;   //!
   TBranch        *b_Bu_Hlt1TrackAllL0_TOS;   //!
   TBranch        *b_Bu_Hlt1TrackMuon_TOS;   //!
   TBranch        *b_Bu_Hlt2DiMuonDetachedJPsi_TOS;   //!
   TBranch        *b_Bu_Hlt2DiMuonJPsi_TOS;   //!
   TBranch        *b_Bu_L0DiMuon_Dec;   //!
   TBranch        *b_Bu_L0Muon_Dec;   //!
   TBranch        *b_Bu_Hlt1DiMuonHighMass_Dec;   //!
   TBranch        *b_Bu_Hlt1TrackAllL0_Dec;   //!
   TBranch        *b_Bu_Hlt1TrackMuon_Dec;   //!
   TBranch        *b_Bu_Hlt2DiMuonDetachedJPsi_Dec;   //!
   TBranch        *b_Bu_Hlt2DiMuonJPsi_Dec;   //!
   TBranch        *b_Bu_PVx;   //!
   TBranch        *b_Bu_PVy;   //!
   TBranch        *b_Bu_PVz;   //!
   TBranch        *b_Bu_PVx_MCtrue;   //!
   TBranch        *b_Bu_PVy_MCtrue;   //!
   TBranch        *b_Bu_PVz_MCtrue;   //!
   TBranch        *b_Bu_decayVertex_X;   //!
   TBranch        *b_Bu_decayVertex_Y;   //!
   TBranch        *b_Bu_decayVertex_Z;   //!
   TBranch        *b_Bu_decayVertex_X_MCtrue;   //!
   TBranch        *b_Bu_decayVertex_Y_MCtrue;   //!
   TBranch        *b_Bu_decayVertex_Z_MCtrue;   //!
   TBranch        *b_Bu_PV_nTracks;   //!
   TBranch        *b_Bu_IPzWeight_1bin;   //!
   TBranch        *b_Bu_IPzWeight_4bin;   //!
   TBranch        *b_Bu_IPzWeight_Correlation_1bin;   //!
   TBranch        *b_Bu_IPzWeight_Correlation_4bin;   //!
   TBranch        *b_Bu_IPzWeight_p1sigma_1bin;   //!
   TBranch        *b_Bu_IPzWeight_p1sigma_4bin;   //!
   TBranch        *b_Bu_IPzWeight_m1sigma_1bin;   //!
   TBranch        *b_Bu_IPzWeight_m1sigma_4bin;   //!
   TBranch        *b_Bu_IPzWeight_Correlation_Add_1bin;   //!
   TBranch        *b_Biu_IPzWeight_Correlation_Add_4bin;   //!
   TBranch        *b_Bu_DTFChi2ndof;   //!
   TBranch        *b_Bu_IP;   //!
   TBranch        *b_Bu_IPChi2;   //!
   TBranch        *b_Bu_2ndBestIPChi2;   //!
   TBranch        *b_Ev_EventNumber;   //!
   TBranch        *b_Ev_RunNumber;   //!
   TBranch        *b_Ev_L0;   //!
   TBranch        *b_Ev_nPV;   //!
   TBranch        *b_Ev_nTracksBest;   //!
   TBranch        *b_Ev_MgPolarity;   //!
   TBranch        *b_Bu_hasBestDTFCHI2;   //!
   TBranch        *b_Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine;   //!
   TBranch        *b_Ev_StrippingBetaSBs2JpsiPhiDetached;   //!
   TBranch        *b_Ev_StrippingBetaSBu2JpsiKDetachedLineDecision;   //!
   TBranch        *b_Ev_StrippingBetaSBu2JpsiKNoPIDDetachedLineDecision;   //!
   TBranch        *b_Ev_StrippingBetaSBu2JpsiKPrescaledLineDecision;   //!
   TBranch        *b_Ev_StrippingBs2MuMuLinesBu2JPsiKLineDecision;   //!

   wrongPV_shape(TTree *tree=0);
   virtual ~wrongPV_shape();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef wrongPV_shape_cxx
wrongPV_shape::wrongPV_shape(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../../data/Data_BuJpsiK_Strip17b_Bu2JpsiKdetachedLine.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../../data/Data_BuJpsiK_Strip17b_Bu2JpsiKdetachedLine.root");
      }
      f->GetObject("jpsiphi",tree);

   }
   Init(tree);
}

wrongPV_shape::~wrongPV_shape()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t wrongPV_shape::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t wrongPV_shape::LoadTree(Long64_t entry)
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

void wrongPV_shape::Init(TTree *tree)
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
   fChain->SetBranchAddress("K1_DLLp", &K1_DLLp, &b_K1_DLLp);
   fChain->SetBranchAddress("K1_DOCAz", &K1_DOCAz, &b_K1_DOCAz);
   fChain->SetBranchAddress("K1_DOCAz_Bshift", &K1_DOCAz_Bshift, &b_K1_DOCAz_Bshift);
   fChain->SetBranchAddress("JPsi_P", &JPsi_P, &b_JPsi_P);
   fChain->SetBranchAddress("JPsi_Px", &JPsi_Px, &b_JPsi_Px);
   fChain->SetBranchAddress("JPsi_Py", &JPsi_Py, &b_JPsi_Py);
   fChain->SetBranchAddress("JPsi_Pz", &JPsi_Pz, &b_JPsi_Pz);
   fChain->SetBranchAddress("JPsi_Pt", &JPsi_Pt, &b_JPsi_Pt);
   fChain->SetBranchAddress("JPsi_M", &JPsi_M, &b_JPsi_M);
   fChain->SetBranchAddress("JPsi_VtxChi2ndof", &JPsi_VtxChi2ndof, &b_JPsi_VtxChi2ndof);
   fChain->SetBranchAddress("Bu_P", &Bu_P, &b_Bu_P);
   fChain->SetBranchAddress("Bu_Px", &Bu_Px, &b_Bu_Px);
   fChain->SetBranchAddress("Bu_Py", &Bu_Py, &b_Bu_Py);
   fChain->SetBranchAddress("Bu_Pz", &Bu_Pz, &b_Bu_Pz);
   fChain->SetBranchAddress("Bu_Pt", &Bu_Pt, &b_Bu_Pt);
   fChain->SetBranchAddress("Bu_M", &Bu_M, &b_Bu_M);
   fChain->SetBranchAddress("Bu_VtxChi2ndof", &Bu_VtxChi2ndof, &b_Bu_VtxChi2ndof);
   fChain->SetBranchAddress("Bu_ct", &Bu_ct, &b_Bu_ct);
   fChain->SetBranchAddress("Bu_ctRes", &Bu_ctRes, &b_Bu_ctRes);
   fChain->SetBranchAddress("Bu_ctError", &Bu_ctError, &b_Bu_ctError);
   fChain->SetBranchAddress("Bu_pid", &Bu_pid, &b_Bu_pid);
   fChain->SetBranchAddress("Bu_hasOscillated", &Bu_hasOscillated, &b_Bu_hasOscillated);
   fChain->SetBranchAddress("Bu_L0DiMuon_TOS", &Bu_L0DiMuon_TOS, &b_Bu_L0DiMuon_TOS);
   fChain->SetBranchAddress("Bu_L0Muon_TOS", &Bu_L0Muon_TOS, &b_Bu_L0Muon_TOS);
   fChain->SetBranchAddress("Bu_Hlt1DiMuonHighMass_TOS", &Bu_Hlt1DiMuonHighMass_TOS, &b_Bu_Hlt1DiMuonHighMass_TOS);
   fChain->SetBranchAddress("Bu_Hlt1TrackAllL0_TOS", &Bu_Hlt1TrackAllL0_TOS, &b_Bu_Hlt1TrackAllL0_TOS);
   fChain->SetBranchAddress("Bu_Hlt1TrackMuon_TOS", &Bu_Hlt1TrackMuon_TOS, &b_Bu_Hlt1TrackMuon_TOS);
   fChain->SetBranchAddress("Bu_Hlt2DiMuonDetachedJPsi_TOS", &Bu_Hlt2DiMuonDetachedJPsi_TOS, &b_Bu_Hlt2DiMuonDetachedJPsi_TOS);
   fChain->SetBranchAddress("Bu_Hlt2DiMuonJPsi_TOS", &Bu_Hlt2DiMuonJPsi_TOS, &b_Bu_Hlt2DiMuonJPsi_TOS);
   fChain->SetBranchAddress("Bu_L0DiMuon_Dec", &Bu_L0DiMuon_Dec, &b_Bu_L0DiMuon_Dec);
   fChain->SetBranchAddress("Bu_L0Muon_Dec", &Bu_L0Muon_Dec, &b_Bu_L0Muon_Dec);
   fChain->SetBranchAddress("Bu_Hlt1DiMuonHighMass_Dec", &Bu_Hlt1DiMuonHighMass_Dec, &b_Bu_Hlt1DiMuonHighMass_Dec);
   fChain->SetBranchAddress("Bu_Hlt1TrackAllL0_Dec", &Bu_Hlt1TrackAllL0_Dec, &b_Bu_Hlt1TrackAllL0_Dec);
   fChain->SetBranchAddress("Bu_Hlt1TrackMuon_Dec", &Bu_Hlt1TrackMuon_Dec, &b_Bu_Hlt1TrackMuon_Dec);
   fChain->SetBranchAddress("Bu_Hlt2DiMuonDetachedJPsi_Dec", &Bu_Hlt2DiMuonDetachedJPsi_Dec, &b_Bu_Hlt2DiMuonDetachedJPsi_Dec);
   fChain->SetBranchAddress("Bu_Hlt2DiMuonJPsi_Dec", &Bu_Hlt2DiMuonJPsi_Dec, &b_Bu_Hlt2DiMuonJPsi_Dec);
   fChain->SetBranchAddress("Bu_PVx", &Bu_PVx, &b_Bu_PVx);
   fChain->SetBranchAddress("Bu_PVy", &Bu_PVy, &b_Bu_PVy);
   fChain->SetBranchAddress("Bu_PVz", &Bu_PVz, &b_Bu_PVz);
   fChain->SetBranchAddress("Bu_PVx_MCtrue", &Bu_PVx_MCtrue, &b_Bu_PVx_MCtrue);
   fChain->SetBranchAddress("Bu_PVy_MCtrue", &Bu_PVy_MCtrue, &b_Bu_PVy_MCtrue);
   fChain->SetBranchAddress("Bu_PVz_MCtrue", &Bu_PVz_MCtrue, &b_Bu_PVz_MCtrue);
   fChain->SetBranchAddress("Bu_decayVertex_X", &Bu_decayVertex_X, &b_Bu_decayVertex_X);
   fChain->SetBranchAddress("Bu_decayVertex_Y", &Bu_decayVertex_Y, &b_Bu_decayVertex_Y);
   fChain->SetBranchAddress("Bu_decayVertex_Z", &Bu_decayVertex_Z, &b_Bu_decayVertex_Z);
   fChain->SetBranchAddress("Bu_decayVertex_X_MCtrue", &Bu_decayVertex_X_MCtrue, &b_Bu_decayVertex_X_MCtrue);
   fChain->SetBranchAddress("Bu_decayVertex_Y_MCtrue", &Bu_decayVertex_Y_MCtrue, &b_Bu_decayVertex_Y_MCtrue);
   fChain->SetBranchAddress("Bu_decayVertex_Z_MCtrue", &Bu_decayVertex_Z_MCtrue, &b_Bu_decayVertex_Z_MCtrue);
   fChain->SetBranchAddress("Bu_PV_nTracks", &Bu_PV_nTracks, &b_Bu_PV_nTracks);
   fChain->SetBranchAddress("Bu_IPzWeight_1bin", &Bu_IPzWeight_1bin, &b_Bu_IPzWeight_1bin);
   fChain->SetBranchAddress("Bu_IPzWeight_4bin", &Bu_IPzWeight_4bin, &b_Bu_IPzWeight_4bin);
   fChain->SetBranchAddress("Bu_IPzWeight_Correlation_1bin", &Bu_IPzWeight_Correlation_1bin, &b_Bu_IPzWeight_Correlation_1bin);
   fChain->SetBranchAddress("Bu_IPzWeight_Correlation_4bin", &Bu_IPzWeight_Correlation_4bin, &b_Bu_IPzWeight_Correlation_4bin);
   fChain->SetBranchAddress("Bu_IPzWeight_p1sigma_1bin", &Bu_IPzWeight_p1sigma_1bin, &b_Bu_IPzWeight_p1sigma_1bin);
   fChain->SetBranchAddress("Bu_IPzWeight_p1sigma_4bin", &Bu_IPzWeight_p1sigma_4bin, &b_Bu_IPzWeight_p1sigma_4bin);
   fChain->SetBranchAddress("Bu_IPzWeight_m1sigma_1bin", &Bu_IPzWeight_m1sigma_1bin, &b_Bu_IPzWeight_m1sigma_1bin);
   fChain->SetBranchAddress("Bu_IPzWeight_m1sigma_4bin", &Bu_IPzWeight_m1sigma_4bin, &b_Bu_IPzWeight_m1sigma_4bin);
   fChain->SetBranchAddress("Bu_IPzWeight_Correlation_Add_1bin", &Bu_IPzWeight_Correlation_Add_1bin, &b_Bu_IPzWeight_Correlation_Add_1bin);
   fChain->SetBranchAddress("Bu_IPzWeight_Correlation_Add_4bin", &Bu_IPzWeight_Correlation_Add_4bin, &b_Biu_IPzWeight_Correlation_Add_4bin);
   fChain->SetBranchAddress("Bu_DTFChi2ndof", &Bu_DTFChi2ndof, &b_Bu_DTFChi2ndof);
   fChain->SetBranchAddress("Bu_IP", &Bu_IP, &b_Bu_IP);
   fChain->SetBranchAddress("Bu_IPChi2", &Bu_IPChi2, &b_Bu_IPChi2);
   fChain->SetBranchAddress("Bu_2ndBestIPChi2", &Bu_2ndBestIPChi2, &b_Bu_2ndBestIPChi2);
   fChain->SetBranchAddress("Ev_EventNumber", &Ev_EventNumber, &b_Ev_EventNumber);
   fChain->SetBranchAddress("Ev_RunNumber", &Ev_RunNumber, &b_Ev_RunNumber);
   fChain->SetBranchAddress("Ev_L0", &Ev_L0, &b_Ev_L0);
   fChain->SetBranchAddress("Ev_nPV", &Ev_nPV, &b_Ev_nPV);
   fChain->SetBranchAddress("Ev_nTracksBest", &Ev_nTracksBest, &b_Ev_nTracksBest);
   fChain->SetBranchAddress("Ev_MgPolarity", &Ev_MgPolarity, &b_Ev_MgPolarity);
   fChain->SetBranchAddress("Bu_hasBestDTFCHI2", &Bu_hasBestDTFCHI2, &b_Bu_hasBestDTFCHI2);
   fChain->SetBranchAddress("Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine", &Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine, &b_Ev_StrippingFullDSTDiMuonJpsi2MuMuDetachedLine);
   fChain->SetBranchAddress("Ev_StrippingBetaSBs2JpsiPhiDetached", &Ev_StrippingBetaSBs2JpsiPhiDetached, &b_Ev_StrippingBetaSBs2JpsiPhiDetached);
   fChain->SetBranchAddress("Ev_StrippingBetaSBu2JpsiKDetachedLineDecision", &Ev_StrippingBetaSBu2JpsiKDetachedLineDecision, &b_Ev_StrippingBetaSBu2JpsiKDetachedLineDecision);
   fChain->SetBranchAddress("Ev_StrippingBetaSBu2JpsiKNoPIDDetachedLineDecision", &Ev_StrippingBetaSBu2JpsiKNoPIDDetachedLineDecision, &b_Ev_StrippingBetaSBu2JpsiKNoPIDDetachedLineDecision);
   fChain->SetBranchAddress("Ev_StrippingBetaSBu2JpsiKPrescaledLineDecision", &Ev_StrippingBetaSBu2JpsiKPrescaledLineDecision, &b_Ev_StrippingBetaSBu2JpsiKPrescaledLineDecision);
   fChain->SetBranchAddress("Ev_StrippingBs2MuMuLinesBu2JPsiKLineDecision", &Ev_StrippingBs2MuMuLinesBu2JPsiKLineDecision, &b_Ev_StrippingBs2MuMuLinesBu2JPsiKLineDecision);
   Notify();
}

Bool_t wrongPV_shape::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void wrongPV_shape::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t wrongPV_shape::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef wrongPV_shape_cxx
