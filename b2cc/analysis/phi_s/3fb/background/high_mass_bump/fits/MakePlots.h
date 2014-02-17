//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Jun 21 12:10:15 2013 by ROOT version 5.34/05
// from TTree DecayTree/DecayTree
// found on file: /tmp/Bs2JpsiPhi_2012_20130425_tupleA.root
//////////////////////////////////////////////////////////

#ifndef MakePlots_h
#define MakePlots_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxB_s0_ENDVERTEX_COV = 1;
const Int_t kMaxB_s0_OWNPV_COV = 1;
const Int_t kMaxB_s0_TOPPV_COV = 1;
const Int_t kMaxphi_1020_ENDVERTEX_COV = 1;
const Int_t kMaxphi_1020_OWNPV_COV = 1;
const Int_t kMaxphi_1020_TOPPV_COV = 1;
const Int_t kMaxphi_1020_ORIVX_COV = 1;
const Int_t kMaxKminus_OWNPV_COV = 1;
const Int_t kMaxKminus_TOPPV_COV = 1;
const Int_t kMaxKminus_ORIVX_COV = 1;
const Int_t kMaxKplus_OWNPV_COV = 1;
const Int_t kMaxKplus_TOPPV_COV = 1;
const Int_t kMaxKplus_ORIVX_COV = 1;
const Int_t kMaxJ_psi_1S_ENDVERTEX_COV = 1;
const Int_t kMaxJ_psi_1S_OWNPV_COV = 1;
const Int_t kMaxJ_psi_1S_TOPPV_COV = 1;
const Int_t kMaxJ_psi_1S_ORIVX_COV = 1;
const Int_t kMaxmuminus_OWNPV_COV = 1;
const Int_t kMaxmuminus_TOPPV_COV = 1;
const Int_t kMaxmuminus_ORIVX_COV = 1;
const Int_t kMaxmuplus_OWNPV_COV = 1;
const Int_t kMaxmuplus_TOPPV_COV = 1;
const Int_t kMaxmuplus_ORIVX_COV = 1;

class MakePlots {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        B_s0_LOKI_ENERGY;
   Double_t        B_s0_LOKI_ETA;
   Double_t        B_s0_LOKI_PHI;
   Double_t        B_s0_MINIP;
   Double_t        B_s0_MINIPCHI2;
   Double_t        B_s0_MINIPNEXTBEST;
   Double_t        B_s0_MINIPCHI2NEXTBEST;
   Double_t        B_s0_ENDVERTEX_X;
   Double_t        B_s0_ENDVERTEX_Y;
   Double_t        B_s0_ENDVERTEX_Z;
   Double_t        B_s0_ENDVERTEX_XERR;
   Double_t        B_s0_ENDVERTEX_YERR;
   Double_t        B_s0_ENDVERTEX_ZERR;
   Double_t        B_s0_ENDVERTEX_CHI2;
   Int_t           B_s0_ENDVERTEX_NDOF;
   Float_t         B_s0_ENDVERTEX_COV_[3][3];
   Double_t        B_s0_OWNPV_X;
   Double_t        B_s0_OWNPV_Y;
   Double_t        B_s0_OWNPV_Z;
   Double_t        B_s0_OWNPV_XERR;
   Double_t        B_s0_OWNPV_YERR;
   Double_t        B_s0_OWNPV_ZERR;
   Double_t        B_s0_OWNPV_CHI2;
   Int_t           B_s0_OWNPV_NDOF;
   Float_t         B_s0_OWNPV_COV_[3][3];
   Double_t        B_s0_IP_OWNPV;
   Double_t        B_s0_IPCHI2_OWNPV;
   Double_t        B_s0_FD_OWNPV;
   Double_t        B_s0_FDCHI2_OWNPV;
   Double_t        B_s0_DIRA_OWNPV;
   Double_t        B_s0_TOPPV_X;
   Double_t        B_s0_TOPPV_Y;
   Double_t        B_s0_TOPPV_Z;
   Double_t        B_s0_TOPPV_XERR;
   Double_t        B_s0_TOPPV_YERR;
   Double_t        B_s0_TOPPV_ZERR;
   Double_t        B_s0_TOPPV_CHI2;
   Int_t           B_s0_TOPPV_NDOF;
   Float_t         B_s0_TOPPV_COV_[3][3];
   Double_t        B_s0_IP_TOPPV;
   Double_t        B_s0_IPCHI2_TOPPV;
   Double_t        B_s0_FD_TOPPV;
   Double_t        B_s0_FDCHI2_TOPPV;
   Double_t        B_s0_DIRA_TOPPV;
   Double_t        B_s0_P;
   Double_t        B_s0_PT;
   Double_t        B_s0_PE;
   Double_t        B_s0_PX;
   Double_t        B_s0_PY;
   Double_t        B_s0_PZ;
   Double_t        B_s0_MM;
   Double_t        B_s0_MMERR;
   Double_t        B_s0_M;
   Int_t           B_s0_ID;
   Double_t        B_s0_TAU;
   Double_t        B_s0_TAUERR;
   Double_t        B_s0_TAUCHI2;
   Int_t           B_s0_TAGDECISION;
   Int_t           B_s0_TAGCAT;
   Double_t        B_s0_TAGOMEGA;
   Int_t           B_s0_TAGDECISION_OS;
   Int_t           B_s0_TAGCAT_OS;
   Double_t        B_s0_TAGOMEGA_OS;
   Int_t           B_s0_TAGGER;
   Int_t           B_s0_OS_Muon_DEC;
   Double_t        B_s0_OS_Muon_PROB;
   Int_t           B_s0_OS_Electron_DEC;
   Double_t        B_s0_OS_Electron_PROB;
   Int_t           B_s0_OS_Kaon_DEC;
   Double_t        B_s0_OS_Kaon_PROB;
   Int_t           B_s0_SS_Kaon_DEC;
   Double_t        B_s0_SS_Kaon_PROB;
   Int_t           B_s0_SS_Pion_DEC;
   Double_t        B_s0_SS_Pion_PROB;
   Int_t           B_s0_VtxCharge_DEC;
   Double_t        B_s0_VtxCharge_PROB;
   Double_t        B_s0_X;
   Double_t        B_s0_Y;
   Double_t        B_s0_LOKI_DIRA;
   Double_t        B_s0_LOKI_DTF_CHI2NDOF;
   Double_t        B_s0_LOKI_DTF_CTAU;
   Double_t        B_s0_LOKI_DTF_CTAUERR;
   Double_t        B_s0_LOKI_DTF_CTAUS;
   Double_t        B_s0_LOKI_DTF_VCHI2NDOF;
   Double_t        B_s0_LOKI_FDCHI2;
   Double_t        B_s0_LOKI_FDS;
   Double_t        B_s0_LOKI_MASS_JpsiConstr;
   Double_t        B_s0_ThetaL;
   Double_t        B_s0_ThetaK;
   Double_t        B_s0_Phi;
   Double_t        B_s0_ThetaTr;
   Double_t        B_s0_PhiTr;
   Double_t        B_s0_ThetaVtr;
   Bool_t          B_s0_L0Global_Dec;
   Bool_t          B_s0_L0Global_TIS;
   Bool_t          B_s0_L0Global_TOS;
   Bool_t          B_s0_Hlt1Global_Dec;
   Bool_t          B_s0_Hlt1Global_TIS;
   Bool_t          B_s0_Hlt1Global_TOS;
   Bool_t          B_s0_Hlt1Phys_Dec;
   Bool_t          B_s0_Hlt1Phys_TIS;
   Bool_t          B_s0_Hlt1Phys_TOS;
   Bool_t          B_s0_Hlt2Global_Dec;
   Bool_t          B_s0_Hlt2Global_TIS;
   Bool_t          B_s0_Hlt2Global_TOS;
   Bool_t          B_s0_Hlt2Phys_Dec;
   Bool_t          B_s0_Hlt2Phys_TIS;
   Bool_t          B_s0_Hlt2Phys_TOS;
   Bool_t          B_s0_StrippingGlobal_Dec;
   Bool_t          B_s0_StrippingGlobal_TIS;
   Bool_t          B_s0_StrippingGlobal_TOS;
   Bool_t          B_s0_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          B_s0_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          B_s0_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          B_s0_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          B_s0_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          B_s0_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          B_s0_Hlt1SingleMuonNoIPDecision_Dec;
   Bool_t          B_s0_Hlt1SingleMuonNoIPDecision_TIS;
   Bool_t          B_s0_Hlt1SingleMuonNoIPDecision_TOS;
   Bool_t          B_s0_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          B_s0_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          B_s0_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          B_s0_Hlt1TrackAllL0Decision_Dec;
   Bool_t          B_s0_Hlt1TrackAllL0Decision_TIS;
   Bool_t          B_s0_Hlt1TrackAllL0Decision_TOS;
   Bool_t          B_s0_Hlt1TrackMuonDecision_Dec;
   Bool_t          B_s0_Hlt1TrackMuonDecision_TIS;
   Bool_t          B_s0_Hlt1TrackMuonDecision_TOS;
   Bool_t          B_s0_Hlt2TopoMu2BodyBBDTDecision_Dec;
   Bool_t          B_s0_Hlt2TopoMu2BodyBBDTDecision_TIS;
   Bool_t          B_s0_Hlt2TopoMu2BodyBBDTDecision_TOS;
   Bool_t          B_s0_Hlt2TopoMu3BodyBBDTDecision_Dec;
   Bool_t          B_s0_Hlt2TopoMu3BodyBBDTDecision_TIS;
   Bool_t          B_s0_Hlt2TopoMu3BodyBBDTDecision_TOS;
   Bool_t          B_s0_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          B_s0_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          B_s0_Hlt2MuonFromHLT1Decision_Dec;
   Bool_t          B_s0_Hlt2MuonFromHLT1Decision_TIS;
   Bool_t          B_s0_Hlt2MuonFromHLT1Decision_TOS;
   Bool_t          B_s0_Hlt2SingleMuonDecision_Dec;
   Bool_t          B_s0_Hlt2SingleMuonDecision_TIS;
   Bool_t          B_s0_Hlt2SingleMuonDecision_TOS;
   Bool_t          B_s0_Hlt2SingleMuonHighPTDecision_Dec;
   Bool_t          B_s0_Hlt2SingleMuonHighPTDecision_TIS;
   Bool_t          B_s0_Hlt2SingleMuonHighPTDecision_TOS;
   Bool_t          B_s0_Hlt2SingleMuonLowPTDecision_Dec;
   Bool_t          B_s0_Hlt2SingleMuonLowPTDecision_TIS;
   Bool_t          B_s0_Hlt2SingleMuonLowPTDecision_TOS;
   Bool_t          B_s0_Hlt2DiMuonDecision_Dec;
   Bool_t          B_s0_Hlt2DiMuonDecision_TIS;
   Bool_t          B_s0_Hlt2DiMuonDecision_TOS;
   Bool_t          B_s0_Hlt2DiMuonLowMassDecision_Dec;
   Bool_t          B_s0_Hlt2DiMuonLowMassDecision_TIS;
   Bool_t          B_s0_Hlt2DiMuonLowMassDecision_TOS;
   Bool_t          B_s0_Hlt2DiMuonJPsiDecision_Dec;
   Bool_t          B_s0_Hlt2DiMuonJPsiDecision_TIS;
   Bool_t          B_s0_Hlt2DiMuonJPsiDecision_TOS;
   Bool_t          B_s0_Hlt2DiMuonJPsiHighPTDecision_Dec;
   Bool_t          B_s0_Hlt2DiMuonJPsiHighPTDecision_TIS;
   Bool_t          B_s0_Hlt2DiMuonJPsiHighPTDecision_TOS;
   Bool_t          B_s0_Hlt2DiMuonPsi2SDecision_Dec;
   Bool_t          B_s0_Hlt2DiMuonPsi2SDecision_TIS;
   Bool_t          B_s0_Hlt2DiMuonPsi2SDecision_TOS;
   Bool_t          B_s0_Hlt2DiMuonBDecision_Dec;
   Bool_t          B_s0_Hlt2DiMuonBDecision_TIS;
   Bool_t          B_s0_Hlt2DiMuonBDecision_TOS;
   Bool_t          B_s0_Hlt2DiMuonDetachedJPsiDecision_Dec;
   Bool_t          B_s0_Hlt2DiMuonDetachedJPsiDecision_TIS;
   Bool_t          B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS;
   Bool_t          B_s0_Hlt2DiMuonDetachedDecision_Dec;
   Bool_t          B_s0_Hlt2DiMuonDetachedDecision_TIS;
   Bool_t          B_s0_Hlt2DiMuonDetachedDecision_TOS;
   Double_t        phi_1020_LOKI_ENERGY;
   Double_t        phi_1020_LOKI_ETA;
   Double_t        phi_1020_LOKI_PHI;
   Double_t        phi_1020_MINIP;
   Double_t        phi_1020_MINIPCHI2;
   Double_t        phi_1020_MINIPNEXTBEST;
   Double_t        phi_1020_MINIPCHI2NEXTBEST;
   Double_t        phi_1020_ENDVERTEX_X;
   Double_t        phi_1020_ENDVERTEX_Y;
   Double_t        phi_1020_ENDVERTEX_Z;
   Double_t        phi_1020_ENDVERTEX_XERR;
   Double_t        phi_1020_ENDVERTEX_YERR;
   Double_t        phi_1020_ENDVERTEX_ZERR;
   Double_t        phi_1020_ENDVERTEX_CHI2;
   Int_t           phi_1020_ENDVERTEX_NDOF;
   Float_t         phi_1020_ENDVERTEX_COV_[3][3];
   Double_t        phi_1020_OWNPV_X;
   Double_t        phi_1020_OWNPV_Y;
   Double_t        phi_1020_OWNPV_Z;
   Double_t        phi_1020_OWNPV_XERR;
   Double_t        phi_1020_OWNPV_YERR;
   Double_t        phi_1020_OWNPV_ZERR;
   Double_t        phi_1020_OWNPV_CHI2;
   Int_t           phi_1020_OWNPV_NDOF;
   Float_t         phi_1020_OWNPV_COV_[3][3];
   Double_t        phi_1020_IP_OWNPV;
   Double_t        phi_1020_IPCHI2_OWNPV;
   Double_t        phi_1020_FD_OWNPV;
   Double_t        phi_1020_FDCHI2_OWNPV;
   Double_t        phi_1020_DIRA_OWNPV;
   Double_t        phi_1020_TOPPV_X;
   Double_t        phi_1020_TOPPV_Y;
   Double_t        phi_1020_TOPPV_Z;
   Double_t        phi_1020_TOPPV_XERR;
   Double_t        phi_1020_TOPPV_YERR;
   Double_t        phi_1020_TOPPV_ZERR;
   Double_t        phi_1020_TOPPV_CHI2;
   Int_t           phi_1020_TOPPV_NDOF;
   Float_t         phi_1020_TOPPV_COV_[3][3];
   Double_t        phi_1020_IP_TOPPV;
   Double_t        phi_1020_IPCHI2_TOPPV;
   Double_t        phi_1020_FD_TOPPV;
   Double_t        phi_1020_FDCHI2_TOPPV;
   Double_t        phi_1020_DIRA_TOPPV;
   Double_t        phi_1020_ORIVX_X;
   Double_t        phi_1020_ORIVX_Y;
   Double_t        phi_1020_ORIVX_Z;
   Double_t        phi_1020_ORIVX_XERR;
   Double_t        phi_1020_ORIVX_YERR;
   Double_t        phi_1020_ORIVX_ZERR;
   Double_t        phi_1020_ORIVX_CHI2;
   Int_t           phi_1020_ORIVX_NDOF;
   Float_t         phi_1020_ORIVX_COV_[3][3];
   Double_t        phi_1020_IP_ORIVX;
   Double_t        phi_1020_IPCHI2_ORIVX;
   Double_t        phi_1020_FD_ORIVX;
   Double_t        phi_1020_FDCHI2_ORIVX;
   Double_t        phi_1020_DIRA_ORIVX;
   Double_t        phi_1020_P;
   Double_t        phi_1020_PT;
   Double_t        phi_1020_PE;
   Double_t        phi_1020_PX;
   Double_t        phi_1020_PY;
   Double_t        phi_1020_PZ;
   Double_t        phi_1020_MM;
   Double_t        phi_1020_MMERR;
   Double_t        phi_1020_M;
   Int_t           phi_1020_ID;
   Double_t        phi_1020_TAU;
   Double_t        phi_1020_TAUERR;
   Double_t        phi_1020_TAUCHI2;
   Double_t        phi_1020_X;
   Double_t        phi_1020_Y;
   Double_t        Kminus_LOKI_ENERGY;
   Double_t        Kminus_LOKI_ETA;
   Double_t        Kminus_LOKI_PHI;
   Double_t        Kminus_MINIP;
   Double_t        Kminus_MINIPCHI2;
   Double_t        Kminus_MINIPNEXTBEST;
   Double_t        Kminus_MINIPCHI2NEXTBEST;
   Double_t        Kminus_OWNPV_X;
   Double_t        Kminus_OWNPV_Y;
   Double_t        Kminus_OWNPV_Z;
   Double_t        Kminus_OWNPV_XERR;
   Double_t        Kminus_OWNPV_YERR;
   Double_t        Kminus_OWNPV_ZERR;
   Double_t        Kminus_OWNPV_CHI2;
   Int_t           Kminus_OWNPV_NDOF;
   Float_t         Kminus_OWNPV_COV_[3][3];
   Double_t        Kminus_IP_OWNPV;
   Double_t        Kminus_IPCHI2_OWNPV;
   Double_t        Kminus_TOPPV_X;
   Double_t        Kminus_TOPPV_Y;
   Double_t        Kminus_TOPPV_Z;
   Double_t        Kminus_TOPPV_XERR;
   Double_t        Kminus_TOPPV_YERR;
   Double_t        Kminus_TOPPV_ZERR;
   Double_t        Kminus_TOPPV_CHI2;
   Int_t           Kminus_TOPPV_NDOF;
   Float_t         Kminus_TOPPV_COV_[3][3];
   Double_t        Kminus_IP_TOPPV;
   Double_t        Kminus_IPCHI2_TOPPV;
   Double_t        Kminus_ORIVX_X;
   Double_t        Kminus_ORIVX_Y;
   Double_t        Kminus_ORIVX_Z;
   Double_t        Kminus_ORIVX_XERR;
   Double_t        Kminus_ORIVX_YERR;
   Double_t        Kminus_ORIVX_ZERR;
   Double_t        Kminus_ORIVX_CHI2;
   Int_t           Kminus_ORIVX_NDOF;
   Float_t         Kminus_ORIVX_COV_[3][3];
   Double_t        Kminus_IP_ORIVX;
   Double_t        Kminus_IPCHI2_ORIVX;
   Double_t        Kminus_P;
   Double_t        Kminus_PT;
   Double_t        Kminus_PE;
   Double_t        Kminus_PX;
   Double_t        Kminus_PY;
   Double_t        Kminus_PZ;
   Double_t        Kminus_M;
   Int_t           Kminus_ID;
   Double_t        Kminus_PIDe;
   Double_t        Kminus_PIDmu;
   Double_t        Kminus_PIDK;
   Double_t        Kminus_PIDp;
   Double_t        Kminus_ProbNNe;
   Double_t        Kminus_ProbNNk;
   Double_t        Kminus_ProbNNp;
   Double_t        Kminus_ProbNNpi;
   Double_t        Kminus_ProbNNmu;
   Double_t        Kminus_ProbNNghost;
   Bool_t          Kminus_hasMuon;
   Bool_t          Kminus_isMuon;
   Bool_t          Kminus_hasRich;
   Bool_t          Kminus_hasCalo;
   Int_t           Kminus_TRACK_Type;
   Int_t           Kminus_TRACK_Key;
   Double_t        Kminus_TRACK_CHI2;
   Int_t           Kminus_TRACK_NDOF;
   Double_t        Kminus_TRACK_CHI2NDOF;
   Double_t        Kminus_TRACK_PCHI2;
   Double_t        Kminus_TRACK_VeloCHI2NDOF;
   Double_t        Kminus_TRACK_TCHI2NDOF;
   Double_t        Kminus_VELO_UTID;
   Double_t        Kminus_TRACK_FirstMeasurementX;
   Double_t        Kminus_TRACK_FirstMeasurementY;
   Double_t        Kminus_TRACK_FirstMeasurementZ;
   Double_t        Kminus_TRACK_MatchCHI2;
   Double_t        Kminus_TRACK_GhostProb;
   Double_t        Kminus_TRACK_CloneDist;
   Double_t        Kminus_TRACK_Likelihood;
   Double_t        Kminus_X;
   Double_t        Kminus_Y;
   Double_t        Kplus_LOKI_ENERGY;
   Double_t        Kplus_LOKI_ETA;
   Double_t        Kplus_LOKI_PHI;
   Double_t        Kplus_MINIP;
   Double_t        Kplus_MINIPCHI2;
   Double_t        Kplus_MINIPNEXTBEST;
   Double_t        Kplus_MINIPCHI2NEXTBEST;
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
   Double_t        Kplus_TOPPV_X;
   Double_t        Kplus_TOPPV_Y;
   Double_t        Kplus_TOPPV_Z;
   Double_t        Kplus_TOPPV_XERR;
   Double_t        Kplus_TOPPV_YERR;
   Double_t        Kplus_TOPPV_ZERR;
   Double_t        Kplus_TOPPV_CHI2;
   Int_t           Kplus_TOPPV_NDOF;
   Float_t         Kplus_TOPPV_COV_[3][3];
   Double_t        Kplus_IP_TOPPV;
   Double_t        Kplus_IPCHI2_TOPPV;
   Double_t        Kplus_ORIVX_X;
   Double_t        Kplus_ORIVX_Y;
   Double_t        Kplus_ORIVX_Z;
   Double_t        Kplus_ORIVX_XERR;
   Double_t        Kplus_ORIVX_YERR;
   Double_t        Kplus_ORIVX_ZERR;
   Double_t        Kplus_ORIVX_CHI2;
   Int_t           Kplus_ORIVX_NDOF;
   Float_t         Kplus_ORIVX_COV_[3][3];
   Double_t        Kplus_IP_ORIVX;
   Double_t        Kplus_IPCHI2_ORIVX;
   Double_t        Kplus_P;
   Double_t        Kplus_PT;
   Double_t        Kplus_PE;
   Double_t        Kplus_PX;
   Double_t        Kplus_PY;
   Double_t        Kplus_PZ;
   Double_t        Kplus_M;
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
   Int_t           Kplus_TRACK_Type;
   Int_t           Kplus_TRACK_Key;
   Double_t        Kplus_TRACK_CHI2;
   Int_t           Kplus_TRACK_NDOF;
   Double_t        Kplus_TRACK_CHI2NDOF;
   Double_t        Kplus_TRACK_PCHI2;
   Double_t        Kplus_TRACK_VeloCHI2NDOF;
   Double_t        Kplus_TRACK_TCHI2NDOF;
   Double_t        Kplus_VELO_UTID;
   Double_t        Kplus_TRACK_FirstMeasurementX;
   Double_t        Kplus_TRACK_FirstMeasurementY;
   Double_t        Kplus_TRACK_FirstMeasurementZ;
   Double_t        Kplus_TRACK_MatchCHI2;
   Double_t        Kplus_TRACK_GhostProb;
   Double_t        Kplus_TRACK_CloneDist;
   Double_t        Kplus_TRACK_Likelihood;
   Double_t        Kplus_X;
   Double_t        Kplus_Y;
   Double_t        J_psi_1S_LOKI_ENERGY;
   Double_t        J_psi_1S_LOKI_ETA;
   Double_t        J_psi_1S_LOKI_PHI;
   Double_t        J_psi_1S_MINIP;
   Double_t        J_psi_1S_MINIPCHI2;
   Double_t        J_psi_1S_MINIPNEXTBEST;
   Double_t        J_psi_1S_MINIPCHI2NEXTBEST;
   Double_t        J_psi_1S_ENDVERTEX_X;
   Double_t        J_psi_1S_ENDVERTEX_Y;
   Double_t        J_psi_1S_ENDVERTEX_Z;
   Double_t        J_psi_1S_ENDVERTEX_XERR;
   Double_t        J_psi_1S_ENDVERTEX_YERR;
   Double_t        J_psi_1S_ENDVERTEX_ZERR;
   Double_t        J_psi_1S_ENDVERTEX_CHI2;
   Int_t           J_psi_1S_ENDVERTEX_NDOF;
   Float_t         J_psi_1S_ENDVERTEX_COV_[3][3];
   Double_t        J_psi_1S_OWNPV_X;
   Double_t        J_psi_1S_OWNPV_Y;
   Double_t        J_psi_1S_OWNPV_Z;
   Double_t        J_psi_1S_OWNPV_XERR;
   Double_t        J_psi_1S_OWNPV_YERR;
   Double_t        J_psi_1S_OWNPV_ZERR;
   Double_t        J_psi_1S_OWNPV_CHI2;
   Int_t           J_psi_1S_OWNPV_NDOF;
   Float_t         J_psi_1S_OWNPV_COV_[3][3];
   Double_t        J_psi_1S_IP_OWNPV;
   Double_t        J_psi_1S_IPCHI2_OWNPV;
   Double_t        J_psi_1S_FD_OWNPV;
   Double_t        J_psi_1S_FDCHI2_OWNPV;
   Double_t        J_psi_1S_DIRA_OWNPV;
   Double_t        J_psi_1S_TOPPV_X;
   Double_t        J_psi_1S_TOPPV_Y;
   Double_t        J_psi_1S_TOPPV_Z;
   Double_t        J_psi_1S_TOPPV_XERR;
   Double_t        J_psi_1S_TOPPV_YERR;
   Double_t        J_psi_1S_TOPPV_ZERR;
   Double_t        J_psi_1S_TOPPV_CHI2;
   Int_t           J_psi_1S_TOPPV_NDOF;
   Float_t         J_psi_1S_TOPPV_COV_[3][3];
   Double_t        J_psi_1S_IP_TOPPV;
   Double_t        J_psi_1S_IPCHI2_TOPPV;
   Double_t        J_psi_1S_FD_TOPPV;
   Double_t        J_psi_1S_FDCHI2_TOPPV;
   Double_t        J_psi_1S_DIRA_TOPPV;
   Double_t        J_psi_1S_ORIVX_X;
   Double_t        J_psi_1S_ORIVX_Y;
   Double_t        J_psi_1S_ORIVX_Z;
   Double_t        J_psi_1S_ORIVX_XERR;
   Double_t        J_psi_1S_ORIVX_YERR;
   Double_t        J_psi_1S_ORIVX_ZERR;
   Double_t        J_psi_1S_ORIVX_CHI2;
   Int_t           J_psi_1S_ORIVX_NDOF;
   Float_t         J_psi_1S_ORIVX_COV_[3][3];
   Double_t        J_psi_1S_IP_ORIVX;
   Double_t        J_psi_1S_IPCHI2_ORIVX;
   Double_t        J_psi_1S_FD_ORIVX;
   Double_t        J_psi_1S_FDCHI2_ORIVX;
   Double_t        J_psi_1S_DIRA_ORIVX;
   Double_t        J_psi_1S_P;
   Double_t        J_psi_1S_PT;
   Double_t        J_psi_1S_PE;
   Double_t        J_psi_1S_PX;
   Double_t        J_psi_1S_PY;
   Double_t        J_psi_1S_PZ;
   Double_t        J_psi_1S_MM;
   Double_t        J_psi_1S_MMERR;
   Double_t        J_psi_1S_M;
   Int_t           J_psi_1S_ID;
   Double_t        J_psi_1S_TAU;
   Double_t        J_psi_1S_TAUERR;
   Double_t        J_psi_1S_TAUCHI2;
   Double_t        J_psi_1S_X;
   Double_t        J_psi_1S_Y;
   Double_t        J_psi_1S_LOKI_DOCA_1_2;
   Double_t        muminus_LOKI_ENERGY;
   Double_t        muminus_LOKI_ETA;
   Double_t        muminus_LOKI_PHI;
   Double_t        muminus_MINIP;
   Double_t        muminus_MINIPCHI2;
   Double_t        muminus_MINIPNEXTBEST;
   Double_t        muminus_MINIPCHI2NEXTBEST;
   Double_t        muminus_OWNPV_X;
   Double_t        muminus_OWNPV_Y;
   Double_t        muminus_OWNPV_Z;
   Double_t        muminus_OWNPV_XERR;
   Double_t        muminus_OWNPV_YERR;
   Double_t        muminus_OWNPV_ZERR;
   Double_t        muminus_OWNPV_CHI2;
   Int_t           muminus_OWNPV_NDOF;
   Float_t         muminus_OWNPV_COV_[3][3];
   Double_t        muminus_IP_OWNPV;
   Double_t        muminus_IPCHI2_OWNPV;
   Double_t        muminus_TOPPV_X;
   Double_t        muminus_TOPPV_Y;
   Double_t        muminus_TOPPV_Z;
   Double_t        muminus_TOPPV_XERR;
   Double_t        muminus_TOPPV_YERR;
   Double_t        muminus_TOPPV_ZERR;
   Double_t        muminus_TOPPV_CHI2;
   Int_t           muminus_TOPPV_NDOF;
   Float_t         muminus_TOPPV_COV_[3][3];
   Double_t        muminus_IP_TOPPV;
   Double_t        muminus_IPCHI2_TOPPV;
   Double_t        muminus_ORIVX_X;
   Double_t        muminus_ORIVX_Y;
   Double_t        muminus_ORIVX_Z;
   Double_t        muminus_ORIVX_XERR;
   Double_t        muminus_ORIVX_YERR;
   Double_t        muminus_ORIVX_ZERR;
   Double_t        muminus_ORIVX_CHI2;
   Int_t           muminus_ORIVX_NDOF;
   Float_t         muminus_ORIVX_COV_[3][3];
   Double_t        muminus_IP_ORIVX;
   Double_t        muminus_IPCHI2_ORIVX;
   Double_t        muminus_P;
   Double_t        muminus_PT;
   Double_t        muminus_PE;
   Double_t        muminus_PX;
   Double_t        muminus_PY;
   Double_t        muminus_PZ;
   Double_t        muminus_M;
   Int_t           muminus_ID;
   Double_t        muminus_PIDe;
   Double_t        muminus_PIDmu;
   Double_t        muminus_PIDK;
   Double_t        muminus_PIDp;
   Double_t        muminus_ProbNNe;
   Double_t        muminus_ProbNNk;
   Double_t        muminus_ProbNNp;
   Double_t        muminus_ProbNNpi;
   Double_t        muminus_ProbNNmu;
   Double_t        muminus_ProbNNghost;
   Bool_t          muminus_hasMuon;
   Bool_t          muminus_isMuon;
   Bool_t          muminus_hasRich;
   Bool_t          muminus_hasCalo;
   Int_t           muminus_TRACK_Type;
   Int_t           muminus_TRACK_Key;
   Double_t        muminus_TRACK_CHI2;
   Int_t           muminus_TRACK_NDOF;
   Double_t        muminus_TRACK_CHI2NDOF;
   Double_t        muminus_TRACK_PCHI2;
   Double_t        muminus_TRACK_VeloCHI2NDOF;
   Double_t        muminus_TRACK_TCHI2NDOF;
   Double_t        muminus_VELO_UTID;
   Double_t        muminus_TRACK_FirstMeasurementX;
   Double_t        muminus_TRACK_FirstMeasurementY;
   Double_t        muminus_TRACK_FirstMeasurementZ;
   Double_t        muminus_TRACK_MatchCHI2;
   Double_t        muminus_TRACK_GhostProb;
   Double_t        muminus_TRACK_CloneDist;
   Double_t        muminus_TRACK_Likelihood;
   Double_t        muminus_X;
   Double_t        muminus_Y;
   Double_t        muplus_LOKI_ENERGY;
   Double_t        muplus_LOKI_ETA;
   Double_t        muplus_LOKI_PHI;
   Double_t        muplus_MINIP;
   Double_t        muplus_MINIPCHI2;
   Double_t        muplus_MINIPNEXTBEST;
   Double_t        muplus_MINIPCHI2NEXTBEST;
   Double_t        muplus_OWNPV_X;
   Double_t        muplus_OWNPV_Y;
   Double_t        muplus_OWNPV_Z;
   Double_t        muplus_OWNPV_XERR;
   Double_t        muplus_OWNPV_YERR;
   Double_t        muplus_OWNPV_ZERR;
   Double_t        muplus_OWNPV_CHI2;
   Int_t           muplus_OWNPV_NDOF;
   Float_t         muplus_OWNPV_COV_[3][3];
   Double_t        muplus_IP_OWNPV;
   Double_t        muplus_IPCHI2_OWNPV;
   Double_t        muplus_TOPPV_X;
   Double_t        muplus_TOPPV_Y;
   Double_t        muplus_TOPPV_Z;
   Double_t        muplus_TOPPV_XERR;
   Double_t        muplus_TOPPV_YERR;
   Double_t        muplus_TOPPV_ZERR;
   Double_t        muplus_TOPPV_CHI2;
   Int_t           muplus_TOPPV_NDOF;
   Float_t         muplus_TOPPV_COV_[3][3];
   Double_t        muplus_IP_TOPPV;
   Double_t        muplus_IPCHI2_TOPPV;
   Double_t        muplus_ORIVX_X;
   Double_t        muplus_ORIVX_Y;
   Double_t        muplus_ORIVX_Z;
   Double_t        muplus_ORIVX_XERR;
   Double_t        muplus_ORIVX_YERR;
   Double_t        muplus_ORIVX_ZERR;
   Double_t        muplus_ORIVX_CHI2;
   Int_t           muplus_ORIVX_NDOF;
   Float_t         muplus_ORIVX_COV_[3][3];
   Double_t        muplus_IP_ORIVX;
   Double_t        muplus_IPCHI2_ORIVX;
   Double_t        muplus_P;
   Double_t        muplus_PT;
   Double_t        muplus_PE;
   Double_t        muplus_PX;
   Double_t        muplus_PY;
   Double_t        muplus_PZ;
   Double_t        muplus_M;
   Int_t           muplus_ID;
   Double_t        muplus_PIDe;
   Double_t        muplus_PIDmu;
   Double_t        muplus_PIDK;
   Double_t        muplus_PIDp;
   Double_t        muplus_ProbNNe;
   Double_t        muplus_ProbNNk;
   Double_t        muplus_ProbNNp;
   Double_t        muplus_ProbNNpi;
   Double_t        muplus_ProbNNmu;
   Double_t        muplus_ProbNNghost;
   Bool_t          muplus_hasMuon;
   Bool_t          muplus_isMuon;
   Bool_t          muplus_hasRich;
   Bool_t          muplus_hasCalo;
   Int_t           muplus_TRACK_Type;
   Int_t           muplus_TRACK_Key;
   Double_t        muplus_TRACK_CHI2;
   Int_t           muplus_TRACK_NDOF;
   Double_t        muplus_TRACK_CHI2NDOF;
   Double_t        muplus_TRACK_PCHI2;
   Double_t        muplus_TRACK_VeloCHI2NDOF;
   Double_t        muplus_TRACK_TCHI2NDOF;
   Double_t        muplus_VELO_UTID;
   Double_t        muplus_TRACK_FirstMeasurementX;
   Double_t        muplus_TRACK_FirstMeasurementY;
   Double_t        muplus_TRACK_FirstMeasurementZ;
   Double_t        muplus_TRACK_MatchCHI2;
   Double_t        muplus_TRACK_GhostProb;
   Double_t        muplus_TRACK_CloneDist;
   Double_t        muplus_TRACK_Likelihood;
   Double_t        muplus_X;
   Double_t        muplus_Y;
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
   Int_t           L0Global;
   UInt_t          Hlt1Global;
   UInt_t          Hlt2Global;
   Int_t           L0PhysicsDecision;
   Int_t           L0MuonDecision;
   Int_t           L0DiMuonDecision;
   Int_t           L0MuonHighDecision;
   Int_t           L0HadronDecision;
   Int_t           L0ElectronDecision;
   Int_t           L0PhotonDecision;
   UInt_t          L0nSelections;
   Int_t           Hlt1DiMuonHighMassDecision;
   Int_t           Hlt1DiMuonLowMassDecision;
   Int_t           Hlt1SingleMuonNoIPDecision;
   Int_t           Hlt1SingleMuonHighPTDecision;
   Int_t           Hlt1TrackAllL0Decision;
   Int_t           Hlt1TrackMuonDecision;
   Int_t           Hlt1TrackPhotonDecision;
   Int_t           Hlt1MBNoBiasDecision;
   Int_t           Hlt1MBMicroBiasVeloDecision;
   Int_t           Hlt1MBMicroBiasTStationDecision;
   Int_t           Hlt1L0AnyDecision;
   Int_t           Hlt1DiProtonDecision;
   Int_t           Hlt1DiProtonLowMultDecision;
   UInt_t          Hlt1nSelections;
   Int_t           Hlt2SingleElectronTFLowPtDecision;
   Int_t           Hlt2SingleElectronTFHighPtDecision;
   Int_t           Hlt2DiElectronHighMassDecision;
   Int_t           Hlt2DiElectronBDecision;
   Int_t           Hlt2B2HHLTUnbiasedDecision;
   Int_t           Hlt2Topo2BodySimpleDecision;
   Int_t           Hlt2Topo3BodySimpleDecision;
   Int_t           Hlt2Topo4BodySimpleDecision;
   Int_t           Hlt2Topo2BodyBBDTDecision;
   Int_t           Hlt2Topo3BodyBBDTDecision;
   Int_t           Hlt2Topo4BodyBBDTDecision;
   Int_t           Hlt2TopoMu2BodyBBDTDecision;
   Int_t           Hlt2TopoMu3BodyBBDTDecision;
   Int_t           Hlt2TopoMu4BodyBBDTDecision;
   Int_t           Hlt2TopoE2BodyBBDTDecision;
   Int_t           Hlt2TopoE3BodyBBDTDecision;
   Int_t           Hlt2TopoE4BodyBBDTDecision;
   Int_t           Hlt2IncPhiDecision;
   Int_t           Hlt2IncPhiSidebandsDecision;
   Int_t           Hlt2MuonFromHLT1Decision;
   Int_t           Hlt2SingleMuonDecision;
   Int_t           Hlt2SingleMuonHighPTDecision;
   Int_t           Hlt2SingleMuonLowPTDecision;
   Int_t           Hlt2DiMuonDecision;
   Int_t           Hlt2DiMuonLowMassDecision;
   Int_t           Hlt2DiMuonJPsiDecision;
   Int_t           Hlt2DiMuonJPsiHighPTDecision;
   Int_t           Hlt2DiMuonPsi2SDecision;
   Int_t           Hlt2DiMuonBDecision;
   Int_t           Hlt2DiMuonZDecision;
   Int_t           Hlt2DiMuonDY1Decision;
   Int_t           Hlt2DiMuonDY2Decision;
   Int_t           Hlt2DiMuonDY3Decision;
   Int_t           Hlt2DiMuonDY4Decision;
   Int_t           Hlt2DiMuonDetachedDecision;
   Int_t           Hlt2DiMuonDetachedHeavyDecision;
   Int_t           Hlt2DiMuonDetachedJPsiDecision;
   Int_t           Hlt2DiMuonNoPVDecision;
   Int_t           Hlt2TriMuonDetachedDecision;
   Int_t           Hlt2TriMuonTauDecision;
   UInt_t          Hlt2nSelections;
   Int_t           MaxRoutingBits;
   Float_t         RoutingBits[64];   //[MaxRoutingBits]
   Int_t           polarity;
   Int_t           type1Clone;
   Int_t           type2Clone;
   Int_t           klClone;
   Int_t           B_s0_TAGDECISION_OS_new;
   Int_t           B_s0_TAGCAT_OS_new;
   Int_t           B_s0_TAGDECISION_new;
   Int_t           B_s0_TAGCAT_new;
   Int_t           B_s0_SS_Kaon_DEC_new;
   Double_t        B_s0_TAGOMEGA_OS_new;
   Double_t        B_s0_TAGOMEGA_new;
   Double_t        B_s0_SS_Kaon_PROB_new;

   // List of branches
   TBranch        *b_B_s0_LOKI_ENERGY;   //!
   TBranch        *b_B_s0_LOKI_ETA;   //!
   TBranch        *b_B_s0_LOKI_PHI;   //!
   TBranch        *b_B_s0_MINIP;   //!
   TBranch        *b_B_s0_MINIPCHI2;   //!
   TBranch        *b_B_s0_MINIPNEXTBEST;   //!
   TBranch        *b_B_s0_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_B_s0_ENDVERTEX_X;   //!
   TBranch        *b_B_s0_ENDVERTEX_Y;   //!
   TBranch        *b_B_s0_ENDVERTEX_Z;   //!
   TBranch        *b_B_s0_ENDVERTEX_XERR;   //!
   TBranch        *b_B_s0_ENDVERTEX_YERR;   //!
   TBranch        *b_B_s0_ENDVERTEX_ZERR;   //!
   TBranch        *b_B_s0_ENDVERTEX_CHI2;   //!
   TBranch        *b_B_s0_ENDVERTEX_NDOF;   //!
   TBranch        *b_B_s0_ENDVERTEX_COV_;   //!
   TBranch        *b_B_s0_OWNPV_X;   //!
   TBranch        *b_B_s0_OWNPV_Y;   //!
   TBranch        *b_B_s0_OWNPV_Z;   //!
   TBranch        *b_B_s0_OWNPV_XERR;   //!
   TBranch        *b_B_s0_OWNPV_YERR;   //!
   TBranch        *b_B_s0_OWNPV_ZERR;   //!
   TBranch        *b_B_s0_OWNPV_CHI2;   //!
   TBranch        *b_B_s0_OWNPV_NDOF;   //!
   TBranch        *b_B_s0_OWNPV_COV_;   //!
   TBranch        *b_B_s0_IP_OWNPV;   //!
   TBranch        *b_B_s0_IPCHI2_OWNPV;   //!
   TBranch        *b_B_s0_FD_OWNPV;   //!
   TBranch        *b_B_s0_FDCHI2_OWNPV;   //!
   TBranch        *b_B_s0_DIRA_OWNPV;   //!
   TBranch        *b_B_s0_TOPPV_X;   //!
   TBranch        *b_B_s0_TOPPV_Y;   //!
   TBranch        *b_B_s0_TOPPV_Z;   //!
   TBranch        *b_B_s0_TOPPV_XERR;   //!
   TBranch        *b_B_s0_TOPPV_YERR;   //!
   TBranch        *b_B_s0_TOPPV_ZERR;   //!
   TBranch        *b_B_s0_TOPPV_CHI2;   //!
   TBranch        *b_B_s0_TOPPV_NDOF;   //!
   TBranch        *b_B_s0_TOPPV_COV_;   //!
   TBranch        *b_B_s0_IP_TOPPV;   //!
   TBranch        *b_B_s0_IPCHI2_TOPPV;   //!
   TBranch        *b_B_s0_FD_TOPPV;   //!
   TBranch        *b_B_s0_FDCHI2_TOPPV;   //!
   TBranch        *b_B_s0_DIRA_TOPPV;   //!
   TBranch        *b_B_s0_P;   //!
   TBranch        *b_B_s0_PT;   //!
   TBranch        *b_B_s0_PE;   //!
   TBranch        *b_B_s0_PX;   //!
   TBranch        *b_B_s0_PY;   //!
   TBranch        *b_B_s0_PZ;   //!
   TBranch        *b_B_s0_MM;   //!
   TBranch        *b_B_s0_MMERR;   //!
   TBranch        *b_B_s0_M;   //!
   TBranch        *b_B_s0_ID;   //!
   TBranch        *b_B_s0_TAU;   //!
   TBranch        *b_B_s0_TAUERR;   //!
   TBranch        *b_B_s0_TAUCHI2;   //!
   TBranch        *b_B_s0_TAGDECISION;   //!
   TBranch        *b_B_s0_TAGCAT;   //!
   TBranch        *b_B_s0_TAGOMEGA;   //!
   TBranch        *b_B_s0_TAGDECISION_OS;   //!
   TBranch        *b_B_s0_TAGCAT_OS;   //!
   TBranch        *b_B_s0_TAGOMEGA_OS;   //!
   TBranch        *b_B_s0_TAGGER;   //!
   TBranch        *b_B_s0_OS_Muon_DEC;   //!
   TBranch        *b_B_s0_OS_Muon_PROB;   //!
   TBranch        *b_B_s0_OS_Electron_DEC;   //!
   TBranch        *b_B_s0_OS_Electron_PROB;   //!
   TBranch        *b_B_s0_OS_Kaon_DEC;   //!
   TBranch        *b_B_s0_OS_Kaon_PROB;   //!
   TBranch        *b_B_s0_SS_Kaon_DEC;   //!
   TBranch        *b_B_s0_SS_Kaon_PROB;   //!
   TBranch        *b_B_s0_SS_Pion_DEC;   //!
   TBranch        *b_B_s0_SS_Pion_PROB;   //!
   TBranch        *b_B_s0_VtxCharge_DEC;   //!
   TBranch        *b_B_s0_VtxCharge_PROB;   //!
   TBranch        *b_B_s0_X;   //!
   TBranch        *b_B_s0_Y;   //!
   TBranch        *b_B_s0_LOKI_DIRA;   //!
   TBranch        *b_B_s0_LOKI_DTF_CHI2NDOF;   //!
   TBranch        *b_B_s0_LOKI_DTF_CTAU;   //!
   TBranch        *b_B_s0_LOKI_DTF_CTAUERR;   //!
   TBranch        *b_B_s0_LOKI_DTF_CTAUS;   //!
   TBranch        *b_B_s0_LOKI_DTF_VCHI2NDOF;   //!
   TBranch        *b_B_s0_LOKI_FDCHI2;   //!
   TBranch        *b_B_s0_LOKI_FDS;   //!
   TBranch        *b_B_s0_LOKI_MASS_JpsiConstr;   //!
   TBranch        *b_B_s0_ThetaL;   //!
   TBranch        *b_B_s0_ThetaK;   //!
   TBranch        *b_B_s0_Phi;   //!
   TBranch        *b_B_s0_ThetaTr;   //!
   TBranch        *b_B_s0_PhiTr;   //!
   TBranch        *b_B_s0_ThetaVtr;   //!
   TBranch        *b_B_s0_L0Global_Dec;   //!
   TBranch        *b_B_s0_L0Global_TIS;   //!
   TBranch        *b_B_s0_L0Global_TOS;   //!
   TBranch        *b_B_s0_Hlt1Global_Dec;   //!
   TBranch        *b_B_s0_Hlt1Global_TIS;   //!
   TBranch        *b_B_s0_Hlt1Global_TOS;   //!
   TBranch        *b_B_s0_Hlt1Phys_Dec;   //!
   TBranch        *b_B_s0_Hlt1Phys_TIS;   //!
   TBranch        *b_B_s0_Hlt1Phys_TOS;   //!
   TBranch        *b_B_s0_Hlt2Global_Dec;   //!
   TBranch        *b_B_s0_Hlt2Global_TIS;   //!
   TBranch        *b_B_s0_Hlt2Global_TOS;   //!
   TBranch        *b_B_s0_Hlt2Phys_Dec;   //!
   TBranch        *b_B_s0_Hlt2Phys_TIS;   //!
   TBranch        *b_B_s0_Hlt2Phys_TOS;   //!
   TBranch        *b_B_s0_StrippingGlobal_Dec;   //!
   TBranch        *b_B_s0_StrippingGlobal_TIS;   //!
   TBranch        *b_B_s0_StrippingGlobal_TOS;   //!
   TBranch        *b_B_s0_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt1SingleMuonNoIPDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt1SingleMuonNoIPDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt1SingleMuonNoIPDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_B_s0_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_B_s0_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_B_s0_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2TopoMu2BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2TopoMu2BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2TopoMu2BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2TopoMu3BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2TopoMu3BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2TopoMu3BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2MuonFromHLT1Decision_Dec;   //!
   TBranch        *b_B_s0_Hlt2MuonFromHLT1Decision_TIS;   //!
   TBranch        *b_B_s0_Hlt2MuonFromHLT1Decision_TOS;   //!
   TBranch        *b_B_s0_Hlt2SingleMuonDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2SingleMuonDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2SingleMuonDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2SingleMuonLowPTDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2SingleMuonLowPTDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2SingleMuonLowPTDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonJPsiHighPTDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2DiMuonJPsiHighPTDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonJPsiHighPTDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonPsi2SDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2DiMuonPsi2SDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonPsi2SDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedJPsiDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedJPsiDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedDecision_TOS;   //!
   TBranch        *b_phi_1020_LOKI_ENERGY;   //!
   TBranch        *b_phi_1020_LOKI_ETA;   //!
   TBranch        *b_phi_1020_LOKI_PHI;   //!
   TBranch        *b_phi_1020_MINIP;   //!
   TBranch        *b_phi_1020_MINIPCHI2;   //!
   TBranch        *b_phi_1020_MINIPNEXTBEST;   //!
   TBranch        *b_phi_1020_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_phi_1020_ENDVERTEX_X;   //!
   TBranch        *b_phi_1020_ENDVERTEX_Y;   //!
   TBranch        *b_phi_1020_ENDVERTEX_Z;   //!
   TBranch        *b_phi_1020_ENDVERTEX_XERR;   //!
   TBranch        *b_phi_1020_ENDVERTEX_YERR;   //!
   TBranch        *b_phi_1020_ENDVERTEX_ZERR;   //!
   TBranch        *b_phi_1020_ENDVERTEX_CHI2;   //!
   TBranch        *b_phi_1020_ENDVERTEX_NDOF;   //!
   TBranch        *b_phi_1020_ENDVERTEX_COV_;   //!
   TBranch        *b_phi_1020_OWNPV_X;   //!
   TBranch        *b_phi_1020_OWNPV_Y;   //!
   TBranch        *b_phi_1020_OWNPV_Z;   //!
   TBranch        *b_phi_1020_OWNPV_XERR;   //!
   TBranch        *b_phi_1020_OWNPV_YERR;   //!
   TBranch        *b_phi_1020_OWNPV_ZERR;   //!
   TBranch        *b_phi_1020_OWNPV_CHI2;   //!
   TBranch        *b_phi_1020_OWNPV_NDOF;   //!
   TBranch        *b_phi_1020_OWNPV_COV_;   //!
   TBranch        *b_phi_1020_IP_OWNPV;   //!
   TBranch        *b_phi_1020_IPCHI2_OWNPV;   //!
   TBranch        *b_phi_1020_FD_OWNPV;   //!
   TBranch        *b_phi_1020_FDCHI2_OWNPV;   //!
   TBranch        *b_phi_1020_DIRA_OWNPV;   //!
   TBranch        *b_phi_1020_TOPPV_X;   //!
   TBranch        *b_phi_1020_TOPPV_Y;   //!
   TBranch        *b_phi_1020_TOPPV_Z;   //!
   TBranch        *b_phi_1020_TOPPV_XERR;   //!
   TBranch        *b_phi_1020_TOPPV_YERR;   //!
   TBranch        *b_phi_1020_TOPPV_ZERR;   //!
   TBranch        *b_phi_1020_TOPPV_CHI2;   //!
   TBranch        *b_phi_1020_TOPPV_NDOF;   //!
   TBranch        *b_phi_1020_TOPPV_COV_;   //!
   TBranch        *b_phi_1020_IP_TOPPV;   //!
   TBranch        *b_phi_1020_IPCHI2_TOPPV;   //!
   TBranch        *b_phi_1020_FD_TOPPV;   //!
   TBranch        *b_phi_1020_FDCHI2_TOPPV;   //!
   TBranch        *b_phi_1020_DIRA_TOPPV;   //!
   TBranch        *b_phi_1020_ORIVX_X;   //!
   TBranch        *b_phi_1020_ORIVX_Y;   //!
   TBranch        *b_phi_1020_ORIVX_Z;   //!
   TBranch        *b_phi_1020_ORIVX_XERR;   //!
   TBranch        *b_phi_1020_ORIVX_YERR;   //!
   TBranch        *b_phi_1020_ORIVX_ZERR;   //!
   TBranch        *b_phi_1020_ORIVX_CHI2;   //!
   TBranch        *b_phi_1020_ORIVX_NDOF;   //!
   TBranch        *b_phi_1020_ORIVX_COV_;   //!
   TBranch        *b_phi_1020_IP_ORIVX;   //!
   TBranch        *b_phi_1020_IPCHI2_ORIVX;   //!
   TBranch        *b_phi_1020_FD_ORIVX;   //!
   TBranch        *b_phi_1020_FDCHI2_ORIVX;   //!
   TBranch        *b_phi_1020_DIRA_ORIVX;   //!
   TBranch        *b_phi_1020_P;   //!
   TBranch        *b_phi_1020_PT;   //!
   TBranch        *b_phi_1020_PE;   //!
   TBranch        *b_phi_1020_PX;   //!
   TBranch        *b_phi_1020_PY;   //!
   TBranch        *b_phi_1020_PZ;   //!
   TBranch        *b_phi_1020_MM;   //!
   TBranch        *b_phi_1020_MMERR;   //!
   TBranch        *b_phi_1020_M;   //!
   TBranch        *b_phi_1020_ID;   //!
   TBranch        *b_phi_1020_TAU;   //!
   TBranch        *b_phi_1020_TAUERR;   //!
   TBranch        *b_phi_1020_TAUCHI2;   //!
   TBranch        *b_phi_1020_X;   //!
   TBranch        *b_phi_1020_Y;   //!
   TBranch        *b_Kminus_LOKI_ENERGY;   //!
   TBranch        *b_Kminus_LOKI_ETA;   //!
   TBranch        *b_Kminus_LOKI_PHI;   //!
   TBranch        *b_Kminus_MINIP;   //!
   TBranch        *b_Kminus_MINIPCHI2;   //!
   TBranch        *b_Kminus_MINIPNEXTBEST;   //!
   TBranch        *b_Kminus_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_Kminus_OWNPV_X;   //!
   TBranch        *b_Kminus_OWNPV_Y;   //!
   TBranch        *b_Kminus_OWNPV_Z;   //!
   TBranch        *b_Kminus_OWNPV_XERR;   //!
   TBranch        *b_Kminus_OWNPV_YERR;   //!
   TBranch        *b_Kminus_OWNPV_ZERR;   //!
   TBranch        *b_Kminus_OWNPV_CHI2;   //!
   TBranch        *b_Kminus_OWNPV_NDOF;   //!
   TBranch        *b_Kminus_OWNPV_COV_;   //!
   TBranch        *b_Kminus_IP_OWNPV;   //!
   TBranch        *b_Kminus_IPCHI2_OWNPV;   //!
   TBranch        *b_Kminus_TOPPV_X;   //!
   TBranch        *b_Kminus_TOPPV_Y;   //!
   TBranch        *b_Kminus_TOPPV_Z;   //!
   TBranch        *b_Kminus_TOPPV_XERR;   //!
   TBranch        *b_Kminus_TOPPV_YERR;   //!
   TBranch        *b_Kminus_TOPPV_ZERR;   //!
   TBranch        *b_Kminus_TOPPV_CHI2;   //!
   TBranch        *b_Kminus_TOPPV_NDOF;   //!
   TBranch        *b_Kminus_TOPPV_COV_;   //!
   TBranch        *b_Kminus_IP_TOPPV;   //!
   TBranch        *b_Kminus_IPCHI2_TOPPV;   //!
   TBranch        *b_Kminus_ORIVX_X;   //!
   TBranch        *b_Kminus_ORIVX_Y;   //!
   TBranch        *b_Kminus_ORIVX_Z;   //!
   TBranch        *b_Kminus_ORIVX_XERR;   //!
   TBranch        *b_Kminus_ORIVX_YERR;   //!
   TBranch        *b_Kminus_ORIVX_ZERR;   //!
   TBranch        *b_Kminus_ORIVX_CHI2;   //!
   TBranch        *b_Kminus_ORIVX_NDOF;   //!
   TBranch        *b_Kminus_ORIVX_COV_;   //!
   TBranch        *b_Kminus_IP_ORIVX;   //!
   TBranch        *b_Kminus_IPCHI2_ORIVX;   //!
   TBranch        *b_Kminus_P;   //!
   TBranch        *b_Kminus_PT;   //!
   TBranch        *b_Kminus_PE;   //!
   TBranch        *b_Kminus_PX;   //!
   TBranch        *b_Kminus_PY;   //!
   TBranch        *b_Kminus_PZ;   //!
   TBranch        *b_Kminus_M;   //!
   TBranch        *b_Kminus_ID;   //!
   TBranch        *b_Kminus_PIDe;   //!
   TBranch        *b_Kminus_PIDmu;   //!
   TBranch        *b_Kminus_PIDK;   //!
   TBranch        *b_Kminus_PIDp;   //!
   TBranch        *b_Kminus_ProbNNe;   //!
   TBranch        *b_Kminus_ProbNNk;   //!
   TBranch        *b_Kminus_ProbNNp;   //!
   TBranch        *b_Kminus_ProbNNpi;   //!
   TBranch        *b_Kminus_ProbNNmu;   //!
   TBranch        *b_Kminus_ProbNNghost;   //!
   TBranch        *b_Kminus_hasMuon;   //!
   TBranch        *b_Kminus_isMuon;   //!
   TBranch        *b_Kminus_hasRich;   //!
   TBranch        *b_Kminus_hasCalo;   //!
   TBranch        *b_Kminus_TRACK_Type;   //!
   TBranch        *b_Kminus_TRACK_Key;   //!
   TBranch        *b_Kminus_TRACK_CHI2;   //!
   TBranch        *b_Kminus_TRACK_NDOF;   //!
   TBranch        *b_Kminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Kminus_TRACK_PCHI2;   //!
   TBranch        *b_Kminus_TRACK_VeloCHI2NDOF;   //!
   TBranch        *b_Kminus_TRACK_TCHI2NDOF;   //!
   TBranch        *b_Kminus_VELO_UTID;   //!
   TBranch        *b_Kminus_TRACK_FirstMeasurementX;   //!
   TBranch        *b_Kminus_TRACK_FirstMeasurementY;   //!
   TBranch        *b_Kminus_TRACK_FirstMeasurementZ;   //!
   TBranch        *b_Kminus_TRACK_MatchCHI2;   //!
   TBranch        *b_Kminus_TRACK_GhostProb;   //!
   TBranch        *b_Kminus_TRACK_CloneDist;   //!
   TBranch        *b_Kminus_TRACK_Likelihood;   //!
   TBranch        *b_Kminus_X;   //!
   TBranch        *b_Kminus_Y;   //!
   TBranch        *b_Kplus_LOKI_ENERGY;   //!
   TBranch        *b_Kplus_LOKI_ETA;   //!
   TBranch        *b_Kplus_LOKI_PHI;   //!
   TBranch        *b_Kplus_MINIP;   //!
   TBranch        *b_Kplus_MINIPCHI2;   //!
   TBranch        *b_Kplus_MINIPNEXTBEST;   //!
   TBranch        *b_Kplus_MINIPCHI2NEXTBEST;   //!
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
   TBranch        *b_Kplus_TOPPV_X;   //!
   TBranch        *b_Kplus_TOPPV_Y;   //!
   TBranch        *b_Kplus_TOPPV_Z;   //!
   TBranch        *b_Kplus_TOPPV_XERR;   //!
   TBranch        *b_Kplus_TOPPV_YERR;   //!
   TBranch        *b_Kplus_TOPPV_ZERR;   //!
   TBranch        *b_Kplus_TOPPV_CHI2;   //!
   TBranch        *b_Kplus_TOPPV_NDOF;   //!
   TBranch        *b_Kplus_TOPPV_COV_;   //!
   TBranch        *b_Kplus_IP_TOPPV;   //!
   TBranch        *b_Kplus_IPCHI2_TOPPV;   //!
   TBranch        *b_Kplus_ORIVX_X;   //!
   TBranch        *b_Kplus_ORIVX_Y;   //!
   TBranch        *b_Kplus_ORIVX_Z;   //!
   TBranch        *b_Kplus_ORIVX_XERR;   //!
   TBranch        *b_Kplus_ORIVX_YERR;   //!
   TBranch        *b_Kplus_ORIVX_ZERR;   //!
   TBranch        *b_Kplus_ORIVX_CHI2;   //!
   TBranch        *b_Kplus_ORIVX_NDOF;   //!
   TBranch        *b_Kplus_ORIVX_COV_;   //!
   TBranch        *b_Kplus_IP_ORIVX;   //!
   TBranch        *b_Kplus_IPCHI2_ORIVX;   //!
   TBranch        *b_Kplus_P;   //!
   TBranch        *b_Kplus_PT;   //!
   TBranch        *b_Kplus_PE;   //!
   TBranch        *b_Kplus_PX;   //!
   TBranch        *b_Kplus_PY;   //!
   TBranch        *b_Kplus_PZ;   //!
   TBranch        *b_Kplus_M;   //!
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
   TBranch        *b_Kplus_TRACK_Type;   //!
   TBranch        *b_Kplus_TRACK_Key;   //!
   TBranch        *b_Kplus_TRACK_CHI2;   //!
   TBranch        *b_Kplus_TRACK_NDOF;   //!
   TBranch        *b_Kplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Kplus_TRACK_PCHI2;   //!
   TBranch        *b_Kplus_TRACK_VeloCHI2NDOF;   //!
   TBranch        *b_Kplus_TRACK_TCHI2NDOF;   //!
   TBranch        *b_Kplus_VELO_UTID;   //!
   TBranch        *b_Kplus_TRACK_FirstMeasurementX;   //!
   TBranch        *b_Kplus_TRACK_FirstMeasurementY;   //!
   TBranch        *b_Kplus_TRACK_FirstMeasurementZ;   //!
   TBranch        *b_Kplus_TRACK_MatchCHI2;   //!
   TBranch        *b_Kplus_TRACK_GhostProb;   //!
   TBranch        *b_Kplus_TRACK_CloneDist;   //!
   TBranch        *b_Kplus_TRACK_Likelihood;   //!
   TBranch        *b_Kplus_X;   //!
   TBranch        *b_Kplus_Y;   //!
   TBranch        *b_J_psi_1S_LOKI_ENERGY;   //!
   TBranch        *b_J_psi_1S_LOKI_ETA;   //!
   TBranch        *b_J_psi_1S_LOKI_PHI;   //!
   TBranch        *b_J_psi_1S_MINIP;   //!
   TBranch        *b_J_psi_1S_MINIPCHI2;   //!
   TBranch        *b_J_psi_1S_MINIPNEXTBEST;   //!
   TBranch        *b_J_psi_1S_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_X;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_Y;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_Z;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_XERR;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_YERR;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_ZERR;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_CHI2;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_NDOF;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_COV_;   //!
   TBranch        *b_J_psi_1S_OWNPV_X;   //!
   TBranch        *b_J_psi_1S_OWNPV_Y;   //!
   TBranch        *b_J_psi_1S_OWNPV_Z;   //!
   TBranch        *b_J_psi_1S_OWNPV_XERR;   //!
   TBranch        *b_J_psi_1S_OWNPV_YERR;   //!
   TBranch        *b_J_psi_1S_OWNPV_ZERR;   //!
   TBranch        *b_J_psi_1S_OWNPV_CHI2;   //!
   TBranch        *b_J_psi_1S_OWNPV_NDOF;   //!
   TBranch        *b_J_psi_1S_OWNPV_COV_;   //!
   TBranch        *b_J_psi_1S_IP_OWNPV;   //!
   TBranch        *b_J_psi_1S_IPCHI2_OWNPV;   //!
   TBranch        *b_J_psi_1S_FD_OWNPV;   //!
   TBranch        *b_J_psi_1S_FDCHI2_OWNPV;   //!
   TBranch        *b_J_psi_1S_DIRA_OWNPV;   //!
   TBranch        *b_J_psi_1S_TOPPV_X;   //!
   TBranch        *b_J_psi_1S_TOPPV_Y;   //!
   TBranch        *b_J_psi_1S_TOPPV_Z;   //!
   TBranch        *b_J_psi_1S_TOPPV_XERR;   //!
   TBranch        *b_J_psi_1S_TOPPV_YERR;   //!
   TBranch        *b_J_psi_1S_TOPPV_ZERR;   //!
   TBranch        *b_J_psi_1S_TOPPV_CHI2;   //!
   TBranch        *b_J_psi_1S_TOPPV_NDOF;   //!
   TBranch        *b_J_psi_1S_TOPPV_COV_;   //!
   TBranch        *b_J_psi_1S_IP_TOPPV;   //!
   TBranch        *b_J_psi_1S_IPCHI2_TOPPV;   //!
   TBranch        *b_J_psi_1S_FD_TOPPV;   //!
   TBranch        *b_J_psi_1S_FDCHI2_TOPPV;   //!
   TBranch        *b_J_psi_1S_DIRA_TOPPV;   //!
   TBranch        *b_J_psi_1S_ORIVX_X;   //!
   TBranch        *b_J_psi_1S_ORIVX_Y;   //!
   TBranch        *b_J_psi_1S_ORIVX_Z;   //!
   TBranch        *b_J_psi_1S_ORIVX_XERR;   //!
   TBranch        *b_J_psi_1S_ORIVX_YERR;   //!
   TBranch        *b_J_psi_1S_ORIVX_ZERR;   //!
   TBranch        *b_J_psi_1S_ORIVX_CHI2;   //!
   TBranch        *b_J_psi_1S_ORIVX_NDOF;   //!
   TBranch        *b_J_psi_1S_ORIVX_COV_;   //!
   TBranch        *b_J_psi_1S_IP_ORIVX;   //!
   TBranch        *b_J_psi_1S_IPCHI2_ORIVX;   //!
   TBranch        *b_J_psi_1S_FD_ORIVX;   //!
   TBranch        *b_J_psi_1S_FDCHI2_ORIVX;   //!
   TBranch        *b_J_psi_1S_DIRA_ORIVX;   //!
   TBranch        *b_J_psi_1S_P;   //!
   TBranch        *b_J_psi_1S_PT;   //!
   TBranch        *b_J_psi_1S_PE;   //!
   TBranch        *b_J_psi_1S_PX;   //!
   TBranch        *b_J_psi_1S_PY;   //!
   TBranch        *b_J_psi_1S_PZ;   //!
   TBranch        *b_J_psi_1S_MM;   //!
   TBranch        *b_J_psi_1S_MMERR;   //!
   TBranch        *b_J_psi_1S_M;   //!
   TBranch        *b_J_psi_1S_ID;   //!
   TBranch        *b_J_psi_1S_TAU;   //!
   TBranch        *b_J_psi_1S_TAUERR;   //!
   TBranch        *b_J_psi_1S_TAUCHI2;   //!
   TBranch        *b_J_psi_1S_X;   //!
   TBranch        *b_J_psi_1S_Y;   //!
   TBranch        *b_J_psi_1S_LOKI_DOCA_1_2;   //!
   TBranch        *b_muminus_LOKI_ENERGY;   //!
   TBranch        *b_muminus_LOKI_ETA;   //!
   TBranch        *b_muminus_LOKI_PHI;   //!
   TBranch        *b_muminus_MINIP;   //!
   TBranch        *b_muminus_MINIPCHI2;   //!
   TBranch        *b_muminus_MINIPNEXTBEST;   //!
   TBranch        *b_muminus_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_muminus_OWNPV_X;   //!
   TBranch        *b_muminus_OWNPV_Y;   //!
   TBranch        *b_muminus_OWNPV_Z;   //!
   TBranch        *b_muminus_OWNPV_XERR;   //!
   TBranch        *b_muminus_OWNPV_YERR;   //!
   TBranch        *b_muminus_OWNPV_ZERR;   //!
   TBranch        *b_muminus_OWNPV_CHI2;   //!
   TBranch        *b_muminus_OWNPV_NDOF;   //!
   TBranch        *b_muminus_OWNPV_COV_;   //!
   TBranch        *b_muminus_IP_OWNPV;   //!
   TBranch        *b_muminus_IPCHI2_OWNPV;   //!
   TBranch        *b_muminus_TOPPV_X;   //!
   TBranch        *b_muminus_TOPPV_Y;   //!
   TBranch        *b_muminus_TOPPV_Z;   //!
   TBranch        *b_muminus_TOPPV_XERR;   //!
   TBranch        *b_muminus_TOPPV_YERR;   //!
   TBranch        *b_muminus_TOPPV_ZERR;   //!
   TBranch        *b_muminus_TOPPV_CHI2;   //!
   TBranch        *b_muminus_TOPPV_NDOF;   //!
   TBranch        *b_muminus_TOPPV_COV_;   //!
   TBranch        *b_muminus_IP_TOPPV;   //!
   TBranch        *b_muminus_IPCHI2_TOPPV;   //!
   TBranch        *b_muminus_ORIVX_X;   //!
   TBranch        *b_muminus_ORIVX_Y;   //!
   TBranch        *b_muminus_ORIVX_Z;   //!
   TBranch        *b_muminus_ORIVX_XERR;   //!
   TBranch        *b_muminus_ORIVX_YERR;   //!
   TBranch        *b_muminus_ORIVX_ZERR;   //!
   TBranch        *b_muminus_ORIVX_CHI2;   //!
   TBranch        *b_muminus_ORIVX_NDOF;   //!
   TBranch        *b_muminus_ORIVX_COV_;   //!
   TBranch        *b_muminus_IP_ORIVX;   //!
   TBranch        *b_muminus_IPCHI2_ORIVX;   //!
   TBranch        *b_muminus_P;   //!
   TBranch        *b_muminus_PT;   //!
   TBranch        *b_muminus_PE;   //!
   TBranch        *b_muminus_PX;   //!
   TBranch        *b_muminus_PY;   //!
   TBranch        *b_muminus_PZ;   //!
   TBranch        *b_muminus_M;   //!
   TBranch        *b_muminus_ID;   //!
   TBranch        *b_muminus_PIDe;   //!
   TBranch        *b_muminus_PIDmu;   //!
   TBranch        *b_muminus_PIDK;   //!
   TBranch        *b_muminus_PIDp;   //!
   TBranch        *b_muminus_ProbNNe;   //!
   TBranch        *b_muminus_ProbNNk;   //!
   TBranch        *b_muminus_ProbNNp;   //!
   TBranch        *b_muminus_ProbNNpi;   //!
   TBranch        *b_muminus_ProbNNmu;   //!
   TBranch        *b_muminus_ProbNNghost;   //!
   TBranch        *b_muminus_hasMuon;   //!
   TBranch        *b_muminus_isMuon;   //!
   TBranch        *b_muminus_hasRich;   //!
   TBranch        *b_muminus_hasCalo;   //!
   TBranch        *b_muminus_TRACK_Type;   //!
   TBranch        *b_muminus_TRACK_Key;   //!
   TBranch        *b_muminus_TRACK_CHI2;   //!
   TBranch        *b_muminus_TRACK_NDOF;   //!
   TBranch        *b_muminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_muminus_TRACK_PCHI2;   //!
   TBranch        *b_muminus_TRACK_VeloCHI2NDOF;   //!
   TBranch        *b_muminus_TRACK_TCHI2NDOF;   //!
   TBranch        *b_muminus_VELO_UTID;   //!
   TBranch        *b_muminus_TRACK_FirstMeasurementX;   //!
   TBranch        *b_muminus_TRACK_FirstMeasurementY;   //!
   TBranch        *b_muminus_TRACK_FirstMeasurementZ;   //!
   TBranch        *b_muminus_TRACK_MatchCHI2;   //!
   TBranch        *b_muminus_TRACK_GhostProb;   //!
   TBranch        *b_muminus_TRACK_CloneDist;   //!
   TBranch        *b_muminus_TRACK_Likelihood;   //!
   TBranch        *b_muminus_X;   //!
   TBranch        *b_muminus_Y;   //!
   TBranch        *b_muplus_LOKI_ENERGY;   //!
   TBranch        *b_muplus_LOKI_ETA;   //!
   TBranch        *b_muplus_LOKI_PHI;   //!
   TBranch        *b_muplus_MINIP;   //!
   TBranch        *b_muplus_MINIPCHI2;   //!
   TBranch        *b_muplus_MINIPNEXTBEST;   //!
   TBranch        *b_muplus_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_muplus_OWNPV_X;   //!
   TBranch        *b_muplus_OWNPV_Y;   //!
   TBranch        *b_muplus_OWNPV_Z;   //!
   TBranch        *b_muplus_OWNPV_XERR;   //!
   TBranch        *b_muplus_OWNPV_YERR;   //!
   TBranch        *b_muplus_OWNPV_ZERR;   //!
   TBranch        *b_muplus_OWNPV_CHI2;   //!
   TBranch        *b_muplus_OWNPV_NDOF;   //!
   TBranch        *b_muplus_OWNPV_COV_;   //!
   TBranch        *b_muplus_IP_OWNPV;   //!
   TBranch        *b_muplus_IPCHI2_OWNPV;   //!
   TBranch        *b_muplus_TOPPV_X;   //!
   TBranch        *b_muplus_TOPPV_Y;   //!
   TBranch        *b_muplus_TOPPV_Z;   //!
   TBranch        *b_muplus_TOPPV_XERR;   //!
   TBranch        *b_muplus_TOPPV_YERR;   //!
   TBranch        *b_muplus_TOPPV_ZERR;   //!
   TBranch        *b_muplus_TOPPV_CHI2;   //!
   TBranch        *b_muplus_TOPPV_NDOF;   //!
   TBranch        *b_muplus_TOPPV_COV_;   //!
   TBranch        *b_muplus_IP_TOPPV;   //!
   TBranch        *b_muplus_IPCHI2_TOPPV;   //!
   TBranch        *b_muplus_ORIVX_X;   //!
   TBranch        *b_muplus_ORIVX_Y;   //!
   TBranch        *b_muplus_ORIVX_Z;   //!
   TBranch        *b_muplus_ORIVX_XERR;   //!
   TBranch        *b_muplus_ORIVX_YERR;   //!
   TBranch        *b_muplus_ORIVX_ZERR;   //!
   TBranch        *b_muplus_ORIVX_CHI2;   //!
   TBranch        *b_muplus_ORIVX_NDOF;   //!
   TBranch        *b_muplus_ORIVX_COV_;   //!
   TBranch        *b_muplus_IP_ORIVX;   //!
   TBranch        *b_muplus_IPCHI2_ORIVX;   //!
   TBranch        *b_muplus_P;   //!
   TBranch        *b_muplus_PT;   //!
   TBranch        *b_muplus_PE;   //!
   TBranch        *b_muplus_PX;   //!
   TBranch        *b_muplus_PY;   //!
   TBranch        *b_muplus_PZ;   //!
   TBranch        *b_muplus_M;   //!
   TBranch        *b_muplus_ID;   //!
   TBranch        *b_muplus_PIDe;   //!
   TBranch        *b_muplus_PIDmu;   //!
   TBranch        *b_muplus_PIDK;   //!
   TBranch        *b_muplus_PIDp;   //!
   TBranch        *b_muplus_ProbNNe;   //!
   TBranch        *b_muplus_ProbNNk;   //!
   TBranch        *b_muplus_ProbNNp;   //!
   TBranch        *b_muplus_ProbNNpi;   //!
   TBranch        *b_muplus_ProbNNmu;   //!
   TBranch        *b_muplus_ProbNNghost;   //!
   TBranch        *b_muplus_hasMuon;   //!
   TBranch        *b_muplus_isMuon;   //!
   TBranch        *b_muplus_hasRich;   //!
   TBranch        *b_muplus_hasCalo;   //!
   TBranch        *b_muplus_TRACK_Type;   //!
   TBranch        *b_muplus_TRACK_Key;   //!
   TBranch        *b_muplus_TRACK_CHI2;   //!
   TBranch        *b_muplus_TRACK_NDOF;   //!
   TBranch        *b_muplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_muplus_TRACK_PCHI2;   //!
   TBranch        *b_muplus_TRACK_VeloCHI2NDOF;   //!
   TBranch        *b_muplus_TRACK_TCHI2NDOF;   //!
   TBranch        *b_muplus_VELO_UTID;   //!
   TBranch        *b_muplus_TRACK_FirstMeasurementX;   //!
   TBranch        *b_muplus_TRACK_FirstMeasurementY;   //!
   TBranch        *b_muplus_TRACK_FirstMeasurementZ;   //!
   TBranch        *b_muplus_TRACK_MatchCHI2;   //!
   TBranch        *b_muplus_TRACK_GhostProb;   //!
   TBranch        *b_muplus_TRACK_CloneDist;   //!
   TBranch        *b_muplus_TRACK_Likelihood;   //!
   TBranch        *b_muplus_X;   //!
   TBranch        *b_muplus_Y;   //!
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
   TBranch        *b_L0Global;   //!
   TBranch        *b_Hlt1Global;   //!
   TBranch        *b_Hlt2Global;   //!
   TBranch        *b_L0PhysicsDecision;   //!
   TBranch        *b_L0MuonDecision;   //!
   TBranch        *b_L0DiMuonDecision;   //!
   TBranch        *b_L0MuonHighDecision;   //!
   TBranch        *b_L0HadronDecision;   //!
   TBranch        *b_L0ElectronDecision;   //!
   TBranch        *b_L0PhotonDecision;   //!
   TBranch        *b_L0nSelections;   //!
   TBranch        *b_Hlt1DiMuonHighMassDecision;   //!
   TBranch        *b_Hlt1DiMuonLowMassDecision;   //!
   TBranch        *b_Hlt1SingleMuonNoIPDecision;   //!
   TBranch        *b_Hlt1SingleMuonHighPTDecision;   //!
   TBranch        *b_Hlt1TrackAllL0Decision;   //!
   TBranch        *b_Hlt1TrackMuonDecision;   //!
   TBranch        *b_Hlt1TrackPhotonDecision;   //!
   TBranch        *b_Hlt1MBNoBiasDecision;   //!
   TBranch        *b_Hlt1MBMicroBiasVeloDecision;   //!
   TBranch        *b_Hlt1MBMicroBiasTStationDecision;   //!
   TBranch        *b_Hlt1L0AnyDecision;   //!
   TBranch        *b_Hlt1DiProtonDecision;   //!
   TBranch        *b_Hlt1DiProtonLowMultDecision;   //!
   TBranch        *b_Hlt1nSelections;   //!
   TBranch        *b_Hlt2SingleElectronTFLowPtDecision;   //!
   TBranch        *b_Hlt2SingleElectronTFHighPtDecision;   //!
   TBranch        *b_Hlt2DiElectronHighMassDecision;   //!
   TBranch        *b_Hlt2DiElectronBDecision;   //!
   TBranch        *b_Hlt2B2HHLTUnbiasedDecision;   //!
   TBranch        *b_Hlt2Topo2BodySimpleDecision;   //!
   TBranch        *b_Hlt2Topo3BodySimpleDecision;   //!
   TBranch        *b_Hlt2Topo4BodySimpleDecision;   //!
   TBranch        *b_Hlt2Topo2BodyBBDTDecision;   //!
   TBranch        *b_Hlt2Topo3BodyBBDTDecision;   //!
   TBranch        *b_Hlt2Topo4BodyBBDTDecision;   //!
   TBranch        *b_Hlt2TopoMu2BodyBBDTDecision;   //!
   TBranch        *b_Hlt2TopoMu3BodyBBDTDecision;   //!
   TBranch        *b_Hlt2TopoMu4BodyBBDTDecision;   //!
   TBranch        *b_Hlt2TopoE2BodyBBDTDecision;   //!
   TBranch        *b_Hlt2TopoE3BodyBBDTDecision;   //!
   TBranch        *b_Hlt2TopoE4BodyBBDTDecision;   //!
   TBranch        *b_Hlt2IncPhiDecision;   //!
   TBranch        *b_Hlt2IncPhiSidebandsDecision;   //!
   TBranch        *b_Hlt2MuonFromHLT1Decision;   //!
   TBranch        *b_Hlt2SingleMuonDecision;   //!
   TBranch        *b_Hlt2SingleMuonHighPTDecision;   //!
   TBranch        *b_Hlt2SingleMuonLowPTDecision;   //!
   TBranch        *b_Hlt2DiMuonDecision;   //!
   TBranch        *b_Hlt2DiMuonLowMassDecision;   //!
   TBranch        *b_Hlt2DiMuonJPsiDecision;   //!
   TBranch        *b_Hlt2DiMuonJPsiHighPTDecision;   //!
   TBranch        *b_Hlt2DiMuonPsi2SDecision;   //!
   TBranch        *b_Hlt2DiMuonBDecision;   //!
   TBranch        *b_Hlt2DiMuonZDecision;   //!
   TBranch        *b_Hlt2DiMuonDY1Decision;   //!
   TBranch        *b_Hlt2DiMuonDY2Decision;   //!
   TBranch        *b_Hlt2DiMuonDY3Decision;   //!
   TBranch        *b_Hlt2DiMuonDY4Decision;   //!
   TBranch        *b_Hlt2DiMuonDetachedDecision;   //!
   TBranch        *b_Hlt2DiMuonDetachedHeavyDecision;   //!
   TBranch        *b_Hlt2DiMuonDetachedJPsiDecision;   //!
   TBranch        *b_Hlt2DiMuonNoPVDecision;   //!
   TBranch        *b_Hlt2TriMuonDetachedDecision;   //!
   TBranch        *b_Hlt2TriMuonTauDecision;   //!
   TBranch        *b_Hlt2nSelections;   //!
   TBranch        *b_MaxRoutingBits;   //!
   TBranch        *b_RoutingBits;   //!
   TBranch        *b_polarity;   //!
   TBranch        *b_type1Clone;   //!
   TBranch        *b_type2Clone;   //!
   TBranch        *b_klClone;   //!
   TBranch        *b_B_s0_TAGDECISION_OS_new;   //!
   TBranch        *b_B_s0_TAGCAT_OS_new;   //!
   TBranch        *b_B_s0_TAGDECISION_new;   //!
   TBranch        *b_B_s0_TAGCAT_new;   //!
   TBranch        *b_B_s0_SS_Kaon_DEC_new;   //!
   TBranch        *b_B_s0_TAGOMEGA_OS_new;   //!
   TBranch        *b_B_s0_TAGOMEGA_new;   //!
   TBranch        *b_B_s0_SS_Kaon_PROB_new;   //!

   MakePlots(TTree *tree=0);
   virtual ~MakePlots();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MakePlots_cxx
MakePlots::MakePlots(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/tmp/Bs2JpsiPhi_2012_20130425_tupleA.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/tmp/Bs2JpsiPhi_2012_20130425_tupleA.root");
      }
      f->GetObject("DecayTree",tree);

   }
   Init(tree);
}

MakePlots::~MakePlots()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MakePlots::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MakePlots::LoadTree(Long64_t entry)
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

void MakePlots::Init(TTree *tree)
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

   fChain->SetBranchAddress("B_s0_LOKI_ENERGY", &B_s0_LOKI_ENERGY, &b_B_s0_LOKI_ENERGY);
   fChain->SetBranchAddress("B_s0_LOKI_ETA", &B_s0_LOKI_ETA, &b_B_s0_LOKI_ETA);
   fChain->SetBranchAddress("B_s0_LOKI_PHI", &B_s0_LOKI_PHI, &b_B_s0_LOKI_PHI);
   fChain->SetBranchAddress("B_s0_MINIP", &B_s0_MINIP, &b_B_s0_MINIP);
   fChain->SetBranchAddress("B_s0_MINIPCHI2", &B_s0_MINIPCHI2, &b_B_s0_MINIPCHI2);
   fChain->SetBranchAddress("B_s0_MINIPNEXTBEST", &B_s0_MINIPNEXTBEST, &b_B_s0_MINIPNEXTBEST);
   fChain->SetBranchAddress("B_s0_MINIPCHI2NEXTBEST", &B_s0_MINIPCHI2NEXTBEST, &b_B_s0_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_X", &B_s0_ENDVERTEX_X, &b_B_s0_ENDVERTEX_X);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_Y", &B_s0_ENDVERTEX_Y, &b_B_s0_ENDVERTEX_Y);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_Z", &B_s0_ENDVERTEX_Z, &b_B_s0_ENDVERTEX_Z);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_XERR", &B_s0_ENDVERTEX_XERR, &b_B_s0_ENDVERTEX_XERR);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_YERR", &B_s0_ENDVERTEX_YERR, &b_B_s0_ENDVERTEX_YERR);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_ZERR", &B_s0_ENDVERTEX_ZERR, &b_B_s0_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_CHI2", &B_s0_ENDVERTEX_CHI2, &b_B_s0_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_NDOF", &B_s0_ENDVERTEX_NDOF, &b_B_s0_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_COV_", B_s0_ENDVERTEX_COV_, &b_B_s0_ENDVERTEX_COV_);
   fChain->SetBranchAddress("B_s0_OWNPV_X", &B_s0_OWNPV_X, &b_B_s0_OWNPV_X);
   fChain->SetBranchAddress("B_s0_OWNPV_Y", &B_s0_OWNPV_Y, &b_B_s0_OWNPV_Y);
   fChain->SetBranchAddress("B_s0_OWNPV_Z", &B_s0_OWNPV_Z, &b_B_s0_OWNPV_Z);
   fChain->SetBranchAddress("B_s0_OWNPV_XERR", &B_s0_OWNPV_XERR, &b_B_s0_OWNPV_XERR);
   fChain->SetBranchAddress("B_s0_OWNPV_YERR", &B_s0_OWNPV_YERR, &b_B_s0_OWNPV_YERR);
   fChain->SetBranchAddress("B_s0_OWNPV_ZERR", &B_s0_OWNPV_ZERR, &b_B_s0_OWNPV_ZERR);
   fChain->SetBranchAddress("B_s0_OWNPV_CHI2", &B_s0_OWNPV_CHI2, &b_B_s0_OWNPV_CHI2);
   fChain->SetBranchAddress("B_s0_OWNPV_NDOF", &B_s0_OWNPV_NDOF, &b_B_s0_OWNPV_NDOF);
   fChain->SetBranchAddress("B_s0_OWNPV_COV_", B_s0_OWNPV_COV_, &b_B_s0_OWNPV_COV_);
   fChain->SetBranchAddress("B_s0_IP_OWNPV", &B_s0_IP_OWNPV, &b_B_s0_IP_OWNPV);
   fChain->SetBranchAddress("B_s0_IPCHI2_OWNPV", &B_s0_IPCHI2_OWNPV, &b_B_s0_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_s0_FD_OWNPV", &B_s0_FD_OWNPV, &b_B_s0_FD_OWNPV);
   fChain->SetBranchAddress("B_s0_FDCHI2_OWNPV", &B_s0_FDCHI2_OWNPV, &b_B_s0_FDCHI2_OWNPV);
   fChain->SetBranchAddress("B_s0_DIRA_OWNPV", &B_s0_DIRA_OWNPV, &b_B_s0_DIRA_OWNPV);
   fChain->SetBranchAddress("B_s0_TOPPV_X", &B_s0_TOPPV_X, &b_B_s0_TOPPV_X);
   fChain->SetBranchAddress("B_s0_TOPPV_Y", &B_s0_TOPPV_Y, &b_B_s0_TOPPV_Y);
   fChain->SetBranchAddress("B_s0_TOPPV_Z", &B_s0_TOPPV_Z, &b_B_s0_TOPPV_Z);
   fChain->SetBranchAddress("B_s0_TOPPV_XERR", &B_s0_TOPPV_XERR, &b_B_s0_TOPPV_XERR);
   fChain->SetBranchAddress("B_s0_TOPPV_YERR", &B_s0_TOPPV_YERR, &b_B_s0_TOPPV_YERR);
   fChain->SetBranchAddress("B_s0_TOPPV_ZERR", &B_s0_TOPPV_ZERR, &b_B_s0_TOPPV_ZERR);
   fChain->SetBranchAddress("B_s0_TOPPV_CHI2", &B_s0_TOPPV_CHI2, &b_B_s0_TOPPV_CHI2);
   fChain->SetBranchAddress("B_s0_TOPPV_NDOF", &B_s0_TOPPV_NDOF, &b_B_s0_TOPPV_NDOF);
   fChain->SetBranchAddress("B_s0_TOPPV_COV_", B_s0_TOPPV_COV_, &b_B_s0_TOPPV_COV_);
   fChain->SetBranchAddress("B_s0_IP_TOPPV", &B_s0_IP_TOPPV, &b_B_s0_IP_TOPPV);
   fChain->SetBranchAddress("B_s0_IPCHI2_TOPPV", &B_s0_IPCHI2_TOPPV, &b_B_s0_IPCHI2_TOPPV);
   fChain->SetBranchAddress("B_s0_FD_TOPPV", &B_s0_FD_TOPPV, &b_B_s0_FD_TOPPV);
   fChain->SetBranchAddress("B_s0_FDCHI2_TOPPV", &B_s0_FDCHI2_TOPPV, &b_B_s0_FDCHI2_TOPPV);
   fChain->SetBranchAddress("B_s0_DIRA_TOPPV", &B_s0_DIRA_TOPPV, &b_B_s0_DIRA_TOPPV);
   fChain->SetBranchAddress("B_s0_P", &B_s0_P, &b_B_s0_P);
   fChain->SetBranchAddress("B_s0_PT", &B_s0_PT, &b_B_s0_PT);
   fChain->SetBranchAddress("B_s0_PE", &B_s0_PE, &b_B_s0_PE);
   fChain->SetBranchAddress("B_s0_PX", &B_s0_PX, &b_B_s0_PX);
   fChain->SetBranchAddress("B_s0_PY", &B_s0_PY, &b_B_s0_PY);
   fChain->SetBranchAddress("B_s0_PZ", &B_s0_PZ, &b_B_s0_PZ);
   fChain->SetBranchAddress("B_s0_MM", &B_s0_MM, &b_B_s0_MM);
   fChain->SetBranchAddress("B_s0_MMERR", &B_s0_MMERR, &b_B_s0_MMERR);
   fChain->SetBranchAddress("B_s0_M", &B_s0_M, &b_B_s0_M);
   fChain->SetBranchAddress("B_s0_ID", &B_s0_ID, &b_B_s0_ID);
   fChain->SetBranchAddress("B_s0_TAU", &B_s0_TAU, &b_B_s0_TAU);
   fChain->SetBranchAddress("B_s0_TAUERR", &B_s0_TAUERR, &b_B_s0_TAUERR);
   fChain->SetBranchAddress("B_s0_TAUCHI2", &B_s0_TAUCHI2, &b_B_s0_TAUCHI2);
   fChain->SetBranchAddress("B_s0_TAGDECISION", &B_s0_TAGDECISION, &b_B_s0_TAGDECISION);
   fChain->SetBranchAddress("B_s0_TAGCAT", &B_s0_TAGCAT, &b_B_s0_TAGCAT);
   fChain->SetBranchAddress("B_s0_TAGOMEGA", &B_s0_TAGOMEGA, &b_B_s0_TAGOMEGA);
   fChain->SetBranchAddress("B_s0_TAGDECISION_OS", &B_s0_TAGDECISION_OS, &b_B_s0_TAGDECISION_OS);
   fChain->SetBranchAddress("B_s0_TAGCAT_OS", &B_s0_TAGCAT_OS, &b_B_s0_TAGCAT_OS);
   fChain->SetBranchAddress("B_s0_TAGOMEGA_OS", &B_s0_TAGOMEGA_OS, &b_B_s0_TAGOMEGA_OS);
   fChain->SetBranchAddress("B_s0_TAGGER", &B_s0_TAGGER, &b_B_s0_TAGGER);
   fChain->SetBranchAddress("B_s0_OS_Muon_DEC", &B_s0_OS_Muon_DEC, &b_B_s0_OS_Muon_DEC);
   fChain->SetBranchAddress("B_s0_OS_Muon_PROB", &B_s0_OS_Muon_PROB, &b_B_s0_OS_Muon_PROB);
   fChain->SetBranchAddress("B_s0_OS_Electron_DEC", &B_s0_OS_Electron_DEC, &b_B_s0_OS_Electron_DEC);
   fChain->SetBranchAddress("B_s0_OS_Electron_PROB", &B_s0_OS_Electron_PROB, &b_B_s0_OS_Electron_PROB);
   fChain->SetBranchAddress("B_s0_OS_Kaon_DEC", &B_s0_OS_Kaon_DEC, &b_B_s0_OS_Kaon_DEC);
   fChain->SetBranchAddress("B_s0_OS_Kaon_PROB", &B_s0_OS_Kaon_PROB, &b_B_s0_OS_Kaon_PROB);
   fChain->SetBranchAddress("B_s0_SS_Kaon_DEC", &B_s0_SS_Kaon_DEC, &b_B_s0_SS_Kaon_DEC);
   fChain->SetBranchAddress("B_s0_SS_Kaon_PROB", &B_s0_SS_Kaon_PROB, &b_B_s0_SS_Kaon_PROB);
   fChain->SetBranchAddress("B_s0_SS_Pion_DEC", &B_s0_SS_Pion_DEC, &b_B_s0_SS_Pion_DEC);
   fChain->SetBranchAddress("B_s0_SS_Pion_PROB", &B_s0_SS_Pion_PROB, &b_B_s0_SS_Pion_PROB);
   fChain->SetBranchAddress("B_s0_VtxCharge_DEC", &B_s0_VtxCharge_DEC, &b_B_s0_VtxCharge_DEC);
   fChain->SetBranchAddress("B_s0_VtxCharge_PROB", &B_s0_VtxCharge_PROB, &b_B_s0_VtxCharge_PROB);
   fChain->SetBranchAddress("B_s0_X", &B_s0_X, &b_B_s0_X);
   fChain->SetBranchAddress("B_s0_Y", &B_s0_Y, &b_B_s0_Y);
   fChain->SetBranchAddress("B_s0_LOKI_DIRA", &B_s0_LOKI_DIRA, &b_B_s0_LOKI_DIRA);
   fChain->SetBranchAddress("B_s0_LOKI_DTF_CHI2NDOF", &B_s0_LOKI_DTF_CHI2NDOF, &b_B_s0_LOKI_DTF_CHI2NDOF);
   fChain->SetBranchAddress("B_s0_LOKI_DTF_CTAU", &B_s0_LOKI_DTF_CTAU, &b_B_s0_LOKI_DTF_CTAU);
   fChain->SetBranchAddress("B_s0_LOKI_DTF_CTAUERR", &B_s0_LOKI_DTF_CTAUERR, &b_B_s0_LOKI_DTF_CTAUERR);
   fChain->SetBranchAddress("B_s0_LOKI_DTF_CTAUS", &B_s0_LOKI_DTF_CTAUS, &b_B_s0_LOKI_DTF_CTAUS);
   fChain->SetBranchAddress("B_s0_LOKI_DTF_VCHI2NDOF", &B_s0_LOKI_DTF_VCHI2NDOF, &b_B_s0_LOKI_DTF_VCHI2NDOF);
   fChain->SetBranchAddress("B_s0_LOKI_FDCHI2", &B_s0_LOKI_FDCHI2, &b_B_s0_LOKI_FDCHI2);
   fChain->SetBranchAddress("B_s0_LOKI_FDS", &B_s0_LOKI_FDS, &b_B_s0_LOKI_FDS);
   fChain->SetBranchAddress("B_s0_LOKI_MASS_JpsiConstr", &B_s0_LOKI_MASS_JpsiConstr, &b_B_s0_LOKI_MASS_JpsiConstr);
   fChain->SetBranchAddress("B_s0_ThetaL", &B_s0_ThetaL, &b_B_s0_ThetaL);
   fChain->SetBranchAddress("B_s0_ThetaK", &B_s0_ThetaK, &b_B_s0_ThetaK);
   fChain->SetBranchAddress("B_s0_Phi", &B_s0_Phi, &b_B_s0_Phi);
   fChain->SetBranchAddress("B_s0_ThetaTr", &B_s0_ThetaTr, &b_B_s0_ThetaTr);
   fChain->SetBranchAddress("B_s0_PhiTr", &B_s0_PhiTr, &b_B_s0_PhiTr);
   fChain->SetBranchAddress("B_s0_ThetaVtr", &B_s0_ThetaVtr, &b_B_s0_ThetaVtr);
   fChain->SetBranchAddress("B_s0_L0Global_Dec", &B_s0_L0Global_Dec, &b_B_s0_L0Global_Dec);
   fChain->SetBranchAddress("B_s0_L0Global_TIS", &B_s0_L0Global_TIS, &b_B_s0_L0Global_TIS);
   fChain->SetBranchAddress("B_s0_L0Global_TOS", &B_s0_L0Global_TOS, &b_B_s0_L0Global_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1Global_Dec", &B_s0_Hlt1Global_Dec, &b_B_s0_Hlt1Global_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1Global_TIS", &B_s0_Hlt1Global_TIS, &b_B_s0_Hlt1Global_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1Global_TOS", &B_s0_Hlt1Global_TOS, &b_B_s0_Hlt1Global_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1Phys_Dec", &B_s0_Hlt1Phys_Dec, &b_B_s0_Hlt1Phys_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1Phys_TIS", &B_s0_Hlt1Phys_TIS, &b_B_s0_Hlt1Phys_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1Phys_TOS", &B_s0_Hlt1Phys_TOS, &b_B_s0_Hlt1Phys_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2Global_Dec", &B_s0_Hlt2Global_Dec, &b_B_s0_Hlt2Global_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2Global_TIS", &B_s0_Hlt2Global_TIS, &b_B_s0_Hlt2Global_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2Global_TOS", &B_s0_Hlt2Global_TOS, &b_B_s0_Hlt2Global_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2Phys_Dec", &B_s0_Hlt2Phys_Dec, &b_B_s0_Hlt2Phys_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2Phys_TIS", &B_s0_Hlt2Phys_TIS, &b_B_s0_Hlt2Phys_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2Phys_TOS", &B_s0_Hlt2Phys_TOS, &b_B_s0_Hlt2Phys_TOS);
   fChain->SetBranchAddress("B_s0_StrippingGlobal_Dec", &B_s0_StrippingGlobal_Dec, &b_B_s0_StrippingGlobal_Dec);
   fChain->SetBranchAddress("B_s0_StrippingGlobal_TIS", &B_s0_StrippingGlobal_TIS, &b_B_s0_StrippingGlobal_TIS);
   fChain->SetBranchAddress("B_s0_StrippingGlobal_TOS", &B_s0_StrippingGlobal_TOS, &b_B_s0_StrippingGlobal_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1DiMuonHighMassDecision_Dec", &B_s0_Hlt1DiMuonHighMassDecision_Dec, &b_B_s0_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1DiMuonHighMassDecision_TIS", &B_s0_Hlt1DiMuonHighMassDecision_TIS, &b_B_s0_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1DiMuonHighMassDecision_TOS", &B_s0_Hlt1DiMuonHighMassDecision_TOS, &b_B_s0_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1DiMuonLowMassDecision_Dec", &B_s0_Hlt1DiMuonLowMassDecision_Dec, &b_B_s0_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1DiMuonLowMassDecision_TIS", &B_s0_Hlt1DiMuonLowMassDecision_TIS, &b_B_s0_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1DiMuonLowMassDecision_TOS", &B_s0_Hlt1DiMuonLowMassDecision_TOS, &b_B_s0_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1SingleMuonNoIPDecision_Dec", &B_s0_Hlt1SingleMuonNoIPDecision_Dec, &b_B_s0_Hlt1SingleMuonNoIPDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1SingleMuonNoIPDecision_TIS", &B_s0_Hlt1SingleMuonNoIPDecision_TIS, &b_B_s0_Hlt1SingleMuonNoIPDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1SingleMuonNoIPDecision_TOS", &B_s0_Hlt1SingleMuonNoIPDecision_TOS, &b_B_s0_Hlt1SingleMuonNoIPDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1SingleMuonHighPTDecision_Dec", &B_s0_Hlt1SingleMuonHighPTDecision_Dec, &b_B_s0_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1SingleMuonHighPTDecision_TIS", &B_s0_Hlt1SingleMuonHighPTDecision_TIS, &b_B_s0_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1SingleMuonHighPTDecision_TOS", &B_s0_Hlt1SingleMuonHighPTDecision_TOS, &b_B_s0_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1TrackAllL0Decision_Dec", &B_s0_Hlt1TrackAllL0Decision_Dec, &b_B_s0_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1TrackAllL0Decision_TIS", &B_s0_Hlt1TrackAllL0Decision_TIS, &b_B_s0_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1TrackAllL0Decision_TOS", &B_s0_Hlt1TrackAllL0Decision_TOS, &b_B_s0_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1TrackMuonDecision_Dec", &B_s0_Hlt1TrackMuonDecision_Dec, &b_B_s0_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1TrackMuonDecision_TIS", &B_s0_Hlt1TrackMuonDecision_TIS, &b_B_s0_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1TrackMuonDecision_TOS", &B_s0_Hlt1TrackMuonDecision_TOS, &b_B_s0_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2TopoMu2BodyBBDTDecision_Dec", &B_s0_Hlt2TopoMu2BodyBBDTDecision_Dec, &b_B_s0_Hlt2TopoMu2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2TopoMu2BodyBBDTDecision_TIS", &B_s0_Hlt2TopoMu2BodyBBDTDecision_TIS, &b_B_s0_Hlt2TopoMu2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2TopoMu2BodyBBDTDecision_TOS", &B_s0_Hlt2TopoMu2BodyBBDTDecision_TOS, &b_B_s0_Hlt2TopoMu2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2TopoMu3BodyBBDTDecision_Dec", &B_s0_Hlt2TopoMu3BodyBBDTDecision_Dec, &b_B_s0_Hlt2TopoMu3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2TopoMu3BodyBBDTDecision_TIS", &B_s0_Hlt2TopoMu3BodyBBDTDecision_TIS, &b_B_s0_Hlt2TopoMu3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2TopoMu3BodyBBDTDecision_TOS", &B_s0_Hlt2TopoMu3BodyBBDTDecision_TOS, &b_B_s0_Hlt2TopoMu3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2TopoMu4BodyBBDTDecision_Dec", &B_s0_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_B_s0_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2TopoMu4BodyBBDTDecision_TIS", &B_s0_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_B_s0_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS", &B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2MuonFromHLT1Decision_Dec", &B_s0_Hlt2MuonFromHLT1Decision_Dec, &b_B_s0_Hlt2MuonFromHLT1Decision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2MuonFromHLT1Decision_TIS", &B_s0_Hlt2MuonFromHLT1Decision_TIS, &b_B_s0_Hlt2MuonFromHLT1Decision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2MuonFromHLT1Decision_TOS", &B_s0_Hlt2MuonFromHLT1Decision_TOS, &b_B_s0_Hlt2MuonFromHLT1Decision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2SingleMuonDecision_Dec", &B_s0_Hlt2SingleMuonDecision_Dec, &b_B_s0_Hlt2SingleMuonDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2SingleMuonDecision_TIS", &B_s0_Hlt2SingleMuonDecision_TIS, &b_B_s0_Hlt2SingleMuonDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2SingleMuonDecision_TOS", &B_s0_Hlt2SingleMuonDecision_TOS, &b_B_s0_Hlt2SingleMuonDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2SingleMuonHighPTDecision_Dec", &B_s0_Hlt2SingleMuonHighPTDecision_Dec, &b_B_s0_Hlt2SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2SingleMuonHighPTDecision_TIS", &B_s0_Hlt2SingleMuonHighPTDecision_TIS, &b_B_s0_Hlt2SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2SingleMuonHighPTDecision_TOS", &B_s0_Hlt2SingleMuonHighPTDecision_TOS, &b_B_s0_Hlt2SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2SingleMuonLowPTDecision_Dec", &B_s0_Hlt2SingleMuonLowPTDecision_Dec, &b_B_s0_Hlt2SingleMuonLowPTDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2SingleMuonLowPTDecision_TIS", &B_s0_Hlt2SingleMuonLowPTDecision_TIS, &b_B_s0_Hlt2SingleMuonLowPTDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2SingleMuonLowPTDecision_TOS", &B_s0_Hlt2SingleMuonLowPTDecision_TOS, &b_B_s0_Hlt2SingleMuonLowPTDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDecision_Dec", &B_s0_Hlt2DiMuonDecision_Dec, &b_B_s0_Hlt2DiMuonDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDecision_TIS", &B_s0_Hlt2DiMuonDecision_TIS, &b_B_s0_Hlt2DiMuonDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDecision_TOS", &B_s0_Hlt2DiMuonDecision_TOS, &b_B_s0_Hlt2DiMuonDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonLowMassDecision_Dec", &B_s0_Hlt2DiMuonLowMassDecision_Dec, &b_B_s0_Hlt2DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonLowMassDecision_TIS", &B_s0_Hlt2DiMuonLowMassDecision_TIS, &b_B_s0_Hlt2DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonLowMassDecision_TOS", &B_s0_Hlt2DiMuonLowMassDecision_TOS, &b_B_s0_Hlt2DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonJPsiDecision_Dec", &B_s0_Hlt2DiMuonJPsiDecision_Dec, &b_B_s0_Hlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonJPsiDecision_TIS", &B_s0_Hlt2DiMuonJPsiDecision_TIS, &b_B_s0_Hlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonJPsiDecision_TOS", &B_s0_Hlt2DiMuonJPsiDecision_TOS, &b_B_s0_Hlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonJPsiHighPTDecision_Dec", &B_s0_Hlt2DiMuonJPsiHighPTDecision_Dec, &b_B_s0_Hlt2DiMuonJPsiHighPTDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonJPsiHighPTDecision_TIS", &B_s0_Hlt2DiMuonJPsiHighPTDecision_TIS, &b_B_s0_Hlt2DiMuonJPsiHighPTDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonJPsiHighPTDecision_TOS", &B_s0_Hlt2DiMuonJPsiHighPTDecision_TOS, &b_B_s0_Hlt2DiMuonJPsiHighPTDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonPsi2SDecision_Dec", &B_s0_Hlt2DiMuonPsi2SDecision_Dec, &b_B_s0_Hlt2DiMuonPsi2SDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonPsi2SDecision_TIS", &B_s0_Hlt2DiMuonPsi2SDecision_TIS, &b_B_s0_Hlt2DiMuonPsi2SDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonPsi2SDecision_TOS", &B_s0_Hlt2DiMuonPsi2SDecision_TOS, &b_B_s0_Hlt2DiMuonPsi2SDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonBDecision_Dec", &B_s0_Hlt2DiMuonBDecision_Dec, &b_B_s0_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonBDecision_TIS", &B_s0_Hlt2DiMuonBDecision_TIS, &b_B_s0_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonBDecision_TOS", &B_s0_Hlt2DiMuonBDecision_TOS, &b_B_s0_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedJPsiDecision_Dec", &B_s0_Hlt2DiMuonDetachedJPsiDecision_Dec, &b_B_s0_Hlt2DiMuonDetachedJPsiDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedJPsiDecision_TIS", &B_s0_Hlt2DiMuonDetachedJPsiDecision_TIS, &b_B_s0_Hlt2DiMuonDetachedJPsiDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS", &B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS, &b_B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedDecision_Dec", &B_s0_Hlt2DiMuonDetachedDecision_Dec, &b_B_s0_Hlt2DiMuonDetachedDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedDecision_TIS", &B_s0_Hlt2DiMuonDetachedDecision_TIS, &b_B_s0_Hlt2DiMuonDetachedDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedDecision_TOS", &B_s0_Hlt2DiMuonDetachedDecision_TOS, &b_B_s0_Hlt2DiMuonDetachedDecision_TOS);
   fChain->SetBranchAddress("phi_1020_LOKI_ENERGY", &phi_1020_LOKI_ENERGY, &b_phi_1020_LOKI_ENERGY);
   fChain->SetBranchAddress("phi_1020_LOKI_ETA", &phi_1020_LOKI_ETA, &b_phi_1020_LOKI_ETA);
   fChain->SetBranchAddress("phi_1020_LOKI_PHI", &phi_1020_LOKI_PHI, &b_phi_1020_LOKI_PHI);
   fChain->SetBranchAddress("phi_1020_MINIP", &phi_1020_MINIP, &b_phi_1020_MINIP);
   fChain->SetBranchAddress("phi_1020_MINIPCHI2", &phi_1020_MINIPCHI2, &b_phi_1020_MINIPCHI2);
   fChain->SetBranchAddress("phi_1020_MINIPNEXTBEST", &phi_1020_MINIPNEXTBEST, &b_phi_1020_MINIPNEXTBEST);
   fChain->SetBranchAddress("phi_1020_MINIPCHI2NEXTBEST", &phi_1020_MINIPCHI2NEXTBEST, &b_phi_1020_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("phi_1020_ENDVERTEX_X", &phi_1020_ENDVERTEX_X, &b_phi_1020_ENDVERTEX_X);
   fChain->SetBranchAddress("phi_1020_ENDVERTEX_Y", &phi_1020_ENDVERTEX_Y, &b_phi_1020_ENDVERTEX_Y);
   fChain->SetBranchAddress("phi_1020_ENDVERTEX_Z", &phi_1020_ENDVERTEX_Z, &b_phi_1020_ENDVERTEX_Z);
   fChain->SetBranchAddress("phi_1020_ENDVERTEX_XERR", &phi_1020_ENDVERTEX_XERR, &b_phi_1020_ENDVERTEX_XERR);
   fChain->SetBranchAddress("phi_1020_ENDVERTEX_YERR", &phi_1020_ENDVERTEX_YERR, &b_phi_1020_ENDVERTEX_YERR);
   fChain->SetBranchAddress("phi_1020_ENDVERTEX_ZERR", &phi_1020_ENDVERTEX_ZERR, &b_phi_1020_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("phi_1020_ENDVERTEX_CHI2", &phi_1020_ENDVERTEX_CHI2, &b_phi_1020_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("phi_1020_ENDVERTEX_NDOF", &phi_1020_ENDVERTEX_NDOF, &b_phi_1020_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("phi_1020_ENDVERTEX_COV_", phi_1020_ENDVERTEX_COV_, &b_phi_1020_ENDVERTEX_COV_);
   fChain->SetBranchAddress("phi_1020_OWNPV_X", &phi_1020_OWNPV_X, &b_phi_1020_OWNPV_X);
   fChain->SetBranchAddress("phi_1020_OWNPV_Y", &phi_1020_OWNPV_Y, &b_phi_1020_OWNPV_Y);
   fChain->SetBranchAddress("phi_1020_OWNPV_Z", &phi_1020_OWNPV_Z, &b_phi_1020_OWNPV_Z);
   fChain->SetBranchAddress("phi_1020_OWNPV_XERR", &phi_1020_OWNPV_XERR, &b_phi_1020_OWNPV_XERR);
   fChain->SetBranchAddress("phi_1020_OWNPV_YERR", &phi_1020_OWNPV_YERR, &b_phi_1020_OWNPV_YERR);
   fChain->SetBranchAddress("phi_1020_OWNPV_ZERR", &phi_1020_OWNPV_ZERR, &b_phi_1020_OWNPV_ZERR);
   fChain->SetBranchAddress("phi_1020_OWNPV_CHI2", &phi_1020_OWNPV_CHI2, &b_phi_1020_OWNPV_CHI2);
   fChain->SetBranchAddress("phi_1020_OWNPV_NDOF", &phi_1020_OWNPV_NDOF, &b_phi_1020_OWNPV_NDOF);
   fChain->SetBranchAddress("phi_1020_OWNPV_COV_", phi_1020_OWNPV_COV_, &b_phi_1020_OWNPV_COV_);
   fChain->SetBranchAddress("phi_1020_IP_OWNPV", &phi_1020_IP_OWNPV, &b_phi_1020_IP_OWNPV);
   fChain->SetBranchAddress("phi_1020_IPCHI2_OWNPV", &phi_1020_IPCHI2_OWNPV, &b_phi_1020_IPCHI2_OWNPV);
   fChain->SetBranchAddress("phi_1020_FD_OWNPV", &phi_1020_FD_OWNPV, &b_phi_1020_FD_OWNPV);
   fChain->SetBranchAddress("phi_1020_FDCHI2_OWNPV", &phi_1020_FDCHI2_OWNPV, &b_phi_1020_FDCHI2_OWNPV);
   fChain->SetBranchAddress("phi_1020_DIRA_OWNPV", &phi_1020_DIRA_OWNPV, &b_phi_1020_DIRA_OWNPV);
   fChain->SetBranchAddress("phi_1020_TOPPV_X", &phi_1020_TOPPV_X, &b_phi_1020_TOPPV_X);
   fChain->SetBranchAddress("phi_1020_TOPPV_Y", &phi_1020_TOPPV_Y, &b_phi_1020_TOPPV_Y);
   fChain->SetBranchAddress("phi_1020_TOPPV_Z", &phi_1020_TOPPV_Z, &b_phi_1020_TOPPV_Z);
   fChain->SetBranchAddress("phi_1020_TOPPV_XERR", &phi_1020_TOPPV_XERR, &b_phi_1020_TOPPV_XERR);
   fChain->SetBranchAddress("phi_1020_TOPPV_YERR", &phi_1020_TOPPV_YERR, &b_phi_1020_TOPPV_YERR);
   fChain->SetBranchAddress("phi_1020_TOPPV_ZERR", &phi_1020_TOPPV_ZERR, &b_phi_1020_TOPPV_ZERR);
   fChain->SetBranchAddress("phi_1020_TOPPV_CHI2", &phi_1020_TOPPV_CHI2, &b_phi_1020_TOPPV_CHI2);
   fChain->SetBranchAddress("phi_1020_TOPPV_NDOF", &phi_1020_TOPPV_NDOF, &b_phi_1020_TOPPV_NDOF);
   fChain->SetBranchAddress("phi_1020_TOPPV_COV_", phi_1020_TOPPV_COV_, &b_phi_1020_TOPPV_COV_);
   fChain->SetBranchAddress("phi_1020_IP_TOPPV", &phi_1020_IP_TOPPV, &b_phi_1020_IP_TOPPV);
   fChain->SetBranchAddress("phi_1020_IPCHI2_TOPPV", &phi_1020_IPCHI2_TOPPV, &b_phi_1020_IPCHI2_TOPPV);
   fChain->SetBranchAddress("phi_1020_FD_TOPPV", &phi_1020_FD_TOPPV, &b_phi_1020_FD_TOPPV);
   fChain->SetBranchAddress("phi_1020_FDCHI2_TOPPV", &phi_1020_FDCHI2_TOPPV, &b_phi_1020_FDCHI2_TOPPV);
   fChain->SetBranchAddress("phi_1020_DIRA_TOPPV", &phi_1020_DIRA_TOPPV, &b_phi_1020_DIRA_TOPPV);
   fChain->SetBranchAddress("phi_1020_ORIVX_X", &phi_1020_ORIVX_X, &b_phi_1020_ORIVX_X);
   fChain->SetBranchAddress("phi_1020_ORIVX_Y", &phi_1020_ORIVX_Y, &b_phi_1020_ORIVX_Y);
   fChain->SetBranchAddress("phi_1020_ORIVX_Z", &phi_1020_ORIVX_Z, &b_phi_1020_ORIVX_Z);
   fChain->SetBranchAddress("phi_1020_ORIVX_XERR", &phi_1020_ORIVX_XERR, &b_phi_1020_ORIVX_XERR);
   fChain->SetBranchAddress("phi_1020_ORIVX_YERR", &phi_1020_ORIVX_YERR, &b_phi_1020_ORIVX_YERR);
   fChain->SetBranchAddress("phi_1020_ORIVX_ZERR", &phi_1020_ORIVX_ZERR, &b_phi_1020_ORIVX_ZERR);
   fChain->SetBranchAddress("phi_1020_ORIVX_CHI2", &phi_1020_ORIVX_CHI2, &b_phi_1020_ORIVX_CHI2);
   fChain->SetBranchAddress("phi_1020_ORIVX_NDOF", &phi_1020_ORIVX_NDOF, &b_phi_1020_ORIVX_NDOF);
   fChain->SetBranchAddress("phi_1020_ORIVX_COV_", phi_1020_ORIVX_COV_, &b_phi_1020_ORIVX_COV_);
   fChain->SetBranchAddress("phi_1020_IP_ORIVX", &phi_1020_IP_ORIVX, &b_phi_1020_IP_ORIVX);
   fChain->SetBranchAddress("phi_1020_IPCHI2_ORIVX", &phi_1020_IPCHI2_ORIVX, &b_phi_1020_IPCHI2_ORIVX);
   fChain->SetBranchAddress("phi_1020_FD_ORIVX", &phi_1020_FD_ORIVX, &b_phi_1020_FD_ORIVX);
   fChain->SetBranchAddress("phi_1020_FDCHI2_ORIVX", &phi_1020_FDCHI2_ORIVX, &b_phi_1020_FDCHI2_ORIVX);
   fChain->SetBranchAddress("phi_1020_DIRA_ORIVX", &phi_1020_DIRA_ORIVX, &b_phi_1020_DIRA_ORIVX);
   fChain->SetBranchAddress("phi_1020_P", &phi_1020_P, &b_phi_1020_P);
   fChain->SetBranchAddress("phi_1020_PT", &phi_1020_PT, &b_phi_1020_PT);
   fChain->SetBranchAddress("phi_1020_PE", &phi_1020_PE, &b_phi_1020_PE);
   fChain->SetBranchAddress("phi_1020_PX", &phi_1020_PX, &b_phi_1020_PX);
   fChain->SetBranchAddress("phi_1020_PY", &phi_1020_PY, &b_phi_1020_PY);
   fChain->SetBranchAddress("phi_1020_PZ", &phi_1020_PZ, &b_phi_1020_PZ);
   fChain->SetBranchAddress("phi_1020_MM", &phi_1020_MM, &b_phi_1020_MM);
   fChain->SetBranchAddress("phi_1020_MMERR", &phi_1020_MMERR, &b_phi_1020_MMERR);
   fChain->SetBranchAddress("phi_1020_M", &phi_1020_M, &b_phi_1020_M);
   fChain->SetBranchAddress("phi_1020_ID", &phi_1020_ID, &b_phi_1020_ID);
   fChain->SetBranchAddress("phi_1020_TAU", &phi_1020_TAU, &b_phi_1020_TAU);
   fChain->SetBranchAddress("phi_1020_TAUERR", &phi_1020_TAUERR, &b_phi_1020_TAUERR);
   fChain->SetBranchAddress("phi_1020_TAUCHI2", &phi_1020_TAUCHI2, &b_phi_1020_TAUCHI2);
   fChain->SetBranchAddress("phi_1020_X", &phi_1020_X, &b_phi_1020_X);
   fChain->SetBranchAddress("phi_1020_Y", &phi_1020_Y, &b_phi_1020_Y);
   fChain->SetBranchAddress("Kminus_LOKI_ENERGY", &Kminus_LOKI_ENERGY, &b_Kminus_LOKI_ENERGY);
   fChain->SetBranchAddress("Kminus_LOKI_ETA", &Kminus_LOKI_ETA, &b_Kminus_LOKI_ETA);
   fChain->SetBranchAddress("Kminus_LOKI_PHI", &Kminus_LOKI_PHI, &b_Kminus_LOKI_PHI);
   fChain->SetBranchAddress("Kminus_MINIP", &Kminus_MINIP, &b_Kminus_MINIP);
   fChain->SetBranchAddress("Kminus_MINIPCHI2", &Kminus_MINIPCHI2, &b_Kminus_MINIPCHI2);
   fChain->SetBranchAddress("Kminus_MINIPNEXTBEST", &Kminus_MINIPNEXTBEST, &b_Kminus_MINIPNEXTBEST);
   fChain->SetBranchAddress("Kminus_MINIPCHI2NEXTBEST", &Kminus_MINIPCHI2NEXTBEST, &b_Kminus_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("Kminus_OWNPV_X", &Kminus_OWNPV_X, &b_Kminus_OWNPV_X);
   fChain->SetBranchAddress("Kminus_OWNPV_Y", &Kminus_OWNPV_Y, &b_Kminus_OWNPV_Y);
   fChain->SetBranchAddress("Kminus_OWNPV_Z", &Kminus_OWNPV_Z, &b_Kminus_OWNPV_Z);
   fChain->SetBranchAddress("Kminus_OWNPV_XERR", &Kminus_OWNPV_XERR, &b_Kminus_OWNPV_XERR);
   fChain->SetBranchAddress("Kminus_OWNPV_YERR", &Kminus_OWNPV_YERR, &b_Kminus_OWNPV_YERR);
   fChain->SetBranchAddress("Kminus_OWNPV_ZERR", &Kminus_OWNPV_ZERR, &b_Kminus_OWNPV_ZERR);
   fChain->SetBranchAddress("Kminus_OWNPV_CHI2", &Kminus_OWNPV_CHI2, &b_Kminus_OWNPV_CHI2);
   fChain->SetBranchAddress("Kminus_OWNPV_NDOF", &Kminus_OWNPV_NDOF, &b_Kminus_OWNPV_NDOF);
   fChain->SetBranchAddress("Kminus_OWNPV_COV_", Kminus_OWNPV_COV_, &b_Kminus_OWNPV_COV_);
   fChain->SetBranchAddress("Kminus_IP_OWNPV", &Kminus_IP_OWNPV, &b_Kminus_IP_OWNPV);
   fChain->SetBranchAddress("Kminus_IPCHI2_OWNPV", &Kminus_IPCHI2_OWNPV, &b_Kminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kminus_TOPPV_X", &Kminus_TOPPV_X, &b_Kminus_TOPPV_X);
   fChain->SetBranchAddress("Kminus_TOPPV_Y", &Kminus_TOPPV_Y, &b_Kminus_TOPPV_Y);
   fChain->SetBranchAddress("Kminus_TOPPV_Z", &Kminus_TOPPV_Z, &b_Kminus_TOPPV_Z);
   fChain->SetBranchAddress("Kminus_TOPPV_XERR", &Kminus_TOPPV_XERR, &b_Kminus_TOPPV_XERR);
   fChain->SetBranchAddress("Kminus_TOPPV_YERR", &Kminus_TOPPV_YERR, &b_Kminus_TOPPV_YERR);
   fChain->SetBranchAddress("Kminus_TOPPV_ZERR", &Kminus_TOPPV_ZERR, &b_Kminus_TOPPV_ZERR);
   fChain->SetBranchAddress("Kminus_TOPPV_CHI2", &Kminus_TOPPV_CHI2, &b_Kminus_TOPPV_CHI2);
   fChain->SetBranchAddress("Kminus_TOPPV_NDOF", &Kminus_TOPPV_NDOF, &b_Kminus_TOPPV_NDOF);
   fChain->SetBranchAddress("Kminus_TOPPV_COV_", Kminus_TOPPV_COV_, &b_Kminus_TOPPV_COV_);
   fChain->SetBranchAddress("Kminus_IP_TOPPV", &Kminus_IP_TOPPV, &b_Kminus_IP_TOPPV);
   fChain->SetBranchAddress("Kminus_IPCHI2_TOPPV", &Kminus_IPCHI2_TOPPV, &b_Kminus_IPCHI2_TOPPV);
   fChain->SetBranchAddress("Kminus_ORIVX_X", &Kminus_ORIVX_X, &b_Kminus_ORIVX_X);
   fChain->SetBranchAddress("Kminus_ORIVX_Y", &Kminus_ORIVX_Y, &b_Kminus_ORIVX_Y);
   fChain->SetBranchAddress("Kminus_ORIVX_Z", &Kminus_ORIVX_Z, &b_Kminus_ORIVX_Z);
   fChain->SetBranchAddress("Kminus_ORIVX_XERR", &Kminus_ORIVX_XERR, &b_Kminus_ORIVX_XERR);
   fChain->SetBranchAddress("Kminus_ORIVX_YERR", &Kminus_ORIVX_YERR, &b_Kminus_ORIVX_YERR);
   fChain->SetBranchAddress("Kminus_ORIVX_ZERR", &Kminus_ORIVX_ZERR, &b_Kminus_ORIVX_ZERR);
   fChain->SetBranchAddress("Kminus_ORIVX_CHI2", &Kminus_ORIVX_CHI2, &b_Kminus_ORIVX_CHI2);
   fChain->SetBranchAddress("Kminus_ORIVX_NDOF", &Kminus_ORIVX_NDOF, &b_Kminus_ORIVX_NDOF);
   fChain->SetBranchAddress("Kminus_ORIVX_COV_", Kminus_ORIVX_COV_, &b_Kminus_ORIVX_COV_);
   fChain->SetBranchAddress("Kminus_IP_ORIVX", &Kminus_IP_ORIVX, &b_Kminus_IP_ORIVX);
   fChain->SetBranchAddress("Kminus_IPCHI2_ORIVX", &Kminus_IPCHI2_ORIVX, &b_Kminus_IPCHI2_ORIVX);
   fChain->SetBranchAddress("Kminus_P", &Kminus_P, &b_Kminus_P);
   fChain->SetBranchAddress("Kminus_PT", &Kminus_PT, &b_Kminus_PT);
   fChain->SetBranchAddress("Kminus_PE", &Kminus_PE, &b_Kminus_PE);
   fChain->SetBranchAddress("Kminus_PX", &Kminus_PX, &b_Kminus_PX);
   fChain->SetBranchAddress("Kminus_PY", &Kminus_PY, &b_Kminus_PY);
   fChain->SetBranchAddress("Kminus_PZ", &Kminus_PZ, &b_Kminus_PZ);
   fChain->SetBranchAddress("Kminus_M", &Kminus_M, &b_Kminus_M);
   fChain->SetBranchAddress("Kminus_ID", &Kminus_ID, &b_Kminus_ID);
   fChain->SetBranchAddress("Kminus_PIDe", &Kminus_PIDe, &b_Kminus_PIDe);
   fChain->SetBranchAddress("Kminus_PIDmu", &Kminus_PIDmu, &b_Kminus_PIDmu);
   fChain->SetBranchAddress("Kminus_PIDK", &Kminus_PIDK, &b_Kminus_PIDK);
   fChain->SetBranchAddress("Kminus_PIDp", &Kminus_PIDp, &b_Kminus_PIDp);
   fChain->SetBranchAddress("Kminus_ProbNNe", &Kminus_ProbNNe, &b_Kminus_ProbNNe);
   fChain->SetBranchAddress("Kminus_ProbNNk", &Kminus_ProbNNk, &b_Kminus_ProbNNk);
   fChain->SetBranchAddress("Kminus_ProbNNp", &Kminus_ProbNNp, &b_Kminus_ProbNNp);
   fChain->SetBranchAddress("Kminus_ProbNNpi", &Kminus_ProbNNpi, &b_Kminus_ProbNNpi);
   fChain->SetBranchAddress("Kminus_ProbNNmu", &Kminus_ProbNNmu, &b_Kminus_ProbNNmu);
   fChain->SetBranchAddress("Kminus_ProbNNghost", &Kminus_ProbNNghost, &b_Kminus_ProbNNghost);
   fChain->SetBranchAddress("Kminus_hasMuon", &Kminus_hasMuon, &b_Kminus_hasMuon);
   fChain->SetBranchAddress("Kminus_isMuon", &Kminus_isMuon, &b_Kminus_isMuon);
   fChain->SetBranchAddress("Kminus_hasRich", &Kminus_hasRich, &b_Kminus_hasRich);
   fChain->SetBranchAddress("Kminus_hasCalo", &Kminus_hasCalo, &b_Kminus_hasCalo);
   fChain->SetBranchAddress("Kminus_TRACK_Type", &Kminus_TRACK_Type, &b_Kminus_TRACK_Type);
   fChain->SetBranchAddress("Kminus_TRACK_Key", &Kminus_TRACK_Key, &b_Kminus_TRACK_Key);
   fChain->SetBranchAddress("Kminus_TRACK_CHI2", &Kminus_TRACK_CHI2, &b_Kminus_TRACK_CHI2);
   fChain->SetBranchAddress("Kminus_TRACK_NDOF", &Kminus_TRACK_NDOF, &b_Kminus_TRACK_NDOF);
   fChain->SetBranchAddress("Kminus_TRACK_CHI2NDOF", &Kminus_TRACK_CHI2NDOF, &b_Kminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kminus_TRACK_PCHI2", &Kminus_TRACK_PCHI2, &b_Kminus_TRACK_PCHI2);
   fChain->SetBranchAddress("Kminus_TRACK_VeloCHI2NDOF", &Kminus_TRACK_VeloCHI2NDOF, &b_Kminus_TRACK_VeloCHI2NDOF);
   fChain->SetBranchAddress("Kminus_TRACK_TCHI2NDOF", &Kminus_TRACK_TCHI2NDOF, &b_Kminus_TRACK_TCHI2NDOF);
   fChain->SetBranchAddress("Kminus_VELO_UTID", &Kminus_VELO_UTID, &b_Kminus_VELO_UTID);
   fChain->SetBranchAddress("Kminus_TRACK_FirstMeasurementX", &Kminus_TRACK_FirstMeasurementX, &b_Kminus_TRACK_FirstMeasurementX);
   fChain->SetBranchAddress("Kminus_TRACK_FirstMeasurementY", &Kminus_TRACK_FirstMeasurementY, &b_Kminus_TRACK_FirstMeasurementY);
   fChain->SetBranchAddress("Kminus_TRACK_FirstMeasurementZ", &Kminus_TRACK_FirstMeasurementZ, &b_Kminus_TRACK_FirstMeasurementZ);
   fChain->SetBranchAddress("Kminus_TRACK_MatchCHI2", &Kminus_TRACK_MatchCHI2, &b_Kminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Kminus_TRACK_GhostProb", &Kminus_TRACK_GhostProb, &b_Kminus_TRACK_GhostProb);
   fChain->SetBranchAddress("Kminus_TRACK_CloneDist", &Kminus_TRACK_CloneDist, &b_Kminus_TRACK_CloneDist);
   fChain->SetBranchAddress("Kminus_TRACK_Likelihood", &Kminus_TRACK_Likelihood, &b_Kminus_TRACK_Likelihood);
   fChain->SetBranchAddress("Kminus_X", &Kminus_X, &b_Kminus_X);
   fChain->SetBranchAddress("Kminus_Y", &Kminus_Y, &b_Kminus_Y);
   fChain->SetBranchAddress("Kplus_LOKI_ENERGY", &Kplus_LOKI_ENERGY, &b_Kplus_LOKI_ENERGY);
   fChain->SetBranchAddress("Kplus_LOKI_ETA", &Kplus_LOKI_ETA, &b_Kplus_LOKI_ETA);
   fChain->SetBranchAddress("Kplus_LOKI_PHI", &Kplus_LOKI_PHI, &b_Kplus_LOKI_PHI);
   fChain->SetBranchAddress("Kplus_MINIP", &Kplus_MINIP, &b_Kplus_MINIP);
   fChain->SetBranchAddress("Kplus_MINIPCHI2", &Kplus_MINIPCHI2, &b_Kplus_MINIPCHI2);
   fChain->SetBranchAddress("Kplus_MINIPNEXTBEST", &Kplus_MINIPNEXTBEST, &b_Kplus_MINIPNEXTBEST);
   fChain->SetBranchAddress("Kplus_MINIPCHI2NEXTBEST", &Kplus_MINIPCHI2NEXTBEST, &b_Kplus_MINIPCHI2NEXTBEST);
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
   fChain->SetBranchAddress("Kplus_TOPPV_X", &Kplus_TOPPV_X, &b_Kplus_TOPPV_X);
   fChain->SetBranchAddress("Kplus_TOPPV_Y", &Kplus_TOPPV_Y, &b_Kplus_TOPPV_Y);
   fChain->SetBranchAddress("Kplus_TOPPV_Z", &Kplus_TOPPV_Z, &b_Kplus_TOPPV_Z);
   fChain->SetBranchAddress("Kplus_TOPPV_XERR", &Kplus_TOPPV_XERR, &b_Kplus_TOPPV_XERR);
   fChain->SetBranchAddress("Kplus_TOPPV_YERR", &Kplus_TOPPV_YERR, &b_Kplus_TOPPV_YERR);
   fChain->SetBranchAddress("Kplus_TOPPV_ZERR", &Kplus_TOPPV_ZERR, &b_Kplus_TOPPV_ZERR);
   fChain->SetBranchAddress("Kplus_TOPPV_CHI2", &Kplus_TOPPV_CHI2, &b_Kplus_TOPPV_CHI2);
   fChain->SetBranchAddress("Kplus_TOPPV_NDOF", &Kplus_TOPPV_NDOF, &b_Kplus_TOPPV_NDOF);
   fChain->SetBranchAddress("Kplus_TOPPV_COV_", Kplus_TOPPV_COV_, &b_Kplus_TOPPV_COV_);
   fChain->SetBranchAddress("Kplus_IP_TOPPV", &Kplus_IP_TOPPV, &b_Kplus_IP_TOPPV);
   fChain->SetBranchAddress("Kplus_IPCHI2_TOPPV", &Kplus_IPCHI2_TOPPV, &b_Kplus_IPCHI2_TOPPV);
   fChain->SetBranchAddress("Kplus_ORIVX_X", &Kplus_ORIVX_X, &b_Kplus_ORIVX_X);
   fChain->SetBranchAddress("Kplus_ORIVX_Y", &Kplus_ORIVX_Y, &b_Kplus_ORIVX_Y);
   fChain->SetBranchAddress("Kplus_ORIVX_Z", &Kplus_ORIVX_Z, &b_Kplus_ORIVX_Z);
   fChain->SetBranchAddress("Kplus_ORIVX_XERR", &Kplus_ORIVX_XERR, &b_Kplus_ORIVX_XERR);
   fChain->SetBranchAddress("Kplus_ORIVX_YERR", &Kplus_ORIVX_YERR, &b_Kplus_ORIVX_YERR);
   fChain->SetBranchAddress("Kplus_ORIVX_ZERR", &Kplus_ORIVX_ZERR, &b_Kplus_ORIVX_ZERR);
   fChain->SetBranchAddress("Kplus_ORIVX_CHI2", &Kplus_ORIVX_CHI2, &b_Kplus_ORIVX_CHI2);
   fChain->SetBranchAddress("Kplus_ORIVX_NDOF", &Kplus_ORIVX_NDOF, &b_Kplus_ORIVX_NDOF);
   fChain->SetBranchAddress("Kplus_ORIVX_COV_", Kplus_ORIVX_COV_, &b_Kplus_ORIVX_COV_);
   fChain->SetBranchAddress("Kplus_IP_ORIVX", &Kplus_IP_ORIVX, &b_Kplus_IP_ORIVX);
   fChain->SetBranchAddress("Kplus_IPCHI2_ORIVX", &Kplus_IPCHI2_ORIVX, &b_Kplus_IPCHI2_ORIVX);
   fChain->SetBranchAddress("Kplus_P", &Kplus_P, &b_Kplus_P);
   fChain->SetBranchAddress("Kplus_PT", &Kplus_PT, &b_Kplus_PT);
   fChain->SetBranchAddress("Kplus_PE", &Kplus_PE, &b_Kplus_PE);
   fChain->SetBranchAddress("Kplus_PX", &Kplus_PX, &b_Kplus_PX);
   fChain->SetBranchAddress("Kplus_PY", &Kplus_PY, &b_Kplus_PY);
   fChain->SetBranchAddress("Kplus_PZ", &Kplus_PZ, &b_Kplus_PZ);
   fChain->SetBranchAddress("Kplus_M", &Kplus_M, &b_Kplus_M);
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
   fChain->SetBranchAddress("Kplus_TRACK_Type", &Kplus_TRACK_Type, &b_Kplus_TRACK_Type);
   fChain->SetBranchAddress("Kplus_TRACK_Key", &Kplus_TRACK_Key, &b_Kplus_TRACK_Key);
   fChain->SetBranchAddress("Kplus_TRACK_CHI2", &Kplus_TRACK_CHI2, &b_Kplus_TRACK_CHI2);
   fChain->SetBranchAddress("Kplus_TRACK_NDOF", &Kplus_TRACK_NDOF, &b_Kplus_TRACK_NDOF);
   fChain->SetBranchAddress("Kplus_TRACK_CHI2NDOF", &Kplus_TRACK_CHI2NDOF, &b_Kplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kplus_TRACK_PCHI2", &Kplus_TRACK_PCHI2, &b_Kplus_TRACK_PCHI2);
   fChain->SetBranchAddress("Kplus_TRACK_VeloCHI2NDOF", &Kplus_TRACK_VeloCHI2NDOF, &b_Kplus_TRACK_VeloCHI2NDOF);
   fChain->SetBranchAddress("Kplus_TRACK_TCHI2NDOF", &Kplus_TRACK_TCHI2NDOF, &b_Kplus_TRACK_TCHI2NDOF);
   fChain->SetBranchAddress("Kplus_VELO_UTID", &Kplus_VELO_UTID, &b_Kplus_VELO_UTID);
   fChain->SetBranchAddress("Kplus_TRACK_FirstMeasurementX", &Kplus_TRACK_FirstMeasurementX, &b_Kplus_TRACK_FirstMeasurementX);
   fChain->SetBranchAddress("Kplus_TRACK_FirstMeasurementY", &Kplus_TRACK_FirstMeasurementY, &b_Kplus_TRACK_FirstMeasurementY);
   fChain->SetBranchAddress("Kplus_TRACK_FirstMeasurementZ", &Kplus_TRACK_FirstMeasurementZ, &b_Kplus_TRACK_FirstMeasurementZ);
   fChain->SetBranchAddress("Kplus_TRACK_MatchCHI2", &Kplus_TRACK_MatchCHI2, &b_Kplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Kplus_TRACK_GhostProb", &Kplus_TRACK_GhostProb, &b_Kplus_TRACK_GhostProb);
   fChain->SetBranchAddress("Kplus_TRACK_CloneDist", &Kplus_TRACK_CloneDist, &b_Kplus_TRACK_CloneDist);
   fChain->SetBranchAddress("Kplus_TRACK_Likelihood", &Kplus_TRACK_Likelihood, &b_Kplus_TRACK_Likelihood);
   fChain->SetBranchAddress("Kplus_X", &Kplus_X, &b_Kplus_X);
   fChain->SetBranchAddress("Kplus_Y", &Kplus_Y, &b_Kplus_Y);
   fChain->SetBranchAddress("J_psi_1S_LOKI_ENERGY", &J_psi_1S_LOKI_ENERGY, &b_J_psi_1S_LOKI_ENERGY);
   fChain->SetBranchAddress("J_psi_1S_LOKI_ETA", &J_psi_1S_LOKI_ETA, &b_J_psi_1S_LOKI_ETA);
   fChain->SetBranchAddress("J_psi_1S_LOKI_PHI", &J_psi_1S_LOKI_PHI, &b_J_psi_1S_LOKI_PHI);
   fChain->SetBranchAddress("J_psi_1S_MINIP", &J_psi_1S_MINIP, &b_J_psi_1S_MINIP);
   fChain->SetBranchAddress("J_psi_1S_MINIPCHI2", &J_psi_1S_MINIPCHI2, &b_J_psi_1S_MINIPCHI2);
   fChain->SetBranchAddress("J_psi_1S_MINIPNEXTBEST", &J_psi_1S_MINIPNEXTBEST, &b_J_psi_1S_MINIPNEXTBEST);
   fChain->SetBranchAddress("J_psi_1S_MINIPCHI2NEXTBEST", &J_psi_1S_MINIPCHI2NEXTBEST, &b_J_psi_1S_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_X", &J_psi_1S_ENDVERTEX_X, &b_J_psi_1S_ENDVERTEX_X);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_Y", &J_psi_1S_ENDVERTEX_Y, &b_J_psi_1S_ENDVERTEX_Y);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_Z", &J_psi_1S_ENDVERTEX_Z, &b_J_psi_1S_ENDVERTEX_Z);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_XERR", &J_psi_1S_ENDVERTEX_XERR, &b_J_psi_1S_ENDVERTEX_XERR);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_YERR", &J_psi_1S_ENDVERTEX_YERR, &b_J_psi_1S_ENDVERTEX_YERR);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_ZERR", &J_psi_1S_ENDVERTEX_ZERR, &b_J_psi_1S_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_CHI2", &J_psi_1S_ENDVERTEX_CHI2, &b_J_psi_1S_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_NDOF", &J_psi_1S_ENDVERTEX_NDOF, &b_J_psi_1S_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_COV_", J_psi_1S_ENDVERTEX_COV_, &b_J_psi_1S_ENDVERTEX_COV_);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_X", &J_psi_1S_OWNPV_X, &b_J_psi_1S_OWNPV_X);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_Y", &J_psi_1S_OWNPV_Y, &b_J_psi_1S_OWNPV_Y);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_Z", &J_psi_1S_OWNPV_Z, &b_J_psi_1S_OWNPV_Z);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_XERR", &J_psi_1S_OWNPV_XERR, &b_J_psi_1S_OWNPV_XERR);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_YERR", &J_psi_1S_OWNPV_YERR, &b_J_psi_1S_OWNPV_YERR);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_ZERR", &J_psi_1S_OWNPV_ZERR, &b_J_psi_1S_OWNPV_ZERR);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_CHI2", &J_psi_1S_OWNPV_CHI2, &b_J_psi_1S_OWNPV_CHI2);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_NDOF", &J_psi_1S_OWNPV_NDOF, &b_J_psi_1S_OWNPV_NDOF);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_COV_", J_psi_1S_OWNPV_COV_, &b_J_psi_1S_OWNPV_COV_);
   fChain->SetBranchAddress("J_psi_1S_IP_OWNPV", &J_psi_1S_IP_OWNPV, &b_J_psi_1S_IP_OWNPV);
   fChain->SetBranchAddress("J_psi_1S_IPCHI2_OWNPV", &J_psi_1S_IPCHI2_OWNPV, &b_J_psi_1S_IPCHI2_OWNPV);
   fChain->SetBranchAddress("J_psi_1S_FD_OWNPV", &J_psi_1S_FD_OWNPV, &b_J_psi_1S_FD_OWNPV);
   fChain->SetBranchAddress("J_psi_1S_FDCHI2_OWNPV", &J_psi_1S_FDCHI2_OWNPV, &b_J_psi_1S_FDCHI2_OWNPV);
   fChain->SetBranchAddress("J_psi_1S_DIRA_OWNPV", &J_psi_1S_DIRA_OWNPV, &b_J_psi_1S_DIRA_OWNPV);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_X", &J_psi_1S_TOPPV_X, &b_J_psi_1S_TOPPV_X);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_Y", &J_psi_1S_TOPPV_Y, &b_J_psi_1S_TOPPV_Y);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_Z", &J_psi_1S_TOPPV_Z, &b_J_psi_1S_TOPPV_Z);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_XERR", &J_psi_1S_TOPPV_XERR, &b_J_psi_1S_TOPPV_XERR);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_YERR", &J_psi_1S_TOPPV_YERR, &b_J_psi_1S_TOPPV_YERR);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_ZERR", &J_psi_1S_TOPPV_ZERR, &b_J_psi_1S_TOPPV_ZERR);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_CHI2", &J_psi_1S_TOPPV_CHI2, &b_J_psi_1S_TOPPV_CHI2);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_NDOF", &J_psi_1S_TOPPV_NDOF, &b_J_psi_1S_TOPPV_NDOF);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_COV_", J_psi_1S_TOPPV_COV_, &b_J_psi_1S_TOPPV_COV_);
   fChain->SetBranchAddress("J_psi_1S_IP_TOPPV", &J_psi_1S_IP_TOPPV, &b_J_psi_1S_IP_TOPPV);
   fChain->SetBranchAddress("J_psi_1S_IPCHI2_TOPPV", &J_psi_1S_IPCHI2_TOPPV, &b_J_psi_1S_IPCHI2_TOPPV);
   fChain->SetBranchAddress("J_psi_1S_FD_TOPPV", &J_psi_1S_FD_TOPPV, &b_J_psi_1S_FD_TOPPV);
   fChain->SetBranchAddress("J_psi_1S_FDCHI2_TOPPV", &J_psi_1S_FDCHI2_TOPPV, &b_J_psi_1S_FDCHI2_TOPPV);
   fChain->SetBranchAddress("J_psi_1S_DIRA_TOPPV", &J_psi_1S_DIRA_TOPPV, &b_J_psi_1S_DIRA_TOPPV);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_X", &J_psi_1S_ORIVX_X, &b_J_psi_1S_ORIVX_X);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_Y", &J_psi_1S_ORIVX_Y, &b_J_psi_1S_ORIVX_Y);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_Z", &J_psi_1S_ORIVX_Z, &b_J_psi_1S_ORIVX_Z);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_XERR", &J_psi_1S_ORIVX_XERR, &b_J_psi_1S_ORIVX_XERR);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_YERR", &J_psi_1S_ORIVX_YERR, &b_J_psi_1S_ORIVX_YERR);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_ZERR", &J_psi_1S_ORIVX_ZERR, &b_J_psi_1S_ORIVX_ZERR);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_CHI2", &J_psi_1S_ORIVX_CHI2, &b_J_psi_1S_ORIVX_CHI2);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_NDOF", &J_psi_1S_ORIVX_NDOF, &b_J_psi_1S_ORIVX_NDOF);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_COV_", J_psi_1S_ORIVX_COV_, &b_J_psi_1S_ORIVX_COV_);
   fChain->SetBranchAddress("J_psi_1S_IP_ORIVX", &J_psi_1S_IP_ORIVX, &b_J_psi_1S_IP_ORIVX);
   fChain->SetBranchAddress("J_psi_1S_IPCHI2_ORIVX", &J_psi_1S_IPCHI2_ORIVX, &b_J_psi_1S_IPCHI2_ORIVX);
   fChain->SetBranchAddress("J_psi_1S_FD_ORIVX", &J_psi_1S_FD_ORIVX, &b_J_psi_1S_FD_ORIVX);
   fChain->SetBranchAddress("J_psi_1S_FDCHI2_ORIVX", &J_psi_1S_FDCHI2_ORIVX, &b_J_psi_1S_FDCHI2_ORIVX);
   fChain->SetBranchAddress("J_psi_1S_DIRA_ORIVX", &J_psi_1S_DIRA_ORIVX, &b_J_psi_1S_DIRA_ORIVX);
   fChain->SetBranchAddress("J_psi_1S_P", &J_psi_1S_P, &b_J_psi_1S_P);
   fChain->SetBranchAddress("J_psi_1S_PT", &J_psi_1S_PT, &b_J_psi_1S_PT);
   fChain->SetBranchAddress("J_psi_1S_PE", &J_psi_1S_PE, &b_J_psi_1S_PE);
   fChain->SetBranchAddress("J_psi_1S_PX", &J_psi_1S_PX, &b_J_psi_1S_PX);
   fChain->SetBranchAddress("J_psi_1S_PY", &J_psi_1S_PY, &b_J_psi_1S_PY);
   fChain->SetBranchAddress("J_psi_1S_PZ", &J_psi_1S_PZ, &b_J_psi_1S_PZ);
   fChain->SetBranchAddress("J_psi_1S_MM", &J_psi_1S_MM, &b_J_psi_1S_MM);
   fChain->SetBranchAddress("J_psi_1S_MMERR", &J_psi_1S_MMERR, &b_J_psi_1S_MMERR);
   fChain->SetBranchAddress("J_psi_1S_M", &J_psi_1S_M, &b_J_psi_1S_M);
   fChain->SetBranchAddress("J_psi_1S_ID", &J_psi_1S_ID, &b_J_psi_1S_ID);
   fChain->SetBranchAddress("J_psi_1S_TAU", &J_psi_1S_TAU, &b_J_psi_1S_TAU);
   fChain->SetBranchAddress("J_psi_1S_TAUERR", &J_psi_1S_TAUERR, &b_J_psi_1S_TAUERR);
   fChain->SetBranchAddress("J_psi_1S_TAUCHI2", &J_psi_1S_TAUCHI2, &b_J_psi_1S_TAUCHI2);
   fChain->SetBranchAddress("J_psi_1S_X", &J_psi_1S_X, &b_J_psi_1S_X);
   fChain->SetBranchAddress("J_psi_1S_Y", &J_psi_1S_Y, &b_J_psi_1S_Y);
   fChain->SetBranchAddress("J_psi_1S_LOKI_DOCA_1_2", &J_psi_1S_LOKI_DOCA_1_2, &b_J_psi_1S_LOKI_DOCA_1_2);
   fChain->SetBranchAddress("muminus_LOKI_ENERGY", &muminus_LOKI_ENERGY, &b_muminus_LOKI_ENERGY);
   fChain->SetBranchAddress("muminus_LOKI_ETA", &muminus_LOKI_ETA, &b_muminus_LOKI_ETA);
   fChain->SetBranchAddress("muminus_LOKI_PHI", &muminus_LOKI_PHI, &b_muminus_LOKI_PHI);
   fChain->SetBranchAddress("muminus_MINIP", &muminus_MINIP, &b_muminus_MINIP);
   fChain->SetBranchAddress("muminus_MINIPCHI2", &muminus_MINIPCHI2, &b_muminus_MINIPCHI2);
   fChain->SetBranchAddress("muminus_MINIPNEXTBEST", &muminus_MINIPNEXTBEST, &b_muminus_MINIPNEXTBEST);
   fChain->SetBranchAddress("muminus_MINIPCHI2NEXTBEST", &muminus_MINIPCHI2NEXTBEST, &b_muminus_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("muminus_OWNPV_X", &muminus_OWNPV_X, &b_muminus_OWNPV_X);
   fChain->SetBranchAddress("muminus_OWNPV_Y", &muminus_OWNPV_Y, &b_muminus_OWNPV_Y);
   fChain->SetBranchAddress("muminus_OWNPV_Z", &muminus_OWNPV_Z, &b_muminus_OWNPV_Z);
   fChain->SetBranchAddress("muminus_OWNPV_XERR", &muminus_OWNPV_XERR, &b_muminus_OWNPV_XERR);
   fChain->SetBranchAddress("muminus_OWNPV_YERR", &muminus_OWNPV_YERR, &b_muminus_OWNPV_YERR);
   fChain->SetBranchAddress("muminus_OWNPV_ZERR", &muminus_OWNPV_ZERR, &b_muminus_OWNPV_ZERR);
   fChain->SetBranchAddress("muminus_OWNPV_CHI2", &muminus_OWNPV_CHI2, &b_muminus_OWNPV_CHI2);
   fChain->SetBranchAddress("muminus_OWNPV_NDOF", &muminus_OWNPV_NDOF, &b_muminus_OWNPV_NDOF);
   fChain->SetBranchAddress("muminus_OWNPV_COV_", muminus_OWNPV_COV_, &b_muminus_OWNPV_COV_);
   fChain->SetBranchAddress("muminus_IP_OWNPV", &muminus_IP_OWNPV, &b_muminus_IP_OWNPV);
   fChain->SetBranchAddress("muminus_IPCHI2_OWNPV", &muminus_IPCHI2_OWNPV, &b_muminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("muminus_TOPPV_X", &muminus_TOPPV_X, &b_muminus_TOPPV_X);
   fChain->SetBranchAddress("muminus_TOPPV_Y", &muminus_TOPPV_Y, &b_muminus_TOPPV_Y);
   fChain->SetBranchAddress("muminus_TOPPV_Z", &muminus_TOPPV_Z, &b_muminus_TOPPV_Z);
   fChain->SetBranchAddress("muminus_TOPPV_XERR", &muminus_TOPPV_XERR, &b_muminus_TOPPV_XERR);
   fChain->SetBranchAddress("muminus_TOPPV_YERR", &muminus_TOPPV_YERR, &b_muminus_TOPPV_YERR);
   fChain->SetBranchAddress("muminus_TOPPV_ZERR", &muminus_TOPPV_ZERR, &b_muminus_TOPPV_ZERR);
   fChain->SetBranchAddress("muminus_TOPPV_CHI2", &muminus_TOPPV_CHI2, &b_muminus_TOPPV_CHI2);
   fChain->SetBranchAddress("muminus_TOPPV_NDOF", &muminus_TOPPV_NDOF, &b_muminus_TOPPV_NDOF);
   fChain->SetBranchAddress("muminus_TOPPV_COV_", muminus_TOPPV_COV_, &b_muminus_TOPPV_COV_);
   fChain->SetBranchAddress("muminus_IP_TOPPV", &muminus_IP_TOPPV, &b_muminus_IP_TOPPV);
   fChain->SetBranchAddress("muminus_IPCHI2_TOPPV", &muminus_IPCHI2_TOPPV, &b_muminus_IPCHI2_TOPPV);
   fChain->SetBranchAddress("muminus_ORIVX_X", &muminus_ORIVX_X, &b_muminus_ORIVX_X);
   fChain->SetBranchAddress("muminus_ORIVX_Y", &muminus_ORIVX_Y, &b_muminus_ORIVX_Y);
   fChain->SetBranchAddress("muminus_ORIVX_Z", &muminus_ORIVX_Z, &b_muminus_ORIVX_Z);
   fChain->SetBranchAddress("muminus_ORIVX_XERR", &muminus_ORIVX_XERR, &b_muminus_ORIVX_XERR);
   fChain->SetBranchAddress("muminus_ORIVX_YERR", &muminus_ORIVX_YERR, &b_muminus_ORIVX_YERR);
   fChain->SetBranchAddress("muminus_ORIVX_ZERR", &muminus_ORIVX_ZERR, &b_muminus_ORIVX_ZERR);
   fChain->SetBranchAddress("muminus_ORIVX_CHI2", &muminus_ORIVX_CHI2, &b_muminus_ORIVX_CHI2);
   fChain->SetBranchAddress("muminus_ORIVX_NDOF", &muminus_ORIVX_NDOF, &b_muminus_ORIVX_NDOF);
   fChain->SetBranchAddress("muminus_ORIVX_COV_", muminus_ORIVX_COV_, &b_muminus_ORIVX_COV_);
   fChain->SetBranchAddress("muminus_IP_ORIVX", &muminus_IP_ORIVX, &b_muminus_IP_ORIVX);
   fChain->SetBranchAddress("muminus_IPCHI2_ORIVX", &muminus_IPCHI2_ORIVX, &b_muminus_IPCHI2_ORIVX);
   fChain->SetBranchAddress("muminus_P", &muminus_P, &b_muminus_P);
   fChain->SetBranchAddress("muminus_PT", &muminus_PT, &b_muminus_PT);
   fChain->SetBranchAddress("muminus_PE", &muminus_PE, &b_muminus_PE);
   fChain->SetBranchAddress("muminus_PX", &muminus_PX, &b_muminus_PX);
   fChain->SetBranchAddress("muminus_PY", &muminus_PY, &b_muminus_PY);
   fChain->SetBranchAddress("muminus_PZ", &muminus_PZ, &b_muminus_PZ);
   fChain->SetBranchAddress("muminus_M", &muminus_M, &b_muminus_M);
   fChain->SetBranchAddress("muminus_ID", &muminus_ID, &b_muminus_ID);
   fChain->SetBranchAddress("muminus_PIDe", &muminus_PIDe, &b_muminus_PIDe);
   fChain->SetBranchAddress("muminus_PIDmu", &muminus_PIDmu, &b_muminus_PIDmu);
   fChain->SetBranchAddress("muminus_PIDK", &muminus_PIDK, &b_muminus_PIDK);
   fChain->SetBranchAddress("muminus_PIDp", &muminus_PIDp, &b_muminus_PIDp);
   fChain->SetBranchAddress("muminus_ProbNNe", &muminus_ProbNNe, &b_muminus_ProbNNe);
   fChain->SetBranchAddress("muminus_ProbNNk", &muminus_ProbNNk, &b_muminus_ProbNNk);
   fChain->SetBranchAddress("muminus_ProbNNp", &muminus_ProbNNp, &b_muminus_ProbNNp);
   fChain->SetBranchAddress("muminus_ProbNNpi", &muminus_ProbNNpi, &b_muminus_ProbNNpi);
   fChain->SetBranchAddress("muminus_ProbNNmu", &muminus_ProbNNmu, &b_muminus_ProbNNmu);
   fChain->SetBranchAddress("muminus_ProbNNghost", &muminus_ProbNNghost, &b_muminus_ProbNNghost);
   fChain->SetBranchAddress("muminus_hasMuon", &muminus_hasMuon, &b_muminus_hasMuon);
   fChain->SetBranchAddress("muminus_isMuon", &muminus_isMuon, &b_muminus_isMuon);
   fChain->SetBranchAddress("muminus_hasRich", &muminus_hasRich, &b_muminus_hasRich);
   fChain->SetBranchAddress("muminus_hasCalo", &muminus_hasCalo, &b_muminus_hasCalo);
   fChain->SetBranchAddress("muminus_TRACK_Type", &muminus_TRACK_Type, &b_muminus_TRACK_Type);
   fChain->SetBranchAddress("muminus_TRACK_Key", &muminus_TRACK_Key, &b_muminus_TRACK_Key);
   fChain->SetBranchAddress("muminus_TRACK_CHI2", &muminus_TRACK_CHI2, &b_muminus_TRACK_CHI2);
   fChain->SetBranchAddress("muminus_TRACK_NDOF", &muminus_TRACK_NDOF, &b_muminus_TRACK_NDOF);
   fChain->SetBranchAddress("muminus_TRACK_CHI2NDOF", &muminus_TRACK_CHI2NDOF, &b_muminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muminus_TRACK_PCHI2", &muminus_TRACK_PCHI2, &b_muminus_TRACK_PCHI2);
   fChain->SetBranchAddress("muminus_TRACK_VeloCHI2NDOF", &muminus_TRACK_VeloCHI2NDOF, &b_muminus_TRACK_VeloCHI2NDOF);
   fChain->SetBranchAddress("muminus_TRACK_TCHI2NDOF", &muminus_TRACK_TCHI2NDOF, &b_muminus_TRACK_TCHI2NDOF);
   fChain->SetBranchAddress("muminus_VELO_UTID", &muminus_VELO_UTID, &b_muminus_VELO_UTID);
   fChain->SetBranchAddress("muminus_TRACK_FirstMeasurementX", &muminus_TRACK_FirstMeasurementX, &b_muminus_TRACK_FirstMeasurementX);
   fChain->SetBranchAddress("muminus_TRACK_FirstMeasurementY", &muminus_TRACK_FirstMeasurementY, &b_muminus_TRACK_FirstMeasurementY);
   fChain->SetBranchAddress("muminus_TRACK_FirstMeasurementZ", &muminus_TRACK_FirstMeasurementZ, &b_muminus_TRACK_FirstMeasurementZ);
   fChain->SetBranchAddress("muminus_TRACK_MatchCHI2", &muminus_TRACK_MatchCHI2, &b_muminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("muminus_TRACK_GhostProb", &muminus_TRACK_GhostProb, &b_muminus_TRACK_GhostProb);
   fChain->SetBranchAddress("muminus_TRACK_CloneDist", &muminus_TRACK_CloneDist, &b_muminus_TRACK_CloneDist);
   fChain->SetBranchAddress("muminus_TRACK_Likelihood", &muminus_TRACK_Likelihood, &b_muminus_TRACK_Likelihood);
   fChain->SetBranchAddress("muminus_X", &muminus_X, &b_muminus_X);
   fChain->SetBranchAddress("muminus_Y", &muminus_Y, &b_muminus_Y);
   fChain->SetBranchAddress("muplus_LOKI_ENERGY", &muplus_LOKI_ENERGY, &b_muplus_LOKI_ENERGY);
   fChain->SetBranchAddress("muplus_LOKI_ETA", &muplus_LOKI_ETA, &b_muplus_LOKI_ETA);
   fChain->SetBranchAddress("muplus_LOKI_PHI", &muplus_LOKI_PHI, &b_muplus_LOKI_PHI);
   fChain->SetBranchAddress("muplus_MINIP", &muplus_MINIP, &b_muplus_MINIP);
   fChain->SetBranchAddress("muplus_MINIPCHI2", &muplus_MINIPCHI2, &b_muplus_MINIPCHI2);
   fChain->SetBranchAddress("muplus_MINIPNEXTBEST", &muplus_MINIPNEXTBEST, &b_muplus_MINIPNEXTBEST);
   fChain->SetBranchAddress("muplus_MINIPCHI2NEXTBEST", &muplus_MINIPCHI2NEXTBEST, &b_muplus_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("muplus_OWNPV_X", &muplus_OWNPV_X, &b_muplus_OWNPV_X);
   fChain->SetBranchAddress("muplus_OWNPV_Y", &muplus_OWNPV_Y, &b_muplus_OWNPV_Y);
   fChain->SetBranchAddress("muplus_OWNPV_Z", &muplus_OWNPV_Z, &b_muplus_OWNPV_Z);
   fChain->SetBranchAddress("muplus_OWNPV_XERR", &muplus_OWNPV_XERR, &b_muplus_OWNPV_XERR);
   fChain->SetBranchAddress("muplus_OWNPV_YERR", &muplus_OWNPV_YERR, &b_muplus_OWNPV_YERR);
   fChain->SetBranchAddress("muplus_OWNPV_ZERR", &muplus_OWNPV_ZERR, &b_muplus_OWNPV_ZERR);
   fChain->SetBranchAddress("muplus_OWNPV_CHI2", &muplus_OWNPV_CHI2, &b_muplus_OWNPV_CHI2);
   fChain->SetBranchAddress("muplus_OWNPV_NDOF", &muplus_OWNPV_NDOF, &b_muplus_OWNPV_NDOF);
   fChain->SetBranchAddress("muplus_OWNPV_COV_", muplus_OWNPV_COV_, &b_muplus_OWNPV_COV_);
   fChain->SetBranchAddress("muplus_IP_OWNPV", &muplus_IP_OWNPV, &b_muplus_IP_OWNPV);
   fChain->SetBranchAddress("muplus_IPCHI2_OWNPV", &muplus_IPCHI2_OWNPV, &b_muplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("muplus_TOPPV_X", &muplus_TOPPV_X, &b_muplus_TOPPV_X);
   fChain->SetBranchAddress("muplus_TOPPV_Y", &muplus_TOPPV_Y, &b_muplus_TOPPV_Y);
   fChain->SetBranchAddress("muplus_TOPPV_Z", &muplus_TOPPV_Z, &b_muplus_TOPPV_Z);
   fChain->SetBranchAddress("muplus_TOPPV_XERR", &muplus_TOPPV_XERR, &b_muplus_TOPPV_XERR);
   fChain->SetBranchAddress("muplus_TOPPV_YERR", &muplus_TOPPV_YERR, &b_muplus_TOPPV_YERR);
   fChain->SetBranchAddress("muplus_TOPPV_ZERR", &muplus_TOPPV_ZERR, &b_muplus_TOPPV_ZERR);
   fChain->SetBranchAddress("muplus_TOPPV_CHI2", &muplus_TOPPV_CHI2, &b_muplus_TOPPV_CHI2);
   fChain->SetBranchAddress("muplus_TOPPV_NDOF", &muplus_TOPPV_NDOF, &b_muplus_TOPPV_NDOF);
   fChain->SetBranchAddress("muplus_TOPPV_COV_", muplus_TOPPV_COV_, &b_muplus_TOPPV_COV_);
   fChain->SetBranchAddress("muplus_IP_TOPPV", &muplus_IP_TOPPV, &b_muplus_IP_TOPPV);
   fChain->SetBranchAddress("muplus_IPCHI2_TOPPV", &muplus_IPCHI2_TOPPV, &b_muplus_IPCHI2_TOPPV);
   fChain->SetBranchAddress("muplus_ORIVX_X", &muplus_ORIVX_X, &b_muplus_ORIVX_X);
   fChain->SetBranchAddress("muplus_ORIVX_Y", &muplus_ORIVX_Y, &b_muplus_ORIVX_Y);
   fChain->SetBranchAddress("muplus_ORIVX_Z", &muplus_ORIVX_Z, &b_muplus_ORIVX_Z);
   fChain->SetBranchAddress("muplus_ORIVX_XERR", &muplus_ORIVX_XERR, &b_muplus_ORIVX_XERR);
   fChain->SetBranchAddress("muplus_ORIVX_YERR", &muplus_ORIVX_YERR, &b_muplus_ORIVX_YERR);
   fChain->SetBranchAddress("muplus_ORIVX_ZERR", &muplus_ORIVX_ZERR, &b_muplus_ORIVX_ZERR);
   fChain->SetBranchAddress("muplus_ORIVX_CHI2", &muplus_ORIVX_CHI2, &b_muplus_ORIVX_CHI2);
   fChain->SetBranchAddress("muplus_ORIVX_NDOF", &muplus_ORIVX_NDOF, &b_muplus_ORIVX_NDOF);
   fChain->SetBranchAddress("muplus_ORIVX_COV_", muplus_ORIVX_COV_, &b_muplus_ORIVX_COV_);
   fChain->SetBranchAddress("muplus_IP_ORIVX", &muplus_IP_ORIVX, &b_muplus_IP_ORIVX);
   fChain->SetBranchAddress("muplus_IPCHI2_ORIVX", &muplus_IPCHI2_ORIVX, &b_muplus_IPCHI2_ORIVX);
   fChain->SetBranchAddress("muplus_P", &muplus_P, &b_muplus_P);
   fChain->SetBranchAddress("muplus_PT", &muplus_PT, &b_muplus_PT);
   fChain->SetBranchAddress("muplus_PE", &muplus_PE, &b_muplus_PE);
   fChain->SetBranchAddress("muplus_PX", &muplus_PX, &b_muplus_PX);
   fChain->SetBranchAddress("muplus_PY", &muplus_PY, &b_muplus_PY);
   fChain->SetBranchAddress("muplus_PZ", &muplus_PZ, &b_muplus_PZ);
   fChain->SetBranchAddress("muplus_M", &muplus_M, &b_muplus_M);
   fChain->SetBranchAddress("muplus_ID", &muplus_ID, &b_muplus_ID);
   fChain->SetBranchAddress("muplus_PIDe", &muplus_PIDe, &b_muplus_PIDe);
   fChain->SetBranchAddress("muplus_PIDmu", &muplus_PIDmu, &b_muplus_PIDmu);
   fChain->SetBranchAddress("muplus_PIDK", &muplus_PIDK, &b_muplus_PIDK);
   fChain->SetBranchAddress("muplus_PIDp", &muplus_PIDp, &b_muplus_PIDp);
   fChain->SetBranchAddress("muplus_ProbNNe", &muplus_ProbNNe, &b_muplus_ProbNNe);
   fChain->SetBranchAddress("muplus_ProbNNk", &muplus_ProbNNk, &b_muplus_ProbNNk);
   fChain->SetBranchAddress("muplus_ProbNNp", &muplus_ProbNNp, &b_muplus_ProbNNp);
   fChain->SetBranchAddress("muplus_ProbNNpi", &muplus_ProbNNpi, &b_muplus_ProbNNpi);
   fChain->SetBranchAddress("muplus_ProbNNmu", &muplus_ProbNNmu, &b_muplus_ProbNNmu);
   fChain->SetBranchAddress("muplus_ProbNNghost", &muplus_ProbNNghost, &b_muplus_ProbNNghost);
   fChain->SetBranchAddress("muplus_hasMuon", &muplus_hasMuon, &b_muplus_hasMuon);
   fChain->SetBranchAddress("muplus_isMuon", &muplus_isMuon, &b_muplus_isMuon);
   fChain->SetBranchAddress("muplus_hasRich", &muplus_hasRich, &b_muplus_hasRich);
   fChain->SetBranchAddress("muplus_hasCalo", &muplus_hasCalo, &b_muplus_hasCalo);
   fChain->SetBranchAddress("muplus_TRACK_Type", &muplus_TRACK_Type, &b_muplus_TRACK_Type);
   fChain->SetBranchAddress("muplus_TRACK_Key", &muplus_TRACK_Key, &b_muplus_TRACK_Key);
   fChain->SetBranchAddress("muplus_TRACK_CHI2", &muplus_TRACK_CHI2, &b_muplus_TRACK_CHI2);
   fChain->SetBranchAddress("muplus_TRACK_NDOF", &muplus_TRACK_NDOF, &b_muplus_TRACK_NDOF);
   fChain->SetBranchAddress("muplus_TRACK_CHI2NDOF", &muplus_TRACK_CHI2NDOF, &b_muplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muplus_TRACK_PCHI2", &muplus_TRACK_PCHI2, &b_muplus_TRACK_PCHI2);
   fChain->SetBranchAddress("muplus_TRACK_VeloCHI2NDOF", &muplus_TRACK_VeloCHI2NDOF, &b_muplus_TRACK_VeloCHI2NDOF);
   fChain->SetBranchAddress("muplus_TRACK_TCHI2NDOF", &muplus_TRACK_TCHI2NDOF, &b_muplus_TRACK_TCHI2NDOF);
   fChain->SetBranchAddress("muplus_VELO_UTID", &muplus_VELO_UTID, &b_muplus_VELO_UTID);
   fChain->SetBranchAddress("muplus_TRACK_FirstMeasurementX", &muplus_TRACK_FirstMeasurementX, &b_muplus_TRACK_FirstMeasurementX);
   fChain->SetBranchAddress("muplus_TRACK_FirstMeasurementY", &muplus_TRACK_FirstMeasurementY, &b_muplus_TRACK_FirstMeasurementY);
   fChain->SetBranchAddress("muplus_TRACK_FirstMeasurementZ", &muplus_TRACK_FirstMeasurementZ, &b_muplus_TRACK_FirstMeasurementZ);
   fChain->SetBranchAddress("muplus_TRACK_MatchCHI2", &muplus_TRACK_MatchCHI2, &b_muplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("muplus_TRACK_GhostProb", &muplus_TRACK_GhostProb, &b_muplus_TRACK_GhostProb);
   fChain->SetBranchAddress("muplus_TRACK_CloneDist", &muplus_TRACK_CloneDist, &b_muplus_TRACK_CloneDist);
   fChain->SetBranchAddress("muplus_TRACK_Likelihood", &muplus_TRACK_Likelihood, &b_muplus_TRACK_Likelihood);
   fChain->SetBranchAddress("muplus_X", &muplus_X, &b_muplus_X);
   fChain->SetBranchAddress("muplus_Y", &muplus_Y, &b_muplus_Y);
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
   fChain->SetBranchAddress("L0Global", &L0Global, &b_L0Global);
   fChain->SetBranchAddress("Hlt1Global", &Hlt1Global, &b_Hlt1Global);
   fChain->SetBranchAddress("Hlt2Global", &Hlt2Global, &b_Hlt2Global);
   fChain->SetBranchAddress("L0PhysicsDecision", &L0PhysicsDecision, &b_L0PhysicsDecision);
   fChain->SetBranchAddress("L0MuonDecision", &L0MuonDecision, &b_L0MuonDecision);
   fChain->SetBranchAddress("L0DiMuonDecision", &L0DiMuonDecision, &b_L0DiMuonDecision);
   fChain->SetBranchAddress("L0MuonHighDecision", &L0MuonHighDecision, &b_L0MuonHighDecision);
   fChain->SetBranchAddress("L0HadronDecision", &L0HadronDecision, &b_L0HadronDecision);
   fChain->SetBranchAddress("L0ElectronDecision", &L0ElectronDecision, &b_L0ElectronDecision);
   fChain->SetBranchAddress("L0PhotonDecision", &L0PhotonDecision, &b_L0PhotonDecision);
   fChain->SetBranchAddress("L0nSelections", &L0nSelections, &b_L0nSelections);
   fChain->SetBranchAddress("Hlt1DiMuonHighMassDecision", &Hlt1DiMuonHighMassDecision, &b_Hlt1DiMuonHighMassDecision);
   fChain->SetBranchAddress("Hlt1DiMuonLowMassDecision", &Hlt1DiMuonLowMassDecision, &b_Hlt1DiMuonLowMassDecision);
   fChain->SetBranchAddress("Hlt1SingleMuonNoIPDecision", &Hlt1SingleMuonNoIPDecision, &b_Hlt1SingleMuonNoIPDecision);
   fChain->SetBranchAddress("Hlt1SingleMuonHighPTDecision", &Hlt1SingleMuonHighPTDecision, &b_Hlt1SingleMuonHighPTDecision);
   fChain->SetBranchAddress("Hlt1TrackAllL0Decision", &Hlt1TrackAllL0Decision, &b_Hlt1TrackAllL0Decision);
   fChain->SetBranchAddress("Hlt1TrackMuonDecision", &Hlt1TrackMuonDecision, &b_Hlt1TrackMuonDecision);
   fChain->SetBranchAddress("Hlt1TrackPhotonDecision", &Hlt1TrackPhotonDecision, &b_Hlt1TrackPhotonDecision);
   fChain->SetBranchAddress("Hlt1MBNoBiasDecision", &Hlt1MBNoBiasDecision, &b_Hlt1MBNoBiasDecision);
   fChain->SetBranchAddress("Hlt1MBMicroBiasVeloDecision", &Hlt1MBMicroBiasVeloDecision, &b_Hlt1MBMicroBiasVeloDecision);
   fChain->SetBranchAddress("Hlt1MBMicroBiasTStationDecision", &Hlt1MBMicroBiasTStationDecision, &b_Hlt1MBMicroBiasTStationDecision);
   fChain->SetBranchAddress("Hlt1L0AnyDecision", &Hlt1L0AnyDecision, &b_Hlt1L0AnyDecision);
   fChain->SetBranchAddress("Hlt1DiProtonDecision", &Hlt1DiProtonDecision, &b_Hlt1DiProtonDecision);
   fChain->SetBranchAddress("Hlt1DiProtonLowMultDecision", &Hlt1DiProtonLowMultDecision, &b_Hlt1DiProtonLowMultDecision);
   fChain->SetBranchAddress("Hlt1nSelections", &Hlt1nSelections, &b_Hlt1nSelections);
   fChain->SetBranchAddress("Hlt2SingleElectronTFLowPtDecision", &Hlt2SingleElectronTFLowPtDecision, &b_Hlt2SingleElectronTFLowPtDecision);
   fChain->SetBranchAddress("Hlt2SingleElectronTFHighPtDecision", &Hlt2SingleElectronTFHighPtDecision, &b_Hlt2SingleElectronTFHighPtDecision);
   fChain->SetBranchAddress("Hlt2DiElectronHighMassDecision", &Hlt2DiElectronHighMassDecision, &b_Hlt2DiElectronHighMassDecision);
   fChain->SetBranchAddress("Hlt2DiElectronBDecision", &Hlt2DiElectronBDecision, &b_Hlt2DiElectronBDecision);
   fChain->SetBranchAddress("Hlt2B2HHLTUnbiasedDecision", &Hlt2B2HHLTUnbiasedDecision, &b_Hlt2B2HHLTUnbiasedDecision);
   fChain->SetBranchAddress("Hlt2Topo2BodySimpleDecision", &Hlt2Topo2BodySimpleDecision, &b_Hlt2Topo2BodySimpleDecision);
   fChain->SetBranchAddress("Hlt2Topo3BodySimpleDecision", &Hlt2Topo3BodySimpleDecision, &b_Hlt2Topo3BodySimpleDecision);
   fChain->SetBranchAddress("Hlt2Topo4BodySimpleDecision", &Hlt2Topo4BodySimpleDecision, &b_Hlt2Topo4BodySimpleDecision);
   fChain->SetBranchAddress("Hlt2Topo2BodyBBDTDecision", &Hlt2Topo2BodyBBDTDecision, &b_Hlt2Topo2BodyBBDTDecision);
   fChain->SetBranchAddress("Hlt2Topo3BodyBBDTDecision", &Hlt2Topo3BodyBBDTDecision, &b_Hlt2Topo3BodyBBDTDecision);
   fChain->SetBranchAddress("Hlt2Topo4BodyBBDTDecision", &Hlt2Topo4BodyBBDTDecision, &b_Hlt2Topo4BodyBBDTDecision);
   fChain->SetBranchAddress("Hlt2TopoMu2BodyBBDTDecision", &Hlt2TopoMu2BodyBBDTDecision, &b_Hlt2TopoMu2BodyBBDTDecision);
   fChain->SetBranchAddress("Hlt2TopoMu3BodyBBDTDecision", &Hlt2TopoMu3BodyBBDTDecision, &b_Hlt2TopoMu3BodyBBDTDecision);
   fChain->SetBranchAddress("Hlt2TopoMu4BodyBBDTDecision", &Hlt2TopoMu4BodyBBDTDecision, &b_Hlt2TopoMu4BodyBBDTDecision);
   fChain->SetBranchAddress("Hlt2TopoE2BodyBBDTDecision", &Hlt2TopoE2BodyBBDTDecision, &b_Hlt2TopoE2BodyBBDTDecision);
   fChain->SetBranchAddress("Hlt2TopoE3BodyBBDTDecision", &Hlt2TopoE3BodyBBDTDecision, &b_Hlt2TopoE3BodyBBDTDecision);
   fChain->SetBranchAddress("Hlt2TopoE4BodyBBDTDecision", &Hlt2TopoE4BodyBBDTDecision, &b_Hlt2TopoE4BodyBBDTDecision);
   fChain->SetBranchAddress("Hlt2IncPhiDecision", &Hlt2IncPhiDecision, &b_Hlt2IncPhiDecision);
   fChain->SetBranchAddress("Hlt2IncPhiSidebandsDecision", &Hlt2IncPhiSidebandsDecision, &b_Hlt2IncPhiSidebandsDecision);
   fChain->SetBranchAddress("Hlt2MuonFromHLT1Decision", &Hlt2MuonFromHLT1Decision, &b_Hlt2MuonFromHLT1Decision);
   fChain->SetBranchAddress("Hlt2SingleMuonDecision", &Hlt2SingleMuonDecision, &b_Hlt2SingleMuonDecision);
   fChain->SetBranchAddress("Hlt2SingleMuonHighPTDecision", &Hlt2SingleMuonHighPTDecision, &b_Hlt2SingleMuonHighPTDecision);
   fChain->SetBranchAddress("Hlt2SingleMuonLowPTDecision", &Hlt2SingleMuonLowPTDecision, &b_Hlt2SingleMuonLowPTDecision);
   fChain->SetBranchAddress("Hlt2DiMuonDecision", &Hlt2DiMuonDecision, &b_Hlt2DiMuonDecision);
   fChain->SetBranchAddress("Hlt2DiMuonLowMassDecision", &Hlt2DiMuonLowMassDecision, &b_Hlt2DiMuonLowMassDecision);
   fChain->SetBranchAddress("Hlt2DiMuonJPsiDecision", &Hlt2DiMuonJPsiDecision, &b_Hlt2DiMuonJPsiDecision);
   fChain->SetBranchAddress("Hlt2DiMuonJPsiHighPTDecision", &Hlt2DiMuonJPsiHighPTDecision, &b_Hlt2DiMuonJPsiHighPTDecision);
   fChain->SetBranchAddress("Hlt2DiMuonPsi2SDecision", &Hlt2DiMuonPsi2SDecision, &b_Hlt2DiMuonPsi2SDecision);
   fChain->SetBranchAddress("Hlt2DiMuonBDecision", &Hlt2DiMuonBDecision, &b_Hlt2DiMuonBDecision);
   fChain->SetBranchAddress("Hlt2DiMuonZDecision", &Hlt2DiMuonZDecision, &b_Hlt2DiMuonZDecision);
   fChain->SetBranchAddress("Hlt2DiMuonDY1Decision", &Hlt2DiMuonDY1Decision, &b_Hlt2DiMuonDY1Decision);
   fChain->SetBranchAddress("Hlt2DiMuonDY2Decision", &Hlt2DiMuonDY2Decision, &b_Hlt2DiMuonDY2Decision);
   fChain->SetBranchAddress("Hlt2DiMuonDY3Decision", &Hlt2DiMuonDY3Decision, &b_Hlt2DiMuonDY3Decision);
   fChain->SetBranchAddress("Hlt2DiMuonDY4Decision", &Hlt2DiMuonDY4Decision, &b_Hlt2DiMuonDY4Decision);
   fChain->SetBranchAddress("Hlt2DiMuonDetachedDecision", &Hlt2DiMuonDetachedDecision, &b_Hlt2DiMuonDetachedDecision);
   fChain->SetBranchAddress("Hlt2DiMuonDetachedHeavyDecision", &Hlt2DiMuonDetachedHeavyDecision, &b_Hlt2DiMuonDetachedHeavyDecision);
   fChain->SetBranchAddress("Hlt2DiMuonDetachedJPsiDecision", &Hlt2DiMuonDetachedJPsiDecision, &b_Hlt2DiMuonDetachedJPsiDecision);
   fChain->SetBranchAddress("Hlt2DiMuonNoPVDecision", &Hlt2DiMuonNoPVDecision, &b_Hlt2DiMuonNoPVDecision);
   fChain->SetBranchAddress("Hlt2TriMuonDetachedDecision", &Hlt2TriMuonDetachedDecision, &b_Hlt2TriMuonDetachedDecision);
   fChain->SetBranchAddress("Hlt2TriMuonTauDecision", &Hlt2TriMuonTauDecision, &b_Hlt2TriMuonTauDecision);
   fChain->SetBranchAddress("Hlt2nSelections", &Hlt2nSelections, &b_Hlt2nSelections);
   fChain->SetBranchAddress("MaxRoutingBits", &MaxRoutingBits, &b_MaxRoutingBits);
   fChain->SetBranchAddress("RoutingBits", RoutingBits, &b_RoutingBits);
   fChain->SetBranchAddress("polarity", &polarity, &b_polarity);
   fChain->SetBranchAddress("type1Clone", &type1Clone, &b_type1Clone);
   fChain->SetBranchAddress("type2Clone", &type2Clone, &b_type2Clone);
   fChain->SetBranchAddress("klClone", &klClone, &b_klClone);
   fChain->SetBranchAddress("B_s0_TAGDECISION_OS_new", &B_s0_TAGDECISION_OS_new, &b_B_s0_TAGDECISION_OS_new);
   fChain->SetBranchAddress("B_s0_TAGCAT_OS_new", &B_s0_TAGCAT_OS_new, &b_B_s0_TAGCAT_OS_new);
   fChain->SetBranchAddress("B_s0_TAGDECISION_new", &B_s0_TAGDECISION_new, &b_B_s0_TAGDECISION_new);
   fChain->SetBranchAddress("B_s0_TAGCAT_new", &B_s0_TAGCAT_new, &b_B_s0_TAGCAT_new);
   fChain->SetBranchAddress("B_s0_SS_Kaon_DEC_new", &B_s0_SS_Kaon_DEC_new, &b_B_s0_SS_Kaon_DEC_new);
   fChain->SetBranchAddress("B_s0_TAGOMEGA_OS_new", &B_s0_TAGOMEGA_OS_new, &b_B_s0_TAGOMEGA_OS_new);
   fChain->SetBranchAddress("B_s0_TAGOMEGA_new", &B_s0_TAGOMEGA_new, &b_B_s0_TAGOMEGA_new);
   fChain->SetBranchAddress("B_s0_SS_Kaon_PROB_new", &B_s0_SS_Kaon_PROB_new, &b_B_s0_SS_Kaon_PROB_new);
   Notify();
}

Bool_t MakePlots::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MakePlots::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MakePlots::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MakePlots_cxx
