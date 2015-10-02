//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Sep  3 17:52:25 2015 by ROOT version 6.04/02
// from TChain Bu2LLK_eeLine2_TupleMDST/DecayTree/
//////////////////////////////////////////////////////////

#ifndef apply_Bu2Kee_selection_h
#define apply_Bu2Kee_selection_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TLorentzVector.h>

// Header file for the classes stored in the TTree if any.

class apply_Bu2Kee_selection {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxB_ENDVERTEX_COV = 1;
   const Int_t kMaxB_OWNPV_COV = 1;
   const Int_t kMaxPsi_ENDVERTEX_COV = 1;
   const Int_t kMaxPsi_OWNPV_COV = 1;
   const Int_t kMaxPsi_ORIVX_COV = 1;
   const Int_t kMaxeplus_OWNPV_COV = 1;
   const Int_t kMaxeplus_ORIVX_COV = 1;
   const Int_t kMaxeminus_OWNPV_COV = 1;
   const Int_t kMaxeminus_ORIVX_COV = 1;
   const Int_t kMaxKplus_OWNPV_COV = 1;
   const Int_t kMaxKplus_ORIVX_COV = 1;

   // Declaration of leaf types
   Double_t        B_ENDVERTEX_X;
   Double_t        B_ENDVERTEX_Y;
   Double_t        B_ENDVERTEX_Z;
   Double_t        B_ENDVERTEX_XERR;
   Double_t        B_ENDVERTEX_YERR;
   Double_t        B_ENDVERTEX_ZERR;
   Double_t        B_ENDVERTEX_CHI2;
   Int_t           B_ENDVERTEX_NDOF;
   Float_t         B_ENDVERTEX_COV_[3][3];
   Double_t        B_OWNPV_X;
   Double_t        B_OWNPV_Y;
   Double_t        B_OWNPV_Z;
   Double_t        B_OWNPV_XERR;
   Double_t        B_OWNPV_YERR;
   Double_t        B_OWNPV_ZERR;
   Double_t        B_OWNPV_CHI2;
   Int_t           B_OWNPV_NDOF;
   Float_t         B_OWNPV_COV_[3][3];
   Double_t        B_IP_OWNPV;
   Double_t        B_IPCHI2_OWNPV;
   Double_t        B_FD_OWNPV;
   Double_t        B_FDCHI2_OWNPV;
   Double_t        B_DIRA_OWNPV;
   Double_t        B_P;
   Double_t        B_PT;
   Double_t        B_PE;
   Double_t        B_PX;
   Double_t        B_PY;
   Double_t        B_PZ;
   Double_t        B_MM;
   Double_t        B_MMERR;
   Double_t        B_M;
   Int_t           B_ID;
   Double_t        B_TAU;
   Double_t        B_TAUERR;
   Double_t        B_TAUCHI2;
   Int_t           B_ConstBNoPsiFit_nPV;
   Float_t         B_ConstBNoPsiFit_J_psi_1S_M[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_MERR[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_P[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_PERR[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_ctau[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_ctauErr[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_decayLength[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_decayLengthErr[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_eminus_0_ID[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_eminus_0_PE[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_eminus_0_PX[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_eminus_0_PY[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_eminus_0_PZ[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_eminus_ID[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_eminus_PE[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_eminus_PX[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_eminus_PY[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_J_psi_1S_eminus_PZ[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_Kplus_ID[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_Kplus_PE[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_Kplus_PX[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_Kplus_PY[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_Kplus_PZ[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_M[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_MERR[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_P[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_PERR[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_PV_X[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_PV_Y[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_PV_Z[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_PV_key[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_chi2[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_ctau[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_ctauErr[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_decayLength[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_decayLengthErr[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_nDOF[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_nIter[100];   //[B_ConstBNoPsiFit_nPV]
   Float_t         B_ConstBNoPsiFit_status[100];   //[B_ConstBNoPsiFit_nPV]
   Int_t           B_FullFit_nPV;
   Float_t         B_FullFit_J_psi_1S_M[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_J_psi_1S_MERR[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_J_psi_1S_P[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_J_psi_1S_PERR[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_J_psi_1S_ctau[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_J_psi_1S_ctauErr[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_J_psi_1S_decayLength[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_J_psi_1S_decayLengthErr[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_M[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_MERR[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_P[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_PERR[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_PV_X[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_PV_Y[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_PV_Z[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_PV_key[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_chi2[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_ctau[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_ctauErr[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_decayLength[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_decayLengthErr[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_nDOF[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_nIter[100];   //[B_FullFit_nPV]
   Float_t         B_FullFit_status[100];   //[B_FullFit_nPV]
   Int_t           B_NoPsiFit_nPV;
   Float_t         B_NoPsiFit_J_psi_1S_M[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_J_psi_1S_MERR[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_J_psi_1S_P[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_J_psi_1S_PERR[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_J_psi_1S_ctau[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_J_psi_1S_ctauErr[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_J_psi_1S_decayLength[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_J_psi_1S_decayLengthErr[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_M[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_MERR[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_P[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_PERR[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_PV_X[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_PV_Y[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_PV_Z[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_PV_key[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_chi2[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_ctau[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_ctauErr[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_decayLength[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_decayLengthErr[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_nDOF[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_nIter[100];   //[B_NoPsiFit_nPV]
   Float_t         B_NoPsiFit_status[100];   //[B_NoPsiFit_nPV]
   Bool_t          B_L0Global_Dec;
   Bool_t          B_L0Global_TIS;
   Bool_t          B_L0Global_TOS;
   Bool_t          B_Hlt1Global_Dec;
   Bool_t          B_Hlt1Global_TIS;
   Bool_t          B_Hlt1Global_TOS;
   Bool_t          B_Hlt1Phys_Dec;
   Bool_t          B_Hlt1Phys_TIS;
   Bool_t          B_Hlt1Phys_TOS;
   Bool_t          B_Hlt2Global_Dec;
   Bool_t          B_Hlt2Global_TIS;
   Bool_t          B_Hlt2Global_TOS;
   Bool_t          B_Hlt2Phys_Dec;
   Bool_t          B_Hlt2Phys_TIS;
   Bool_t          B_Hlt2Phys_TOS;
   Bool_t          B_L0HadronDecision_Dec;
   Bool_t          B_L0HadronDecision_TIS;
   Bool_t          B_L0HadronDecision_TOS;
   Bool_t          B_L0MuonDecision_Dec;
   Bool_t          B_L0MuonDecision_TIS;
   Bool_t          B_L0MuonDecision_TOS;
   Bool_t          B_L0DiMuonDecision_Dec;
   Bool_t          B_L0DiMuonDecision_TIS;
   Bool_t          B_L0DiMuonDecision_TOS;
   Bool_t          B_L0ElectronDecision_Dec;
   Bool_t          B_L0ElectronDecision_TIS;
   Bool_t          B_L0ElectronDecision_TOS;
   Bool_t          B_L0PhotonDecision_Dec;
   Bool_t          B_L0PhotonDecision_TIS;
   Bool_t          B_L0PhotonDecision_TOS;
   Bool_t          B_Hlt1TrackAllL0Decision_Dec;
   Bool_t          B_Hlt1TrackAllL0Decision_TIS;
   Bool_t          B_Hlt1TrackAllL0Decision_TOS;
   Bool_t          B_Hlt1TrackAllL0TightDecision_Dec;
   Bool_t          B_Hlt1TrackAllL0TightDecision_TIS;
   Bool_t          B_Hlt1TrackAllL0TightDecision_TOS;
   Bool_t          B_Hlt1SingleElectronNoIPDecision_Dec;
   Bool_t          B_Hlt1SingleElectronNoIPDecision_TIS;
   Bool_t          B_Hlt1SingleElectronNoIPDecision_TOS;
   Bool_t          B_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          B_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          B_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          B_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          B_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          B_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          B_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          B_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          B_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          B_Hlt2DiElectronBDecision_Dec;
   Bool_t          B_Hlt2DiElectronBDecision_TIS;
   Bool_t          B_Hlt2DiElectronBDecision_TOS;
   Bool_t          B_Hlt2DiElectronHighMassDecision_Dec;
   Bool_t          B_Hlt2DiElectronHighMassDecision_TIS;
   Bool_t          B_Hlt2DiElectronHighMassDecision_TOS;
   Bool_t          B_Hlt2LowMultElectronDecision_Dec;
   Bool_t          B_Hlt2LowMultElectronDecision_TIS;
   Bool_t          B_Hlt2LowMultElectronDecision_TOS;
   Bool_t          B_Hlt2LowMultElectron_nofilterDecision_Dec;
   Bool_t          B_Hlt2LowMultElectron_nofilterDecision_TIS;
   Bool_t          B_Hlt2LowMultElectron_nofilterDecision_TOS;
   Bool_t          B_Hlt2SingleElectronTFHighPtDecision_Dec;
   Bool_t          B_Hlt2SingleElectronTFHighPtDecision_TIS;
   Bool_t          B_Hlt2SingleElectronTFHighPtDecision_TOS;
   Bool_t          B_Hlt2SingleElectronTFLowPtDecision_Dec;
   Bool_t          B_Hlt2SingleElectronTFLowPtDecision_TIS;
   Bool_t          B_Hlt2SingleElectronTFLowPtDecision_TOS;
   Bool_t          B_Hlt2SingleTFElectronDecision_Dec;
   Bool_t          B_Hlt2SingleTFElectronDecision_TIS;
   Bool_t          B_Hlt2SingleTFElectronDecision_TOS;
   Bool_t          B_Hlt2SingleTFVHighPtElectronDecision_Dec;
   Bool_t          B_Hlt2SingleTFVHighPtElectronDecision_TIS;
   Bool_t          B_Hlt2SingleTFVHighPtElectronDecision_TOS;
   Bool_t          B_Hlt2TopoE2BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoE2BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoE2BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2TopoE3BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoE3BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoE3BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2TopoE4BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoE4BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoE4BodyBBDTDecision_TOS;
   Double_t        Psi_CosTheta;
   Double_t        Psi_ENDVERTEX_X;
   Double_t        Psi_ENDVERTEX_Y;
   Double_t        Psi_ENDVERTEX_Z;
   Double_t        Psi_ENDVERTEX_XERR;
   Double_t        Psi_ENDVERTEX_YERR;
   Double_t        Psi_ENDVERTEX_ZERR;
   Double_t        Psi_ENDVERTEX_CHI2;
   Int_t           Psi_ENDVERTEX_NDOF;
   Float_t         Psi_ENDVERTEX_COV_[3][3];
   Double_t        Psi_OWNPV_X;
   Double_t        Psi_OWNPV_Y;
   Double_t        Psi_OWNPV_Z;
   Double_t        Psi_OWNPV_XERR;
   Double_t        Psi_OWNPV_YERR;
   Double_t        Psi_OWNPV_ZERR;
   Double_t        Psi_OWNPV_CHI2;
   Int_t           Psi_OWNPV_NDOF;
   Float_t         Psi_OWNPV_COV_[3][3];
   Double_t        Psi_IP_OWNPV;
   Double_t        Psi_IPCHI2_OWNPV;
   Double_t        Psi_FD_OWNPV;
   Double_t        Psi_FDCHI2_OWNPV;
   Double_t        Psi_DIRA_OWNPV;
   Double_t        Psi_ORIVX_X;
   Double_t        Psi_ORIVX_Y;
   Double_t        Psi_ORIVX_Z;
   Double_t        Psi_ORIVX_XERR;
   Double_t        Psi_ORIVX_YERR;
   Double_t        Psi_ORIVX_ZERR;
   Double_t        Psi_ORIVX_CHI2;
   Int_t           Psi_ORIVX_NDOF;
   Float_t         Psi_ORIVX_COV_[3][3];
   Double_t        Psi_FD_ORIVX;
   Double_t        Psi_FDCHI2_ORIVX;
   Double_t        Psi_DIRA_ORIVX;
   Double_t        Psi_P;
   Double_t        Psi_PT;
   Double_t        Psi_PE;
   Double_t        Psi_PX;
   Double_t        Psi_PY;
   Double_t        Psi_PZ;
   Double_t        Psi_MM;
   Double_t        Psi_MMERR;
   Double_t        Psi_M;
   Int_t           Psi_ID;
   Double_t        Psi_TAU;
   Double_t        Psi_TAUERR;
   Double_t        Psi_TAUCHI2;
   Bool_t          Psi_L0Global_Dec;
   Bool_t          Psi_L0Global_TIS;
   Bool_t          Psi_L0Global_TOS;
   Bool_t          Psi_Hlt1Global_Dec;
   Bool_t          Psi_Hlt1Global_TIS;
   Bool_t          Psi_Hlt1Global_TOS;
   Bool_t          Psi_Hlt1Phys_Dec;
   Bool_t          Psi_Hlt1Phys_TIS;
   Bool_t          Psi_Hlt1Phys_TOS;
   Bool_t          Psi_Hlt2Global_Dec;
   Bool_t          Psi_Hlt2Global_TIS;
   Bool_t          Psi_Hlt2Global_TOS;
   Bool_t          Psi_Hlt2Phys_Dec;
   Bool_t          Psi_Hlt2Phys_TIS;
   Bool_t          Psi_Hlt2Phys_TOS;
   Bool_t          Psi_L0HadronDecision_Dec;
   Bool_t          Psi_L0HadronDecision_TIS;
   Bool_t          Psi_L0HadronDecision_TOS;
   Bool_t          Psi_L0MuonDecision_Dec;
   Bool_t          Psi_L0MuonDecision_TIS;
   Bool_t          Psi_L0MuonDecision_TOS;
   Bool_t          Psi_L0DiMuonDecision_Dec;
   Bool_t          Psi_L0DiMuonDecision_TIS;
   Bool_t          Psi_L0DiMuonDecision_TOS;
   Bool_t          Psi_L0ElectronDecision_Dec;
   Bool_t          Psi_L0ElectronDecision_TIS;
   Bool_t          Psi_L0ElectronDecision_TOS;
   Bool_t          Psi_L0PhotonDecision_Dec;
   Bool_t          Psi_L0PhotonDecision_TIS;
   Bool_t          Psi_L0PhotonDecision_TOS;
   Bool_t          Psi_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Psi_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Psi_Hlt1TrackAllL0Decision_TOS;
   Bool_t          Psi_Hlt1TrackAllL0TightDecision_Dec;
   Bool_t          Psi_Hlt1TrackAllL0TightDecision_TIS;
   Bool_t          Psi_Hlt1TrackAllL0TightDecision_TOS;
   Bool_t          Psi_Hlt1SingleElectronNoIPDecision_Dec;
   Bool_t          Psi_Hlt1SingleElectronNoIPDecision_TIS;
   Bool_t          Psi_Hlt1SingleElectronNoIPDecision_TOS;
   Bool_t          Psi_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          Psi_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          Psi_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          Psi_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          Psi_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          Psi_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          Psi_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          Psi_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          Psi_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          Psi_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          Psi_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          Psi_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          Psi_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          Psi_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          Psi_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          Psi_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          Psi_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          Psi_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          Psi_Hlt2DiElectronBDecision_Dec;
   Bool_t          Psi_Hlt2DiElectronBDecision_TIS;
   Bool_t          Psi_Hlt2DiElectronBDecision_TOS;
   Bool_t          Psi_Hlt2DiElectronHighMassDecision_Dec;
   Bool_t          Psi_Hlt2DiElectronHighMassDecision_TIS;
   Bool_t          Psi_Hlt2DiElectronHighMassDecision_TOS;
   Bool_t          Psi_Hlt2LowMultElectronDecision_Dec;
   Bool_t          Psi_Hlt2LowMultElectronDecision_TIS;
   Bool_t          Psi_Hlt2LowMultElectronDecision_TOS;
   Bool_t          Psi_Hlt2LowMultElectron_nofilterDecision_Dec;
   Bool_t          Psi_Hlt2LowMultElectron_nofilterDecision_TIS;
   Bool_t          Psi_Hlt2LowMultElectron_nofilterDecision_TOS;
   Bool_t          Psi_Hlt2SingleElectronTFHighPtDecision_Dec;
   Bool_t          Psi_Hlt2SingleElectronTFHighPtDecision_TIS;
   Bool_t          Psi_Hlt2SingleElectronTFHighPtDecision_TOS;
   Bool_t          Psi_Hlt2SingleElectronTFLowPtDecision_Dec;
   Bool_t          Psi_Hlt2SingleElectronTFLowPtDecision_TIS;
   Bool_t          Psi_Hlt2SingleElectronTFLowPtDecision_TOS;
   Bool_t          Psi_Hlt2SingleTFElectronDecision_Dec;
   Bool_t          Psi_Hlt2SingleTFElectronDecision_TIS;
   Bool_t          Psi_Hlt2SingleTFElectronDecision_TOS;
   Bool_t          Psi_Hlt2SingleTFVHighPtElectronDecision_Dec;
   Bool_t          Psi_Hlt2SingleTFVHighPtElectronDecision_TIS;
   Bool_t          Psi_Hlt2SingleTFVHighPtElectronDecision_TOS;
   Bool_t          Psi_Hlt2TopoE2BodyBBDTDecision_Dec;
   Bool_t          Psi_Hlt2TopoE2BodyBBDTDecision_TIS;
   Bool_t          Psi_Hlt2TopoE2BodyBBDTDecision_TOS;
   Bool_t          Psi_Hlt2TopoE3BodyBBDTDecision_Dec;
   Bool_t          Psi_Hlt2TopoE3BodyBBDTDecision_TIS;
   Bool_t          Psi_Hlt2TopoE3BodyBBDTDecision_TOS;
   Bool_t          Psi_Hlt2TopoE4BodyBBDTDecision_Dec;
   Bool_t          Psi_Hlt2TopoE4BodyBBDTDecision_TIS;
   Bool_t          Psi_Hlt2TopoE4BodyBBDTDecision_TOS;
   Double_t        eplus_MC12TuneV2_ProbNNe;
   Double_t        eplus_MC12TuneV2_ProbNNmu;
   Double_t        eplus_MC12TuneV2_ProbNNpi;
   Double_t        eplus_MC12TuneV2_ProbNNk;
   Double_t        eplus_MC12TuneV2_ProbNNp;
   Double_t        eplus_MC12TuneV2_ProbNNghost;
   Double_t        eplus_MC12TuneV3_ProbNNe;
   Double_t        eplus_MC12TuneV3_ProbNNmu;
   Double_t        eplus_MC12TuneV3_ProbNNpi;
   Double_t        eplus_MC12TuneV3_ProbNNk;
   Double_t        eplus_MC12TuneV3_ProbNNp;
   Double_t        eplus_MC12TuneV3_ProbNNghost;
   Double_t        eplus_CosTheta;
   Bool_t          eplus_HasBremAdded;
   Double_t        eplus_BremMultiplicity;
   Double_t        eplus_BremPE;
   Double_t        eplus_BremPX;
   Double_t        eplus_BremPY;
   Double_t        eplus_BremPZ;
   Double_t        eplus_BremOriginX;
   Double_t        eplus_BremOriginY;
   Double_t        eplus_BremOriginZ;
   Double_t        eplus_OWNPV_X;
   Double_t        eplus_OWNPV_Y;
   Double_t        eplus_OWNPV_Z;
   Double_t        eplus_OWNPV_XERR;
   Double_t        eplus_OWNPV_YERR;
   Double_t        eplus_OWNPV_ZERR;
   Double_t        eplus_OWNPV_CHI2;
   Int_t           eplus_OWNPV_NDOF;
   Float_t         eplus_OWNPV_COV_[3][3];
   Double_t        eplus_IP_OWNPV;
   Double_t        eplus_IPCHI2_OWNPV;
   Double_t        eplus_ORIVX_X;
   Double_t        eplus_ORIVX_Y;
   Double_t        eplus_ORIVX_Z;
   Double_t        eplus_ORIVX_XERR;
   Double_t        eplus_ORIVX_YERR;
   Double_t        eplus_ORIVX_ZERR;
   Double_t        eplus_ORIVX_CHI2;
   Int_t           eplus_ORIVX_NDOF;
   Float_t         eplus_ORIVX_COV_[3][3];
   Double_t        eplus_P;
   Double_t        eplus_PT;
   Double_t        eplus_PE;
   Double_t        eplus_PX;
   Double_t        eplus_PY;
   Double_t        eplus_PZ;
   Double_t        eplus_M;
   Double_t        eplus_L0Calo_HCAL_realET;
   Double_t        eplus_L0Calo_HCAL_xProjection;
   Double_t        eplus_L0Calo_HCAL_yProjection;
   Int_t           eplus_L0Calo_HCAL_region;
   Double_t        eplus_L0Calo_HCAL_TriggerET;
   Double_t        eplus_L0Calo_HCAL_TriggerHCALET;
   Double_t        eplus_L0Calo_HCAL_xTrigger;
   Double_t        eplus_L0Calo_HCAL_yTrigger;
   Int_t           eplus_ID;
   Double_t        eplus_PIDe;
   Double_t        eplus_PIDmu;
   Double_t        eplus_PIDK;
   Double_t        eplus_PIDp;
   Double_t        eplus_ProbNNe;
   Double_t        eplus_ProbNNk;
   Double_t        eplus_ProbNNp;
   Double_t        eplus_ProbNNpi;
   Double_t        eplus_ProbNNmu;
   Double_t        eplus_ProbNNghost;
   Bool_t          eplus_hasMuon;
   Bool_t          eplus_isMuon;
   Bool_t          eplus_hasRich;
   Bool_t          eplus_hasCalo;
   Bool_t          eplus_UsedRichAerogel;
   Bool_t          eplus_UsedRich1Gas;
   Bool_t          eplus_UsedRich2Gas;
   Bool_t          eplus_RichAboveElThres;
   Bool_t          eplus_RichAboveMuThres;
   Bool_t          eplus_RichAbovePiThres;
   Bool_t          eplus_RichAboveKaThres;
   Bool_t          eplus_RichAbovePrThres;
   Double_t        eplus_RichDLLe;
   Double_t        eplus_RichDLLmu;
   Double_t        eplus_RichDLLpi;
   Double_t        eplus_RichDLLk;
   Double_t        eplus_RichDLLp;
   Double_t        eplus_RichDLLbt;
   Bool_t          eplus_InAccMuon;
   Bool_t          eplus_isMuonLoose;
   Double_t        eplus_MuonMuLL;
   Double_t        eplus_MuonBkgLL;
   Int_t           eplus_MuonNShared;
   Bool_t          eplus_InAccEcal;
   Double_t        eplus_CaloEcalE;
   Double_t        eplus_EcalPIDe;
   Double_t        eplus_EcalPIDmu;
   Bool_t          eplus_InAccHcal;
   Double_t        eplus_CaloHcalE;
   Double_t        eplus_HcalPIDe;
   Double_t        eplus_HcalPIDmu;
   Bool_t          eplus_InAccPrs;
   Double_t        eplus_PrsPIDe;
   Double_t        eplus_CaloPrsE;
   Bool_t          eplus_InAccSpd;
   Double_t        eplus_CaloSpdE;
   Bool_t          eplus_InAccBrem;
   Double_t        eplus_BremPIDe;
   Double_t        eplus_VeloCharge;
   Int_t           eplus_TRACK_Type;
   Int_t           eplus_TRACK_Key;
   Double_t        eplus_TRACK_CHI2NDOF;
   Double_t        eplus_TRACK_PCHI2;
   Double_t        eplus_TRACK_MatchCHI2;
   Double_t        eplus_TRACK_GhostProb;
   Double_t        eplus_TRACK_CloneDist;
   Double_t        eplus_TRACK_Likelihood;
   Double_t        eminus_MC12TuneV2_ProbNNe;
   Double_t        eminus_MC12TuneV2_ProbNNmu;
   Double_t        eminus_MC12TuneV2_ProbNNpi;
   Double_t        eminus_MC12TuneV2_ProbNNk;
   Double_t        eminus_MC12TuneV2_ProbNNp;
   Double_t        eminus_MC12TuneV2_ProbNNghost;
   Double_t        eminus_MC12TuneV3_ProbNNe;
   Double_t        eminus_MC12TuneV3_ProbNNmu;
   Double_t        eminus_MC12TuneV3_ProbNNpi;
   Double_t        eminus_MC12TuneV3_ProbNNk;
   Double_t        eminus_MC12TuneV3_ProbNNp;
   Double_t        eminus_MC12TuneV3_ProbNNghost;
   Double_t        eminus_CosTheta;
   Bool_t          eminus_HasBremAdded;
   Double_t        eminus_BremMultiplicity;
   Double_t        eminus_BremPE;
   Double_t        eminus_BremPX;
   Double_t        eminus_BremPY;
   Double_t        eminus_BremPZ;
   Double_t        eminus_BremOriginX;
   Double_t        eminus_BremOriginY;
   Double_t        eminus_BremOriginZ;
   Double_t        eminus_OWNPV_X;
   Double_t        eminus_OWNPV_Y;
   Double_t        eminus_OWNPV_Z;
   Double_t        eminus_OWNPV_XERR;
   Double_t        eminus_OWNPV_YERR;
   Double_t        eminus_OWNPV_ZERR;
   Double_t        eminus_OWNPV_CHI2;
   Int_t           eminus_OWNPV_NDOF;
   Float_t         eminus_OWNPV_COV_[3][3];
   Double_t        eminus_IP_OWNPV;
   Double_t        eminus_IPCHI2_OWNPV;
   Double_t        eminus_ORIVX_X;
   Double_t        eminus_ORIVX_Y;
   Double_t        eminus_ORIVX_Z;
   Double_t        eminus_ORIVX_XERR;
   Double_t        eminus_ORIVX_YERR;
   Double_t        eminus_ORIVX_ZERR;
   Double_t        eminus_ORIVX_CHI2;
   Int_t           eminus_ORIVX_NDOF;
   Float_t         eminus_ORIVX_COV_[3][3];
   Double_t        eminus_P;
   Double_t        eminus_PT;
   Double_t        eminus_PE;
   Double_t        eminus_PX;
   Double_t        eminus_PY;
   Double_t        eminus_PZ;
   Double_t        eminus_M;
   Double_t        eminus_L0Calo_HCAL_realET;
   Double_t        eminus_L0Calo_HCAL_xProjection;
   Double_t        eminus_L0Calo_HCAL_yProjection;
   Int_t           eminus_L0Calo_HCAL_region;
   Double_t        eminus_L0Calo_HCAL_TriggerET;
   Double_t        eminus_L0Calo_HCAL_TriggerHCALET;
   Double_t        eminus_L0Calo_HCAL_xTrigger;
   Double_t        eminus_L0Calo_HCAL_yTrigger;
   Int_t           eminus_ID;
   Double_t        eminus_PIDe;
   Double_t        eminus_PIDmu;
   Double_t        eminus_PIDK;
   Double_t        eminus_PIDp;
   Double_t        eminus_ProbNNe;
   Double_t        eminus_ProbNNk;
   Double_t        eminus_ProbNNp;
   Double_t        eminus_ProbNNpi;
   Double_t        eminus_ProbNNmu;
   Double_t        eminus_ProbNNghost;
   Bool_t          eminus_hasMuon;
   Bool_t          eminus_isMuon;
   Bool_t          eminus_hasRich;
   Bool_t          eminus_hasCalo;
   Bool_t          eminus_UsedRichAerogel;
   Bool_t          eminus_UsedRich1Gas;
   Bool_t          eminus_UsedRich2Gas;
   Bool_t          eminus_RichAboveElThres;
   Bool_t          eminus_RichAboveMuThres;
   Bool_t          eminus_RichAbovePiThres;
   Bool_t          eminus_RichAboveKaThres;
   Bool_t          eminus_RichAbovePrThres;
   Double_t        eminus_RichDLLe;
   Double_t        eminus_RichDLLmu;
   Double_t        eminus_RichDLLpi;
   Double_t        eminus_RichDLLk;
   Double_t        eminus_RichDLLp;
   Double_t        eminus_RichDLLbt;
   Bool_t          eminus_InAccMuon;
   Bool_t          eminus_isMuonLoose;
   Double_t        eminus_MuonMuLL;
   Double_t        eminus_MuonBkgLL;
   Int_t           eminus_MuonNShared;
   Bool_t          eminus_InAccEcal;
   Double_t        eminus_CaloEcalE;
   Double_t        eminus_EcalPIDe;
   Double_t        eminus_EcalPIDmu;
   Bool_t          eminus_InAccHcal;
   Double_t        eminus_CaloHcalE;
   Double_t        eminus_HcalPIDe;
   Double_t        eminus_HcalPIDmu;
   Bool_t          eminus_InAccPrs;
   Double_t        eminus_PrsPIDe;
   Double_t        eminus_CaloPrsE;
   Bool_t          eminus_InAccSpd;
   Double_t        eminus_CaloSpdE;
   Bool_t          eminus_InAccBrem;
   Double_t        eminus_BremPIDe;
   Double_t        eminus_VeloCharge;
   Int_t           eminus_TRACK_Type;
   Int_t           eminus_TRACK_Key;
   Double_t        eminus_TRACK_CHI2NDOF;
   Double_t        eminus_TRACK_PCHI2;
   Double_t        eminus_TRACK_MatchCHI2;
   Double_t        eminus_TRACK_GhostProb;
   Double_t        eminus_TRACK_CloneDist;
   Double_t        eminus_TRACK_Likelihood;
   Double_t        Kplus_MC12TuneV2_ProbNNe;
   Double_t        Kplus_MC12TuneV2_ProbNNmu;
   Double_t        Kplus_MC12TuneV2_ProbNNpi;
   Double_t        Kplus_MC12TuneV2_ProbNNk;
   Double_t        Kplus_MC12TuneV2_ProbNNp;
   Double_t        Kplus_MC12TuneV2_ProbNNghost;
   Double_t        Kplus_MC12TuneV3_ProbNNe;
   Double_t        Kplus_MC12TuneV3_ProbNNmu;
   Double_t        Kplus_MC12TuneV3_ProbNNpi;
   Double_t        Kplus_MC12TuneV3_ProbNNk;
   Double_t        Kplus_MC12TuneV3_ProbNNp;
   Double_t        Kplus_MC12TuneV3_ProbNNghost;
   Double_t        Kplus_CosTheta;
   Double_t        Kplus_OWNPV_X;
   Double_t        Kplus_OWNPV_Y;
   Double_t        Kplus_OWNPV_Z;
   Double_t        Kplus_OWNPV_XERR;
   Double_t        Kplus_OWNPV_YERR;
   Double_t        Kplus_OWNPV_ZERR;
   Double_t        Kplus_OWNPV_CHI2;
   Int_t           Kplus_OWNPV_NDOF;
   Float_t         Kplus_OWNPV_COV_[3][3];
   Double_t        Kplus_IP_OWNPV;
   Double_t        Kplus_IPCHI2_OWNPV;
   Double_t        Kplus_ORIVX_X;
   Double_t        Kplus_ORIVX_Y;
   Double_t        Kplus_ORIVX_Z;
   Double_t        Kplus_ORIVX_XERR;
   Double_t        Kplus_ORIVX_YERR;
   Double_t        Kplus_ORIVX_ZERR;
   Double_t        Kplus_ORIVX_CHI2;
   Int_t           Kplus_ORIVX_NDOF;
   Float_t         Kplus_ORIVX_COV_[3][3];
   Double_t        Kplus_P;
   Double_t        Kplus_PT;
   Double_t        Kplus_PE;
   Double_t        Kplus_PX;
   Double_t        Kplus_PY;
   Double_t        Kplus_PZ;
   Double_t        Kplus_M;
   Double_t        Kplus_L0Calo_HCAL_realET;
   Double_t        Kplus_L0Calo_HCAL_xProjection;
   Double_t        Kplus_L0Calo_HCAL_yProjection;
   Int_t           Kplus_L0Calo_HCAL_region;
   Double_t        Kplus_L0Calo_HCAL_TriggerET;
   Double_t        Kplus_L0Calo_HCAL_TriggerHCALET;
   Double_t        Kplus_L0Calo_HCAL_xTrigger;
   Double_t        Kplus_L0Calo_HCAL_yTrigger;
   Int_t           Kplus_ID;
   Double_t        Kplus_PIDe;
   Double_t        Kplus_PIDmu;
   Double_t        Kplus_PIDK;
   Double_t        Kplus_PIDp;
   Double_t        Kplus_ProbNNe;
   Double_t        Kplus_ProbNNk;
   Double_t        Kplus_ProbNNp;
   Double_t        Kplus_ProbNNpi;
   Double_t        Kplus_ProbNNmu;
   Double_t        Kplus_ProbNNghost;
   Bool_t          Kplus_hasMuon;
   Bool_t          Kplus_isMuon;
   Bool_t          Kplus_hasRich;
   Bool_t          Kplus_hasCalo;
   Bool_t          Kplus_UsedRichAerogel;
   Bool_t          Kplus_UsedRich1Gas;
   Bool_t          Kplus_UsedRich2Gas;
   Bool_t          Kplus_RichAboveElThres;
   Bool_t          Kplus_RichAboveMuThres;
   Bool_t          Kplus_RichAbovePiThres;
   Bool_t          Kplus_RichAboveKaThres;
   Bool_t          Kplus_RichAbovePrThres;
   Double_t        Kplus_RichDLLe;
   Double_t        Kplus_RichDLLmu;
   Double_t        Kplus_RichDLLpi;
   Double_t        Kplus_RichDLLk;
   Double_t        Kplus_RichDLLp;
   Double_t        Kplus_RichDLLbt;
   Bool_t          Kplus_InAccMuon;
   Bool_t          Kplus_isMuonLoose;
   Double_t        Kplus_MuonMuLL;
   Double_t        Kplus_MuonBkgLL;
   Int_t           Kplus_MuonNShared;
   Bool_t          Kplus_InAccEcal;
   Double_t        Kplus_CaloEcalE;
   Double_t        Kplus_EcalPIDe;
   Double_t        Kplus_EcalPIDmu;
   Bool_t          Kplus_InAccHcal;
   Double_t        Kplus_CaloHcalE;
   Double_t        Kplus_HcalPIDe;
   Double_t        Kplus_HcalPIDmu;
   Bool_t          Kplus_InAccPrs;
   Double_t        Kplus_PrsPIDe;
   Double_t        Kplus_CaloPrsE;
   Bool_t          Kplus_InAccSpd;
   Double_t        Kplus_CaloSpdE;
   Bool_t          Kplus_InAccBrem;
   Double_t        Kplus_BremPIDe;
   Double_t        Kplus_VeloCharge;
   Int_t           Kplus_TRACK_Type;
   Int_t           Kplus_TRACK_Key;
   Double_t        Kplus_TRACK_CHI2NDOF;
   Double_t        Kplus_TRACK_PCHI2;
   Double_t        Kplus_TRACK_MatchCHI2;
   Double_t        Kplus_TRACK_GhostProb;
   Double_t        Kplus_TRACK_CloneDist;
   Double_t        Kplus_TRACK_Likelihood;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   UInt_t          BCID;
   Int_t           BCType;
   UInt_t          OdinTCK;
   UInt_t          L0DUTCK;
   UInt_t          HLTTCK;
   ULong64_t       GpsTime;
   Short_t         Polarity;
   Int_t           nPV;
   Float_t         PVX[100];   //[nPV]
   Float_t         PVY[100];   //[nPV]
   Float_t         PVZ[100];   //[nPV]
   Float_t         PVXERR[100];   //[nPV]
   Float_t         PVYERR[100];   //[nPV]
   Float_t         PVZERR[100];   //[nPV]
   Float_t         PVCHI2[100];   //[nPV]
   Float_t         PVNDOF[100];   //[nPV]
   Float_t         PVNTRACKS[100];   //[nPV]
   Int_t           nPVs;
   Int_t           nTracks;
   Int_t           nLongTracks;
   Int_t           nDownstreamTracks;
   Int_t           nUpstreamTracks;
   Int_t           nVeloTracks;
   Int_t           nTTracks;
   Int_t           nBackTracks;
   Int_t           nRich1Hits;
   Int_t           nRich2Hits;
   Int_t           nVeloClusters;
   Int_t           nITClusters;
   Int_t           nTTClusters;
   Int_t           nOTClusters;
   Int_t           nSPDHits;
   Int_t           nMuonCoordsS0;
   Int_t           nMuonCoordsS1;
   Int_t           nMuonCoordsS2;
   Int_t           nMuonCoordsS3;
   Int_t           nMuonCoordsS4;
   Int_t           nMuonTracks;

   // List of branches
   TBranch        *b_B_ENDVERTEX_X;   //!
   TBranch        *b_B_ENDVERTEX_Y;   //!
   TBranch        *b_B_ENDVERTEX_Z;   //!
   TBranch        *b_B_ENDVERTEX_XERR;   //!
   TBranch        *b_B_ENDVERTEX_YERR;   //!
   TBranch        *b_B_ENDVERTEX_ZERR;   //!
   TBranch        *b_B_ENDVERTEX_CHI2;   //!
   TBranch        *b_B_ENDVERTEX_NDOF;   //!
   TBranch        *b_B_ENDVERTEX_COV_;   //!
   TBranch        *b_B_OWNPV_X;   //!
   TBranch        *b_B_OWNPV_Y;   //!
   TBranch        *b_B_OWNPV_Z;   //!
   TBranch        *b_B_OWNPV_XERR;   //!
   TBranch        *b_B_OWNPV_YERR;   //!
   TBranch        *b_B_OWNPV_ZERR;   //!
   TBranch        *b_B_OWNPV_CHI2;   //!
   TBranch        *b_B_OWNPV_NDOF;   //!
   TBranch        *b_B_OWNPV_COV_;   //!
   TBranch        *b_B_IP_OWNPV;   //!
   TBranch        *b_B_IPCHI2_OWNPV;   //!
   TBranch        *b_B_FD_OWNPV;   //!
   TBranch        *b_B_FDCHI2_OWNPV;   //!
   TBranch        *b_B_DIRA_OWNPV;   //!
   TBranch        *b_B_P;   //!
   TBranch        *b_B_PT;   //!
   TBranch        *b_B_PE;   //!
   TBranch        *b_B_PX;   //!
   TBranch        *b_B_PY;   //!
   TBranch        *b_B_PZ;   //!
   TBranch        *b_B_MM;   //!
   TBranch        *b_B_MMERR;   //!
   TBranch        *b_B_M;   //!
   TBranch        *b_B_ID;   //!
   TBranch        *b_B_TAU;   //!
   TBranch        *b_B_TAUERR;   //!
   TBranch        *b_B_TAUCHI2;   //!
   TBranch        *b_B_ConstBNoPsiFit_nPV;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_M;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_MERR;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_P;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_PERR;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_ctau;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_ctauErr;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_decayLength;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_decayLengthErr;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_eminus_0_ID;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_eminus_0_PE;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_eminus_0_PX;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_eminus_0_PY;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_eminus_0_PZ;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_eminus_ID;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_eminus_PE;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_eminus_PX;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_eminus_PY;   //!
   TBranch        *b_B_ConstBNoPsiFit_J_psi_1S_eminus_PZ;   //!
   TBranch        *b_B_ConstBNoPsiFit_Kplus_ID;   //!
   TBranch        *b_B_ConstBNoPsiFit_Kplus_PE;   //!
   TBranch        *b_B_ConstBNoPsiFit_Kplus_PX;   //!
   TBranch        *b_B_ConstBNoPsiFit_Kplus_PY;   //!
   TBranch        *b_B_ConstBNoPsiFit_Kplus_PZ;   //!
   TBranch        *b_B_ConstBNoPsiFit_M;   //!
   TBranch        *b_B_ConstBNoPsiFit_MERR;   //!
   TBranch        *b_B_ConstBNoPsiFit_P;   //!
   TBranch        *b_B_ConstBNoPsiFit_PERR;   //!
   TBranch        *b_B_ConstBNoPsiFit_PV_X;   //!
   TBranch        *b_B_ConstBNoPsiFit_PV_Y;   //!
   TBranch        *b_B_ConstBNoPsiFit_PV_Z;   //!
   TBranch        *b_B_ConstBNoPsiFit_PV_key;   //!
   TBranch        *b_B_ConstBNoPsiFit_chi2;   //!
   TBranch        *b_B_ConstBNoPsiFit_ctau;   //!
   TBranch        *b_B_ConstBNoPsiFit_ctauErr;   //!
   TBranch        *b_B_ConstBNoPsiFit_decayLength;   //!
   TBranch        *b_B_ConstBNoPsiFit_decayLengthErr;   //!
   TBranch        *b_B_ConstBNoPsiFit_nDOF;   //!
   TBranch        *b_B_ConstBNoPsiFit_nIter;   //!
   TBranch        *b_B_ConstBNoPsiFit_status;   //!
   TBranch        *b_B_FullFit_nPV;   //!
   TBranch        *b_B_FullFit_J_psi_1S_M;   //!
   TBranch        *b_B_FullFit_J_psi_1S_MERR;   //!
   TBranch        *b_B_FullFit_J_psi_1S_P;   //!
   TBranch        *b_B_FullFit_J_psi_1S_PERR;   //!
   TBranch        *b_B_FullFit_J_psi_1S_ctau;   //!
   TBranch        *b_B_FullFit_J_psi_1S_ctauErr;   //!
   TBranch        *b_B_FullFit_J_psi_1S_decayLength;   //!
   TBranch        *b_B_FullFit_J_psi_1S_decayLengthErr;   //!
   TBranch        *b_B_FullFit_M;   //!
   TBranch        *b_B_FullFit_MERR;   //!
   TBranch        *b_B_FullFit_P;   //!
   TBranch        *b_B_FullFit_PERR;   //!
   TBranch        *b_B_FullFit_PV_X;   //!
   TBranch        *b_B_FullFit_PV_Y;   //!
   TBranch        *b_B_FullFit_PV_Z;   //!
   TBranch        *b_B_FullFit_PV_key;   //!
   TBranch        *b_B_FullFit_chi2;   //!
   TBranch        *b_B_FullFit_ctau;   //!
   TBranch        *b_B_FullFit_ctauErr;   //!
   TBranch        *b_B_FullFit_decayLength;   //!
   TBranch        *b_B_FullFit_decayLengthErr;   //!
   TBranch        *b_B_FullFit_nDOF;   //!
   TBranch        *b_B_FullFit_nIter;   //!
   TBranch        *b_B_FullFit_status;   //!
   TBranch        *b_B_NoPsiFit_nPV;   //!
   TBranch        *b_B_NoPsiFit_J_psi_1S_M;   //!
   TBranch        *b_B_NoPsiFit_J_psi_1S_MERR;   //!
   TBranch        *b_B_NoPsiFit_J_psi_1S_P;   //!
   TBranch        *b_B_NoPsiFit_J_psi_1S_PERR;   //!
   TBranch        *b_B_NoPsiFit_J_psi_1S_ctau;   //!
   TBranch        *b_B_NoPsiFit_J_psi_1S_ctauErr;   //!
   TBranch        *b_B_NoPsiFit_J_psi_1S_decayLength;   //!
   TBranch        *b_B_NoPsiFit_J_psi_1S_decayLengthErr;   //!
   TBranch        *b_B_NoPsiFit_M;   //!
   TBranch        *b_B_NoPsiFit_MERR;   //!
   TBranch        *b_B_NoPsiFit_P;   //!
   TBranch        *b_B_NoPsiFit_PERR;   //!
   TBranch        *b_B_NoPsiFit_PV_X;   //!
   TBranch        *b_B_NoPsiFit_PV_Y;   //!
   TBranch        *b_B_NoPsiFit_PV_Z;   //!
   TBranch        *b_B_NoPsiFit_PV_key;   //!
   TBranch        *b_B_NoPsiFit_chi2;   //!
   TBranch        *b_B_NoPsiFit_ctau;   //!
   TBranch        *b_B_NoPsiFit_ctauErr;   //!
   TBranch        *b_B_NoPsiFit_decayLength;   //!
   TBranch        *b_B_NoPsiFit_decayLengthErr;   //!
   TBranch        *b_B_NoPsiFit_nDOF;   //!
   TBranch        *b_B_NoPsiFit_nIter;   //!
   TBranch        *b_B_NoPsiFit_status;   //!
   TBranch        *b_B_L0Global_Dec;   //!
   TBranch        *b_B_L0Global_TIS;   //!
   TBranch        *b_B_L0Global_TOS;   //!
   TBranch        *b_B_Hlt1Global_Dec;   //!
   TBranch        *b_B_Hlt1Global_TIS;   //!
   TBranch        *b_B_Hlt1Global_TOS;   //!
   TBranch        *b_B_Hlt1Phys_Dec;   //!
   TBranch        *b_B_Hlt1Phys_TIS;   //!
   TBranch        *b_B_Hlt1Phys_TOS;   //!
   TBranch        *b_B_Hlt2Global_Dec;   //!
   TBranch        *b_B_Hlt2Global_TIS;   //!
   TBranch        *b_B_Hlt2Global_TOS;   //!
   TBranch        *b_B_Hlt2Phys_Dec;   //!
   TBranch        *b_B_Hlt2Phys_TIS;   //!
   TBranch        *b_B_Hlt2Phys_TOS;   //!
   TBranch        *b_B_L0HadronDecision_Dec;   //!
   TBranch        *b_B_L0HadronDecision_TIS;   //!
   TBranch        *b_B_L0HadronDecision_TOS;   //!
   TBranch        *b_B_L0MuonDecision_Dec;   //!
   TBranch        *b_B_L0MuonDecision_TIS;   //!
   TBranch        *b_B_L0MuonDecision_TOS;   //!
   TBranch        *b_B_L0DiMuonDecision_Dec;   //!
   TBranch        *b_B_L0DiMuonDecision_TIS;   //!
   TBranch        *b_B_L0DiMuonDecision_TOS;   //!
   TBranch        *b_B_L0ElectronDecision_Dec;   //!
   TBranch        *b_B_L0ElectronDecision_TIS;   //!
   TBranch        *b_B_L0ElectronDecision_TOS;   //!
   TBranch        *b_B_L0PhotonDecision_Dec;   //!
   TBranch        *b_B_L0PhotonDecision_TIS;   //!
   TBranch        *b_B_L0PhotonDecision_TOS;   //!
   TBranch        *b_B_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_B_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_B_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_B_Hlt1TrackAllL0TightDecision_Dec;   //!
   TBranch        *b_B_Hlt1TrackAllL0TightDecision_TIS;   //!
   TBranch        *b_B_Hlt1TrackAllL0TightDecision_TOS;   //!
   TBranch        *b_B_Hlt1SingleElectronNoIPDecision_Dec;   //!
   TBranch        *b_B_Hlt1SingleElectronNoIPDecision_TIS;   //!
   TBranch        *b_B_Hlt1SingleElectronNoIPDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiElectronBDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiElectronBDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiElectronBDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiElectronHighMassDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiElectronHighMassDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiElectronHighMassDecision_TOS;   //!
   TBranch        *b_B_Hlt2LowMultElectronDecision_Dec;   //!
   TBranch        *b_B_Hlt2LowMultElectronDecision_TIS;   //!
   TBranch        *b_B_Hlt2LowMultElectronDecision_TOS;   //!
   TBranch        *b_B_Hlt2LowMultElectron_nofilterDecision_Dec;   //!
   TBranch        *b_B_Hlt2LowMultElectron_nofilterDecision_TIS;   //!
   TBranch        *b_B_Hlt2LowMultElectron_nofilterDecision_TOS;   //!
   TBranch        *b_B_Hlt2SingleElectronTFHighPtDecision_Dec;   //!
   TBranch        *b_B_Hlt2SingleElectronTFHighPtDecision_TIS;   //!
   TBranch        *b_B_Hlt2SingleElectronTFHighPtDecision_TOS;   //!
   TBranch        *b_B_Hlt2SingleElectronTFLowPtDecision_Dec;   //!
   TBranch        *b_B_Hlt2SingleElectronTFLowPtDecision_TIS;   //!
   TBranch        *b_B_Hlt2SingleElectronTFLowPtDecision_TOS;   //!
   TBranch        *b_B_Hlt2SingleTFElectronDecision_Dec;   //!
   TBranch        *b_B_Hlt2SingleTFElectronDecision_TIS;   //!
   TBranch        *b_B_Hlt2SingleTFElectronDecision_TOS;   //!
   TBranch        *b_B_Hlt2SingleTFVHighPtElectronDecision_Dec;   //!
   TBranch        *b_B_Hlt2SingleTFVHighPtElectronDecision_TIS;   //!
   TBranch        *b_B_Hlt2SingleTFVHighPtElectronDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoE2BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoE2BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoE2BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoE3BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoE3BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoE3BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoE4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoE4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoE4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Psi_CosTheta;   //!
   TBranch        *b_Psi_ENDVERTEX_X;   //!
   TBranch        *b_Psi_ENDVERTEX_Y;   //!
   TBranch        *b_Psi_ENDVERTEX_Z;   //!
   TBranch        *b_Psi_ENDVERTEX_XERR;   //!
   TBranch        *b_Psi_ENDVERTEX_YERR;   //!
   TBranch        *b_Psi_ENDVERTEX_ZERR;   //!
   TBranch        *b_Psi_ENDVERTEX_CHI2;   //!
   TBranch        *b_Psi_ENDVERTEX_NDOF;   //!
   TBranch        *b_Psi_ENDVERTEX_COV_;   //!
   TBranch        *b_Psi_OWNPV_X;   //!
   TBranch        *b_Psi_OWNPV_Y;   //!
   TBranch        *b_Psi_OWNPV_Z;   //!
   TBranch        *b_Psi_OWNPV_XERR;   //!
   TBranch        *b_Psi_OWNPV_YERR;   //!
   TBranch        *b_Psi_OWNPV_ZERR;   //!
   TBranch        *b_Psi_OWNPV_CHI2;   //!
   TBranch        *b_Psi_OWNPV_NDOF;   //!
   TBranch        *b_Psi_OWNPV_COV_;   //!
   TBranch        *b_Psi_IP_OWNPV;   //!
   TBranch        *b_Psi_IPCHI2_OWNPV;   //!
   TBranch        *b_Psi_FD_OWNPV;   //!
   TBranch        *b_Psi_FDCHI2_OWNPV;   //!
   TBranch        *b_Psi_DIRA_OWNPV;   //!
   TBranch        *b_Psi_ORIVX_X;   //!
   TBranch        *b_Psi_ORIVX_Y;   //!
   TBranch        *b_Psi_ORIVX_Z;   //!
   TBranch        *b_Psi_ORIVX_XERR;   //!
   TBranch        *b_Psi_ORIVX_YERR;   //!
   TBranch        *b_Psi_ORIVX_ZERR;   //!
   TBranch        *b_Psi_ORIVX_CHI2;   //!
   TBranch        *b_Psi_ORIVX_NDOF;   //!
   TBranch        *b_Psi_ORIVX_COV_;   //!
   TBranch        *b_Psi_FD_ORIVX;   //!
   TBranch        *b_Psi_FDCHI2_ORIVX;   //!
   TBranch        *b_Psi_DIRA_ORIVX;   //!
   TBranch        *b_Psi_P;   //!
   TBranch        *b_Psi_PT;   //!
   TBranch        *b_Psi_PE;   //!
   TBranch        *b_Psi_PX;   //!
   TBranch        *b_Psi_PY;   //!
   TBranch        *b_Psi_PZ;   //!
   TBranch        *b_Psi_MM;   //!
   TBranch        *b_Psi_MMERR;   //!
   TBranch        *b_Psi_M;   //!
   TBranch        *b_Psi_ID;   //!
   TBranch        *b_Psi_TAU;   //!
   TBranch        *b_Psi_TAUERR;   //!
   TBranch        *b_Psi_TAUCHI2;   //!
   TBranch        *b_Psi_L0Global_Dec;   //!
   TBranch        *b_Psi_L0Global_TIS;   //!
   TBranch        *b_Psi_L0Global_TOS;   //!
   TBranch        *b_Psi_Hlt1Global_Dec;   //!
   TBranch        *b_Psi_Hlt1Global_TIS;   //!
   TBranch        *b_Psi_Hlt1Global_TOS;   //!
   TBranch        *b_Psi_Hlt1Phys_Dec;   //!
   TBranch        *b_Psi_Hlt1Phys_TIS;   //!
   TBranch        *b_Psi_Hlt1Phys_TOS;   //!
   TBranch        *b_Psi_Hlt2Global_Dec;   //!
   TBranch        *b_Psi_Hlt2Global_TIS;   //!
   TBranch        *b_Psi_Hlt2Global_TOS;   //!
   TBranch        *b_Psi_Hlt2Phys_Dec;   //!
   TBranch        *b_Psi_Hlt2Phys_TIS;   //!
   TBranch        *b_Psi_Hlt2Phys_TOS;   //!
   TBranch        *b_Psi_L0HadronDecision_Dec;   //!
   TBranch        *b_Psi_L0HadronDecision_TIS;   //!
   TBranch        *b_Psi_L0HadronDecision_TOS;   //!
   TBranch        *b_Psi_L0MuonDecision_Dec;   //!
   TBranch        *b_Psi_L0MuonDecision_TIS;   //!
   TBranch        *b_Psi_L0MuonDecision_TOS;   //!
   TBranch        *b_Psi_L0DiMuonDecision_Dec;   //!
   TBranch        *b_Psi_L0DiMuonDecision_TIS;   //!
   TBranch        *b_Psi_L0DiMuonDecision_TOS;   //!
   TBranch        *b_Psi_L0ElectronDecision_Dec;   //!
   TBranch        *b_Psi_L0ElectronDecision_TIS;   //!
   TBranch        *b_Psi_L0ElectronDecision_TOS;   //!
   TBranch        *b_Psi_L0PhotonDecision_Dec;   //!
   TBranch        *b_Psi_L0PhotonDecision_TIS;   //!
   TBranch        *b_Psi_L0PhotonDecision_TOS;   //!
   TBranch        *b_Psi_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Psi_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Psi_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Psi_Hlt1TrackAllL0TightDecision_Dec;   //!
   TBranch        *b_Psi_Hlt1TrackAllL0TightDecision_TIS;   //!
   TBranch        *b_Psi_Hlt1TrackAllL0TightDecision_TOS;   //!
   TBranch        *b_Psi_Hlt1SingleElectronNoIPDecision_Dec;   //!
   TBranch        *b_Psi_Hlt1SingleElectronNoIPDecision_TIS;   //!
   TBranch        *b_Psi_Hlt1SingleElectronNoIPDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2DiElectronBDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2DiElectronBDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2DiElectronBDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2DiElectronHighMassDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2DiElectronHighMassDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2DiElectronHighMassDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2LowMultElectronDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2LowMultElectronDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2LowMultElectronDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2LowMultElectron_nofilterDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2LowMultElectron_nofilterDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2LowMultElectron_nofilterDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2SingleElectronTFHighPtDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2SingleElectronTFHighPtDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2SingleElectronTFHighPtDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2SingleElectronTFLowPtDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2SingleElectronTFLowPtDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2SingleElectronTFLowPtDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2SingleTFElectronDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2SingleTFElectronDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2SingleTFElectronDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2SingleTFVHighPtElectronDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2SingleTFVHighPtElectronDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2SingleTFVHighPtElectronDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2TopoE2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2TopoE2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2TopoE2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2TopoE3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2TopoE3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2TopoE3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Psi_Hlt2TopoE4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Psi_Hlt2TopoE4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Psi_Hlt2TopoE4BodyBBDTDecision_TOS;   //!
   TBranch        *b_eplus_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_eplus_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_eplus_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_eplus_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_eplus_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_eplus_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_eplus_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_eplus_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_eplus_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_eplus_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_eplus_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_eplus_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_eplus_CosTheta;   //!
   TBranch        *b_eplus_HasBremAdded;   //!
   TBranch        *b_eplus_BremMultiplicity;   //!
   TBranch        *b_eplus_BremPE;   //!
   TBranch        *b_eplus_BremPX;   //!
   TBranch        *b_eplus_BremPY;   //!
   TBranch        *b_eplus_BremPZ;   //!
   TBranch        *b_eplus_BremOriginX;   //!
   TBranch        *b_eplus_BremOriginY;   //!
   TBranch        *b_eplus_BremOriginZ;   //!
   TBranch        *b_eplus_OWNPV_X;   //!
   TBranch        *b_eplus_OWNPV_Y;   //!
   TBranch        *b_eplus_OWNPV_Z;   //!
   TBranch        *b_eplus_OWNPV_XERR;   //!
   TBranch        *b_eplus_OWNPV_YERR;   //!
   TBranch        *b_eplus_OWNPV_ZERR;   //!
   TBranch        *b_eplus_OWNPV_CHI2;   //!
   TBranch        *b_eplus_OWNPV_NDOF;   //!
   TBranch        *b_eplus_OWNPV_COV_;   //!
   TBranch        *b_eplus_IP_OWNPV;   //!
   TBranch        *b_eplus_IPCHI2_OWNPV;   //!
   TBranch        *b_eplus_ORIVX_X;   //!
   TBranch        *b_eplus_ORIVX_Y;   //!
   TBranch        *b_eplus_ORIVX_Z;   //!
   TBranch        *b_eplus_ORIVX_XERR;   //!
   TBranch        *b_eplus_ORIVX_YERR;   //!
   TBranch        *b_eplus_ORIVX_ZERR;   //!
   TBranch        *b_eplus_ORIVX_CHI2;   //!
   TBranch        *b_eplus_ORIVX_NDOF;   //!
   TBranch        *b_eplus_ORIVX_COV_;   //!
   TBranch        *b_eplus_P;   //!
   TBranch        *b_eplus_PT;   //!
   TBranch        *b_eplus_PE;   //!
   TBranch        *b_eplus_PX;   //!
   TBranch        *b_eplus_PY;   //!
   TBranch        *b_eplus_PZ;   //!
   TBranch        *b_eplus_M;   //!
   TBranch        *b_eplus_L0Calo_HCAL_realET;   //!
   TBranch        *b_eplus_L0Calo_HCAL_xProjection;   //!
   TBranch        *b_eplus_L0Calo_HCAL_yProjection;   //!
   TBranch        *b_eplus_L0Calo_HCAL_region;   //!
   TBranch        *b_eplus_L0Calo_HCAL_TriggerET;   //!
   TBranch        *b_eplus_L0Calo_HCAL_TriggerHCALET;   //!
   TBranch        *b_eplus_L0Calo_HCAL_xTrigger;   //!
   TBranch        *b_eplus_L0Calo_HCAL_yTrigger;   //!
   TBranch        *b_eplus_ID;   //!
   TBranch        *b_eplus_PIDe;   //!
   TBranch        *b_eplus_PIDmu;   //!
   TBranch        *b_eplus_PIDK;   //!
   TBranch        *b_eplus_PIDp;   //!
   TBranch        *b_eplus_ProbNNe;   //!
   TBranch        *b_eplus_ProbNNk;   //!
   TBranch        *b_eplus_ProbNNp;   //!
   TBranch        *b_eplus_ProbNNpi;   //!
   TBranch        *b_eplus_ProbNNmu;   //!
   TBranch        *b_eplus_ProbNNghost;   //!
   TBranch        *b_eplus_hasMuon;   //!
   TBranch        *b_eplus_isMuon;   //!
   TBranch        *b_eplus_hasRich;   //!
   TBranch        *b_eplus_hasCalo;   //!
   TBranch        *b_eplus_UsedRichAerogel;   //!
   TBranch        *b_eplus_UsedRich1Gas;   //!
   TBranch        *b_eplus_UsedRich2Gas;   //!
   TBranch        *b_eplus_RichAboveElThres;   //!
   TBranch        *b_eplus_RichAboveMuThres;   //!
   TBranch        *b_eplus_RichAbovePiThres;   //!
   TBranch        *b_eplus_RichAboveKaThres;   //!
   TBranch        *b_eplus_RichAbovePrThres;   //!
   TBranch        *b_eplus_RichDLLe;   //!
   TBranch        *b_eplus_RichDLLmu;   //!
   TBranch        *b_eplus_RichDLLpi;   //!
   TBranch        *b_eplus_RichDLLk;   //!
   TBranch        *b_eplus_RichDLLp;   //!
   TBranch        *b_eplus_RichDLLbt;   //!
   TBranch        *b_eplus_InAccMuon;   //!
   TBranch        *b_eplus_isMuonLoose;   //!
   TBranch        *b_eplus_MuonMuLL;   //!
   TBranch        *b_eplus_MuonBkgLL;   //!
   TBranch        *b_eplus_MuonNShared;   //!
   TBranch        *b_eplus_InAccEcal;   //!
   TBranch        *b_eplus_CaloEcalE;   //!
   TBranch        *b_eplus_EcalPIDe;   //!
   TBranch        *b_eplus_EcalPIDmu;   //!
   TBranch        *b_eplus_InAccHcal;   //!
   TBranch        *b_eplus_CaloHcalE;   //!
   TBranch        *b_eplus_HcalPIDe;   //!
   TBranch        *b_eplus_HcalPIDmu;   //!
   TBranch        *b_eplus_InAccPrs;   //!
   TBranch        *b_eplus_PrsPIDe;   //!
   TBranch        *b_eplus_CaloPrsE;   //!
   TBranch        *b_eplus_InAccSpd;   //!
   TBranch        *b_eplus_CaloSpdE;   //!
   TBranch        *b_eplus_InAccBrem;   //!
   TBranch        *b_eplus_BremPIDe;   //!
   TBranch        *b_eplus_VeloCharge;   //!
   TBranch        *b_eplus_TRACK_Type;   //!
   TBranch        *b_eplus_TRACK_Key;   //!
   TBranch        *b_eplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_eplus_TRACK_PCHI2;   //!
   TBranch        *b_eplus_TRACK_MatchCHI2;   //!
   TBranch        *b_eplus_TRACK_GhostProb;   //!
   TBranch        *b_eplus_TRACK_CloneDist;   //!
   TBranch        *b_eplus_TRACK_Likelihood;   //!
   TBranch        *b_eminus_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_eminus_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_eminus_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_eminus_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_eminus_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_eminus_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_eminus_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_eminus_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_eminus_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_eminus_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_eminus_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_eminus_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_eminus_CosTheta;   //!
   TBranch        *b_eminus_HasBremAdded;   //!
   TBranch        *b_eminus_BremMultiplicity;   //!
   TBranch        *b_eminus_BremPE;   //!
   TBranch        *b_eminus_BremPX;   //!
   TBranch        *b_eminus_BremPY;   //!
   TBranch        *b_eminus_BremPZ;   //!
   TBranch        *b_eminus_BremOriginX;   //!
   TBranch        *b_eminus_BremOriginY;   //!
   TBranch        *b_eminus_BremOriginZ;   //!
   TBranch        *b_eminus_OWNPV_X;   //!
   TBranch        *b_eminus_OWNPV_Y;   //!
   TBranch        *b_eminus_OWNPV_Z;   //!
   TBranch        *b_eminus_OWNPV_XERR;   //!
   TBranch        *b_eminus_OWNPV_YERR;   //!
   TBranch        *b_eminus_OWNPV_ZERR;   //!
   TBranch        *b_eminus_OWNPV_CHI2;   //!
   TBranch        *b_eminus_OWNPV_NDOF;   //!
   TBranch        *b_eminus_OWNPV_COV_;   //!
   TBranch        *b_eminus_IP_OWNPV;   //!
   TBranch        *b_eminus_IPCHI2_OWNPV;   //!
   TBranch        *b_eminus_ORIVX_X;   //!
   TBranch        *b_eminus_ORIVX_Y;   //!
   TBranch        *b_eminus_ORIVX_Z;   //!
   TBranch        *b_eminus_ORIVX_XERR;   //!
   TBranch        *b_eminus_ORIVX_YERR;   //!
   TBranch        *b_eminus_ORIVX_ZERR;   //!
   TBranch        *b_eminus_ORIVX_CHI2;   //!
   TBranch        *b_eminus_ORIVX_NDOF;   //!
   TBranch        *b_eminus_ORIVX_COV_;   //!
   TBranch        *b_eminus_P;   //!
   TBranch        *b_eminus_PT;   //!
   TBranch        *b_eminus_PE;   //!
   TBranch        *b_eminus_PX;   //!
   TBranch        *b_eminus_PY;   //!
   TBranch        *b_eminus_PZ;   //!
   TBranch        *b_eminus_M;   //!
   TBranch        *b_eminus_L0Calo_HCAL_realET;   //!
   TBranch        *b_eminus_L0Calo_HCAL_xProjection;   //!
   TBranch        *b_eminus_L0Calo_HCAL_yProjection;   //!
   TBranch        *b_eminus_L0Calo_HCAL_region;   //!
   TBranch        *b_eminus_L0Calo_HCAL_TriggerET;   //!
   TBranch        *b_eminus_L0Calo_HCAL_TriggerHCALET;   //!
   TBranch        *b_eminus_L0Calo_HCAL_xTrigger;   //!
   TBranch        *b_eminus_L0Calo_HCAL_yTrigger;   //!
   TBranch        *b_eminus_ID;   //!
   TBranch        *b_eminus_PIDe;   //!
   TBranch        *b_eminus_PIDmu;   //!
   TBranch        *b_eminus_PIDK;   //!
   TBranch        *b_eminus_PIDp;   //!
   TBranch        *b_eminus_ProbNNe;   //!
   TBranch        *b_eminus_ProbNNk;   //!
   TBranch        *b_eminus_ProbNNp;   //!
   TBranch        *b_eminus_ProbNNpi;   //!
   TBranch        *b_eminus_ProbNNmu;   //!
   TBranch        *b_eminus_ProbNNghost;   //!
   TBranch        *b_eminus_hasMuon;   //!
   TBranch        *b_eminus_isMuon;   //!
   TBranch        *b_eminus_hasRich;   //!
   TBranch        *b_eminus_hasCalo;   //!
   TBranch        *b_eminus_UsedRichAerogel;   //!
   TBranch        *b_eminus_UsedRich1Gas;   //!
   TBranch        *b_eminus_UsedRich2Gas;   //!
   TBranch        *b_eminus_RichAboveElThres;   //!
   TBranch        *b_eminus_RichAboveMuThres;   //!
   TBranch        *b_eminus_RichAbovePiThres;   //!
   TBranch        *b_eminus_RichAboveKaThres;   //!
   TBranch        *b_eminus_RichAbovePrThres;   //!
   TBranch        *b_eminus_RichDLLe;   //!
   TBranch        *b_eminus_RichDLLmu;   //!
   TBranch        *b_eminus_RichDLLpi;   //!
   TBranch        *b_eminus_RichDLLk;   //!
   TBranch        *b_eminus_RichDLLp;   //!
   TBranch        *b_eminus_RichDLLbt;   //!
   TBranch        *b_eminus_InAccMuon;   //!
   TBranch        *b_eminus_isMuonLoose;   //!
   TBranch        *b_eminus_MuonMuLL;   //!
   TBranch        *b_eminus_MuonBkgLL;   //!
   TBranch        *b_eminus_MuonNShared;   //!
   TBranch        *b_eminus_InAccEcal;   //!
   TBranch        *b_eminus_CaloEcalE;   //!
   TBranch        *b_eminus_EcalPIDe;   //!
   TBranch        *b_eminus_EcalPIDmu;   //!
   TBranch        *b_eminus_InAccHcal;   //!
   TBranch        *b_eminus_CaloHcalE;   //!
   TBranch        *b_eminus_HcalPIDe;   //!
   TBranch        *b_eminus_HcalPIDmu;   //!
   TBranch        *b_eminus_InAccPrs;   //!
   TBranch        *b_eminus_PrsPIDe;   //!
   TBranch        *b_eminus_CaloPrsE;   //!
   TBranch        *b_eminus_InAccSpd;   //!
   TBranch        *b_eminus_CaloSpdE;   //!
   TBranch        *b_eminus_InAccBrem;   //!
   TBranch        *b_eminus_BremPIDe;   //!
   TBranch        *b_eminus_VeloCharge;   //!
   TBranch        *b_eminus_TRACK_Type;   //!
   TBranch        *b_eminus_TRACK_Key;   //!
   TBranch        *b_eminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_eminus_TRACK_PCHI2;   //!
   TBranch        *b_eminus_TRACK_MatchCHI2;   //!
   TBranch        *b_eminus_TRACK_GhostProb;   //!
   TBranch        *b_eminus_TRACK_CloneDist;   //!
   TBranch        *b_eminus_TRACK_Likelihood;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_Kplus_CosTheta;   //!
   TBranch        *b_Kplus_OWNPV_X;   //!
   TBranch        *b_Kplus_OWNPV_Y;   //!
   TBranch        *b_Kplus_OWNPV_Z;   //!
   TBranch        *b_Kplus_OWNPV_XERR;   //!
   TBranch        *b_Kplus_OWNPV_YERR;   //!
   TBranch        *b_Kplus_OWNPV_ZERR;   //!
   TBranch        *b_Kplus_OWNPV_CHI2;   //!
   TBranch        *b_Kplus_OWNPV_NDOF;   //!
   TBranch        *b_Kplus_OWNPV_COV_;   //!
   TBranch        *b_Kplus_IP_OWNPV;   //!
   TBranch        *b_Kplus_IPCHI2_OWNPV;   //!
   TBranch        *b_Kplus_ORIVX_X;   //!
   TBranch        *b_Kplus_ORIVX_Y;   //!
   TBranch        *b_Kplus_ORIVX_Z;   //!
   TBranch        *b_Kplus_ORIVX_XERR;   //!
   TBranch        *b_Kplus_ORIVX_YERR;   //!
   TBranch        *b_Kplus_ORIVX_ZERR;   //!
   TBranch        *b_Kplus_ORIVX_CHI2;   //!
   TBranch        *b_Kplus_ORIVX_NDOF;   //!
   TBranch        *b_Kplus_ORIVX_COV_;   //!
   TBranch        *b_Kplus_P;   //!
   TBranch        *b_Kplus_PT;   //!
   TBranch        *b_Kplus_PE;   //!
   TBranch        *b_Kplus_PX;   //!
   TBranch        *b_Kplus_PY;   //!
   TBranch        *b_Kplus_PZ;   //!
   TBranch        *b_Kplus_M;   //!
   TBranch        *b_Kplus_L0Calo_HCAL_realET;   //!
   TBranch        *b_Kplus_L0Calo_HCAL_xProjection;   //!
   TBranch        *b_Kplus_L0Calo_HCAL_yProjection;   //!
   TBranch        *b_Kplus_L0Calo_HCAL_region;   //!
   TBranch        *b_Kplus_L0Calo_HCAL_TriggerET;   //!
   TBranch        *b_Kplus_L0Calo_HCAL_TriggerHCALET;   //!
   TBranch        *b_Kplus_L0Calo_HCAL_xTrigger;   //!
   TBranch        *b_Kplus_L0Calo_HCAL_yTrigger;   //!
   TBranch        *b_Kplus_ID;   //!
   TBranch        *b_Kplus_PIDe;   //!
   TBranch        *b_Kplus_PIDmu;   //!
   TBranch        *b_Kplus_PIDK;   //!
   TBranch        *b_Kplus_PIDp;   //!
   TBranch        *b_Kplus_ProbNNe;   //!
   TBranch        *b_Kplus_ProbNNk;   //!
   TBranch        *b_Kplus_ProbNNp;   //!
   TBranch        *b_Kplus_ProbNNpi;   //!
   TBranch        *b_Kplus_ProbNNmu;   //!
   TBranch        *b_Kplus_ProbNNghost;   //!
   TBranch        *b_Kplus_hasMuon;   //!
   TBranch        *b_Kplus_isMuon;   //!
   TBranch        *b_Kplus_hasRich;   //!
   TBranch        *b_Kplus_hasCalo;   //!
   TBranch        *b_Kplus_UsedRichAerogel;   //!
   TBranch        *b_Kplus_UsedRich1Gas;   //!
   TBranch        *b_Kplus_UsedRich2Gas;   //!
   TBranch        *b_Kplus_RichAboveElThres;   //!
   TBranch        *b_Kplus_RichAboveMuThres;   //!
   TBranch        *b_Kplus_RichAbovePiThres;   //!
   TBranch        *b_Kplus_RichAboveKaThres;   //!
   TBranch        *b_Kplus_RichAbovePrThres;   //!
   TBranch        *b_Kplus_RichDLLe;   //!
   TBranch        *b_Kplus_RichDLLmu;   //!
   TBranch        *b_Kplus_RichDLLpi;   //!
   TBranch        *b_Kplus_RichDLLk;   //!
   TBranch        *b_Kplus_RichDLLp;   //!
   TBranch        *b_Kplus_RichDLLbt;   //!
   TBranch        *b_Kplus_InAccMuon;   //!
   TBranch        *b_Kplus_isMuonLoose;   //!
   TBranch        *b_Kplus_MuonMuLL;   //!
   TBranch        *b_Kplus_MuonBkgLL;   //!
   TBranch        *b_Kplus_MuonNShared;   //!
   TBranch        *b_Kplus_InAccEcal;   //!
   TBranch        *b_Kplus_CaloEcalE;   //!
   TBranch        *b_Kplus_EcalPIDe;   //!
   TBranch        *b_Kplus_EcalPIDmu;   //!
   TBranch        *b_Kplus_InAccHcal;   //!
   TBranch        *b_Kplus_CaloHcalE;   //!
   TBranch        *b_Kplus_HcalPIDe;   //!
   TBranch        *b_Kplus_HcalPIDmu;   //!
   TBranch        *b_Kplus_InAccPrs;   //!
   TBranch        *b_Kplus_PrsPIDe;   //!
   TBranch        *b_Kplus_CaloPrsE;   //!
   TBranch        *b_Kplus_InAccSpd;   //!
   TBranch        *b_Kplus_CaloSpdE;   //!
   TBranch        *b_Kplus_InAccBrem;   //!
   TBranch        *b_Kplus_BremPIDe;   //!
   TBranch        *b_Kplus_VeloCharge;   //!
   TBranch        *b_Kplus_TRACK_Type;   //!
   TBranch        *b_Kplus_TRACK_Key;   //!
   TBranch        *b_Kplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Kplus_TRACK_PCHI2;   //!
   TBranch        *b_Kplus_TRACK_MatchCHI2;   //!
   TBranch        *b_Kplus_TRACK_GhostProb;   //!
   TBranch        *b_Kplus_TRACK_CloneDist;   //!
   TBranch        *b_Kplus_TRACK_Likelihood;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_BCID;   //!
   TBranch        *b_BCType;   //!
   TBranch        *b_OdinTCK;   //!
   TBranch        *b_L0DUTCK;   //!
   TBranch        *b_HLTTCK;   //!
   TBranch        *b_GpsTime;   //!
   TBranch        *b_Polarity;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_PVX;   //!
   TBranch        *b_PVY;   //!
   TBranch        *b_PVZ;   //!
   TBranch        *b_PVXERR;   //!
   TBranch        *b_PVYERR;   //!
   TBranch        *b_PVZERR;   //!
   TBranch        *b_PVCHI2;   //!
   TBranch        *b_PVNDOF;   //!
   TBranch        *b_PVNTRACKS;   //!
   TBranch        *b_nPVs;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_nLongTracks;   //!
   TBranch        *b_nDownstreamTracks;   //!
   TBranch        *b_nUpstreamTracks;   //!
   TBranch        *b_nVeloTracks;   //!
   TBranch        *b_nTTracks;   //!
   TBranch        *b_nBackTracks;   //!
   TBranch        *b_nRich1Hits;   //!
   TBranch        *b_nRich2Hits;   //!
   TBranch        *b_nVeloClusters;   //!
   TBranch        *b_nITClusters;   //!
   TBranch        *b_nTTClusters;   //!
   TBranch        *b_nOTClusters;   //!
   TBranch        *b_nSPDHits;   //!
   TBranch        *b_nMuonCoordsS0;   //!
   TBranch        *b_nMuonCoordsS1;   //!
   TBranch        *b_nMuonCoordsS2;   //!
   TBranch        *b_nMuonCoordsS3;   //!
   TBranch        *b_nMuonCoordsS4;   //!
   TBranch        *b_nMuonTracks;   //!

   apply_Bu2Kee_selection(TTree *tree=0);
   virtual ~apply_Bu2Kee_selection();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   double computeCosThetaL(const  TLorentzVector & _pMuPlus,
        const  TLorentzVector & _pMuMinus,
        const  TLorentzVector & _pK);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef apply_Bu2Kee_selection_cxx
apply_Bu2Kee_selection::apply_Bu2Kee_selection(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {

#ifdef SINGLE_TREE
      // The following code should be used if you want this class to access
      // a single tree instead of a chain
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/afs/cern.ch/user/k/kap01/workspace/public/ForGreig/DATA_Bplus_Kplusee_12123002_11_MagDown.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/afs/cern.ch/user/k/kap01/workspace/public/ForGreig/DATA_Bplus_Kplusee_12123002_11_MagDown.root");
      }
      f->GetObject("Bu2LLK_eeLine2_TupleMDST/DecayTree",tree);

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
      TChain * chain = new TChain("Bu2LLK_eeLine2_TupleMDST/DecayTree","");
      chain->Add("/afs/cern.ch/user/k/kap01/workspace/public/ForGreig/DATA_Bplus_Kplusee_12123002_12_MagDown.root/Bu2LLK_eeLine2_TupleMDST/DecayTree");
      chain->Add("/afs/cern.ch/user/k/kap01/workspace/public/ForGreig/DATA_Bplus_Kplusee_12123002_12_MagUp.root/Bu2LLK_eeLine2_TupleMDST/DecayTree");
      //chain->Add("/afs/cern.ch/user/k/kap01/workspace/public/ForGreig/DATA_Bplus_Kplusee_12123002_11_MagUp.root/Bu2LLK_eeLine2_TupleMDST/DecayTree");
      chain->Add("/afs/cern.ch/user/k/kap01/workspace/public/ForGreig/DATA_Bplus_Kplusee_12123002_11_MagDown.root/Bu2LLK_eeLine2_TupleMDST/DecayTree");
      tree = chain;
#endif // SINGLE_TREE

   }
   Init(tree);
}

apply_Bu2Kee_selection::~apply_Bu2Kee_selection()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t apply_Bu2Kee_selection::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t apply_Bu2Kee_selection::LoadTree(Long64_t entry)
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

void apply_Bu2Kee_selection::Init(TTree *tree)
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

   fChain->SetBranchAddress("B_ENDVERTEX_X", &B_ENDVERTEX_X, &b_B_ENDVERTEX_X);
   fChain->SetBranchAddress("B_ENDVERTEX_Y", &B_ENDVERTEX_Y, &b_B_ENDVERTEX_Y);
   fChain->SetBranchAddress("B_ENDVERTEX_Z", &B_ENDVERTEX_Z, &b_B_ENDVERTEX_Z);
   fChain->SetBranchAddress("B_ENDVERTEX_XERR", &B_ENDVERTEX_XERR, &b_B_ENDVERTEX_XERR);
   fChain->SetBranchAddress("B_ENDVERTEX_YERR", &B_ENDVERTEX_YERR, &b_B_ENDVERTEX_YERR);
   fChain->SetBranchAddress("B_ENDVERTEX_ZERR", &B_ENDVERTEX_ZERR, &b_B_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("B_ENDVERTEX_CHI2", &B_ENDVERTEX_CHI2, &b_B_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("B_ENDVERTEX_NDOF", &B_ENDVERTEX_NDOF, &b_B_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("B_ENDVERTEX_COV_", B_ENDVERTEX_COV_, &b_B_ENDVERTEX_COV_);
   fChain->SetBranchAddress("B_OWNPV_X", &B_OWNPV_X, &b_B_OWNPV_X);
   fChain->SetBranchAddress("B_OWNPV_Y", &B_OWNPV_Y, &b_B_OWNPV_Y);
   fChain->SetBranchAddress("B_OWNPV_Z", &B_OWNPV_Z, &b_B_OWNPV_Z);
   fChain->SetBranchAddress("B_OWNPV_XERR", &B_OWNPV_XERR, &b_B_OWNPV_XERR);
   fChain->SetBranchAddress("B_OWNPV_YERR", &B_OWNPV_YERR, &b_B_OWNPV_YERR);
   fChain->SetBranchAddress("B_OWNPV_ZERR", &B_OWNPV_ZERR, &b_B_OWNPV_ZERR);
   fChain->SetBranchAddress("B_OWNPV_CHI2", &B_OWNPV_CHI2, &b_B_OWNPV_CHI2);
   fChain->SetBranchAddress("B_OWNPV_NDOF", &B_OWNPV_NDOF, &b_B_OWNPV_NDOF);
   fChain->SetBranchAddress("B_OWNPV_COV_", B_OWNPV_COV_, &b_B_OWNPV_COV_);
   fChain->SetBranchAddress("B_IP_OWNPV", &B_IP_OWNPV, &b_B_IP_OWNPV);
   fChain->SetBranchAddress("B_IPCHI2_OWNPV", &B_IPCHI2_OWNPV, &b_B_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_FD_OWNPV", &B_FD_OWNPV, &b_B_FD_OWNPV);
   fChain->SetBranchAddress("B_FDCHI2_OWNPV", &B_FDCHI2_OWNPV, &b_B_FDCHI2_OWNPV);
   fChain->SetBranchAddress("B_DIRA_OWNPV", &B_DIRA_OWNPV, &b_B_DIRA_OWNPV);
   fChain->SetBranchAddress("B_P", &B_P, &b_B_P);
   fChain->SetBranchAddress("B_PT", &B_PT, &b_B_PT);
   fChain->SetBranchAddress("B_PE", &B_PE, &b_B_PE);
   fChain->SetBranchAddress("B_PX", &B_PX, &b_B_PX);
   fChain->SetBranchAddress("B_PY", &B_PY, &b_B_PY);
   fChain->SetBranchAddress("B_PZ", &B_PZ, &b_B_PZ);
   fChain->SetBranchAddress("B_MM", &B_MM, &b_B_MM);
   fChain->SetBranchAddress("B_MMERR", &B_MMERR, &b_B_MMERR);
   fChain->SetBranchAddress("B_M", &B_M, &b_B_M);
   fChain->SetBranchAddress("B_ID", &B_ID, &b_B_ID);
   fChain->SetBranchAddress("B_TAU", &B_TAU, &b_B_TAU);
   fChain->SetBranchAddress("B_TAUERR", &B_TAUERR, &b_B_TAUERR);
   fChain->SetBranchAddress("B_TAUCHI2", &B_TAUCHI2, &b_B_TAUCHI2);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_nPV", &B_ConstBNoPsiFit_nPV, &b_B_ConstBNoPsiFit_nPV);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_M", B_ConstBNoPsiFit_J_psi_1S_M, &b_B_ConstBNoPsiFit_J_psi_1S_M);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_MERR", B_ConstBNoPsiFit_J_psi_1S_MERR, &b_B_ConstBNoPsiFit_J_psi_1S_MERR);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_P", B_ConstBNoPsiFit_J_psi_1S_P, &b_B_ConstBNoPsiFit_J_psi_1S_P);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_PERR", B_ConstBNoPsiFit_J_psi_1S_PERR, &b_B_ConstBNoPsiFit_J_psi_1S_PERR);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_ctau", B_ConstBNoPsiFit_J_psi_1S_ctau, &b_B_ConstBNoPsiFit_J_psi_1S_ctau);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_ctauErr", B_ConstBNoPsiFit_J_psi_1S_ctauErr, &b_B_ConstBNoPsiFit_J_psi_1S_ctauErr);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_decayLength", B_ConstBNoPsiFit_J_psi_1S_decayLength, &b_B_ConstBNoPsiFit_J_psi_1S_decayLength);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_decayLengthErr", B_ConstBNoPsiFit_J_psi_1S_decayLengthErr, &b_B_ConstBNoPsiFit_J_psi_1S_decayLengthErr);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_eminus_0_ID", B_ConstBNoPsiFit_J_psi_1S_eminus_0_ID, &b_B_ConstBNoPsiFit_J_psi_1S_eminus_0_ID);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_eminus_0_PE", B_ConstBNoPsiFit_J_psi_1S_eminus_0_PE, &b_B_ConstBNoPsiFit_J_psi_1S_eminus_0_PE);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_eminus_0_PX", B_ConstBNoPsiFit_J_psi_1S_eminus_0_PX, &b_B_ConstBNoPsiFit_J_psi_1S_eminus_0_PX);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_eminus_0_PY", B_ConstBNoPsiFit_J_psi_1S_eminus_0_PY, &b_B_ConstBNoPsiFit_J_psi_1S_eminus_0_PY);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_eminus_0_PZ", B_ConstBNoPsiFit_J_psi_1S_eminus_0_PZ, &b_B_ConstBNoPsiFit_J_psi_1S_eminus_0_PZ);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_eminus_ID", B_ConstBNoPsiFit_J_psi_1S_eminus_ID, &b_B_ConstBNoPsiFit_J_psi_1S_eminus_ID);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_eminus_PE", B_ConstBNoPsiFit_J_psi_1S_eminus_PE, &b_B_ConstBNoPsiFit_J_psi_1S_eminus_PE);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_eminus_PX", B_ConstBNoPsiFit_J_psi_1S_eminus_PX, &b_B_ConstBNoPsiFit_J_psi_1S_eminus_PX);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_eminus_PY", B_ConstBNoPsiFit_J_psi_1S_eminus_PY, &b_B_ConstBNoPsiFit_J_psi_1S_eminus_PY);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_J_psi_1S_eminus_PZ", B_ConstBNoPsiFit_J_psi_1S_eminus_PZ, &b_B_ConstBNoPsiFit_J_psi_1S_eminus_PZ);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_Kplus_ID", B_ConstBNoPsiFit_Kplus_ID, &b_B_ConstBNoPsiFit_Kplus_ID);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_Kplus_PE", B_ConstBNoPsiFit_Kplus_PE, &b_B_ConstBNoPsiFit_Kplus_PE);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_Kplus_PX", B_ConstBNoPsiFit_Kplus_PX, &b_B_ConstBNoPsiFit_Kplus_PX);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_Kplus_PY", B_ConstBNoPsiFit_Kplus_PY, &b_B_ConstBNoPsiFit_Kplus_PY);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_Kplus_PZ", B_ConstBNoPsiFit_Kplus_PZ, &b_B_ConstBNoPsiFit_Kplus_PZ);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_M", B_ConstBNoPsiFit_M, &b_B_ConstBNoPsiFit_M);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_MERR", B_ConstBNoPsiFit_MERR, &b_B_ConstBNoPsiFit_MERR);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_P", B_ConstBNoPsiFit_P, &b_B_ConstBNoPsiFit_P);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_PERR", B_ConstBNoPsiFit_PERR, &b_B_ConstBNoPsiFit_PERR);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_PV_X", B_ConstBNoPsiFit_PV_X, &b_B_ConstBNoPsiFit_PV_X);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_PV_Y", B_ConstBNoPsiFit_PV_Y, &b_B_ConstBNoPsiFit_PV_Y);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_PV_Z", B_ConstBNoPsiFit_PV_Z, &b_B_ConstBNoPsiFit_PV_Z);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_PV_key", B_ConstBNoPsiFit_PV_key, &b_B_ConstBNoPsiFit_PV_key);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_chi2", B_ConstBNoPsiFit_chi2, &b_B_ConstBNoPsiFit_chi2);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_ctau", B_ConstBNoPsiFit_ctau, &b_B_ConstBNoPsiFit_ctau);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_ctauErr", B_ConstBNoPsiFit_ctauErr, &b_B_ConstBNoPsiFit_ctauErr);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_decayLength", B_ConstBNoPsiFit_decayLength, &b_B_ConstBNoPsiFit_decayLength);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_decayLengthErr", B_ConstBNoPsiFit_decayLengthErr, &b_B_ConstBNoPsiFit_decayLengthErr);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_nDOF", B_ConstBNoPsiFit_nDOF, &b_B_ConstBNoPsiFit_nDOF);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_nIter", B_ConstBNoPsiFit_nIter, &b_B_ConstBNoPsiFit_nIter);
   fChain->SetBranchAddress("B_ConstBNoPsiFit_status", B_ConstBNoPsiFit_status, &b_B_ConstBNoPsiFit_status);
   fChain->SetBranchAddress("B_FullFit_nPV", &B_FullFit_nPV, &b_B_FullFit_nPV);
   fChain->SetBranchAddress("B_FullFit_J_psi_1S_M", B_FullFit_J_psi_1S_M, &b_B_FullFit_J_psi_1S_M);
   fChain->SetBranchAddress("B_FullFit_J_psi_1S_MERR", B_FullFit_J_psi_1S_MERR, &b_B_FullFit_J_psi_1S_MERR);
   fChain->SetBranchAddress("B_FullFit_J_psi_1S_P", B_FullFit_J_psi_1S_P, &b_B_FullFit_J_psi_1S_P);
   fChain->SetBranchAddress("B_FullFit_J_psi_1S_PERR", B_FullFit_J_psi_1S_PERR, &b_B_FullFit_J_psi_1S_PERR);
   fChain->SetBranchAddress("B_FullFit_J_psi_1S_ctau", B_FullFit_J_psi_1S_ctau, &b_B_FullFit_J_psi_1S_ctau);
   fChain->SetBranchAddress("B_FullFit_J_psi_1S_ctauErr", B_FullFit_J_psi_1S_ctauErr, &b_B_FullFit_J_psi_1S_ctauErr);
   fChain->SetBranchAddress("B_FullFit_J_psi_1S_decayLength", B_FullFit_J_psi_1S_decayLength, &b_B_FullFit_J_psi_1S_decayLength);
   fChain->SetBranchAddress("B_FullFit_J_psi_1S_decayLengthErr", B_FullFit_J_psi_1S_decayLengthErr, &b_B_FullFit_J_psi_1S_decayLengthErr);
   fChain->SetBranchAddress("B_FullFit_M", B_FullFit_M, &b_B_FullFit_M);
   fChain->SetBranchAddress("B_FullFit_MERR", B_FullFit_MERR, &b_B_FullFit_MERR);
   fChain->SetBranchAddress("B_FullFit_P", B_FullFit_P, &b_B_FullFit_P);
   fChain->SetBranchAddress("B_FullFit_PERR", B_FullFit_PERR, &b_B_FullFit_PERR);
   fChain->SetBranchAddress("B_FullFit_PV_X", B_FullFit_PV_X, &b_B_FullFit_PV_X);
   fChain->SetBranchAddress("B_FullFit_PV_Y", B_FullFit_PV_Y, &b_B_FullFit_PV_Y);
   fChain->SetBranchAddress("B_FullFit_PV_Z", B_FullFit_PV_Z, &b_B_FullFit_PV_Z);
   fChain->SetBranchAddress("B_FullFit_PV_key", B_FullFit_PV_key, &b_B_FullFit_PV_key);
   fChain->SetBranchAddress("B_FullFit_chi2", B_FullFit_chi2, &b_B_FullFit_chi2);
   fChain->SetBranchAddress("B_FullFit_ctau", B_FullFit_ctau, &b_B_FullFit_ctau);
   fChain->SetBranchAddress("B_FullFit_ctauErr", B_FullFit_ctauErr, &b_B_FullFit_ctauErr);
   fChain->SetBranchAddress("B_FullFit_decayLength", B_FullFit_decayLength, &b_B_FullFit_decayLength);
   fChain->SetBranchAddress("B_FullFit_decayLengthErr", B_FullFit_decayLengthErr, &b_B_FullFit_decayLengthErr);
   fChain->SetBranchAddress("B_FullFit_nDOF", B_FullFit_nDOF, &b_B_FullFit_nDOF);
   fChain->SetBranchAddress("B_FullFit_nIter", B_FullFit_nIter, &b_B_FullFit_nIter);
   fChain->SetBranchAddress("B_FullFit_status", B_FullFit_status, &b_B_FullFit_status);
   fChain->SetBranchAddress("B_NoPsiFit_nPV", &B_NoPsiFit_nPV, &b_B_NoPsiFit_nPV);
   fChain->SetBranchAddress("B_NoPsiFit_J_psi_1S_M", B_NoPsiFit_J_psi_1S_M, &b_B_NoPsiFit_J_psi_1S_M);
   fChain->SetBranchAddress("B_NoPsiFit_J_psi_1S_MERR", B_NoPsiFit_J_psi_1S_MERR, &b_B_NoPsiFit_J_psi_1S_MERR);
   fChain->SetBranchAddress("B_NoPsiFit_J_psi_1S_P", B_NoPsiFit_J_psi_1S_P, &b_B_NoPsiFit_J_psi_1S_P);
   fChain->SetBranchAddress("B_NoPsiFit_J_psi_1S_PERR", B_NoPsiFit_J_psi_1S_PERR, &b_B_NoPsiFit_J_psi_1S_PERR);
   fChain->SetBranchAddress("B_NoPsiFit_J_psi_1S_ctau", B_NoPsiFit_J_psi_1S_ctau, &b_B_NoPsiFit_J_psi_1S_ctau);
   fChain->SetBranchAddress("B_NoPsiFit_J_psi_1S_ctauErr", B_NoPsiFit_J_psi_1S_ctauErr, &b_B_NoPsiFit_J_psi_1S_ctauErr);
   fChain->SetBranchAddress("B_NoPsiFit_J_psi_1S_decayLength", B_NoPsiFit_J_psi_1S_decayLength, &b_B_NoPsiFit_J_psi_1S_decayLength);
   fChain->SetBranchAddress("B_NoPsiFit_J_psi_1S_decayLengthErr", B_NoPsiFit_J_psi_1S_decayLengthErr, &b_B_NoPsiFit_J_psi_1S_decayLengthErr);
   fChain->SetBranchAddress("B_NoPsiFit_M", B_NoPsiFit_M, &b_B_NoPsiFit_M);
   fChain->SetBranchAddress("B_NoPsiFit_MERR", B_NoPsiFit_MERR, &b_B_NoPsiFit_MERR);
   fChain->SetBranchAddress("B_NoPsiFit_P", B_NoPsiFit_P, &b_B_NoPsiFit_P);
   fChain->SetBranchAddress("B_NoPsiFit_PERR", B_NoPsiFit_PERR, &b_B_NoPsiFit_PERR);
   fChain->SetBranchAddress("B_NoPsiFit_PV_X", B_NoPsiFit_PV_X, &b_B_NoPsiFit_PV_X);
   fChain->SetBranchAddress("B_NoPsiFit_PV_Y", B_NoPsiFit_PV_Y, &b_B_NoPsiFit_PV_Y);
   fChain->SetBranchAddress("B_NoPsiFit_PV_Z", B_NoPsiFit_PV_Z, &b_B_NoPsiFit_PV_Z);
   fChain->SetBranchAddress("B_NoPsiFit_PV_key", B_NoPsiFit_PV_key, &b_B_NoPsiFit_PV_key);
   fChain->SetBranchAddress("B_NoPsiFit_chi2", B_NoPsiFit_chi2, &b_B_NoPsiFit_chi2);
   fChain->SetBranchAddress("B_NoPsiFit_ctau", B_NoPsiFit_ctau, &b_B_NoPsiFit_ctau);
   fChain->SetBranchAddress("B_NoPsiFit_ctauErr", B_NoPsiFit_ctauErr, &b_B_NoPsiFit_ctauErr);
   fChain->SetBranchAddress("B_NoPsiFit_decayLength", B_NoPsiFit_decayLength, &b_B_NoPsiFit_decayLength);
   fChain->SetBranchAddress("B_NoPsiFit_decayLengthErr", B_NoPsiFit_decayLengthErr, &b_B_NoPsiFit_decayLengthErr);
   fChain->SetBranchAddress("B_NoPsiFit_nDOF", B_NoPsiFit_nDOF, &b_B_NoPsiFit_nDOF);
   fChain->SetBranchAddress("B_NoPsiFit_nIter", B_NoPsiFit_nIter, &b_B_NoPsiFit_nIter);
   fChain->SetBranchAddress("B_NoPsiFit_status", B_NoPsiFit_status, &b_B_NoPsiFit_status);
   fChain->SetBranchAddress("B_L0Global_Dec", &B_L0Global_Dec, &b_B_L0Global_Dec);
   fChain->SetBranchAddress("B_L0Global_TIS", &B_L0Global_TIS, &b_B_L0Global_TIS);
   fChain->SetBranchAddress("B_L0Global_TOS", &B_L0Global_TOS, &b_B_L0Global_TOS);
   fChain->SetBranchAddress("B_Hlt1Global_Dec", &B_Hlt1Global_Dec, &b_B_Hlt1Global_Dec);
   fChain->SetBranchAddress("B_Hlt1Global_TIS", &B_Hlt1Global_TIS, &b_B_Hlt1Global_TIS);
   fChain->SetBranchAddress("B_Hlt1Global_TOS", &B_Hlt1Global_TOS, &b_B_Hlt1Global_TOS);
   fChain->SetBranchAddress("B_Hlt1Phys_Dec", &B_Hlt1Phys_Dec, &b_B_Hlt1Phys_Dec);
   fChain->SetBranchAddress("B_Hlt1Phys_TIS", &B_Hlt1Phys_TIS, &b_B_Hlt1Phys_TIS);
   fChain->SetBranchAddress("B_Hlt1Phys_TOS", &B_Hlt1Phys_TOS, &b_B_Hlt1Phys_TOS);
   fChain->SetBranchAddress("B_Hlt2Global_Dec", &B_Hlt2Global_Dec, &b_B_Hlt2Global_Dec);
   fChain->SetBranchAddress("B_Hlt2Global_TIS", &B_Hlt2Global_TIS, &b_B_Hlt2Global_TIS);
   fChain->SetBranchAddress("B_Hlt2Global_TOS", &B_Hlt2Global_TOS, &b_B_Hlt2Global_TOS);
   fChain->SetBranchAddress("B_Hlt2Phys_Dec", &B_Hlt2Phys_Dec, &b_B_Hlt2Phys_Dec);
   fChain->SetBranchAddress("B_Hlt2Phys_TIS", &B_Hlt2Phys_TIS, &b_B_Hlt2Phys_TIS);
   fChain->SetBranchAddress("B_Hlt2Phys_TOS", &B_Hlt2Phys_TOS, &b_B_Hlt2Phys_TOS);
   fChain->SetBranchAddress("B_L0HadronDecision_Dec", &B_L0HadronDecision_Dec, &b_B_L0HadronDecision_Dec);
   fChain->SetBranchAddress("B_L0HadronDecision_TIS", &B_L0HadronDecision_TIS, &b_B_L0HadronDecision_TIS);
   fChain->SetBranchAddress("B_L0HadronDecision_TOS", &B_L0HadronDecision_TOS, &b_B_L0HadronDecision_TOS);
   fChain->SetBranchAddress("B_L0MuonDecision_Dec", &B_L0MuonDecision_Dec, &b_B_L0MuonDecision_Dec);
   fChain->SetBranchAddress("B_L0MuonDecision_TIS", &B_L0MuonDecision_TIS, &b_B_L0MuonDecision_TIS);
   fChain->SetBranchAddress("B_L0MuonDecision_TOS", &B_L0MuonDecision_TOS, &b_B_L0MuonDecision_TOS);
   fChain->SetBranchAddress("B_L0DiMuonDecision_Dec", &B_L0DiMuonDecision_Dec, &b_B_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("B_L0DiMuonDecision_TIS", &B_L0DiMuonDecision_TIS, &b_B_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("B_L0DiMuonDecision_TOS", &B_L0DiMuonDecision_TOS, &b_B_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("B_L0ElectronDecision_Dec", &B_L0ElectronDecision_Dec, &b_B_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("B_L0ElectronDecision_TIS", &B_L0ElectronDecision_TIS, &b_B_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("B_L0ElectronDecision_TOS", &B_L0ElectronDecision_TOS, &b_B_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("B_L0PhotonDecision_Dec", &B_L0PhotonDecision_Dec, &b_B_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("B_L0PhotonDecision_TIS", &B_L0PhotonDecision_TIS, &b_B_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("B_L0PhotonDecision_TOS", &B_L0PhotonDecision_TOS, &b_B_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0Decision_Dec", &B_Hlt1TrackAllL0Decision_Dec, &b_B_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0Decision_TIS", &B_Hlt1TrackAllL0Decision_TIS, &b_B_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0Decision_TOS", &B_Hlt1TrackAllL0Decision_TOS, &b_B_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0TightDecision_Dec", &B_Hlt1TrackAllL0TightDecision_Dec, &b_B_Hlt1TrackAllL0TightDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0TightDecision_TIS", &B_Hlt1TrackAllL0TightDecision_TIS, &b_B_Hlt1TrackAllL0TightDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0TightDecision_TOS", &B_Hlt1TrackAllL0TightDecision_TOS, &b_B_Hlt1TrackAllL0TightDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1SingleElectronNoIPDecision_Dec", &B_Hlt1SingleElectronNoIPDecision_Dec, &b_B_Hlt1SingleElectronNoIPDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1SingleElectronNoIPDecision_TIS", &B_Hlt1SingleElectronNoIPDecision_TIS, &b_B_Hlt1SingleElectronNoIPDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1SingleElectronNoIPDecision_TOS", &B_Hlt1SingleElectronNoIPDecision_TOS, &b_B_Hlt1SingleElectronNoIPDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodyBBDTDecision_Dec", &B_Hlt2Topo2BodyBBDTDecision_Dec, &b_B_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo2BodyBBDTDecision_TIS", &B_Hlt2Topo2BodyBBDTDecision_TIS, &b_B_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodyBBDTDecision_TOS", &B_Hlt2Topo2BodyBBDTDecision_TOS, &b_B_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodySimpleDecision_Dec", &B_Hlt2Topo2BodySimpleDecision_Dec, &b_B_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo2BodySimpleDecision_TIS", &B_Hlt2Topo2BodySimpleDecision_TIS, &b_B_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodySimpleDecision_TOS", &B_Hlt2Topo2BodySimpleDecision_TOS, &b_B_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodyBBDTDecision_Dec", &B_Hlt2Topo3BodyBBDTDecision_Dec, &b_B_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo3BodyBBDTDecision_TIS", &B_Hlt2Topo3BodyBBDTDecision_TIS, &b_B_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodyBBDTDecision_TOS", &B_Hlt2Topo3BodyBBDTDecision_TOS, &b_B_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodySimpleDecision_Dec", &B_Hlt2Topo3BodySimpleDecision_Dec, &b_B_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo3BodySimpleDecision_TIS", &B_Hlt2Topo3BodySimpleDecision_TIS, &b_B_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodySimpleDecision_TOS", &B_Hlt2Topo3BodySimpleDecision_TOS, &b_B_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodyBBDTDecision_Dec", &B_Hlt2Topo4BodyBBDTDecision_Dec, &b_B_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo4BodyBBDTDecision_TIS", &B_Hlt2Topo4BodyBBDTDecision_TIS, &b_B_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodyBBDTDecision_TOS", &B_Hlt2Topo4BodyBBDTDecision_TOS, &b_B_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodySimpleDecision_Dec", &B_Hlt2Topo4BodySimpleDecision_Dec, &b_B_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo4BodySimpleDecision_TIS", &B_Hlt2Topo4BodySimpleDecision_TIS, &b_B_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodySimpleDecision_TOS", &B_Hlt2Topo4BodySimpleDecision_TOS, &b_B_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiElectronBDecision_Dec", &B_Hlt2DiElectronBDecision_Dec, &b_B_Hlt2DiElectronBDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiElectronBDecision_TIS", &B_Hlt2DiElectronBDecision_TIS, &b_B_Hlt2DiElectronBDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiElectronBDecision_TOS", &B_Hlt2DiElectronBDecision_TOS, &b_B_Hlt2DiElectronBDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiElectronHighMassDecision_Dec", &B_Hlt2DiElectronHighMassDecision_Dec, &b_B_Hlt2DiElectronHighMassDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiElectronHighMassDecision_TIS", &B_Hlt2DiElectronHighMassDecision_TIS, &b_B_Hlt2DiElectronHighMassDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiElectronHighMassDecision_TOS", &B_Hlt2DiElectronHighMassDecision_TOS, &b_B_Hlt2DiElectronHighMassDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2LowMultElectronDecision_Dec", &B_Hlt2LowMultElectronDecision_Dec, &b_B_Hlt2LowMultElectronDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2LowMultElectronDecision_TIS", &B_Hlt2LowMultElectronDecision_TIS, &b_B_Hlt2LowMultElectronDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2LowMultElectronDecision_TOS", &B_Hlt2LowMultElectronDecision_TOS, &b_B_Hlt2LowMultElectronDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2LowMultElectron_nofilterDecision_Dec", &B_Hlt2LowMultElectron_nofilterDecision_Dec, &b_B_Hlt2LowMultElectron_nofilterDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2LowMultElectron_nofilterDecision_TIS", &B_Hlt2LowMultElectron_nofilterDecision_TIS, &b_B_Hlt2LowMultElectron_nofilterDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2LowMultElectron_nofilterDecision_TOS", &B_Hlt2LowMultElectron_nofilterDecision_TOS, &b_B_Hlt2LowMultElectron_nofilterDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2SingleElectronTFHighPtDecision_Dec", &B_Hlt2SingleElectronTFHighPtDecision_Dec, &b_B_Hlt2SingleElectronTFHighPtDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2SingleElectronTFHighPtDecision_TIS", &B_Hlt2SingleElectronTFHighPtDecision_TIS, &b_B_Hlt2SingleElectronTFHighPtDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2SingleElectronTFHighPtDecision_TOS", &B_Hlt2SingleElectronTFHighPtDecision_TOS, &b_B_Hlt2SingleElectronTFHighPtDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2SingleElectronTFLowPtDecision_Dec", &B_Hlt2SingleElectronTFLowPtDecision_Dec, &b_B_Hlt2SingleElectronTFLowPtDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2SingleElectronTFLowPtDecision_TIS", &B_Hlt2SingleElectronTFLowPtDecision_TIS, &b_B_Hlt2SingleElectronTFLowPtDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2SingleElectronTFLowPtDecision_TOS", &B_Hlt2SingleElectronTFLowPtDecision_TOS, &b_B_Hlt2SingleElectronTFLowPtDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2SingleTFElectronDecision_Dec", &B_Hlt2SingleTFElectronDecision_Dec, &b_B_Hlt2SingleTFElectronDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2SingleTFElectronDecision_TIS", &B_Hlt2SingleTFElectronDecision_TIS, &b_B_Hlt2SingleTFElectronDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2SingleTFElectronDecision_TOS", &B_Hlt2SingleTFElectronDecision_TOS, &b_B_Hlt2SingleTFElectronDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2SingleTFVHighPtElectronDecision_Dec", &B_Hlt2SingleTFVHighPtElectronDecision_Dec, &b_B_Hlt2SingleTFVHighPtElectronDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2SingleTFVHighPtElectronDecision_TIS", &B_Hlt2SingleTFVHighPtElectronDecision_TIS, &b_B_Hlt2SingleTFVHighPtElectronDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2SingleTFVHighPtElectronDecision_TOS", &B_Hlt2SingleTFVHighPtElectronDecision_TOS, &b_B_Hlt2SingleTFVHighPtElectronDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoE2BodyBBDTDecision_Dec", &B_Hlt2TopoE2BodyBBDTDecision_Dec, &b_B_Hlt2TopoE2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoE2BodyBBDTDecision_TIS", &B_Hlt2TopoE2BodyBBDTDecision_TIS, &b_B_Hlt2TopoE2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoE2BodyBBDTDecision_TOS", &B_Hlt2TopoE2BodyBBDTDecision_TOS, &b_B_Hlt2TopoE2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoE3BodyBBDTDecision_Dec", &B_Hlt2TopoE3BodyBBDTDecision_Dec, &b_B_Hlt2TopoE3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoE3BodyBBDTDecision_TIS", &B_Hlt2TopoE3BodyBBDTDecision_TIS, &b_B_Hlt2TopoE3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoE3BodyBBDTDecision_TOS", &B_Hlt2TopoE3BodyBBDTDecision_TOS, &b_B_Hlt2TopoE3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoE4BodyBBDTDecision_Dec", &B_Hlt2TopoE4BodyBBDTDecision_Dec, &b_B_Hlt2TopoE4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoE4BodyBBDTDecision_TIS", &B_Hlt2TopoE4BodyBBDTDecision_TIS, &b_B_Hlt2TopoE4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoE4BodyBBDTDecision_TOS", &B_Hlt2TopoE4BodyBBDTDecision_TOS, &b_B_Hlt2TopoE4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Psi_CosTheta", &Psi_CosTheta, &b_Psi_CosTheta);
   fChain->SetBranchAddress("Psi_ENDVERTEX_X", &Psi_ENDVERTEX_X, &b_Psi_ENDVERTEX_X);
   fChain->SetBranchAddress("Psi_ENDVERTEX_Y", &Psi_ENDVERTEX_Y, &b_Psi_ENDVERTEX_Y);
   fChain->SetBranchAddress("Psi_ENDVERTEX_Z", &Psi_ENDVERTEX_Z, &b_Psi_ENDVERTEX_Z);
   fChain->SetBranchAddress("Psi_ENDVERTEX_XERR", &Psi_ENDVERTEX_XERR, &b_Psi_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Psi_ENDVERTEX_YERR", &Psi_ENDVERTEX_YERR, &b_Psi_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Psi_ENDVERTEX_ZERR", &Psi_ENDVERTEX_ZERR, &b_Psi_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Psi_ENDVERTEX_CHI2", &Psi_ENDVERTEX_CHI2, &b_Psi_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Psi_ENDVERTEX_NDOF", &Psi_ENDVERTEX_NDOF, &b_Psi_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Psi_ENDVERTEX_COV_", Psi_ENDVERTEX_COV_, &b_Psi_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Psi_OWNPV_X", &Psi_OWNPV_X, &b_Psi_OWNPV_X);
   fChain->SetBranchAddress("Psi_OWNPV_Y", &Psi_OWNPV_Y, &b_Psi_OWNPV_Y);
   fChain->SetBranchAddress("Psi_OWNPV_Z", &Psi_OWNPV_Z, &b_Psi_OWNPV_Z);
   fChain->SetBranchAddress("Psi_OWNPV_XERR", &Psi_OWNPV_XERR, &b_Psi_OWNPV_XERR);
   fChain->SetBranchAddress("Psi_OWNPV_YERR", &Psi_OWNPV_YERR, &b_Psi_OWNPV_YERR);
   fChain->SetBranchAddress("Psi_OWNPV_ZERR", &Psi_OWNPV_ZERR, &b_Psi_OWNPV_ZERR);
   fChain->SetBranchAddress("Psi_OWNPV_CHI2", &Psi_OWNPV_CHI2, &b_Psi_OWNPV_CHI2);
   fChain->SetBranchAddress("Psi_OWNPV_NDOF", &Psi_OWNPV_NDOF, &b_Psi_OWNPV_NDOF);
   fChain->SetBranchAddress("Psi_OWNPV_COV_", Psi_OWNPV_COV_, &b_Psi_OWNPV_COV_);
   fChain->SetBranchAddress("Psi_IP_OWNPV", &Psi_IP_OWNPV, &b_Psi_IP_OWNPV);
   fChain->SetBranchAddress("Psi_IPCHI2_OWNPV", &Psi_IPCHI2_OWNPV, &b_Psi_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Psi_FD_OWNPV", &Psi_FD_OWNPV, &b_Psi_FD_OWNPV);
   fChain->SetBranchAddress("Psi_FDCHI2_OWNPV", &Psi_FDCHI2_OWNPV, &b_Psi_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Psi_DIRA_OWNPV", &Psi_DIRA_OWNPV, &b_Psi_DIRA_OWNPV);
   fChain->SetBranchAddress("Psi_ORIVX_X", &Psi_ORIVX_X, &b_Psi_ORIVX_X);
   fChain->SetBranchAddress("Psi_ORIVX_Y", &Psi_ORIVX_Y, &b_Psi_ORIVX_Y);
   fChain->SetBranchAddress("Psi_ORIVX_Z", &Psi_ORIVX_Z, &b_Psi_ORIVX_Z);
   fChain->SetBranchAddress("Psi_ORIVX_XERR", &Psi_ORIVX_XERR, &b_Psi_ORIVX_XERR);
   fChain->SetBranchAddress("Psi_ORIVX_YERR", &Psi_ORIVX_YERR, &b_Psi_ORIVX_YERR);
   fChain->SetBranchAddress("Psi_ORIVX_ZERR", &Psi_ORIVX_ZERR, &b_Psi_ORIVX_ZERR);
   fChain->SetBranchAddress("Psi_ORIVX_CHI2", &Psi_ORIVX_CHI2, &b_Psi_ORIVX_CHI2);
   fChain->SetBranchAddress("Psi_ORIVX_NDOF", &Psi_ORIVX_NDOF, &b_Psi_ORIVX_NDOF);
   fChain->SetBranchAddress("Psi_ORIVX_COV_", Psi_ORIVX_COV_, &b_Psi_ORIVX_COV_);
   fChain->SetBranchAddress("Psi_FD_ORIVX", &Psi_FD_ORIVX, &b_Psi_FD_ORIVX);
   fChain->SetBranchAddress("Psi_FDCHI2_ORIVX", &Psi_FDCHI2_ORIVX, &b_Psi_FDCHI2_ORIVX);
   fChain->SetBranchAddress("Psi_DIRA_ORIVX", &Psi_DIRA_ORIVX, &b_Psi_DIRA_ORIVX);
   fChain->SetBranchAddress("Psi_P", &Psi_P, &b_Psi_P);
   fChain->SetBranchAddress("Psi_PT", &Psi_PT, &b_Psi_PT);
   fChain->SetBranchAddress("Psi_PE", &Psi_PE, &b_Psi_PE);
   fChain->SetBranchAddress("Psi_PX", &Psi_PX, &b_Psi_PX);
   fChain->SetBranchAddress("Psi_PY", &Psi_PY, &b_Psi_PY);
   fChain->SetBranchAddress("Psi_PZ", &Psi_PZ, &b_Psi_PZ);
   fChain->SetBranchAddress("Psi_MM", &Psi_MM, &b_Psi_MM);
   fChain->SetBranchAddress("Psi_MMERR", &Psi_MMERR, &b_Psi_MMERR);
   fChain->SetBranchAddress("Psi_M", &Psi_M, &b_Psi_M);
   fChain->SetBranchAddress("Psi_ID", &Psi_ID, &b_Psi_ID);
   fChain->SetBranchAddress("Psi_TAU", &Psi_TAU, &b_Psi_TAU);
   fChain->SetBranchAddress("Psi_TAUERR", &Psi_TAUERR, &b_Psi_TAUERR);
   fChain->SetBranchAddress("Psi_TAUCHI2", &Psi_TAUCHI2, &b_Psi_TAUCHI2);
   fChain->SetBranchAddress("Psi_L0Global_Dec", &Psi_L0Global_Dec, &b_Psi_L0Global_Dec);
   fChain->SetBranchAddress("Psi_L0Global_TIS", &Psi_L0Global_TIS, &b_Psi_L0Global_TIS);
   fChain->SetBranchAddress("Psi_L0Global_TOS", &Psi_L0Global_TOS, &b_Psi_L0Global_TOS);
   fChain->SetBranchAddress("Psi_Hlt1Global_Dec", &Psi_Hlt1Global_Dec, &b_Psi_Hlt1Global_Dec);
   fChain->SetBranchAddress("Psi_Hlt1Global_TIS", &Psi_Hlt1Global_TIS, &b_Psi_Hlt1Global_TIS);
   fChain->SetBranchAddress("Psi_Hlt1Global_TOS", &Psi_Hlt1Global_TOS, &b_Psi_Hlt1Global_TOS);
   fChain->SetBranchAddress("Psi_Hlt1Phys_Dec", &Psi_Hlt1Phys_Dec, &b_Psi_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Psi_Hlt1Phys_TIS", &Psi_Hlt1Phys_TIS, &b_Psi_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Psi_Hlt1Phys_TOS", &Psi_Hlt1Phys_TOS, &b_Psi_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Psi_Hlt2Global_Dec", &Psi_Hlt2Global_Dec, &b_Psi_Hlt2Global_Dec);
   fChain->SetBranchAddress("Psi_Hlt2Global_TIS", &Psi_Hlt2Global_TIS, &b_Psi_Hlt2Global_TIS);
   fChain->SetBranchAddress("Psi_Hlt2Global_TOS", &Psi_Hlt2Global_TOS, &b_Psi_Hlt2Global_TOS);
   fChain->SetBranchAddress("Psi_Hlt2Phys_Dec", &Psi_Hlt2Phys_Dec, &b_Psi_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Psi_Hlt2Phys_TIS", &Psi_Hlt2Phys_TIS, &b_Psi_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Psi_Hlt2Phys_TOS", &Psi_Hlt2Phys_TOS, &b_Psi_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Psi_L0HadronDecision_Dec", &Psi_L0HadronDecision_Dec, &b_Psi_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Psi_L0HadronDecision_TIS", &Psi_L0HadronDecision_TIS, &b_Psi_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Psi_L0HadronDecision_TOS", &Psi_L0HadronDecision_TOS, &b_Psi_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Psi_L0MuonDecision_Dec", &Psi_L0MuonDecision_Dec, &b_Psi_L0MuonDecision_Dec);
   fChain->SetBranchAddress("Psi_L0MuonDecision_TIS", &Psi_L0MuonDecision_TIS, &b_Psi_L0MuonDecision_TIS);
   fChain->SetBranchAddress("Psi_L0MuonDecision_TOS", &Psi_L0MuonDecision_TOS, &b_Psi_L0MuonDecision_TOS);
   fChain->SetBranchAddress("Psi_L0DiMuonDecision_Dec", &Psi_L0DiMuonDecision_Dec, &b_Psi_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("Psi_L0DiMuonDecision_TIS", &Psi_L0DiMuonDecision_TIS, &b_Psi_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("Psi_L0DiMuonDecision_TOS", &Psi_L0DiMuonDecision_TOS, &b_Psi_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("Psi_L0ElectronDecision_Dec", &Psi_L0ElectronDecision_Dec, &b_Psi_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("Psi_L0ElectronDecision_TIS", &Psi_L0ElectronDecision_TIS, &b_Psi_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("Psi_L0ElectronDecision_TOS", &Psi_L0ElectronDecision_TOS, &b_Psi_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("Psi_L0PhotonDecision_Dec", &Psi_L0PhotonDecision_Dec, &b_Psi_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("Psi_L0PhotonDecision_TIS", &Psi_L0PhotonDecision_TIS, &b_Psi_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("Psi_L0PhotonDecision_TOS", &Psi_L0PhotonDecision_TOS, &b_Psi_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt1TrackAllL0Decision_Dec", &Psi_Hlt1TrackAllL0Decision_Dec, &b_Psi_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Psi_Hlt1TrackAllL0Decision_TIS", &Psi_Hlt1TrackAllL0Decision_TIS, &b_Psi_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Psi_Hlt1TrackAllL0Decision_TOS", &Psi_Hlt1TrackAllL0Decision_TOS, &b_Psi_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Psi_Hlt1TrackAllL0TightDecision_Dec", &Psi_Hlt1TrackAllL0TightDecision_Dec, &b_Psi_Hlt1TrackAllL0TightDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt1TrackAllL0TightDecision_TIS", &Psi_Hlt1TrackAllL0TightDecision_TIS, &b_Psi_Hlt1TrackAllL0TightDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt1TrackAllL0TightDecision_TOS", &Psi_Hlt1TrackAllL0TightDecision_TOS, &b_Psi_Hlt1TrackAllL0TightDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt1SingleElectronNoIPDecision_Dec", &Psi_Hlt1SingleElectronNoIPDecision_Dec, &b_Psi_Hlt1SingleElectronNoIPDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt1SingleElectronNoIPDecision_TIS", &Psi_Hlt1SingleElectronNoIPDecision_TIS, &b_Psi_Hlt1SingleElectronNoIPDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt1SingleElectronNoIPDecision_TOS", &Psi_Hlt1SingleElectronNoIPDecision_TOS, &b_Psi_Hlt1SingleElectronNoIPDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2Topo2BodyBBDTDecision_Dec", &Psi_Hlt2Topo2BodyBBDTDecision_Dec, &b_Psi_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2Topo2BodyBBDTDecision_TIS", &Psi_Hlt2Topo2BodyBBDTDecision_TIS, &b_Psi_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2Topo2BodyBBDTDecision_TOS", &Psi_Hlt2Topo2BodyBBDTDecision_TOS, &b_Psi_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2Topo2BodySimpleDecision_Dec", &Psi_Hlt2Topo2BodySimpleDecision_Dec, &b_Psi_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2Topo2BodySimpleDecision_TIS", &Psi_Hlt2Topo2BodySimpleDecision_TIS, &b_Psi_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2Topo2BodySimpleDecision_TOS", &Psi_Hlt2Topo2BodySimpleDecision_TOS, &b_Psi_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2Topo3BodyBBDTDecision_Dec", &Psi_Hlt2Topo3BodyBBDTDecision_Dec, &b_Psi_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2Topo3BodyBBDTDecision_TIS", &Psi_Hlt2Topo3BodyBBDTDecision_TIS, &b_Psi_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2Topo3BodyBBDTDecision_TOS", &Psi_Hlt2Topo3BodyBBDTDecision_TOS, &b_Psi_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2Topo3BodySimpleDecision_Dec", &Psi_Hlt2Topo3BodySimpleDecision_Dec, &b_Psi_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2Topo3BodySimpleDecision_TIS", &Psi_Hlt2Topo3BodySimpleDecision_TIS, &b_Psi_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2Topo3BodySimpleDecision_TOS", &Psi_Hlt2Topo3BodySimpleDecision_TOS, &b_Psi_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2Topo4BodyBBDTDecision_Dec", &Psi_Hlt2Topo4BodyBBDTDecision_Dec, &b_Psi_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2Topo4BodyBBDTDecision_TIS", &Psi_Hlt2Topo4BodyBBDTDecision_TIS, &b_Psi_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2Topo4BodyBBDTDecision_TOS", &Psi_Hlt2Topo4BodyBBDTDecision_TOS, &b_Psi_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2Topo4BodySimpleDecision_Dec", &Psi_Hlt2Topo4BodySimpleDecision_Dec, &b_Psi_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2Topo4BodySimpleDecision_TIS", &Psi_Hlt2Topo4BodySimpleDecision_TIS, &b_Psi_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2Topo4BodySimpleDecision_TOS", &Psi_Hlt2Topo4BodySimpleDecision_TOS, &b_Psi_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2DiElectronBDecision_Dec", &Psi_Hlt2DiElectronBDecision_Dec, &b_Psi_Hlt2DiElectronBDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2DiElectronBDecision_TIS", &Psi_Hlt2DiElectronBDecision_TIS, &b_Psi_Hlt2DiElectronBDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2DiElectronBDecision_TOS", &Psi_Hlt2DiElectronBDecision_TOS, &b_Psi_Hlt2DiElectronBDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2DiElectronHighMassDecision_Dec", &Psi_Hlt2DiElectronHighMassDecision_Dec, &b_Psi_Hlt2DiElectronHighMassDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2DiElectronHighMassDecision_TIS", &Psi_Hlt2DiElectronHighMassDecision_TIS, &b_Psi_Hlt2DiElectronHighMassDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2DiElectronHighMassDecision_TOS", &Psi_Hlt2DiElectronHighMassDecision_TOS, &b_Psi_Hlt2DiElectronHighMassDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2LowMultElectronDecision_Dec", &Psi_Hlt2LowMultElectronDecision_Dec, &b_Psi_Hlt2LowMultElectronDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2LowMultElectronDecision_TIS", &Psi_Hlt2LowMultElectronDecision_TIS, &b_Psi_Hlt2LowMultElectronDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2LowMultElectronDecision_TOS", &Psi_Hlt2LowMultElectronDecision_TOS, &b_Psi_Hlt2LowMultElectronDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2LowMultElectron_nofilterDecision_Dec", &Psi_Hlt2LowMultElectron_nofilterDecision_Dec, &b_Psi_Hlt2LowMultElectron_nofilterDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2LowMultElectron_nofilterDecision_TIS", &Psi_Hlt2LowMultElectron_nofilterDecision_TIS, &b_Psi_Hlt2LowMultElectron_nofilterDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2LowMultElectron_nofilterDecision_TOS", &Psi_Hlt2LowMultElectron_nofilterDecision_TOS, &b_Psi_Hlt2LowMultElectron_nofilterDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2SingleElectronTFHighPtDecision_Dec", &Psi_Hlt2SingleElectronTFHighPtDecision_Dec, &b_Psi_Hlt2SingleElectronTFHighPtDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2SingleElectronTFHighPtDecision_TIS", &Psi_Hlt2SingleElectronTFHighPtDecision_TIS, &b_Psi_Hlt2SingleElectronTFHighPtDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2SingleElectronTFHighPtDecision_TOS", &Psi_Hlt2SingleElectronTFHighPtDecision_TOS, &b_Psi_Hlt2SingleElectronTFHighPtDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2SingleElectronTFLowPtDecision_Dec", &Psi_Hlt2SingleElectronTFLowPtDecision_Dec, &b_Psi_Hlt2SingleElectronTFLowPtDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2SingleElectronTFLowPtDecision_TIS", &Psi_Hlt2SingleElectronTFLowPtDecision_TIS, &b_Psi_Hlt2SingleElectronTFLowPtDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2SingleElectronTFLowPtDecision_TOS", &Psi_Hlt2SingleElectronTFLowPtDecision_TOS, &b_Psi_Hlt2SingleElectronTFLowPtDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2SingleTFElectronDecision_Dec", &Psi_Hlt2SingleTFElectronDecision_Dec, &b_Psi_Hlt2SingleTFElectronDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2SingleTFElectronDecision_TIS", &Psi_Hlt2SingleTFElectronDecision_TIS, &b_Psi_Hlt2SingleTFElectronDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2SingleTFElectronDecision_TOS", &Psi_Hlt2SingleTFElectronDecision_TOS, &b_Psi_Hlt2SingleTFElectronDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2SingleTFVHighPtElectronDecision_Dec", &Psi_Hlt2SingleTFVHighPtElectronDecision_Dec, &b_Psi_Hlt2SingleTFVHighPtElectronDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2SingleTFVHighPtElectronDecision_TIS", &Psi_Hlt2SingleTFVHighPtElectronDecision_TIS, &b_Psi_Hlt2SingleTFVHighPtElectronDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2SingleTFVHighPtElectronDecision_TOS", &Psi_Hlt2SingleTFVHighPtElectronDecision_TOS, &b_Psi_Hlt2SingleTFVHighPtElectronDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2TopoE2BodyBBDTDecision_Dec", &Psi_Hlt2TopoE2BodyBBDTDecision_Dec, &b_Psi_Hlt2TopoE2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2TopoE2BodyBBDTDecision_TIS", &Psi_Hlt2TopoE2BodyBBDTDecision_TIS, &b_Psi_Hlt2TopoE2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2TopoE2BodyBBDTDecision_TOS", &Psi_Hlt2TopoE2BodyBBDTDecision_TOS, &b_Psi_Hlt2TopoE2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2TopoE3BodyBBDTDecision_Dec", &Psi_Hlt2TopoE3BodyBBDTDecision_Dec, &b_Psi_Hlt2TopoE3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2TopoE3BodyBBDTDecision_TIS", &Psi_Hlt2TopoE3BodyBBDTDecision_TIS, &b_Psi_Hlt2TopoE3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2TopoE3BodyBBDTDecision_TOS", &Psi_Hlt2TopoE3BodyBBDTDecision_TOS, &b_Psi_Hlt2TopoE3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Psi_Hlt2TopoE4BodyBBDTDecision_Dec", &Psi_Hlt2TopoE4BodyBBDTDecision_Dec, &b_Psi_Hlt2TopoE4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Psi_Hlt2TopoE4BodyBBDTDecision_TIS", &Psi_Hlt2TopoE4BodyBBDTDecision_TIS, &b_Psi_Hlt2TopoE4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Psi_Hlt2TopoE4BodyBBDTDecision_TOS", &Psi_Hlt2TopoE4BodyBBDTDecision_TOS, &b_Psi_Hlt2TopoE4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("eplus_MC12TuneV2_ProbNNe", &eplus_MC12TuneV2_ProbNNe, &b_eplus_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("eplus_MC12TuneV2_ProbNNmu", &eplus_MC12TuneV2_ProbNNmu, &b_eplus_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("eplus_MC12TuneV2_ProbNNpi", &eplus_MC12TuneV2_ProbNNpi, &b_eplus_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("eplus_MC12TuneV2_ProbNNk", &eplus_MC12TuneV2_ProbNNk, &b_eplus_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("eplus_MC12TuneV2_ProbNNp", &eplus_MC12TuneV2_ProbNNp, &b_eplus_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("eplus_MC12TuneV2_ProbNNghost", &eplus_MC12TuneV2_ProbNNghost, &b_eplus_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("eplus_MC12TuneV3_ProbNNe", &eplus_MC12TuneV3_ProbNNe, &b_eplus_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("eplus_MC12TuneV3_ProbNNmu", &eplus_MC12TuneV3_ProbNNmu, &b_eplus_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("eplus_MC12TuneV3_ProbNNpi", &eplus_MC12TuneV3_ProbNNpi, &b_eplus_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("eplus_MC12TuneV3_ProbNNk", &eplus_MC12TuneV3_ProbNNk, &b_eplus_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("eplus_MC12TuneV3_ProbNNp", &eplus_MC12TuneV3_ProbNNp, &b_eplus_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("eplus_MC12TuneV3_ProbNNghost", &eplus_MC12TuneV3_ProbNNghost, &b_eplus_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("eplus_CosTheta", &eplus_CosTheta, &b_eplus_CosTheta);
   fChain->SetBranchAddress("eplus_HasBremAdded", &eplus_HasBremAdded, &b_eplus_HasBremAdded);
   fChain->SetBranchAddress("eplus_BremMultiplicity", &eplus_BremMultiplicity, &b_eplus_BremMultiplicity);
   fChain->SetBranchAddress("eplus_BremPE", &eplus_BremPE, &b_eplus_BremPE);
   fChain->SetBranchAddress("eplus_BremPX", &eplus_BremPX, &b_eplus_BremPX);
   fChain->SetBranchAddress("eplus_BremPY", &eplus_BremPY, &b_eplus_BremPY);
   fChain->SetBranchAddress("eplus_BremPZ", &eplus_BremPZ, &b_eplus_BremPZ);
   fChain->SetBranchAddress("eplus_BremOriginX", &eplus_BremOriginX, &b_eplus_BremOriginX);
   fChain->SetBranchAddress("eplus_BremOriginY", &eplus_BremOriginY, &b_eplus_BremOriginY);
   fChain->SetBranchAddress("eplus_BremOriginZ", &eplus_BremOriginZ, &b_eplus_BremOriginZ);
   fChain->SetBranchAddress("eplus_OWNPV_X", &eplus_OWNPV_X, &b_eplus_OWNPV_X);
   fChain->SetBranchAddress("eplus_OWNPV_Y", &eplus_OWNPV_Y, &b_eplus_OWNPV_Y);
   fChain->SetBranchAddress("eplus_OWNPV_Z", &eplus_OWNPV_Z, &b_eplus_OWNPV_Z);
   fChain->SetBranchAddress("eplus_OWNPV_XERR", &eplus_OWNPV_XERR, &b_eplus_OWNPV_XERR);
   fChain->SetBranchAddress("eplus_OWNPV_YERR", &eplus_OWNPV_YERR, &b_eplus_OWNPV_YERR);
   fChain->SetBranchAddress("eplus_OWNPV_ZERR", &eplus_OWNPV_ZERR, &b_eplus_OWNPV_ZERR);
   fChain->SetBranchAddress("eplus_OWNPV_CHI2", &eplus_OWNPV_CHI2, &b_eplus_OWNPV_CHI2);
   fChain->SetBranchAddress("eplus_OWNPV_NDOF", &eplus_OWNPV_NDOF, &b_eplus_OWNPV_NDOF);
   fChain->SetBranchAddress("eplus_OWNPV_COV_", eplus_OWNPV_COV_, &b_eplus_OWNPV_COV_);
   fChain->SetBranchAddress("eplus_IP_OWNPV", &eplus_IP_OWNPV, &b_eplus_IP_OWNPV);
   fChain->SetBranchAddress("eplus_IPCHI2_OWNPV", &eplus_IPCHI2_OWNPV, &b_eplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("eplus_ORIVX_X", &eplus_ORIVX_X, &b_eplus_ORIVX_X);
   fChain->SetBranchAddress("eplus_ORIVX_Y", &eplus_ORIVX_Y, &b_eplus_ORIVX_Y);
   fChain->SetBranchAddress("eplus_ORIVX_Z", &eplus_ORIVX_Z, &b_eplus_ORIVX_Z);
   fChain->SetBranchAddress("eplus_ORIVX_XERR", &eplus_ORIVX_XERR, &b_eplus_ORIVX_XERR);
   fChain->SetBranchAddress("eplus_ORIVX_YERR", &eplus_ORIVX_YERR, &b_eplus_ORIVX_YERR);
   fChain->SetBranchAddress("eplus_ORIVX_ZERR", &eplus_ORIVX_ZERR, &b_eplus_ORIVX_ZERR);
   fChain->SetBranchAddress("eplus_ORIVX_CHI2", &eplus_ORIVX_CHI2, &b_eplus_ORIVX_CHI2);
   fChain->SetBranchAddress("eplus_ORIVX_NDOF", &eplus_ORIVX_NDOF, &b_eplus_ORIVX_NDOF);
   fChain->SetBranchAddress("eplus_ORIVX_COV_", eplus_ORIVX_COV_, &b_eplus_ORIVX_COV_);
   fChain->SetBranchAddress("eplus_P", &eplus_P, &b_eplus_P);
   fChain->SetBranchAddress("eplus_PT", &eplus_PT, &b_eplus_PT);
   fChain->SetBranchAddress("eplus_PE", &eplus_PE, &b_eplus_PE);
   fChain->SetBranchAddress("eplus_PX", &eplus_PX, &b_eplus_PX);
   fChain->SetBranchAddress("eplus_PY", &eplus_PY, &b_eplus_PY);
   fChain->SetBranchAddress("eplus_PZ", &eplus_PZ, &b_eplus_PZ);
   fChain->SetBranchAddress("eplus_M", &eplus_M, &b_eplus_M);
   fChain->SetBranchAddress("eplus_L0Calo_HCAL_realET", &eplus_L0Calo_HCAL_realET, &b_eplus_L0Calo_HCAL_realET);
   fChain->SetBranchAddress("eplus_L0Calo_HCAL_xProjection", &eplus_L0Calo_HCAL_xProjection, &b_eplus_L0Calo_HCAL_xProjection);
   fChain->SetBranchAddress("eplus_L0Calo_HCAL_yProjection", &eplus_L0Calo_HCAL_yProjection, &b_eplus_L0Calo_HCAL_yProjection);
   fChain->SetBranchAddress("eplus_L0Calo_HCAL_region", &eplus_L0Calo_HCAL_region, &b_eplus_L0Calo_HCAL_region);
   fChain->SetBranchAddress("eplus_L0Calo_HCAL_TriggerET", &eplus_L0Calo_HCAL_TriggerET, &b_eplus_L0Calo_HCAL_TriggerET);
   fChain->SetBranchAddress("eplus_L0Calo_HCAL_TriggerHCALET", &eplus_L0Calo_HCAL_TriggerHCALET, &b_eplus_L0Calo_HCAL_TriggerHCALET);
   fChain->SetBranchAddress("eplus_L0Calo_HCAL_xTrigger", &eplus_L0Calo_HCAL_xTrigger, &b_eplus_L0Calo_HCAL_xTrigger);
   fChain->SetBranchAddress("eplus_L0Calo_HCAL_yTrigger", &eplus_L0Calo_HCAL_yTrigger, &b_eplus_L0Calo_HCAL_yTrigger);
   fChain->SetBranchAddress("eplus_ID", &eplus_ID, &b_eplus_ID);
   fChain->SetBranchAddress("eplus_PIDe", &eplus_PIDe, &b_eplus_PIDe);
   fChain->SetBranchAddress("eplus_PIDmu", &eplus_PIDmu, &b_eplus_PIDmu);
   fChain->SetBranchAddress("eplus_PIDK", &eplus_PIDK, &b_eplus_PIDK);
   fChain->SetBranchAddress("eplus_PIDp", &eplus_PIDp, &b_eplus_PIDp);
   fChain->SetBranchAddress("eplus_ProbNNe", &eplus_ProbNNe, &b_eplus_ProbNNe);
   fChain->SetBranchAddress("eplus_ProbNNk", &eplus_ProbNNk, &b_eplus_ProbNNk);
   fChain->SetBranchAddress("eplus_ProbNNp", &eplus_ProbNNp, &b_eplus_ProbNNp);
   fChain->SetBranchAddress("eplus_ProbNNpi", &eplus_ProbNNpi, &b_eplus_ProbNNpi);
   fChain->SetBranchAddress("eplus_ProbNNmu", &eplus_ProbNNmu, &b_eplus_ProbNNmu);
   fChain->SetBranchAddress("eplus_ProbNNghost", &eplus_ProbNNghost, &b_eplus_ProbNNghost);
   fChain->SetBranchAddress("eplus_hasMuon", &eplus_hasMuon, &b_eplus_hasMuon);
   fChain->SetBranchAddress("eplus_isMuon", &eplus_isMuon, &b_eplus_isMuon);
   fChain->SetBranchAddress("eplus_hasRich", &eplus_hasRich, &b_eplus_hasRich);
   fChain->SetBranchAddress("eplus_hasCalo", &eplus_hasCalo, &b_eplus_hasCalo);
   fChain->SetBranchAddress("eplus_UsedRichAerogel", &eplus_UsedRichAerogel, &b_eplus_UsedRichAerogel);
   fChain->SetBranchAddress("eplus_UsedRich1Gas", &eplus_UsedRich1Gas, &b_eplus_UsedRich1Gas);
   fChain->SetBranchAddress("eplus_UsedRich2Gas", &eplus_UsedRich2Gas, &b_eplus_UsedRich2Gas);
   fChain->SetBranchAddress("eplus_RichAboveElThres", &eplus_RichAboveElThres, &b_eplus_RichAboveElThres);
   fChain->SetBranchAddress("eplus_RichAboveMuThres", &eplus_RichAboveMuThres, &b_eplus_RichAboveMuThres);
   fChain->SetBranchAddress("eplus_RichAbovePiThres", &eplus_RichAbovePiThres, &b_eplus_RichAbovePiThres);
   fChain->SetBranchAddress("eplus_RichAboveKaThres", &eplus_RichAboveKaThres, &b_eplus_RichAboveKaThres);
   fChain->SetBranchAddress("eplus_RichAbovePrThres", &eplus_RichAbovePrThres, &b_eplus_RichAbovePrThres);
   fChain->SetBranchAddress("eplus_RichDLLe", &eplus_RichDLLe, &b_eplus_RichDLLe);
   fChain->SetBranchAddress("eplus_RichDLLmu", &eplus_RichDLLmu, &b_eplus_RichDLLmu);
   fChain->SetBranchAddress("eplus_RichDLLpi", &eplus_RichDLLpi, &b_eplus_RichDLLpi);
   fChain->SetBranchAddress("eplus_RichDLLk", &eplus_RichDLLk, &b_eplus_RichDLLk);
   fChain->SetBranchAddress("eplus_RichDLLp", &eplus_RichDLLp, &b_eplus_RichDLLp);
   fChain->SetBranchAddress("eplus_RichDLLbt", &eplus_RichDLLbt, &b_eplus_RichDLLbt);
   fChain->SetBranchAddress("eplus_InAccMuon", &eplus_InAccMuon, &b_eplus_InAccMuon);
   fChain->SetBranchAddress("eplus_isMuonLoose", &eplus_isMuonLoose, &b_eplus_isMuonLoose);
   fChain->SetBranchAddress("eplus_MuonMuLL", &eplus_MuonMuLL, &b_eplus_MuonMuLL);
   fChain->SetBranchAddress("eplus_MuonBkgLL", &eplus_MuonBkgLL, &b_eplus_MuonBkgLL);
   fChain->SetBranchAddress("eplus_MuonNShared", &eplus_MuonNShared, &b_eplus_MuonNShared);
   fChain->SetBranchAddress("eplus_InAccEcal", &eplus_InAccEcal, &b_eplus_InAccEcal);
   fChain->SetBranchAddress("eplus_CaloEcalE", &eplus_CaloEcalE, &b_eplus_CaloEcalE);
   fChain->SetBranchAddress("eplus_EcalPIDe", &eplus_EcalPIDe, &b_eplus_EcalPIDe);
   fChain->SetBranchAddress("eplus_EcalPIDmu", &eplus_EcalPIDmu, &b_eplus_EcalPIDmu);
   fChain->SetBranchAddress("eplus_InAccHcal", &eplus_InAccHcal, &b_eplus_InAccHcal);
   fChain->SetBranchAddress("eplus_CaloHcalE", &eplus_CaloHcalE, &b_eplus_CaloHcalE);
   fChain->SetBranchAddress("eplus_HcalPIDe", &eplus_HcalPIDe, &b_eplus_HcalPIDe);
   fChain->SetBranchAddress("eplus_HcalPIDmu", &eplus_HcalPIDmu, &b_eplus_HcalPIDmu);
   fChain->SetBranchAddress("eplus_InAccPrs", &eplus_InAccPrs, &b_eplus_InAccPrs);
   fChain->SetBranchAddress("eplus_PrsPIDe", &eplus_PrsPIDe, &b_eplus_PrsPIDe);
   fChain->SetBranchAddress("eplus_CaloPrsE", &eplus_CaloPrsE, &b_eplus_CaloPrsE);
   fChain->SetBranchAddress("eplus_InAccSpd", &eplus_InAccSpd, &b_eplus_InAccSpd);
   fChain->SetBranchAddress("eplus_CaloSpdE", &eplus_CaloSpdE, &b_eplus_CaloSpdE);
   fChain->SetBranchAddress("eplus_InAccBrem", &eplus_InAccBrem, &b_eplus_InAccBrem);
   fChain->SetBranchAddress("eplus_BremPIDe", &eplus_BremPIDe, &b_eplus_BremPIDe);
   fChain->SetBranchAddress("eplus_VeloCharge", &eplus_VeloCharge, &b_eplus_VeloCharge);
   fChain->SetBranchAddress("eplus_TRACK_Type", &eplus_TRACK_Type, &b_eplus_TRACK_Type);
   fChain->SetBranchAddress("eplus_TRACK_Key", &eplus_TRACK_Key, &b_eplus_TRACK_Key);
   fChain->SetBranchAddress("eplus_TRACK_CHI2NDOF", &eplus_TRACK_CHI2NDOF, &b_eplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("eplus_TRACK_PCHI2", &eplus_TRACK_PCHI2, &b_eplus_TRACK_PCHI2);
   fChain->SetBranchAddress("eplus_TRACK_MatchCHI2", &eplus_TRACK_MatchCHI2, &b_eplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("eplus_TRACK_GhostProb", &eplus_TRACK_GhostProb, &b_eplus_TRACK_GhostProb);
   fChain->SetBranchAddress("eplus_TRACK_CloneDist", &eplus_TRACK_CloneDist, &b_eplus_TRACK_CloneDist);
   fChain->SetBranchAddress("eplus_TRACK_Likelihood", &eplus_TRACK_Likelihood, &b_eplus_TRACK_Likelihood);
   fChain->SetBranchAddress("eminus_MC12TuneV2_ProbNNe", &eminus_MC12TuneV2_ProbNNe, &b_eminus_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("eminus_MC12TuneV2_ProbNNmu", &eminus_MC12TuneV2_ProbNNmu, &b_eminus_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("eminus_MC12TuneV2_ProbNNpi", &eminus_MC12TuneV2_ProbNNpi, &b_eminus_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("eminus_MC12TuneV2_ProbNNk", &eminus_MC12TuneV2_ProbNNk, &b_eminus_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("eminus_MC12TuneV2_ProbNNp", &eminus_MC12TuneV2_ProbNNp, &b_eminus_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("eminus_MC12TuneV2_ProbNNghost", &eminus_MC12TuneV2_ProbNNghost, &b_eminus_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("eminus_MC12TuneV3_ProbNNe", &eminus_MC12TuneV3_ProbNNe, &b_eminus_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("eminus_MC12TuneV3_ProbNNmu", &eminus_MC12TuneV3_ProbNNmu, &b_eminus_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("eminus_MC12TuneV3_ProbNNpi", &eminus_MC12TuneV3_ProbNNpi, &b_eminus_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("eminus_MC12TuneV3_ProbNNk", &eminus_MC12TuneV3_ProbNNk, &b_eminus_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("eminus_MC12TuneV3_ProbNNp", &eminus_MC12TuneV3_ProbNNp, &b_eminus_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("eminus_MC12TuneV3_ProbNNghost", &eminus_MC12TuneV3_ProbNNghost, &b_eminus_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("eminus_CosTheta", &eminus_CosTheta, &b_eminus_CosTheta);
   fChain->SetBranchAddress("eminus_HasBremAdded", &eminus_HasBremAdded, &b_eminus_HasBremAdded);
   fChain->SetBranchAddress("eminus_BremMultiplicity", &eminus_BremMultiplicity, &b_eminus_BremMultiplicity);
   fChain->SetBranchAddress("eminus_BremPE", &eminus_BremPE, &b_eminus_BremPE);
   fChain->SetBranchAddress("eminus_BremPX", &eminus_BremPX, &b_eminus_BremPX);
   fChain->SetBranchAddress("eminus_BremPY", &eminus_BremPY, &b_eminus_BremPY);
   fChain->SetBranchAddress("eminus_BremPZ", &eminus_BremPZ, &b_eminus_BremPZ);
   fChain->SetBranchAddress("eminus_BremOriginX", &eminus_BremOriginX, &b_eminus_BremOriginX);
   fChain->SetBranchAddress("eminus_BremOriginY", &eminus_BremOriginY, &b_eminus_BremOriginY);
   fChain->SetBranchAddress("eminus_BremOriginZ", &eminus_BremOriginZ, &b_eminus_BremOriginZ);
   fChain->SetBranchAddress("eminus_OWNPV_X", &eminus_OWNPV_X, &b_eminus_OWNPV_X);
   fChain->SetBranchAddress("eminus_OWNPV_Y", &eminus_OWNPV_Y, &b_eminus_OWNPV_Y);
   fChain->SetBranchAddress("eminus_OWNPV_Z", &eminus_OWNPV_Z, &b_eminus_OWNPV_Z);
   fChain->SetBranchAddress("eminus_OWNPV_XERR", &eminus_OWNPV_XERR, &b_eminus_OWNPV_XERR);
   fChain->SetBranchAddress("eminus_OWNPV_YERR", &eminus_OWNPV_YERR, &b_eminus_OWNPV_YERR);
   fChain->SetBranchAddress("eminus_OWNPV_ZERR", &eminus_OWNPV_ZERR, &b_eminus_OWNPV_ZERR);
   fChain->SetBranchAddress("eminus_OWNPV_CHI2", &eminus_OWNPV_CHI2, &b_eminus_OWNPV_CHI2);
   fChain->SetBranchAddress("eminus_OWNPV_NDOF", &eminus_OWNPV_NDOF, &b_eminus_OWNPV_NDOF);
   fChain->SetBranchAddress("eminus_OWNPV_COV_", eminus_OWNPV_COV_, &b_eminus_OWNPV_COV_);
   fChain->SetBranchAddress("eminus_IP_OWNPV", &eminus_IP_OWNPV, &b_eminus_IP_OWNPV);
   fChain->SetBranchAddress("eminus_IPCHI2_OWNPV", &eminus_IPCHI2_OWNPV, &b_eminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("eminus_ORIVX_X", &eminus_ORIVX_X, &b_eminus_ORIVX_X);
   fChain->SetBranchAddress("eminus_ORIVX_Y", &eminus_ORIVX_Y, &b_eminus_ORIVX_Y);
   fChain->SetBranchAddress("eminus_ORIVX_Z", &eminus_ORIVX_Z, &b_eminus_ORIVX_Z);
   fChain->SetBranchAddress("eminus_ORIVX_XERR", &eminus_ORIVX_XERR, &b_eminus_ORIVX_XERR);
   fChain->SetBranchAddress("eminus_ORIVX_YERR", &eminus_ORIVX_YERR, &b_eminus_ORIVX_YERR);
   fChain->SetBranchAddress("eminus_ORIVX_ZERR", &eminus_ORIVX_ZERR, &b_eminus_ORIVX_ZERR);
   fChain->SetBranchAddress("eminus_ORIVX_CHI2", &eminus_ORIVX_CHI2, &b_eminus_ORIVX_CHI2);
   fChain->SetBranchAddress("eminus_ORIVX_NDOF", &eminus_ORIVX_NDOF, &b_eminus_ORIVX_NDOF);
   fChain->SetBranchAddress("eminus_ORIVX_COV_", eminus_ORIVX_COV_, &b_eminus_ORIVX_COV_);
   fChain->SetBranchAddress("eminus_P", &eminus_P, &b_eminus_P);
   fChain->SetBranchAddress("eminus_PT", &eminus_PT, &b_eminus_PT);
   fChain->SetBranchAddress("eminus_PE", &eminus_PE, &b_eminus_PE);
   fChain->SetBranchAddress("eminus_PX", &eminus_PX, &b_eminus_PX);
   fChain->SetBranchAddress("eminus_PY", &eminus_PY, &b_eminus_PY);
   fChain->SetBranchAddress("eminus_PZ", &eminus_PZ, &b_eminus_PZ);
   fChain->SetBranchAddress("eminus_M", &eminus_M, &b_eminus_M);
   fChain->SetBranchAddress("eminus_L0Calo_HCAL_realET", &eminus_L0Calo_HCAL_realET, &b_eminus_L0Calo_HCAL_realET);
   fChain->SetBranchAddress("eminus_L0Calo_HCAL_xProjection", &eminus_L0Calo_HCAL_xProjection, &b_eminus_L0Calo_HCAL_xProjection);
   fChain->SetBranchAddress("eminus_L0Calo_HCAL_yProjection", &eminus_L0Calo_HCAL_yProjection, &b_eminus_L0Calo_HCAL_yProjection);
   fChain->SetBranchAddress("eminus_L0Calo_HCAL_region", &eminus_L0Calo_HCAL_region, &b_eminus_L0Calo_HCAL_region);
   fChain->SetBranchAddress("eminus_L0Calo_HCAL_TriggerET", &eminus_L0Calo_HCAL_TriggerET, &b_eminus_L0Calo_HCAL_TriggerET);
   fChain->SetBranchAddress("eminus_L0Calo_HCAL_TriggerHCALET", &eminus_L0Calo_HCAL_TriggerHCALET, &b_eminus_L0Calo_HCAL_TriggerHCALET);
   fChain->SetBranchAddress("eminus_L0Calo_HCAL_xTrigger", &eminus_L0Calo_HCAL_xTrigger, &b_eminus_L0Calo_HCAL_xTrigger);
   fChain->SetBranchAddress("eminus_L0Calo_HCAL_yTrigger", &eminus_L0Calo_HCAL_yTrigger, &b_eminus_L0Calo_HCAL_yTrigger);
   fChain->SetBranchAddress("eminus_ID", &eminus_ID, &b_eminus_ID);
   fChain->SetBranchAddress("eminus_PIDe", &eminus_PIDe, &b_eminus_PIDe);
   fChain->SetBranchAddress("eminus_PIDmu", &eminus_PIDmu, &b_eminus_PIDmu);
   fChain->SetBranchAddress("eminus_PIDK", &eminus_PIDK, &b_eminus_PIDK);
   fChain->SetBranchAddress("eminus_PIDp", &eminus_PIDp, &b_eminus_PIDp);
   fChain->SetBranchAddress("eminus_ProbNNe", &eminus_ProbNNe, &b_eminus_ProbNNe);
   fChain->SetBranchAddress("eminus_ProbNNk", &eminus_ProbNNk, &b_eminus_ProbNNk);
   fChain->SetBranchAddress("eminus_ProbNNp", &eminus_ProbNNp, &b_eminus_ProbNNp);
   fChain->SetBranchAddress("eminus_ProbNNpi", &eminus_ProbNNpi, &b_eminus_ProbNNpi);
   fChain->SetBranchAddress("eminus_ProbNNmu", &eminus_ProbNNmu, &b_eminus_ProbNNmu);
   fChain->SetBranchAddress("eminus_ProbNNghost", &eminus_ProbNNghost, &b_eminus_ProbNNghost);
   fChain->SetBranchAddress("eminus_hasMuon", &eminus_hasMuon, &b_eminus_hasMuon);
   fChain->SetBranchAddress("eminus_isMuon", &eminus_isMuon, &b_eminus_isMuon);
   fChain->SetBranchAddress("eminus_hasRich", &eminus_hasRich, &b_eminus_hasRich);
   fChain->SetBranchAddress("eminus_hasCalo", &eminus_hasCalo, &b_eminus_hasCalo);
   fChain->SetBranchAddress("eminus_UsedRichAerogel", &eminus_UsedRichAerogel, &b_eminus_UsedRichAerogel);
   fChain->SetBranchAddress("eminus_UsedRich1Gas", &eminus_UsedRich1Gas, &b_eminus_UsedRich1Gas);
   fChain->SetBranchAddress("eminus_UsedRich2Gas", &eminus_UsedRich2Gas, &b_eminus_UsedRich2Gas);
   fChain->SetBranchAddress("eminus_RichAboveElThres", &eminus_RichAboveElThres, &b_eminus_RichAboveElThres);
   fChain->SetBranchAddress("eminus_RichAboveMuThres", &eminus_RichAboveMuThres, &b_eminus_RichAboveMuThres);
   fChain->SetBranchAddress("eminus_RichAbovePiThres", &eminus_RichAbovePiThres, &b_eminus_RichAbovePiThres);
   fChain->SetBranchAddress("eminus_RichAboveKaThres", &eminus_RichAboveKaThres, &b_eminus_RichAboveKaThres);
   fChain->SetBranchAddress("eminus_RichAbovePrThres", &eminus_RichAbovePrThres, &b_eminus_RichAbovePrThres);
   fChain->SetBranchAddress("eminus_RichDLLe", &eminus_RichDLLe, &b_eminus_RichDLLe);
   fChain->SetBranchAddress("eminus_RichDLLmu", &eminus_RichDLLmu, &b_eminus_RichDLLmu);
   fChain->SetBranchAddress("eminus_RichDLLpi", &eminus_RichDLLpi, &b_eminus_RichDLLpi);
   fChain->SetBranchAddress("eminus_RichDLLk", &eminus_RichDLLk, &b_eminus_RichDLLk);
   fChain->SetBranchAddress("eminus_RichDLLp", &eminus_RichDLLp, &b_eminus_RichDLLp);
   fChain->SetBranchAddress("eminus_RichDLLbt", &eminus_RichDLLbt, &b_eminus_RichDLLbt);
   fChain->SetBranchAddress("eminus_InAccMuon", &eminus_InAccMuon, &b_eminus_InAccMuon);
   fChain->SetBranchAddress("eminus_isMuonLoose", &eminus_isMuonLoose, &b_eminus_isMuonLoose);
   fChain->SetBranchAddress("eminus_MuonMuLL", &eminus_MuonMuLL, &b_eminus_MuonMuLL);
   fChain->SetBranchAddress("eminus_MuonBkgLL", &eminus_MuonBkgLL, &b_eminus_MuonBkgLL);
   fChain->SetBranchAddress("eminus_MuonNShared", &eminus_MuonNShared, &b_eminus_MuonNShared);
   fChain->SetBranchAddress("eminus_InAccEcal", &eminus_InAccEcal, &b_eminus_InAccEcal);
   fChain->SetBranchAddress("eminus_CaloEcalE", &eminus_CaloEcalE, &b_eminus_CaloEcalE);
   fChain->SetBranchAddress("eminus_EcalPIDe", &eminus_EcalPIDe, &b_eminus_EcalPIDe);
   fChain->SetBranchAddress("eminus_EcalPIDmu", &eminus_EcalPIDmu, &b_eminus_EcalPIDmu);
   fChain->SetBranchAddress("eminus_InAccHcal", &eminus_InAccHcal, &b_eminus_InAccHcal);
   fChain->SetBranchAddress("eminus_CaloHcalE", &eminus_CaloHcalE, &b_eminus_CaloHcalE);
   fChain->SetBranchAddress("eminus_HcalPIDe", &eminus_HcalPIDe, &b_eminus_HcalPIDe);
   fChain->SetBranchAddress("eminus_HcalPIDmu", &eminus_HcalPIDmu, &b_eminus_HcalPIDmu);
   fChain->SetBranchAddress("eminus_InAccPrs", &eminus_InAccPrs, &b_eminus_InAccPrs);
   fChain->SetBranchAddress("eminus_PrsPIDe", &eminus_PrsPIDe, &b_eminus_PrsPIDe);
   fChain->SetBranchAddress("eminus_CaloPrsE", &eminus_CaloPrsE, &b_eminus_CaloPrsE);
   fChain->SetBranchAddress("eminus_InAccSpd", &eminus_InAccSpd, &b_eminus_InAccSpd);
   fChain->SetBranchAddress("eminus_CaloSpdE", &eminus_CaloSpdE, &b_eminus_CaloSpdE);
   fChain->SetBranchAddress("eminus_InAccBrem", &eminus_InAccBrem, &b_eminus_InAccBrem);
   fChain->SetBranchAddress("eminus_BremPIDe", &eminus_BremPIDe, &b_eminus_BremPIDe);
   fChain->SetBranchAddress("eminus_VeloCharge", &eminus_VeloCharge, &b_eminus_VeloCharge);
   fChain->SetBranchAddress("eminus_TRACK_Type", &eminus_TRACK_Type, &b_eminus_TRACK_Type);
   fChain->SetBranchAddress("eminus_TRACK_Key", &eminus_TRACK_Key, &b_eminus_TRACK_Key);
   fChain->SetBranchAddress("eminus_TRACK_CHI2NDOF", &eminus_TRACK_CHI2NDOF, &b_eminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("eminus_TRACK_PCHI2", &eminus_TRACK_PCHI2, &b_eminus_TRACK_PCHI2);
   fChain->SetBranchAddress("eminus_TRACK_MatchCHI2", &eminus_TRACK_MatchCHI2, &b_eminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("eminus_TRACK_GhostProb", &eminus_TRACK_GhostProb, &b_eminus_TRACK_GhostProb);
   fChain->SetBranchAddress("eminus_TRACK_CloneDist", &eminus_TRACK_CloneDist, &b_eminus_TRACK_CloneDist);
   fChain->SetBranchAddress("eminus_TRACK_Likelihood", &eminus_TRACK_Likelihood, &b_eminus_TRACK_Likelihood);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNe", &Kplus_MC12TuneV2_ProbNNe, &b_Kplus_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNmu", &Kplus_MC12TuneV2_ProbNNmu, &b_Kplus_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNpi", &Kplus_MC12TuneV2_ProbNNpi, &b_Kplus_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNk", &Kplus_MC12TuneV2_ProbNNk, &b_Kplus_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNp", &Kplus_MC12TuneV2_ProbNNp, &b_Kplus_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNghost", &Kplus_MC12TuneV2_ProbNNghost, &b_Kplus_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNe", &Kplus_MC12TuneV3_ProbNNe, &b_Kplus_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNmu", &Kplus_MC12TuneV3_ProbNNmu, &b_Kplus_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNpi", &Kplus_MC12TuneV3_ProbNNpi, &b_Kplus_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNk", &Kplus_MC12TuneV3_ProbNNk, &b_Kplus_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNp", &Kplus_MC12TuneV3_ProbNNp, &b_Kplus_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNghost", &Kplus_MC12TuneV3_ProbNNghost, &b_Kplus_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("Kplus_CosTheta", &Kplus_CosTheta, &b_Kplus_CosTheta);
   fChain->SetBranchAddress("Kplus_OWNPV_X", &Kplus_OWNPV_X, &b_Kplus_OWNPV_X);
   fChain->SetBranchAddress("Kplus_OWNPV_Y", &Kplus_OWNPV_Y, &b_Kplus_OWNPV_Y);
   fChain->SetBranchAddress("Kplus_OWNPV_Z", &Kplus_OWNPV_Z, &b_Kplus_OWNPV_Z);
   fChain->SetBranchAddress("Kplus_OWNPV_XERR", &Kplus_OWNPV_XERR, &b_Kplus_OWNPV_XERR);
   fChain->SetBranchAddress("Kplus_OWNPV_YERR", &Kplus_OWNPV_YERR, &b_Kplus_OWNPV_YERR);
   fChain->SetBranchAddress("Kplus_OWNPV_ZERR", &Kplus_OWNPV_ZERR, &b_Kplus_OWNPV_ZERR);
   fChain->SetBranchAddress("Kplus_OWNPV_CHI2", &Kplus_OWNPV_CHI2, &b_Kplus_OWNPV_CHI2);
   fChain->SetBranchAddress("Kplus_OWNPV_NDOF", &Kplus_OWNPV_NDOF, &b_Kplus_OWNPV_NDOF);
   fChain->SetBranchAddress("Kplus_OWNPV_COV_", Kplus_OWNPV_COV_, &b_Kplus_OWNPV_COV_);
   fChain->SetBranchAddress("Kplus_IP_OWNPV", &Kplus_IP_OWNPV, &b_Kplus_IP_OWNPV);
   fChain->SetBranchAddress("Kplus_IPCHI2_OWNPV", &Kplus_IPCHI2_OWNPV, &b_Kplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kplus_ORIVX_X", &Kplus_ORIVX_X, &b_Kplus_ORIVX_X);
   fChain->SetBranchAddress("Kplus_ORIVX_Y", &Kplus_ORIVX_Y, &b_Kplus_ORIVX_Y);
   fChain->SetBranchAddress("Kplus_ORIVX_Z", &Kplus_ORIVX_Z, &b_Kplus_ORIVX_Z);
   fChain->SetBranchAddress("Kplus_ORIVX_XERR", &Kplus_ORIVX_XERR, &b_Kplus_ORIVX_XERR);
   fChain->SetBranchAddress("Kplus_ORIVX_YERR", &Kplus_ORIVX_YERR, &b_Kplus_ORIVX_YERR);
   fChain->SetBranchAddress("Kplus_ORIVX_ZERR", &Kplus_ORIVX_ZERR, &b_Kplus_ORIVX_ZERR);
   fChain->SetBranchAddress("Kplus_ORIVX_CHI2", &Kplus_ORIVX_CHI2, &b_Kplus_ORIVX_CHI2);
   fChain->SetBranchAddress("Kplus_ORIVX_NDOF", &Kplus_ORIVX_NDOF, &b_Kplus_ORIVX_NDOF);
   fChain->SetBranchAddress("Kplus_ORIVX_COV_", Kplus_ORIVX_COV_, &b_Kplus_ORIVX_COV_);
   fChain->SetBranchAddress("Kplus_P", &Kplus_P, &b_Kplus_P);
   fChain->SetBranchAddress("Kplus_PT", &Kplus_PT, &b_Kplus_PT);
   fChain->SetBranchAddress("Kplus_PE", &Kplus_PE, &b_Kplus_PE);
   fChain->SetBranchAddress("Kplus_PX", &Kplus_PX, &b_Kplus_PX);
   fChain->SetBranchAddress("Kplus_PY", &Kplus_PY, &b_Kplus_PY);
   fChain->SetBranchAddress("Kplus_PZ", &Kplus_PZ, &b_Kplus_PZ);
   fChain->SetBranchAddress("Kplus_M", &Kplus_M, &b_Kplus_M);
   fChain->SetBranchAddress("Kplus_L0Calo_HCAL_realET", &Kplus_L0Calo_HCAL_realET, &b_Kplus_L0Calo_HCAL_realET);
   fChain->SetBranchAddress("Kplus_L0Calo_HCAL_xProjection", &Kplus_L0Calo_HCAL_xProjection, &b_Kplus_L0Calo_HCAL_xProjection);
   fChain->SetBranchAddress("Kplus_L0Calo_HCAL_yProjection", &Kplus_L0Calo_HCAL_yProjection, &b_Kplus_L0Calo_HCAL_yProjection);
   fChain->SetBranchAddress("Kplus_L0Calo_HCAL_region", &Kplus_L0Calo_HCAL_region, &b_Kplus_L0Calo_HCAL_region);
   fChain->SetBranchAddress("Kplus_L0Calo_HCAL_TriggerET", &Kplus_L0Calo_HCAL_TriggerET, &b_Kplus_L0Calo_HCAL_TriggerET);
   fChain->SetBranchAddress("Kplus_L0Calo_HCAL_TriggerHCALET", &Kplus_L0Calo_HCAL_TriggerHCALET, &b_Kplus_L0Calo_HCAL_TriggerHCALET);
   fChain->SetBranchAddress("Kplus_L0Calo_HCAL_xTrigger", &Kplus_L0Calo_HCAL_xTrigger, &b_Kplus_L0Calo_HCAL_xTrigger);
   fChain->SetBranchAddress("Kplus_L0Calo_HCAL_yTrigger", &Kplus_L0Calo_HCAL_yTrigger, &b_Kplus_L0Calo_HCAL_yTrigger);
   fChain->SetBranchAddress("Kplus_ID", &Kplus_ID, &b_Kplus_ID);
   fChain->SetBranchAddress("Kplus_PIDe", &Kplus_PIDe, &b_Kplus_PIDe);
   fChain->SetBranchAddress("Kplus_PIDmu", &Kplus_PIDmu, &b_Kplus_PIDmu);
   fChain->SetBranchAddress("Kplus_PIDK", &Kplus_PIDK, &b_Kplus_PIDK);
   fChain->SetBranchAddress("Kplus_PIDp", &Kplus_PIDp, &b_Kplus_PIDp);
   fChain->SetBranchAddress("Kplus_ProbNNe", &Kplus_ProbNNe, &b_Kplus_ProbNNe);
   fChain->SetBranchAddress("Kplus_ProbNNk", &Kplus_ProbNNk, &b_Kplus_ProbNNk);
   fChain->SetBranchAddress("Kplus_ProbNNp", &Kplus_ProbNNp, &b_Kplus_ProbNNp);
   fChain->SetBranchAddress("Kplus_ProbNNpi", &Kplus_ProbNNpi, &b_Kplus_ProbNNpi);
   fChain->SetBranchAddress("Kplus_ProbNNmu", &Kplus_ProbNNmu, &b_Kplus_ProbNNmu);
   fChain->SetBranchAddress("Kplus_ProbNNghost", &Kplus_ProbNNghost, &b_Kplus_ProbNNghost);
   fChain->SetBranchAddress("Kplus_hasMuon", &Kplus_hasMuon, &b_Kplus_hasMuon);
   fChain->SetBranchAddress("Kplus_isMuon", &Kplus_isMuon, &b_Kplus_isMuon);
   fChain->SetBranchAddress("Kplus_hasRich", &Kplus_hasRich, &b_Kplus_hasRich);
   fChain->SetBranchAddress("Kplus_hasCalo", &Kplus_hasCalo, &b_Kplus_hasCalo);
   fChain->SetBranchAddress("Kplus_UsedRichAerogel", &Kplus_UsedRichAerogel, &b_Kplus_UsedRichAerogel);
   fChain->SetBranchAddress("Kplus_UsedRich1Gas", &Kplus_UsedRich1Gas, &b_Kplus_UsedRich1Gas);
   fChain->SetBranchAddress("Kplus_UsedRich2Gas", &Kplus_UsedRich2Gas, &b_Kplus_UsedRich2Gas);
   fChain->SetBranchAddress("Kplus_RichAboveElThres", &Kplus_RichAboveElThres, &b_Kplus_RichAboveElThres);
   fChain->SetBranchAddress("Kplus_RichAboveMuThres", &Kplus_RichAboveMuThres, &b_Kplus_RichAboveMuThres);
   fChain->SetBranchAddress("Kplus_RichAbovePiThres", &Kplus_RichAbovePiThres, &b_Kplus_RichAbovePiThres);
   fChain->SetBranchAddress("Kplus_RichAboveKaThres", &Kplus_RichAboveKaThres, &b_Kplus_RichAboveKaThres);
   fChain->SetBranchAddress("Kplus_RichAbovePrThres", &Kplus_RichAbovePrThres, &b_Kplus_RichAbovePrThres);
   fChain->SetBranchAddress("Kplus_RichDLLe", &Kplus_RichDLLe, &b_Kplus_RichDLLe);
   fChain->SetBranchAddress("Kplus_RichDLLmu", &Kplus_RichDLLmu, &b_Kplus_RichDLLmu);
   fChain->SetBranchAddress("Kplus_RichDLLpi", &Kplus_RichDLLpi, &b_Kplus_RichDLLpi);
   fChain->SetBranchAddress("Kplus_RichDLLk", &Kplus_RichDLLk, &b_Kplus_RichDLLk);
   fChain->SetBranchAddress("Kplus_RichDLLp", &Kplus_RichDLLp, &b_Kplus_RichDLLp);
   fChain->SetBranchAddress("Kplus_RichDLLbt", &Kplus_RichDLLbt, &b_Kplus_RichDLLbt);
   fChain->SetBranchAddress("Kplus_InAccMuon", &Kplus_InAccMuon, &b_Kplus_InAccMuon);
   fChain->SetBranchAddress("Kplus_isMuonLoose", &Kplus_isMuonLoose, &b_Kplus_isMuonLoose);
   fChain->SetBranchAddress("Kplus_MuonMuLL", &Kplus_MuonMuLL, &b_Kplus_MuonMuLL);
   fChain->SetBranchAddress("Kplus_MuonBkgLL", &Kplus_MuonBkgLL, &b_Kplus_MuonBkgLL);
   fChain->SetBranchAddress("Kplus_MuonNShared", &Kplus_MuonNShared, &b_Kplus_MuonNShared);
   fChain->SetBranchAddress("Kplus_InAccEcal", &Kplus_InAccEcal, &b_Kplus_InAccEcal);
   fChain->SetBranchAddress("Kplus_CaloEcalE", &Kplus_CaloEcalE, &b_Kplus_CaloEcalE);
   fChain->SetBranchAddress("Kplus_EcalPIDe", &Kplus_EcalPIDe, &b_Kplus_EcalPIDe);
   fChain->SetBranchAddress("Kplus_EcalPIDmu", &Kplus_EcalPIDmu, &b_Kplus_EcalPIDmu);
   fChain->SetBranchAddress("Kplus_InAccHcal", &Kplus_InAccHcal, &b_Kplus_InAccHcal);
   fChain->SetBranchAddress("Kplus_CaloHcalE", &Kplus_CaloHcalE, &b_Kplus_CaloHcalE);
   fChain->SetBranchAddress("Kplus_HcalPIDe", &Kplus_HcalPIDe, &b_Kplus_HcalPIDe);
   fChain->SetBranchAddress("Kplus_HcalPIDmu", &Kplus_HcalPIDmu, &b_Kplus_HcalPIDmu);
   fChain->SetBranchAddress("Kplus_InAccPrs", &Kplus_InAccPrs, &b_Kplus_InAccPrs);
   fChain->SetBranchAddress("Kplus_PrsPIDe", &Kplus_PrsPIDe, &b_Kplus_PrsPIDe);
   fChain->SetBranchAddress("Kplus_CaloPrsE", &Kplus_CaloPrsE, &b_Kplus_CaloPrsE);
   fChain->SetBranchAddress("Kplus_InAccSpd", &Kplus_InAccSpd, &b_Kplus_InAccSpd);
   fChain->SetBranchAddress("Kplus_CaloSpdE", &Kplus_CaloSpdE, &b_Kplus_CaloSpdE);
   fChain->SetBranchAddress("Kplus_InAccBrem", &Kplus_InAccBrem, &b_Kplus_InAccBrem);
   fChain->SetBranchAddress("Kplus_BremPIDe", &Kplus_BremPIDe, &b_Kplus_BremPIDe);
   fChain->SetBranchAddress("Kplus_VeloCharge", &Kplus_VeloCharge, &b_Kplus_VeloCharge);
   fChain->SetBranchAddress("Kplus_TRACK_Type", &Kplus_TRACK_Type, &b_Kplus_TRACK_Type);
   fChain->SetBranchAddress("Kplus_TRACK_Key", &Kplus_TRACK_Key, &b_Kplus_TRACK_Key);
   fChain->SetBranchAddress("Kplus_TRACK_CHI2NDOF", &Kplus_TRACK_CHI2NDOF, &b_Kplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kplus_TRACK_PCHI2", &Kplus_TRACK_PCHI2, &b_Kplus_TRACK_PCHI2);
   fChain->SetBranchAddress("Kplus_TRACK_MatchCHI2", &Kplus_TRACK_MatchCHI2, &b_Kplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Kplus_TRACK_GhostProb", &Kplus_TRACK_GhostProb, &b_Kplus_TRACK_GhostProb);
   fChain->SetBranchAddress("Kplus_TRACK_CloneDist", &Kplus_TRACK_CloneDist, &b_Kplus_TRACK_CloneDist);
   fChain->SetBranchAddress("Kplus_TRACK_Likelihood", &Kplus_TRACK_Likelihood, &b_Kplus_TRACK_Likelihood);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("BCID", &BCID, &b_BCID);
   fChain->SetBranchAddress("BCType", &BCType, &b_BCType);
   fChain->SetBranchAddress("OdinTCK", &OdinTCK, &b_OdinTCK);
   fChain->SetBranchAddress("L0DUTCK", &L0DUTCK, &b_L0DUTCK);
   fChain->SetBranchAddress("HLTTCK", &HLTTCK, &b_HLTTCK);
   fChain->SetBranchAddress("GpsTime", &GpsTime, &b_GpsTime);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("PVX", PVX, &b_PVX);
   fChain->SetBranchAddress("PVY", PVY, &b_PVY);
   fChain->SetBranchAddress("PVZ", PVZ, &b_PVZ);
   fChain->SetBranchAddress("PVXERR", PVXERR, &b_PVXERR);
   fChain->SetBranchAddress("PVYERR", PVYERR, &b_PVYERR);
   fChain->SetBranchAddress("PVZERR", PVZERR, &b_PVZERR);
   fChain->SetBranchAddress("PVCHI2", PVCHI2, &b_PVCHI2);
   fChain->SetBranchAddress("PVNDOF", PVNDOF, &b_PVNDOF);
   fChain->SetBranchAddress("PVNTRACKS", PVNTRACKS, &b_PVNTRACKS);
   fChain->SetBranchAddress("nPVs", &nPVs, &b_nPVs);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("nLongTracks", &nLongTracks, &b_nLongTracks);
   fChain->SetBranchAddress("nDownstreamTracks", &nDownstreamTracks, &b_nDownstreamTracks);
   fChain->SetBranchAddress("nUpstreamTracks", &nUpstreamTracks, &b_nUpstreamTracks);
   fChain->SetBranchAddress("nVeloTracks", &nVeloTracks, &b_nVeloTracks);
   fChain->SetBranchAddress("nTTracks", &nTTracks, &b_nTTracks);
   fChain->SetBranchAddress("nBackTracks", &nBackTracks, &b_nBackTracks);
   fChain->SetBranchAddress("nRich1Hits", &nRich1Hits, &b_nRich1Hits);
   fChain->SetBranchAddress("nRich2Hits", &nRich2Hits, &b_nRich2Hits);
   fChain->SetBranchAddress("nVeloClusters", &nVeloClusters, &b_nVeloClusters);
   fChain->SetBranchAddress("nITClusters", &nITClusters, &b_nITClusters);
   fChain->SetBranchAddress("nTTClusters", &nTTClusters, &b_nTTClusters);
   fChain->SetBranchAddress("nOTClusters", &nOTClusters, &b_nOTClusters);
   fChain->SetBranchAddress("nSPDHits", &nSPDHits, &b_nSPDHits);
   fChain->SetBranchAddress("nMuonCoordsS0", &nMuonCoordsS0, &b_nMuonCoordsS0);
   fChain->SetBranchAddress("nMuonCoordsS1", &nMuonCoordsS1, &b_nMuonCoordsS1);
   fChain->SetBranchAddress("nMuonCoordsS2", &nMuonCoordsS2, &b_nMuonCoordsS2);
   fChain->SetBranchAddress("nMuonCoordsS3", &nMuonCoordsS3, &b_nMuonCoordsS3);
   fChain->SetBranchAddress("nMuonCoordsS4", &nMuonCoordsS4, &b_nMuonCoordsS4);
   fChain->SetBranchAddress("nMuonTracks", &nMuonTracks, &b_nMuonTracks);
   Notify();
}

Bool_t apply_Bu2Kee_selection::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void apply_Bu2Kee_selection::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t apply_Bu2Kee_selection::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef apply_Bu2Kee_selection_cxx
