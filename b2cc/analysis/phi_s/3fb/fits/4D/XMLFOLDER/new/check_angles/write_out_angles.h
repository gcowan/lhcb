//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Aug 13 09:16:52 2013 by ROOT version 5.34/09
// from TTree bCandidates/bCandidates
// found on file: kpi_allcuts_weighted.root
//////////////////////////////////////////////////////////

#ifndef write_out_angles_h
#define write_out_angles_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TLorentzVector.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxB_s0_ENDVERTEX_COV = 1;
const Int_t kMaxB_s0_OWNPV_COV = 1;
const Int_t kMaxB_s0_TOPPV_COV = 1;
const Int_t kMaxpiminus_OWNPV_COV = 1;
const Int_t kMaxpiminus_TOPPV_COV = 1;
const Int_t kMaxpiminus_ORIVX_COV = 1;
const Int_t kMaxKplus_OWNPV_COV = 1;
const Int_t kMaxKplus_TOPPV_COV = 1;
const Int_t kMaxKplus_ORIVX_COV = 1;
const Int_t kMaxpsi_2S_ENDVERTEX_COV = 1;
const Int_t kMaxpsi_2S_OWNPV_COV = 1;
const Int_t kMaxpsi_2S_TOPPV_COV = 1;
const Int_t kMaxpsi_2S_ORIVX_COV = 1;
const Int_t kMaxmuminus_OWNPV_COV = 1;
const Int_t kMaxmuminus_TOPPV_COV = 1;
const Int_t kMaxmuminus_ORIVX_COV = 1;
const Int_t kMaxmuplus_OWNPV_COV = 1;
const Int_t kMaxmuplus_TOPPV_COV = 1;
const Int_t kMaxmuplus_ORIVX_COV = 1;

class write_out_angles {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        B_s0_Chi2_JpsiConstr;
   Double_t        B_s0_DLS;
   Double_t        B_s0_LOKI_DTF_CHI2NDOF;
   Double_t        B_s0_LOKI_DTF_CTAU;
   Double_t        B_s0_LOKI_DTF_CTAUERR;
   Double_t        B_s0_LOKI_DTF_CTAUS;
   Double_t        B_s0_MassError2_JpsiConstr;
   Double_t        B_s0_Mass_JpsiConstr;
   Double_t        B_s0_PX_JpsiConstr;
   Double_t        B_s0_PX_PiConstr1;
   Double_t        B_s0_PX_PiConstr2;
   Double_t        B_s0_PY_JpsiConstr;
   Double_t        B_s0_PY_PiConstr1;
   Double_t        B_s0_PY_PiConstr2;
   Double_t        B_s0_PZ_JpsiConstr;
   Double_t        B_s0_PZ_PiConstr1;
   Double_t        B_s0_PZ_PiConstr2;
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
   Bool_t          B_s0_Hlt2DiMuonPsi2SDecision_Dec;
   Bool_t          B_s0_Hlt2DiMuonPsi2SDecision_TIS;
   Bool_t          B_s0_Hlt2DiMuonPsi2SDecision_TOS;
   Bool_t          B_s0_Hlt2DiMuonDetachedDecision_Dec;
   Bool_t          B_s0_Hlt2DiMuonDetachedDecision_TIS;
   Bool_t          B_s0_Hlt2DiMuonDetachedDecision_TOS;
   Bool_t          B_s0_Hlt2DiMuonDetachedHeavyDecision_Dec;
   Bool_t          B_s0_Hlt2DiMuonDetachedHeavyDecision_TIS;
   Bool_t          B_s0_Hlt2DiMuonDetachedHeavyDecision_TOS;
   Bool_t          B_s0_Hlt2DiMuonDetachedPsi2SDecision_Dec;
   Bool_t          B_s0_Hlt2DiMuonDetachedPsi2SDecision_TIS;
   Bool_t          B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS;
   Double_t        piminus_Chi2_JpsiConstr;
   Double_t        piminus_DLS;
   Double_t        piminus_LOKI_DTF_CHI2NDOF;
   Double_t        piminus_LOKI_DTF_CTAU;
   Double_t        piminus_LOKI_DTF_CTAUERR;
   Double_t        piminus_LOKI_DTF_CTAUS;
   Double_t        piminus_MassError2_JpsiConstr;
   Double_t        piminus_Mass_JpsiConstr;
   Double_t        piminus_PX_JpsiConstr;
   Double_t        piminus_PX_PiConstr1;
   Double_t        piminus_PX_PiConstr2;
   Double_t        piminus_PY_JpsiConstr;
   Double_t        piminus_PY_PiConstr1;
   Double_t        piminus_PY_PiConstr2;
   Double_t        piminus_PZ_JpsiConstr;
   Double_t        piminus_PZ_PiConstr1;
   Double_t        piminus_PZ_PiConstr2;
   Double_t        piminus_MINIP;
   Double_t        piminus_MINIPCHI2;
   Double_t        piminus_MINIPNEXTBEST;
   Double_t        piminus_MINIPCHI2NEXTBEST;
   Double_t        piminus_OWNPV_X;
   Double_t        piminus_OWNPV_Y;
   Double_t        piminus_OWNPV_Z;
   Double_t        piminus_OWNPV_XERR;
   Double_t        piminus_OWNPV_YERR;
   Double_t        piminus_OWNPV_ZERR;
   Double_t        piminus_OWNPV_CHI2;
   Int_t           piminus_OWNPV_NDOF;
   Float_t         piminus_OWNPV_COV_[3][3];
   Double_t        piminus_IP_OWNPV;
   Double_t        piminus_IPCHI2_OWNPV;
   Double_t        piminus_TOPPV_X;
   Double_t        piminus_TOPPV_Y;
   Double_t        piminus_TOPPV_Z;
   Double_t        piminus_TOPPV_XERR;
   Double_t        piminus_TOPPV_YERR;
   Double_t        piminus_TOPPV_ZERR;
   Double_t        piminus_TOPPV_CHI2;
   Int_t           piminus_TOPPV_NDOF;
   Float_t         piminus_TOPPV_COV_[3][3];
   Double_t        piminus_IP_TOPPV;
   Double_t        piminus_IPCHI2_TOPPV;
   Double_t        piminus_ORIVX_X;
   Double_t        piminus_ORIVX_Y;
   Double_t        piminus_ORIVX_Z;
   Double_t        piminus_ORIVX_XERR;
   Double_t        piminus_ORIVX_YERR;
   Double_t        piminus_ORIVX_ZERR;
   Double_t        piminus_ORIVX_CHI2;
   Int_t           piminus_ORIVX_NDOF;
   Float_t         piminus_ORIVX_COV_[3][3];
   Double_t        piminus_IP_ORIVX;
   Double_t        piminus_IPCHI2_ORIVX;
   Double_t        piminus_P;
   Double_t        piminus_PT;
   Double_t        piminus_PE;
   Double_t        piminus_PX;
   Double_t        piminus_PY;
   Double_t        piminus_PZ;
   Double_t        piminus_M;
   Int_t           piminus_ID;
   Double_t        piminus_PIDe;
   Double_t        piminus_PIDmu;
   Double_t        piminus_PIDK;
   Double_t        piminus_PIDp;
   Double_t        piminus_ProbNNe;
   Double_t        piminus_ProbNNk;
   Double_t        piminus_ProbNNp;
   Double_t        piminus_ProbNNpi;
   Double_t        piminus_ProbNNmu;
   Double_t        piminus_ProbNNghost;
   Bool_t          piminus_hasMuon;
   Bool_t          piminus_isMuon;
   Bool_t          piminus_hasRich;
   Bool_t          piminus_hasCalo;
   Int_t           piminus_TRACK_Type;
   Int_t           piminus_TRACK_Key;
   Double_t        piminus_TRACK_CHI2NDOF;
   Double_t        piminus_TRACK_PCHI2;
   Double_t        piminus_TRACK_MatchCHI2;
   Double_t        piminus_TRACK_GhostProb;
   Double_t        piminus_TRACK_CloneDist;
   Double_t        piminus_TRACK_Likelihood;
   Double_t        Kplus_Chi2_JpsiConstr;
   Double_t        Kplus_DLS;
   Double_t        Kplus_LOKI_DTF_CHI2NDOF;
   Double_t        Kplus_LOKI_DTF_CTAU;
   Double_t        Kplus_LOKI_DTF_CTAUERR;
   Double_t        Kplus_LOKI_DTF_CTAUS;
   Double_t        Kplus_MassError2_JpsiConstr;
   Double_t        Kplus_Mass_JpsiConstr;
   Double_t        Kplus_PX_JpsiConstr;
   Double_t        Kplus_PX_PiConstr1;
   Double_t        Kplus_PX_PiConstr2;
   Double_t        Kplus_PY_JpsiConstr;
   Double_t        Kplus_PY_PiConstr1;
   Double_t        Kplus_PY_PiConstr2;
   Double_t        Kplus_PZ_JpsiConstr;
   Double_t        Kplus_PZ_PiConstr1;
   Double_t        Kplus_PZ_PiConstr2;
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
   Double_t        Kplus_TRACK_CHI2NDOF;
   Double_t        Kplus_TRACK_PCHI2;
   Double_t        Kplus_TRACK_MatchCHI2;
   Double_t        Kplus_TRACK_GhostProb;
   Double_t        Kplus_TRACK_CloneDist;
   Double_t        Kplus_TRACK_Likelihood;
   Double_t        psi_2S_Chi2_JpsiConstr;
   Double_t        psi_2S_DLS;
   Double_t        psi_2S_LOKI_DTF_CHI2NDOF;
   Double_t        psi_2S_LOKI_DTF_CTAU;
   Double_t        psi_2S_LOKI_DTF_CTAUERR;
   Double_t        psi_2S_LOKI_DTF_CTAUS;
   Double_t        psi_2S_MassError2_JpsiConstr;
   Double_t        psi_2S_Mass_JpsiConstr;
   Double_t        psi_2S_PX_JpsiConstr;
   Double_t        psi_2S_PX_PiConstr1;
   Double_t        psi_2S_PX_PiConstr2;
   Double_t        psi_2S_PY_JpsiConstr;
   Double_t        psi_2S_PY_PiConstr1;
   Double_t        psi_2S_PY_PiConstr2;
   Double_t        psi_2S_PZ_JpsiConstr;
   Double_t        psi_2S_PZ_PiConstr1;
   Double_t        psi_2S_PZ_PiConstr2;
   Double_t        psi_2S_MINIP;
   Double_t        psi_2S_MINIPCHI2;
   Double_t        psi_2S_MINIPNEXTBEST;
   Double_t        psi_2S_MINIPCHI2NEXTBEST;
   Double_t        psi_2S_ENDVERTEX_X;
   Double_t        psi_2S_ENDVERTEX_Y;
   Double_t        psi_2S_ENDVERTEX_Z;
   Double_t        psi_2S_ENDVERTEX_XERR;
   Double_t        psi_2S_ENDVERTEX_YERR;
   Double_t        psi_2S_ENDVERTEX_ZERR;
   Double_t        psi_2S_ENDVERTEX_CHI2;
   Int_t           psi_2S_ENDVERTEX_NDOF;
   Float_t         psi_2S_ENDVERTEX_COV_[3][3];
   Double_t        psi_2S_OWNPV_X;
   Double_t        psi_2S_OWNPV_Y;
   Double_t        psi_2S_OWNPV_Z;
   Double_t        psi_2S_OWNPV_XERR;
   Double_t        psi_2S_OWNPV_YERR;
   Double_t        psi_2S_OWNPV_ZERR;
   Double_t        psi_2S_OWNPV_CHI2;
   Int_t           psi_2S_OWNPV_NDOF;
   Float_t         psi_2S_OWNPV_COV_[3][3];
   Double_t        psi_2S_IP_OWNPV;
   Double_t        psi_2S_IPCHI2_OWNPV;
   Double_t        psi_2S_FD_OWNPV;
   Double_t        psi_2S_FDCHI2_OWNPV;
   Double_t        psi_2S_DIRA_OWNPV;
   Double_t        psi_2S_TOPPV_X;
   Double_t        psi_2S_TOPPV_Y;
   Double_t        psi_2S_TOPPV_Z;
   Double_t        psi_2S_TOPPV_XERR;
   Double_t        psi_2S_TOPPV_YERR;
   Double_t        psi_2S_TOPPV_ZERR;
   Double_t        psi_2S_TOPPV_CHI2;
   Int_t           psi_2S_TOPPV_NDOF;
   Float_t         psi_2S_TOPPV_COV_[3][3];
   Double_t        psi_2S_IP_TOPPV;
   Double_t        psi_2S_IPCHI2_TOPPV;
   Double_t        psi_2S_FD_TOPPV;
   Double_t        psi_2S_FDCHI2_TOPPV;
   Double_t        psi_2S_DIRA_TOPPV;
   Double_t        psi_2S_ORIVX_X;
   Double_t        psi_2S_ORIVX_Y;
   Double_t        psi_2S_ORIVX_Z;
   Double_t        psi_2S_ORIVX_XERR;
   Double_t        psi_2S_ORIVX_YERR;
   Double_t        psi_2S_ORIVX_ZERR;
   Double_t        psi_2S_ORIVX_CHI2;
   Int_t           psi_2S_ORIVX_NDOF;
   Float_t         psi_2S_ORIVX_COV_[3][3];
   Double_t        psi_2S_IP_ORIVX;
   Double_t        psi_2S_IPCHI2_ORIVX;
   Double_t        psi_2S_FD_ORIVX;
   Double_t        psi_2S_FDCHI2_ORIVX;
   Double_t        psi_2S_DIRA_ORIVX;
   Double_t        psi_2S_P;
   Double_t        psi_2S_PT;
   Double_t        psi_2S_PE;
   Double_t        psi_2S_PX;
   Double_t        psi_2S_PY;
   Double_t        psi_2S_PZ;
   Double_t        psi_2S_MM;
   Double_t        psi_2S_MMERR;
   Double_t        psi_2S_M;
   Int_t           psi_2S_ID;
   Double_t        psi_2S_TAU;
   Double_t        psi_2S_TAUERR;
   Double_t        psi_2S_TAUCHI2;
   Double_t        muminus_Chi2_JpsiConstr;
   Double_t        muminus_DLS;
   Double_t        muminus_LOKI_DTF_CHI2NDOF;
   Double_t        muminus_LOKI_DTF_CTAU;
   Double_t        muminus_LOKI_DTF_CTAUERR;
   Double_t        muminus_LOKI_DTF_CTAUS;
   Double_t        muminus_MassError2_JpsiConstr;
   Double_t        muminus_Mass_JpsiConstr;
   Double_t        muminus_PX_JpsiConstr;
   Double_t        muminus_PX_PiConstr1;
   Double_t        muminus_PX_PiConstr2;
   Double_t        muminus_PY_JpsiConstr;
   Double_t        muminus_PY_PiConstr1;
   Double_t        muminus_PY_PiConstr2;
   Double_t        muminus_PZ_JpsiConstr;
   Double_t        muminus_PZ_PiConstr1;
   Double_t        muminus_PZ_PiConstr2;
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
   Double_t        muminus_TRACK_CHI2NDOF;
   Double_t        muminus_TRACK_PCHI2;
   Double_t        muminus_TRACK_MatchCHI2;
   Double_t        muminus_TRACK_GhostProb;
   Double_t        muminus_TRACK_CloneDist;
   Double_t        muminus_TRACK_Likelihood;
   Double_t        muplus_Chi2_JpsiConstr;
   Double_t        muplus_DLS;
   Double_t        muplus_LOKI_DTF_CHI2NDOF;
   Double_t        muplus_LOKI_DTF_CTAU;
   Double_t        muplus_LOKI_DTF_CTAUERR;
   Double_t        muplus_LOKI_DTF_CTAUS;
   Double_t        muplus_MassError2_JpsiConstr;
   Double_t        muplus_Mass_JpsiConstr;
   Double_t        muplus_PX_JpsiConstr;
   Double_t        muplus_PX_PiConstr1;
   Double_t        muplus_PX_PiConstr2;
   Double_t        muplus_PY_JpsiConstr;
   Double_t        muplus_PY_PiConstr1;
   Double_t        muplus_PY_PiConstr2;
   Double_t        muplus_PZ_JpsiConstr;
   Double_t        muplus_PZ_PiConstr1;
   Double_t        muplus_PZ_PiConstr2;
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
   Double_t        muplus_TRACK_CHI2NDOF;
   Double_t        muplus_TRACK_PCHI2;
   Double_t        muplus_TRACK_MatchCHI2;
   Double_t        muplus_TRACK_GhostProb;
   Double_t        muplus_TRACK_CloneDist;
   Double_t        muplus_TRACK_Likelihood;
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
   Int_t           L0MuonDecision;
   Int_t           L0DiMuonDecision;
   UInt_t          L0nSelections;
   Int_t           Hlt1DiMuonHighMassDecision;
   Int_t           Hlt1DiMuonLowMassDecision;
   Int_t           Hlt1SingleMuonNoIPDecision;
   Int_t           Hlt1SingleMuonHighPTDecision;
   Int_t           Hlt1TrackAllL0Decision;
   Int_t           Hlt1TrackMuonDecision;
   Int_t           Hlt1TrackPhotonDecision;
   Int_t           Hlt1L0AnyDecision;
   UInt_t          Hlt1nSelections;
   Int_t           Hlt2MuonFromHLT1Decision;
   Int_t           Hlt2SingleMuonDecision;
   Int_t           Hlt2SingleMuonHighPTDecision;
   Int_t           Hlt2SingleMuonLowPTDecision;
   Int_t           Hlt2DiMuonDecision;
   Int_t           Hlt2DiMuonPsi2SDecision;
   Int_t           Hlt2DiMuonDetachedDecision;
   Int_t           Hlt2DiMuonDetachedHeavyDecision;
   Int_t           Hlt2DiMuonDetachedPsi2SDecision;
   Int_t           Hlt2DiMuonNoPVDecision;
   UInt_t          Hlt2nSelections;
   Int_t           MaxRoutingBits;
   Float_t         RoutingBits[64];   //[MaxRoutingBits]
   Float_t         ipmin;
   Float_t         ipmax;
   Float_t         ptsum;
   Float_t         k_pidk;
   Float_t         k_pidpi;
   Float_t         pi_pidk;
   Float_t         pi_pidpi;
   Float_t         mphi;
   Float_t         mkstar;
   Float_t         mpsipi;
   Float_t         mlb;
   Float_t         mbs;
   Float_t         normptsum;
   Float_t         normbpt;
   Float_t         logipmin;
   Float_t         logipmax;
   Float_t         logfd;
   Float_t         logvd;
   Float_t         bdt;
   Float_t         bdtd;
   Float_t         bdtg;
   Float_t         bdtg3;
   Float_t         bdtg4;
   Float_t         mlp;
   Float_t         mbpipi;
   Float_t         mbk;
   Float_t         mlb2;
   Int_t           hasBestVtxChi2;
   Float_t         Nsig_sw;
   Float_t         Nbkg_sw;
   Float_t         L_Nsig;
   Float_t         L_Nbkg;
   Float_t         Nsig2_sw;
   Float_t         Nref_sw;
   Float_t         L_Nsig2;
   Float_t         L_Nref;

   // List of branches
   TBranch        *b_B_s0_Chi2_JpsiConstr;   //!
   TBranch        *b_B_s0_DLS;   //!
   TBranch        *b_B_s0_LOKI_DTF_CHI2NDOF;   //!
   TBranch        *b_B_s0_LOKI_DTF_CTAU;   //!
   TBranch        *b_B_s0_LOKI_DTF_CTAUERR;   //!
   TBranch        *b_B_s0_LOKI_DTF_CTAUS;   //!
   TBranch        *b_B_s0_MassError2_JpsiConstr;   //!
   TBranch        *b_B_s0_Mass_JpsiConstr;   //!
   TBranch        *b_B_s0_PX_JpsiConstr;   //!
   TBranch        *b_B_s0_PX_PiConstr1;   //!
   TBranch        *b_B_s0_PX_PiConstr2;   //!
   TBranch        *b_B_s0_PY_JpsiConstr;   //!
   TBranch        *b_B_s0_PY_PiConstr1;   //!
   TBranch        *b_B_s0_PY_PiConstr2;   //!
   TBranch        *b_B_s0_PZ_JpsiConstr;   //!
   TBranch        *b_B_s0_PZ_PiConstr1;   //!
   TBranch        *b_B_s0_PZ_PiConstr2;   //!
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
   TBranch        *b_B_s0_Hlt2DiMuonPsi2SDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2DiMuonPsi2SDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonPsi2SDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedHeavyDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedHeavyDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedHeavyDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedPsi2SDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedPsi2SDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS;   //!
   TBranch        *b_piminus_Chi2_JpsiConstr;   //!
   TBranch        *b_piminus_DLS;   //!
   TBranch        *b_piminus_LOKI_DTF_CHI2NDOF;   //!
   TBranch        *b_piminus_LOKI_DTF_CTAU;   //!
   TBranch        *b_piminus_LOKI_DTF_CTAUERR;   //!
   TBranch        *b_piminus_LOKI_DTF_CTAUS;   //!
   TBranch        *b_piminus_MassError2_JpsiConstr;   //!
   TBranch        *b_piminus_Mass_JpsiConstr;   //!
   TBranch        *b_piminus_PX_JpsiConstr;   //!
   TBranch        *b_piminus_PX_PiConstr1;   //!
   TBranch        *b_piminus_PX_PiConstr2;   //!
   TBranch        *b_piminus_PY_JpsiConstr;   //!
   TBranch        *b_piminus_PY_PiConstr1;   //!
   TBranch        *b_piminus_PY_PiConstr2;   //!
   TBranch        *b_piminus_PZ_JpsiConstr;   //!
   TBranch        *b_piminus_PZ_PiConstr1;   //!
   TBranch        *b_piminus_PZ_PiConstr2;   //!
   TBranch        *b_piminus_MINIP;   //!
   TBranch        *b_piminus_MINIPCHI2;   //!
   TBranch        *b_piminus_MINIPNEXTBEST;   //!
   TBranch        *b_piminus_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_piminus_OWNPV_X;   //!
   TBranch        *b_piminus_OWNPV_Y;   //!
   TBranch        *b_piminus_OWNPV_Z;   //!
   TBranch        *b_piminus_OWNPV_XERR;   //!
   TBranch        *b_piminus_OWNPV_YERR;   //!
   TBranch        *b_piminus_OWNPV_ZERR;   //!
   TBranch        *b_piminus_OWNPV_CHI2;   //!
   TBranch        *b_piminus_OWNPV_NDOF;   //!
   TBranch        *b_piminus_OWNPV_COV_;   //!
   TBranch        *b_piminus_IP_OWNPV;   //!
   TBranch        *b_piminus_IPCHI2_OWNPV;   //!
   TBranch        *b_piminus_TOPPV_X;   //!
   TBranch        *b_piminus_TOPPV_Y;   //!
   TBranch        *b_piminus_TOPPV_Z;   //!
   TBranch        *b_piminus_TOPPV_XERR;   //!
   TBranch        *b_piminus_TOPPV_YERR;   //!
   TBranch        *b_piminus_TOPPV_ZERR;   //!
   TBranch        *b_piminus_TOPPV_CHI2;   //!
   TBranch        *b_piminus_TOPPV_NDOF;   //!
   TBranch        *b_piminus_TOPPV_COV_;   //!
   TBranch        *b_piminus_IP_TOPPV;   //!
   TBranch        *b_piminus_IPCHI2_TOPPV;   //!
   TBranch        *b_piminus_ORIVX_X;   //!
   TBranch        *b_piminus_ORIVX_Y;   //!
   TBranch        *b_piminus_ORIVX_Z;   //!
   TBranch        *b_piminus_ORIVX_XERR;   //!
   TBranch        *b_piminus_ORIVX_YERR;   //!
   TBranch        *b_piminus_ORIVX_ZERR;   //!
   TBranch        *b_piminus_ORIVX_CHI2;   //!
   TBranch        *b_piminus_ORIVX_NDOF;   //!
   TBranch        *b_piminus_ORIVX_COV_;   //!
   TBranch        *b_piminus_IP_ORIVX;   //!
   TBranch        *b_piminus_IPCHI2_ORIVX;   //!
   TBranch        *b_piminus_P;   //!
   TBranch        *b_piminus_PT;   //!
   TBranch        *b_piminus_PE;   //!
   TBranch        *b_piminus_PX;   //!
   TBranch        *b_piminus_PY;   //!
   TBranch        *b_piminus_PZ;   //!
   TBranch        *b_piminus_M;   //!
   TBranch        *b_piminus_ID;   //!
   TBranch        *b_piminus_PIDe;   //!
   TBranch        *b_piminus_PIDmu;   //!
   TBranch        *b_piminus_PIDK;   //!
   TBranch        *b_piminus_PIDp;   //!
   TBranch        *b_piminus_ProbNNe;   //!
   TBranch        *b_piminus_ProbNNk;   //!
   TBranch        *b_piminus_ProbNNp;   //!
   TBranch        *b_piminus_ProbNNpi;   //!
   TBranch        *b_piminus_ProbNNmu;   //!
   TBranch        *b_piminus_ProbNNghost;   //!
   TBranch        *b_piminus_hasMuon;   //!
   TBranch        *b_piminus_isMuon;   //!
   TBranch        *b_piminus_hasRich;   //!
   TBranch        *b_piminus_hasCalo;   //!
   TBranch        *b_piminus_TRACK_Type;   //!
   TBranch        *b_piminus_TRACK_Key;   //!
   TBranch        *b_piminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_piminus_TRACK_PCHI2;   //!
   TBranch        *b_piminus_TRACK_MatchCHI2;   //!
   TBranch        *b_piminus_TRACK_GhostProb;   //!
   TBranch        *b_piminus_TRACK_CloneDist;   //!
   TBranch        *b_piminus_TRACK_Likelihood;   //!
   TBranch        *b_Kplus_Chi2_JpsiConstr;   //!
   TBranch        *b_Kplus_DLS;   //!
   TBranch        *b_Kplus_LOKI_DTF_CHI2NDOF;   //!
   TBranch        *b_Kplus_LOKI_DTF_CTAU;   //!
   TBranch        *b_Kplus_LOKI_DTF_CTAUERR;   //!
   TBranch        *b_Kplus_LOKI_DTF_CTAUS;   //!
   TBranch        *b_Kplus_MassError2_JpsiConstr;   //!
   TBranch        *b_Kplus_Mass_JpsiConstr;   //!
   TBranch        *b_Kplus_PX_JpsiConstr;   //!
   TBranch        *b_Kplus_PX_PiConstr1;   //!
   TBranch        *b_Kplus_PX_PiConstr2;   //!
   TBranch        *b_Kplus_PY_JpsiConstr;   //!
   TBranch        *b_Kplus_PY_PiConstr1;   //!
   TBranch        *b_Kplus_PY_PiConstr2;   //!
   TBranch        *b_Kplus_PZ_JpsiConstr;   //!
   TBranch        *b_Kplus_PZ_PiConstr1;   //!
   TBranch        *b_Kplus_PZ_PiConstr2;   //!
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
   TBranch        *b_Kplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Kplus_TRACK_PCHI2;   //!
   TBranch        *b_Kplus_TRACK_MatchCHI2;   //!
   TBranch        *b_Kplus_TRACK_GhostProb;   //!
   TBranch        *b_Kplus_TRACK_CloneDist;   //!
   TBranch        *b_Kplus_TRACK_Likelihood;   //!
   TBranch        *b_psi_2S_Chi2_JpsiConstr;   //!
   TBranch        *b_psi_2S_DLS;   //!
   TBranch        *b_psi_2S_LOKI_DTF_CHI2NDOF;   //!
   TBranch        *b_psi_2S_LOKI_DTF_CTAU;   //!
   TBranch        *b_psi_2S_LOKI_DTF_CTAUERR;   //!
   TBranch        *b_psi_2S_LOKI_DTF_CTAUS;   //!
   TBranch        *b_psi_2S_MassError2_JpsiConstr;   //!
   TBranch        *b_psi_2S_Mass_JpsiConstr;   //!
   TBranch        *b_psi_2S_PX_JpsiConstr;   //!
   TBranch        *b_psi_2S_PX_PiConstr1;   //!
   TBranch        *b_psi_2S_PX_PiConstr2;   //!
   TBranch        *b_psi_2S_PY_JpsiConstr;   //!
   TBranch        *b_psi_2S_PY_PiConstr1;   //!
   TBranch        *b_psi_2S_PY_PiConstr2;   //!
   TBranch        *b_psi_2S_PZ_JpsiConstr;   //!
   TBranch        *b_psi_2S_PZ_PiConstr1;   //!
   TBranch        *b_psi_2S_PZ_PiConstr2;   //!
   TBranch        *b_psi_2S_MINIP;   //!
   TBranch        *b_psi_2S_MINIPCHI2;   //!
   TBranch        *b_psi_2S_MINIPNEXTBEST;   //!
   TBranch        *b_psi_2S_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_psi_2S_ENDVERTEX_X;   //!
   TBranch        *b_psi_2S_ENDVERTEX_Y;   //!
   TBranch        *b_psi_2S_ENDVERTEX_Z;   //!
   TBranch        *b_psi_2S_ENDVERTEX_XERR;   //!
   TBranch        *b_psi_2S_ENDVERTEX_YERR;   //!
   TBranch        *b_psi_2S_ENDVERTEX_ZERR;   //!
   TBranch        *b_psi_2S_ENDVERTEX_CHI2;   //!
   TBranch        *b_psi_2S_ENDVERTEX_NDOF;   //!
   TBranch        *b_psi_2S_ENDVERTEX_COV_;   //!
   TBranch        *b_psi_2S_OWNPV_X;   //!
   TBranch        *b_psi_2S_OWNPV_Y;   //!
   TBranch        *b_psi_2S_OWNPV_Z;   //!
   TBranch        *b_psi_2S_OWNPV_XERR;   //!
   TBranch        *b_psi_2S_OWNPV_YERR;   //!
   TBranch        *b_psi_2S_OWNPV_ZERR;   //!
   TBranch        *b_psi_2S_OWNPV_CHI2;   //!
   TBranch        *b_psi_2S_OWNPV_NDOF;   //!
   TBranch        *b_psi_2S_OWNPV_COV_;   //!
   TBranch        *b_psi_2S_IP_OWNPV;   //!
   TBranch        *b_psi_2S_IPCHI2_OWNPV;   //!
   TBranch        *b_psi_2S_FD_OWNPV;   //!
   TBranch        *b_psi_2S_FDCHI2_OWNPV;   //!
   TBranch        *b_psi_2S_DIRA_OWNPV;   //!
   TBranch        *b_psi_2S_TOPPV_X;   //!
   TBranch        *b_psi_2S_TOPPV_Y;   //!
   TBranch        *b_psi_2S_TOPPV_Z;   //!
   TBranch        *b_psi_2S_TOPPV_XERR;   //!
   TBranch        *b_psi_2S_TOPPV_YERR;   //!
   TBranch        *b_psi_2S_TOPPV_ZERR;   //!
   TBranch        *b_psi_2S_TOPPV_CHI2;   //!
   TBranch        *b_psi_2S_TOPPV_NDOF;   //!
   TBranch        *b_psi_2S_TOPPV_COV_;   //!
   TBranch        *b_psi_2S_IP_TOPPV;   //!
   TBranch        *b_psi_2S_IPCHI2_TOPPV;   //!
   TBranch        *b_psi_2S_FD_TOPPV;   //!
   TBranch        *b_psi_2S_FDCHI2_TOPPV;   //!
   TBranch        *b_psi_2S_DIRA_TOPPV;   //!
   TBranch        *b_psi_2S_ORIVX_X;   //!
   TBranch        *b_psi_2S_ORIVX_Y;   //!
   TBranch        *b_psi_2S_ORIVX_Z;   //!
   TBranch        *b_psi_2S_ORIVX_XERR;   //!
   TBranch        *b_psi_2S_ORIVX_YERR;   //!
   TBranch        *b_psi_2S_ORIVX_ZERR;   //!
   TBranch        *b_psi_2S_ORIVX_CHI2;   //!
   TBranch        *b_psi_2S_ORIVX_NDOF;   //!
   TBranch        *b_psi_2S_ORIVX_COV_;   //!
   TBranch        *b_psi_2S_IP_ORIVX;   //!
   TBranch        *b_psi_2S_IPCHI2_ORIVX;   //!
   TBranch        *b_psi_2S_FD_ORIVX;   //!
   TBranch        *b_psi_2S_FDCHI2_ORIVX;   //!
   TBranch        *b_psi_2S_DIRA_ORIVX;   //!
   TBranch        *b_psi_2S_P;   //!
   TBranch        *b_psi_2S_PT;   //!
   TBranch        *b_psi_2S_PE;   //!
   TBranch        *b_psi_2S_PX;   //!
   TBranch        *b_psi_2S_PY;   //!
   TBranch        *b_psi_2S_PZ;   //!
   TBranch        *b_psi_2S_MM;   //!
   TBranch        *b_psi_2S_MMERR;   //!
   TBranch        *b_psi_2S_M;   //!
   TBranch        *b_psi_2S_ID;   //!
   TBranch        *b_psi_2S_TAU;   //!
   TBranch        *b_psi_2S_TAUERR;   //!
   TBranch        *b_psi_2S_TAUCHI2;   //!
   TBranch        *b_muminus_Chi2_JpsiConstr;   //!
   TBranch        *b_muminus_DLS;   //!
   TBranch        *b_muminus_LOKI_DTF_CHI2NDOF;   //!
   TBranch        *b_muminus_LOKI_DTF_CTAU;   //!
   TBranch        *b_muminus_LOKI_DTF_CTAUERR;   //!
   TBranch        *b_muminus_LOKI_DTF_CTAUS;   //!
   TBranch        *b_muminus_MassError2_JpsiConstr;   //!
   TBranch        *b_muminus_Mass_JpsiConstr;   //!
   TBranch        *b_muminus_PX_JpsiConstr;   //!
   TBranch        *b_muminus_PX_PiConstr1;   //!
   TBranch        *b_muminus_PX_PiConstr2;   //!
   TBranch        *b_muminus_PY_JpsiConstr;   //!
   TBranch        *b_muminus_PY_PiConstr1;   //!
   TBranch        *b_muminus_PY_PiConstr2;   //!
   TBranch        *b_muminus_PZ_JpsiConstr;   //!
   TBranch        *b_muminus_PZ_PiConstr1;   //!
   TBranch        *b_muminus_PZ_PiConstr2;   //!
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
   TBranch        *b_muminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_muminus_TRACK_PCHI2;   //!
   TBranch        *b_muminus_TRACK_MatchCHI2;   //!
   TBranch        *b_muminus_TRACK_GhostProb;   //!
   TBranch        *b_muminus_TRACK_CloneDist;   //!
   TBranch        *b_muminus_TRACK_Likelihood;   //!
   TBranch        *b_muplus_Chi2_JpsiConstr;   //!
   TBranch        *b_muplus_DLS;   //!
   TBranch        *b_muplus_LOKI_DTF_CHI2NDOF;   //!
   TBranch        *b_muplus_LOKI_DTF_CTAU;   //!
   TBranch        *b_muplus_LOKI_DTF_CTAUERR;   //!
   TBranch        *b_muplus_LOKI_DTF_CTAUS;   //!
   TBranch        *b_muplus_MassError2_JpsiConstr;   //!
   TBranch        *b_muplus_Mass_JpsiConstr;   //!
   TBranch        *b_muplus_PX_JpsiConstr;   //!
   TBranch        *b_muplus_PX_PiConstr1;   //!
   TBranch        *b_muplus_PX_PiConstr2;   //!
   TBranch        *b_muplus_PY_JpsiConstr;   //!
   TBranch        *b_muplus_PY_PiConstr1;   //!
   TBranch        *b_muplus_PY_PiConstr2;   //!
   TBranch        *b_muplus_PZ_JpsiConstr;   //!
   TBranch        *b_muplus_PZ_PiConstr1;   //!
   TBranch        *b_muplus_PZ_PiConstr2;   //!
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
   TBranch        *b_muplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_muplus_TRACK_PCHI2;   //!
   TBranch        *b_muplus_TRACK_MatchCHI2;   //!
   TBranch        *b_muplus_TRACK_GhostProb;   //!
   TBranch        *b_muplus_TRACK_CloneDist;   //!
   TBranch        *b_muplus_TRACK_Likelihood;   //!
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
   TBranch        *b_L0MuonDecision;   //!
   TBranch        *b_L0DiMuonDecision;   //!
   TBranch        *b_L0nSelections;   //!
   TBranch        *b_Hlt1DiMuonHighMassDecision;   //!
   TBranch        *b_Hlt1DiMuonLowMassDecision;   //!
   TBranch        *b_Hlt1SingleMuonNoIPDecision;   //!
   TBranch        *b_Hlt1SingleMuonHighPTDecision;   //!
   TBranch        *b_Hlt1TrackAllL0Decision;   //!
   TBranch        *b_Hlt1TrackMuonDecision;   //!
   TBranch        *b_Hlt1TrackPhotonDecision;   //!
   TBranch        *b_Hlt1L0AnyDecision;   //!
   TBranch        *b_Hlt1nSelections;   //!
   TBranch        *b_Hlt2MuonFromHLT1Decision;   //!
   TBranch        *b_Hlt2SingleMuonDecision;   //!
   TBranch        *b_Hlt2SingleMuonHighPTDecision;   //!
   TBranch        *b_Hlt2SingleMuonLowPTDecision;   //!
   TBranch        *b_Hlt2DiMuonDecision;   //!
   TBranch        *b_Hlt2DiMuonPsi2SDecision;   //!
   TBranch        *b_Hlt2DiMuonDetachedDecision;   //!
   TBranch        *b_Hlt2DiMuonDetachedHeavyDecision;   //!
   TBranch        *b_Hlt2DiMuonDetachedPsi2SDecision;   //!
   TBranch        *b_Hlt2DiMuonNoPVDecision;   //!
   TBranch        *b_Hlt2nSelections;   //!
   TBranch        *b_MaxRoutingBits;   //!
   TBranch        *b_RoutingBits;   //!
   TBranch        *b_ipmin;   //!
   TBranch        *b_ipmax;   //!
   TBranch        *b_ptsum;   //!
   TBranch        *b_k_pidk;   //!
   TBranch        *b_k_pidpi;   //!
   TBranch        *b_pi_pidpk;   //!
   TBranch        *b_pi_pidpi;   //!
   TBranch        *b_mphi;   //!
   TBranch        *b_mkstar;   //!
   TBranch        *b_mpsipi;   //!
   TBranch        *b_mlb;   //!
   TBranch        *b_mbs;   //!
   TBranch        *b_normptsum;   //!
   TBranch        *b_normbpt;   //!
   TBranch        *b_logipmin;   //!
   TBranch        *b_logipmax;   //!
   TBranch        *b_logfd;   //!
   TBranch        *b_logfvd;   //!
   TBranch        *b_bdt;   //!
   TBranch        *b_bdtd;   //!
   TBranch        *b_bdtg;   //!
   TBranch        *b_bdtg3;   //!
   TBranch        *b_bdtg4;   //!
   TBranch        *b_mlp;   //!
   TBranch        *b_mbpipi;   //!
   TBranch        *b_mbk;   //!
   TBranch        *b_mlb2;   //!
   TBranch        *b_hasBestVtxChi2;   //!
   TBranch        *b_Nsig_sw;   //!
   TBranch        *b_Nbkg_sw;   //!
   TBranch        *b_L_Nsig;   //!
   TBranch        *b_L_Nbkg;   //!
   TBranch        *b_Nsig2_sw;   //!
   TBranch        *b_Nref_sw;   //!
   TBranch        *b_L_Nsig2;   //!
   TBranch        *b_L_Nref;   //!

   write_out_angles(TTree *tree=0);
   virtual ~write_out_angles();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual void Belle(const  TLorentzVector & _pMuPlus,
           const  TLorentzVector & _pMuMinus,
           const  TLorentzVector & _pPi,
           const  TLorentzVector & _pK,
           double & m23,
           double & cosKPi,
           double & cosPsi,
           double & phiKPiPsi,
           double & m13,
           double & cosZ,
           double & cosPsi_Z,
           double & phiPsiZ,
           double & phiZPsiPsi) const;
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef write_out_angles_cxx
write_out_angles::write_out_angles(TTree *tree) : fChain(0)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      //TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("kpi_allcuts_weighted.root");
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("data-sweighted.root");
      //TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("BsKpi-mc.root");
      if (!f || !f->IsOpen()) {
         //f = new TFile("kpi_allcuts_weighted.root");
         f = new TFile("data-sweighted.root");
         //f = new TFile("BsKpi-mc.root");
      }
      f->GetObject("bCandidates",tree);

   }
   Init(tree);
}

write_out_angles::~write_out_angles()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t write_out_angles::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t write_out_angles::LoadTree(Long64_t entry)
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

void write_out_angles::Init(TTree *tree)
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

   fChain->SetBranchAddress("B_s0_Chi2_JpsiConstr", &B_s0_Chi2_JpsiConstr, &b_B_s0_Chi2_JpsiConstr);
   fChain->SetBranchAddress("B_s0_DLS", &B_s0_DLS, &b_B_s0_DLS);
   fChain->SetBranchAddress("B_s0_LOKI_DTF_CHI2NDOF", &B_s0_LOKI_DTF_CHI2NDOF, &b_B_s0_LOKI_DTF_CHI2NDOF);
   fChain->SetBranchAddress("B_s0_LOKI_DTF_CTAU", &B_s0_LOKI_DTF_CTAU, &b_B_s0_LOKI_DTF_CTAU);
   fChain->SetBranchAddress("B_s0_LOKI_DTF_CTAUERR", &B_s0_LOKI_DTF_CTAUERR, &b_B_s0_LOKI_DTF_CTAUERR);
   fChain->SetBranchAddress("B_s0_LOKI_DTF_CTAUS", &B_s0_LOKI_DTF_CTAUS, &b_B_s0_LOKI_DTF_CTAUS);
   fChain->SetBranchAddress("B_s0_MassError2_JpsiConstr", &B_s0_MassError2_JpsiConstr, &b_B_s0_MassError2_JpsiConstr);
   fChain->SetBranchAddress("B_s0_Mass_JpsiConstr", &B_s0_Mass_JpsiConstr, &b_B_s0_Mass_JpsiConstr);
   fChain->SetBranchAddress("B_s0_PX_JpsiConstr", &B_s0_PX_JpsiConstr, &b_B_s0_PX_JpsiConstr);
   fChain->SetBranchAddress("B_s0_PX_PiConstr1", &B_s0_PX_PiConstr1, &b_B_s0_PX_PiConstr1);
   fChain->SetBranchAddress("B_s0_PX_PiConstr2", &B_s0_PX_PiConstr2, &b_B_s0_PX_PiConstr2);
   fChain->SetBranchAddress("B_s0_PY_JpsiConstr", &B_s0_PY_JpsiConstr, &b_B_s0_PY_JpsiConstr);
   fChain->SetBranchAddress("B_s0_PY_PiConstr1", &B_s0_PY_PiConstr1, &b_B_s0_PY_PiConstr1);
   fChain->SetBranchAddress("B_s0_PY_PiConstr2", &B_s0_PY_PiConstr2, &b_B_s0_PY_PiConstr2);
   fChain->SetBranchAddress("B_s0_PZ_JpsiConstr", &B_s0_PZ_JpsiConstr, &b_B_s0_PZ_JpsiConstr);
   fChain->SetBranchAddress("B_s0_PZ_PiConstr1", &B_s0_PZ_PiConstr1, &b_B_s0_PZ_PiConstr1);
   fChain->SetBranchAddress("B_s0_PZ_PiConstr2", &B_s0_PZ_PiConstr2, &b_B_s0_PZ_PiConstr2);
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
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonPsi2SDecision_Dec", &B_s0_Hlt2DiMuonPsi2SDecision_Dec, &b_B_s0_Hlt2DiMuonPsi2SDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonPsi2SDecision_TIS", &B_s0_Hlt2DiMuonPsi2SDecision_TIS, &b_B_s0_Hlt2DiMuonPsi2SDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonPsi2SDecision_TOS", &B_s0_Hlt2DiMuonPsi2SDecision_TOS, &b_B_s0_Hlt2DiMuonPsi2SDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedDecision_Dec", &B_s0_Hlt2DiMuonDetachedDecision_Dec, &b_B_s0_Hlt2DiMuonDetachedDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedDecision_TIS", &B_s0_Hlt2DiMuonDetachedDecision_TIS, &b_B_s0_Hlt2DiMuonDetachedDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedDecision_TOS", &B_s0_Hlt2DiMuonDetachedDecision_TOS, &b_B_s0_Hlt2DiMuonDetachedDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedHeavyDecision_Dec", &B_s0_Hlt2DiMuonDetachedHeavyDecision_Dec, &b_B_s0_Hlt2DiMuonDetachedHeavyDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedHeavyDecision_TIS", &B_s0_Hlt2DiMuonDetachedHeavyDecision_TIS, &b_B_s0_Hlt2DiMuonDetachedHeavyDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedHeavyDecision_TOS", &B_s0_Hlt2DiMuonDetachedHeavyDecision_TOS, &b_B_s0_Hlt2DiMuonDetachedHeavyDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedPsi2SDecision_Dec", &B_s0_Hlt2DiMuonDetachedPsi2SDecision_Dec, &b_B_s0_Hlt2DiMuonDetachedPsi2SDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedPsi2SDecision_TIS", &B_s0_Hlt2DiMuonDetachedPsi2SDecision_TIS, &b_B_s0_Hlt2DiMuonDetachedPsi2SDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS", &B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS, &b_B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS);
   fChain->SetBranchAddress("piminus_Chi2_JpsiConstr", &piminus_Chi2_JpsiConstr, &b_piminus_Chi2_JpsiConstr);
   fChain->SetBranchAddress("piminus_DLS", &piminus_DLS, &b_piminus_DLS);
   fChain->SetBranchAddress("piminus_LOKI_DTF_CHI2NDOF", &piminus_LOKI_DTF_CHI2NDOF, &b_piminus_LOKI_DTF_CHI2NDOF);
   fChain->SetBranchAddress("piminus_LOKI_DTF_CTAU", &piminus_LOKI_DTF_CTAU, &b_piminus_LOKI_DTF_CTAU);
   fChain->SetBranchAddress("piminus_LOKI_DTF_CTAUERR", &piminus_LOKI_DTF_CTAUERR, &b_piminus_LOKI_DTF_CTAUERR);
   fChain->SetBranchAddress("piminus_LOKI_DTF_CTAUS", &piminus_LOKI_DTF_CTAUS, &b_piminus_LOKI_DTF_CTAUS);
   fChain->SetBranchAddress("piminus_MassError2_JpsiConstr", &piminus_MassError2_JpsiConstr, &b_piminus_MassError2_JpsiConstr);
   fChain->SetBranchAddress("piminus_Mass_JpsiConstr", &piminus_Mass_JpsiConstr, &b_piminus_Mass_JpsiConstr);
   fChain->SetBranchAddress("piminus_PX_JpsiConstr", &piminus_PX_JpsiConstr, &b_piminus_PX_JpsiConstr);
   fChain->SetBranchAddress("piminus_PX_PiConstr1", &piminus_PX_PiConstr1, &b_piminus_PX_PiConstr1);
   fChain->SetBranchAddress("piminus_PX_PiConstr2", &piminus_PX_PiConstr2, &b_piminus_PX_PiConstr2);
   fChain->SetBranchAddress("piminus_PY_JpsiConstr", &piminus_PY_JpsiConstr, &b_piminus_PY_JpsiConstr);
   fChain->SetBranchAddress("piminus_PY_PiConstr1", &piminus_PY_PiConstr1, &b_piminus_PY_PiConstr1);
   fChain->SetBranchAddress("piminus_PY_PiConstr2", &piminus_PY_PiConstr2, &b_piminus_PY_PiConstr2);
   fChain->SetBranchAddress("piminus_PZ_JpsiConstr", &piminus_PZ_JpsiConstr, &b_piminus_PZ_JpsiConstr);
   fChain->SetBranchAddress("piminus_PZ_PiConstr1", &piminus_PZ_PiConstr1, &b_piminus_PZ_PiConstr1);
   fChain->SetBranchAddress("piminus_PZ_PiConstr2", &piminus_PZ_PiConstr2, &b_piminus_PZ_PiConstr2);
   fChain->SetBranchAddress("piminus_MINIP", &piminus_MINIP, &b_piminus_MINIP);
   fChain->SetBranchAddress("piminus_MINIPCHI2", &piminus_MINIPCHI2, &b_piminus_MINIPCHI2);
   fChain->SetBranchAddress("piminus_MINIPNEXTBEST", &piminus_MINIPNEXTBEST, &b_piminus_MINIPNEXTBEST);
   fChain->SetBranchAddress("piminus_MINIPCHI2NEXTBEST", &piminus_MINIPCHI2NEXTBEST, &b_piminus_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("piminus_OWNPV_X", &piminus_OWNPV_X, &b_piminus_OWNPV_X);
   fChain->SetBranchAddress("piminus_OWNPV_Y", &piminus_OWNPV_Y, &b_piminus_OWNPV_Y);
   fChain->SetBranchAddress("piminus_OWNPV_Z", &piminus_OWNPV_Z, &b_piminus_OWNPV_Z);
   fChain->SetBranchAddress("piminus_OWNPV_XERR", &piminus_OWNPV_XERR, &b_piminus_OWNPV_XERR);
   fChain->SetBranchAddress("piminus_OWNPV_YERR", &piminus_OWNPV_YERR, &b_piminus_OWNPV_YERR);
   fChain->SetBranchAddress("piminus_OWNPV_ZERR", &piminus_OWNPV_ZERR, &b_piminus_OWNPV_ZERR);
   fChain->SetBranchAddress("piminus_OWNPV_CHI2", &piminus_OWNPV_CHI2, &b_piminus_OWNPV_CHI2);
   fChain->SetBranchAddress("piminus_OWNPV_NDOF", &piminus_OWNPV_NDOF, &b_piminus_OWNPV_NDOF);
   fChain->SetBranchAddress("piminus_OWNPV_COV_", piminus_OWNPV_COV_, &b_piminus_OWNPV_COV_);
   fChain->SetBranchAddress("piminus_IP_OWNPV", &piminus_IP_OWNPV, &b_piminus_IP_OWNPV);
   fChain->SetBranchAddress("piminus_IPCHI2_OWNPV", &piminus_IPCHI2_OWNPV, &b_piminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("piminus_TOPPV_X", &piminus_TOPPV_X, &b_piminus_TOPPV_X);
   fChain->SetBranchAddress("piminus_TOPPV_Y", &piminus_TOPPV_Y, &b_piminus_TOPPV_Y);
   fChain->SetBranchAddress("piminus_TOPPV_Z", &piminus_TOPPV_Z, &b_piminus_TOPPV_Z);
   fChain->SetBranchAddress("piminus_TOPPV_XERR", &piminus_TOPPV_XERR, &b_piminus_TOPPV_XERR);
   fChain->SetBranchAddress("piminus_TOPPV_YERR", &piminus_TOPPV_YERR, &b_piminus_TOPPV_YERR);
   fChain->SetBranchAddress("piminus_TOPPV_ZERR", &piminus_TOPPV_ZERR, &b_piminus_TOPPV_ZERR);
   fChain->SetBranchAddress("piminus_TOPPV_CHI2", &piminus_TOPPV_CHI2, &b_piminus_TOPPV_CHI2);
   fChain->SetBranchAddress("piminus_TOPPV_NDOF", &piminus_TOPPV_NDOF, &b_piminus_TOPPV_NDOF);
   fChain->SetBranchAddress("piminus_TOPPV_COV_", piminus_TOPPV_COV_, &b_piminus_TOPPV_COV_);
   fChain->SetBranchAddress("piminus_IP_TOPPV", &piminus_IP_TOPPV, &b_piminus_IP_TOPPV);
   fChain->SetBranchAddress("piminus_IPCHI2_TOPPV", &piminus_IPCHI2_TOPPV, &b_piminus_IPCHI2_TOPPV);
   fChain->SetBranchAddress("piminus_ORIVX_X", &piminus_ORIVX_X, &b_piminus_ORIVX_X);
   fChain->SetBranchAddress("piminus_ORIVX_Y", &piminus_ORIVX_Y, &b_piminus_ORIVX_Y);
   fChain->SetBranchAddress("piminus_ORIVX_Z", &piminus_ORIVX_Z, &b_piminus_ORIVX_Z);
   fChain->SetBranchAddress("piminus_ORIVX_XERR", &piminus_ORIVX_XERR, &b_piminus_ORIVX_XERR);
   fChain->SetBranchAddress("piminus_ORIVX_YERR", &piminus_ORIVX_YERR, &b_piminus_ORIVX_YERR);
   fChain->SetBranchAddress("piminus_ORIVX_ZERR", &piminus_ORIVX_ZERR, &b_piminus_ORIVX_ZERR);
   fChain->SetBranchAddress("piminus_ORIVX_CHI2", &piminus_ORIVX_CHI2, &b_piminus_ORIVX_CHI2);
   fChain->SetBranchAddress("piminus_ORIVX_NDOF", &piminus_ORIVX_NDOF, &b_piminus_ORIVX_NDOF);
   fChain->SetBranchAddress("piminus_ORIVX_COV_", piminus_ORIVX_COV_, &b_piminus_ORIVX_COV_);
   fChain->SetBranchAddress("piminus_IP_ORIVX", &piminus_IP_ORIVX, &b_piminus_IP_ORIVX);
   fChain->SetBranchAddress("piminus_IPCHI2_ORIVX", &piminus_IPCHI2_ORIVX, &b_piminus_IPCHI2_ORIVX);
   fChain->SetBranchAddress("piminus_P", &piminus_P, &b_piminus_P);
   fChain->SetBranchAddress("piminus_PT", &piminus_PT, &b_piminus_PT);
   fChain->SetBranchAddress("piminus_PE", &piminus_PE, &b_piminus_PE);
   fChain->SetBranchAddress("piminus_PX", &piminus_PX, &b_piminus_PX);
   fChain->SetBranchAddress("piminus_PY", &piminus_PY, &b_piminus_PY);
   fChain->SetBranchAddress("piminus_PZ", &piminus_PZ, &b_piminus_PZ);
   fChain->SetBranchAddress("piminus_M", &piminus_M, &b_piminus_M);
   fChain->SetBranchAddress("piminus_ID", &piminus_ID, &b_piminus_ID);
   fChain->SetBranchAddress("piminus_PIDe", &piminus_PIDe, &b_piminus_PIDe);
   fChain->SetBranchAddress("piminus_PIDmu", &piminus_PIDmu, &b_piminus_PIDmu);
   fChain->SetBranchAddress("piminus_PIDK", &piminus_PIDK, &b_piminus_PIDK);
   fChain->SetBranchAddress("piminus_PIDp", &piminus_PIDp, &b_piminus_PIDp);
   fChain->SetBranchAddress("piminus_ProbNNe", &piminus_ProbNNe, &b_piminus_ProbNNe);
   fChain->SetBranchAddress("piminus_ProbNNk", &piminus_ProbNNk, &b_piminus_ProbNNk);
   fChain->SetBranchAddress("piminus_ProbNNp", &piminus_ProbNNp, &b_piminus_ProbNNp);
   fChain->SetBranchAddress("piminus_ProbNNpi", &piminus_ProbNNpi, &b_piminus_ProbNNpi);
   fChain->SetBranchAddress("piminus_ProbNNmu", &piminus_ProbNNmu, &b_piminus_ProbNNmu);
   fChain->SetBranchAddress("piminus_ProbNNghost", &piminus_ProbNNghost, &b_piminus_ProbNNghost);
   fChain->SetBranchAddress("piminus_hasMuon", &piminus_hasMuon, &b_piminus_hasMuon);
   fChain->SetBranchAddress("piminus_isMuon", &piminus_isMuon, &b_piminus_isMuon);
   fChain->SetBranchAddress("piminus_hasRich", &piminus_hasRich, &b_piminus_hasRich);
   fChain->SetBranchAddress("piminus_hasCalo", &piminus_hasCalo, &b_piminus_hasCalo);
   fChain->SetBranchAddress("piminus_TRACK_Type", &piminus_TRACK_Type, &b_piminus_TRACK_Type);
   fChain->SetBranchAddress("piminus_TRACK_Key", &piminus_TRACK_Key, &b_piminus_TRACK_Key);
   fChain->SetBranchAddress("piminus_TRACK_CHI2NDOF", &piminus_TRACK_CHI2NDOF, &b_piminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("piminus_TRACK_PCHI2", &piminus_TRACK_PCHI2, &b_piminus_TRACK_PCHI2);
   fChain->SetBranchAddress("piminus_TRACK_MatchCHI2", &piminus_TRACK_MatchCHI2, &b_piminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("piminus_TRACK_GhostProb", &piminus_TRACK_GhostProb, &b_piminus_TRACK_GhostProb);
   fChain->SetBranchAddress("piminus_TRACK_CloneDist", &piminus_TRACK_CloneDist, &b_piminus_TRACK_CloneDist);
   fChain->SetBranchAddress("piminus_TRACK_Likelihood", &piminus_TRACK_Likelihood, &b_piminus_TRACK_Likelihood);
   fChain->SetBranchAddress("Kplus_Chi2_JpsiConstr", &Kplus_Chi2_JpsiConstr, &b_Kplus_Chi2_JpsiConstr);
   fChain->SetBranchAddress("Kplus_DLS", &Kplus_DLS, &b_Kplus_DLS);
   fChain->SetBranchAddress("Kplus_LOKI_DTF_CHI2NDOF", &Kplus_LOKI_DTF_CHI2NDOF, &b_Kplus_LOKI_DTF_CHI2NDOF);
   fChain->SetBranchAddress("Kplus_LOKI_DTF_CTAU", &Kplus_LOKI_DTF_CTAU, &b_Kplus_LOKI_DTF_CTAU);
   fChain->SetBranchAddress("Kplus_LOKI_DTF_CTAUERR", &Kplus_LOKI_DTF_CTAUERR, &b_Kplus_LOKI_DTF_CTAUERR);
   fChain->SetBranchAddress("Kplus_LOKI_DTF_CTAUS", &Kplus_LOKI_DTF_CTAUS, &b_Kplus_LOKI_DTF_CTAUS);
   fChain->SetBranchAddress("Kplus_MassError2_JpsiConstr", &Kplus_MassError2_JpsiConstr, &b_Kplus_MassError2_JpsiConstr);
   fChain->SetBranchAddress("Kplus_Mass_JpsiConstr", &Kplus_Mass_JpsiConstr, &b_Kplus_Mass_JpsiConstr);
   fChain->SetBranchAddress("Kplus_PX_JpsiConstr", &Kplus_PX_JpsiConstr, &b_Kplus_PX_JpsiConstr);
   fChain->SetBranchAddress("Kplus_PX_PiConstr1", &Kplus_PX_PiConstr1, &b_Kplus_PX_PiConstr1);
   fChain->SetBranchAddress("Kplus_PX_PiConstr2", &Kplus_PX_PiConstr2, &b_Kplus_PX_PiConstr2);
   fChain->SetBranchAddress("Kplus_PY_JpsiConstr", &Kplus_PY_JpsiConstr, &b_Kplus_PY_JpsiConstr);
   fChain->SetBranchAddress("Kplus_PY_PiConstr1", &Kplus_PY_PiConstr1, &b_Kplus_PY_PiConstr1);
   fChain->SetBranchAddress("Kplus_PY_PiConstr2", &Kplus_PY_PiConstr2, &b_Kplus_PY_PiConstr2);
   fChain->SetBranchAddress("Kplus_PZ_JpsiConstr", &Kplus_PZ_JpsiConstr, &b_Kplus_PZ_JpsiConstr);
   fChain->SetBranchAddress("Kplus_PZ_PiConstr1", &Kplus_PZ_PiConstr1, &b_Kplus_PZ_PiConstr1);
   fChain->SetBranchAddress("Kplus_PZ_PiConstr2", &Kplus_PZ_PiConstr2, &b_Kplus_PZ_PiConstr2);
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
   fChain->SetBranchAddress("Kplus_TRACK_CHI2NDOF", &Kplus_TRACK_CHI2NDOF, &b_Kplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kplus_TRACK_PCHI2", &Kplus_TRACK_PCHI2, &b_Kplus_TRACK_PCHI2);
   fChain->SetBranchAddress("Kplus_TRACK_MatchCHI2", &Kplus_TRACK_MatchCHI2, &b_Kplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Kplus_TRACK_GhostProb", &Kplus_TRACK_GhostProb, &b_Kplus_TRACK_GhostProb);
   fChain->SetBranchAddress("Kplus_TRACK_CloneDist", &Kplus_TRACK_CloneDist, &b_Kplus_TRACK_CloneDist);
   fChain->SetBranchAddress("Kplus_TRACK_Likelihood", &Kplus_TRACK_Likelihood, &b_Kplus_TRACK_Likelihood);
   fChain->SetBranchAddress("psi_2S_Chi2_JpsiConstr", &psi_2S_Chi2_JpsiConstr, &b_psi_2S_Chi2_JpsiConstr);
   fChain->SetBranchAddress("psi_2S_DLS", &psi_2S_DLS, &b_psi_2S_DLS);
   fChain->SetBranchAddress("psi_2S_LOKI_DTF_CHI2NDOF", &psi_2S_LOKI_DTF_CHI2NDOF, &b_psi_2S_LOKI_DTF_CHI2NDOF);
   fChain->SetBranchAddress("psi_2S_LOKI_DTF_CTAU", &psi_2S_LOKI_DTF_CTAU, &b_psi_2S_LOKI_DTF_CTAU);
   fChain->SetBranchAddress("psi_2S_LOKI_DTF_CTAUERR", &psi_2S_LOKI_DTF_CTAUERR, &b_psi_2S_LOKI_DTF_CTAUERR);
   fChain->SetBranchAddress("psi_2S_LOKI_DTF_CTAUS", &psi_2S_LOKI_DTF_CTAUS, &b_psi_2S_LOKI_DTF_CTAUS);
   fChain->SetBranchAddress("psi_2S_MassError2_JpsiConstr", &psi_2S_MassError2_JpsiConstr, &b_psi_2S_MassError2_JpsiConstr);
   fChain->SetBranchAddress("psi_2S_Mass_JpsiConstr", &psi_2S_Mass_JpsiConstr, &b_psi_2S_Mass_JpsiConstr);
   fChain->SetBranchAddress("psi_2S_PX_JpsiConstr", &psi_2S_PX_JpsiConstr, &b_psi_2S_PX_JpsiConstr);
   fChain->SetBranchAddress("psi_2S_PX_PiConstr1", &psi_2S_PX_PiConstr1, &b_psi_2S_PX_PiConstr1);
   fChain->SetBranchAddress("psi_2S_PX_PiConstr2", &psi_2S_PX_PiConstr2, &b_psi_2S_PX_PiConstr2);
   fChain->SetBranchAddress("psi_2S_PY_JpsiConstr", &psi_2S_PY_JpsiConstr, &b_psi_2S_PY_JpsiConstr);
   fChain->SetBranchAddress("psi_2S_PY_PiConstr1", &psi_2S_PY_PiConstr1, &b_psi_2S_PY_PiConstr1);
   fChain->SetBranchAddress("psi_2S_PY_PiConstr2", &psi_2S_PY_PiConstr2, &b_psi_2S_PY_PiConstr2);
   fChain->SetBranchAddress("psi_2S_PZ_JpsiConstr", &psi_2S_PZ_JpsiConstr, &b_psi_2S_PZ_JpsiConstr);
   fChain->SetBranchAddress("psi_2S_PZ_PiConstr1", &psi_2S_PZ_PiConstr1, &b_psi_2S_PZ_PiConstr1);
   fChain->SetBranchAddress("psi_2S_PZ_PiConstr2", &psi_2S_PZ_PiConstr2, &b_psi_2S_PZ_PiConstr2);
   fChain->SetBranchAddress("psi_2S_MINIP", &psi_2S_MINIP, &b_psi_2S_MINIP);
   fChain->SetBranchAddress("psi_2S_MINIPCHI2", &psi_2S_MINIPCHI2, &b_psi_2S_MINIPCHI2);
   fChain->SetBranchAddress("psi_2S_MINIPNEXTBEST", &psi_2S_MINIPNEXTBEST, &b_psi_2S_MINIPNEXTBEST);
   fChain->SetBranchAddress("psi_2S_MINIPCHI2NEXTBEST", &psi_2S_MINIPCHI2NEXTBEST, &b_psi_2S_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("psi_2S_ENDVERTEX_X", &psi_2S_ENDVERTEX_X, &b_psi_2S_ENDVERTEX_X);
   fChain->SetBranchAddress("psi_2S_ENDVERTEX_Y", &psi_2S_ENDVERTEX_Y, &b_psi_2S_ENDVERTEX_Y);
   fChain->SetBranchAddress("psi_2S_ENDVERTEX_Z", &psi_2S_ENDVERTEX_Z, &b_psi_2S_ENDVERTEX_Z);
   fChain->SetBranchAddress("psi_2S_ENDVERTEX_XERR", &psi_2S_ENDVERTEX_XERR, &b_psi_2S_ENDVERTEX_XERR);
   fChain->SetBranchAddress("psi_2S_ENDVERTEX_YERR", &psi_2S_ENDVERTEX_YERR, &b_psi_2S_ENDVERTEX_YERR);
   fChain->SetBranchAddress("psi_2S_ENDVERTEX_ZERR", &psi_2S_ENDVERTEX_ZERR, &b_psi_2S_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("psi_2S_ENDVERTEX_CHI2", &psi_2S_ENDVERTEX_CHI2, &b_psi_2S_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("psi_2S_ENDVERTEX_NDOF", &psi_2S_ENDVERTEX_NDOF, &b_psi_2S_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("psi_2S_ENDVERTEX_COV_", psi_2S_ENDVERTEX_COV_, &b_psi_2S_ENDVERTEX_COV_);
   fChain->SetBranchAddress("psi_2S_OWNPV_X", &psi_2S_OWNPV_X, &b_psi_2S_OWNPV_X);
   fChain->SetBranchAddress("psi_2S_OWNPV_Y", &psi_2S_OWNPV_Y, &b_psi_2S_OWNPV_Y);
   fChain->SetBranchAddress("psi_2S_OWNPV_Z", &psi_2S_OWNPV_Z, &b_psi_2S_OWNPV_Z);
   fChain->SetBranchAddress("psi_2S_OWNPV_XERR", &psi_2S_OWNPV_XERR, &b_psi_2S_OWNPV_XERR);
   fChain->SetBranchAddress("psi_2S_OWNPV_YERR", &psi_2S_OWNPV_YERR, &b_psi_2S_OWNPV_YERR);
   fChain->SetBranchAddress("psi_2S_OWNPV_ZERR", &psi_2S_OWNPV_ZERR, &b_psi_2S_OWNPV_ZERR);
   fChain->SetBranchAddress("psi_2S_OWNPV_CHI2", &psi_2S_OWNPV_CHI2, &b_psi_2S_OWNPV_CHI2);
   fChain->SetBranchAddress("psi_2S_OWNPV_NDOF", &psi_2S_OWNPV_NDOF, &b_psi_2S_OWNPV_NDOF);
   fChain->SetBranchAddress("psi_2S_OWNPV_COV_", psi_2S_OWNPV_COV_, &b_psi_2S_OWNPV_COV_);
   fChain->SetBranchAddress("psi_2S_IP_OWNPV", &psi_2S_IP_OWNPV, &b_psi_2S_IP_OWNPV);
   fChain->SetBranchAddress("psi_2S_IPCHI2_OWNPV", &psi_2S_IPCHI2_OWNPV, &b_psi_2S_IPCHI2_OWNPV);
   fChain->SetBranchAddress("psi_2S_FD_OWNPV", &psi_2S_FD_OWNPV, &b_psi_2S_FD_OWNPV);
   fChain->SetBranchAddress("psi_2S_FDCHI2_OWNPV", &psi_2S_FDCHI2_OWNPV, &b_psi_2S_FDCHI2_OWNPV);
   fChain->SetBranchAddress("psi_2S_DIRA_OWNPV", &psi_2S_DIRA_OWNPV, &b_psi_2S_DIRA_OWNPV);
   fChain->SetBranchAddress("psi_2S_TOPPV_X", &psi_2S_TOPPV_X, &b_psi_2S_TOPPV_X);
   fChain->SetBranchAddress("psi_2S_TOPPV_Y", &psi_2S_TOPPV_Y, &b_psi_2S_TOPPV_Y);
   fChain->SetBranchAddress("psi_2S_TOPPV_Z", &psi_2S_TOPPV_Z, &b_psi_2S_TOPPV_Z);
   fChain->SetBranchAddress("psi_2S_TOPPV_XERR", &psi_2S_TOPPV_XERR, &b_psi_2S_TOPPV_XERR);
   fChain->SetBranchAddress("psi_2S_TOPPV_YERR", &psi_2S_TOPPV_YERR, &b_psi_2S_TOPPV_YERR);
   fChain->SetBranchAddress("psi_2S_TOPPV_ZERR", &psi_2S_TOPPV_ZERR, &b_psi_2S_TOPPV_ZERR);
   fChain->SetBranchAddress("psi_2S_TOPPV_CHI2", &psi_2S_TOPPV_CHI2, &b_psi_2S_TOPPV_CHI2);
   fChain->SetBranchAddress("psi_2S_TOPPV_NDOF", &psi_2S_TOPPV_NDOF, &b_psi_2S_TOPPV_NDOF);
   fChain->SetBranchAddress("psi_2S_TOPPV_COV_", psi_2S_TOPPV_COV_, &b_psi_2S_TOPPV_COV_);
   fChain->SetBranchAddress("psi_2S_IP_TOPPV", &psi_2S_IP_TOPPV, &b_psi_2S_IP_TOPPV);
   fChain->SetBranchAddress("psi_2S_IPCHI2_TOPPV", &psi_2S_IPCHI2_TOPPV, &b_psi_2S_IPCHI2_TOPPV);
   fChain->SetBranchAddress("psi_2S_FD_TOPPV", &psi_2S_FD_TOPPV, &b_psi_2S_FD_TOPPV);
   fChain->SetBranchAddress("psi_2S_FDCHI2_TOPPV", &psi_2S_FDCHI2_TOPPV, &b_psi_2S_FDCHI2_TOPPV);
   fChain->SetBranchAddress("psi_2S_DIRA_TOPPV", &psi_2S_DIRA_TOPPV, &b_psi_2S_DIRA_TOPPV);
   fChain->SetBranchAddress("psi_2S_ORIVX_X", &psi_2S_ORIVX_X, &b_psi_2S_ORIVX_X);
   fChain->SetBranchAddress("psi_2S_ORIVX_Y", &psi_2S_ORIVX_Y, &b_psi_2S_ORIVX_Y);
   fChain->SetBranchAddress("psi_2S_ORIVX_Z", &psi_2S_ORIVX_Z, &b_psi_2S_ORIVX_Z);
   fChain->SetBranchAddress("psi_2S_ORIVX_XERR", &psi_2S_ORIVX_XERR, &b_psi_2S_ORIVX_XERR);
   fChain->SetBranchAddress("psi_2S_ORIVX_YERR", &psi_2S_ORIVX_YERR, &b_psi_2S_ORIVX_YERR);
   fChain->SetBranchAddress("psi_2S_ORIVX_ZERR", &psi_2S_ORIVX_ZERR, &b_psi_2S_ORIVX_ZERR);
   fChain->SetBranchAddress("psi_2S_ORIVX_CHI2", &psi_2S_ORIVX_CHI2, &b_psi_2S_ORIVX_CHI2);
   fChain->SetBranchAddress("psi_2S_ORIVX_NDOF", &psi_2S_ORIVX_NDOF, &b_psi_2S_ORIVX_NDOF);
   fChain->SetBranchAddress("psi_2S_ORIVX_COV_", psi_2S_ORIVX_COV_, &b_psi_2S_ORIVX_COV_);
   fChain->SetBranchAddress("psi_2S_IP_ORIVX", &psi_2S_IP_ORIVX, &b_psi_2S_IP_ORIVX);
   fChain->SetBranchAddress("psi_2S_IPCHI2_ORIVX", &psi_2S_IPCHI2_ORIVX, &b_psi_2S_IPCHI2_ORIVX);
   fChain->SetBranchAddress("psi_2S_FD_ORIVX", &psi_2S_FD_ORIVX, &b_psi_2S_FD_ORIVX);
   fChain->SetBranchAddress("psi_2S_FDCHI2_ORIVX", &psi_2S_FDCHI2_ORIVX, &b_psi_2S_FDCHI2_ORIVX);
   fChain->SetBranchAddress("psi_2S_DIRA_ORIVX", &psi_2S_DIRA_ORIVX, &b_psi_2S_DIRA_ORIVX);
   fChain->SetBranchAddress("psi_2S_P", &psi_2S_P, &b_psi_2S_P);
   fChain->SetBranchAddress("psi_2S_PT", &psi_2S_PT, &b_psi_2S_PT);
   fChain->SetBranchAddress("psi_2S_PE", &psi_2S_PE, &b_psi_2S_PE);
   fChain->SetBranchAddress("psi_2S_PX", &psi_2S_PX, &b_psi_2S_PX);
   fChain->SetBranchAddress("psi_2S_PY", &psi_2S_PY, &b_psi_2S_PY);
   fChain->SetBranchAddress("psi_2S_PZ", &psi_2S_PZ, &b_psi_2S_PZ);
   fChain->SetBranchAddress("psi_2S_MM", &psi_2S_MM, &b_psi_2S_MM);
   fChain->SetBranchAddress("psi_2S_MMERR", &psi_2S_MMERR, &b_psi_2S_MMERR);
   fChain->SetBranchAddress("psi_2S_M", &psi_2S_M, &b_psi_2S_M);
   fChain->SetBranchAddress("psi_2S_ID", &psi_2S_ID, &b_psi_2S_ID);
   fChain->SetBranchAddress("psi_2S_TAU", &psi_2S_TAU, &b_psi_2S_TAU);
   fChain->SetBranchAddress("psi_2S_TAUERR", &psi_2S_TAUERR, &b_psi_2S_TAUERR);
   fChain->SetBranchAddress("psi_2S_TAUCHI2", &psi_2S_TAUCHI2, &b_psi_2S_TAUCHI2);
   fChain->SetBranchAddress("muminus_Chi2_JpsiConstr", &muminus_Chi2_JpsiConstr, &b_muminus_Chi2_JpsiConstr);
   fChain->SetBranchAddress("muminus_DLS", &muminus_DLS, &b_muminus_DLS);
   fChain->SetBranchAddress("muminus_LOKI_DTF_CHI2NDOF", &muminus_LOKI_DTF_CHI2NDOF, &b_muminus_LOKI_DTF_CHI2NDOF);
   fChain->SetBranchAddress("muminus_LOKI_DTF_CTAU", &muminus_LOKI_DTF_CTAU, &b_muminus_LOKI_DTF_CTAU);
   fChain->SetBranchAddress("muminus_LOKI_DTF_CTAUERR", &muminus_LOKI_DTF_CTAUERR, &b_muminus_LOKI_DTF_CTAUERR);
   fChain->SetBranchAddress("muminus_LOKI_DTF_CTAUS", &muminus_LOKI_DTF_CTAUS, &b_muminus_LOKI_DTF_CTAUS);
   fChain->SetBranchAddress("muminus_MassError2_JpsiConstr", &muminus_MassError2_JpsiConstr, &b_muminus_MassError2_JpsiConstr);
   fChain->SetBranchAddress("muminus_Mass_JpsiConstr", &muminus_Mass_JpsiConstr, &b_muminus_Mass_JpsiConstr);
   fChain->SetBranchAddress("muminus_PX_JpsiConstr", &muminus_PX_JpsiConstr, &b_muminus_PX_JpsiConstr);
   fChain->SetBranchAddress("muminus_PX_PiConstr1", &muminus_PX_PiConstr1, &b_muminus_PX_PiConstr1);
   fChain->SetBranchAddress("muminus_PX_PiConstr2", &muminus_PX_PiConstr2, &b_muminus_PX_PiConstr2);
   fChain->SetBranchAddress("muminus_PY_JpsiConstr", &muminus_PY_JpsiConstr, &b_muminus_PY_JpsiConstr);
   fChain->SetBranchAddress("muminus_PY_PiConstr1", &muminus_PY_PiConstr1, &b_muminus_PY_PiConstr1);
   fChain->SetBranchAddress("muminus_PY_PiConstr2", &muminus_PY_PiConstr2, &b_muminus_PY_PiConstr2);
   fChain->SetBranchAddress("muminus_PZ_JpsiConstr", &muminus_PZ_JpsiConstr, &b_muminus_PZ_JpsiConstr);
   fChain->SetBranchAddress("muminus_PZ_PiConstr1", &muminus_PZ_PiConstr1, &b_muminus_PZ_PiConstr1);
   fChain->SetBranchAddress("muminus_PZ_PiConstr2", &muminus_PZ_PiConstr2, &b_muminus_PZ_PiConstr2);
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
   fChain->SetBranchAddress("muminus_TRACK_CHI2NDOF", &muminus_TRACK_CHI2NDOF, &b_muminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muminus_TRACK_PCHI2", &muminus_TRACK_PCHI2, &b_muminus_TRACK_PCHI2);
   fChain->SetBranchAddress("muminus_TRACK_MatchCHI2", &muminus_TRACK_MatchCHI2, &b_muminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("muminus_TRACK_GhostProb", &muminus_TRACK_GhostProb, &b_muminus_TRACK_GhostProb);
   fChain->SetBranchAddress("muminus_TRACK_CloneDist", &muminus_TRACK_CloneDist, &b_muminus_TRACK_CloneDist);
   fChain->SetBranchAddress("muminus_TRACK_Likelihood", &muminus_TRACK_Likelihood, &b_muminus_TRACK_Likelihood);
   fChain->SetBranchAddress("muplus_Chi2_JpsiConstr", &muplus_Chi2_JpsiConstr, &b_muplus_Chi2_JpsiConstr);
   fChain->SetBranchAddress("muplus_DLS", &muplus_DLS, &b_muplus_DLS);
   fChain->SetBranchAddress("muplus_LOKI_DTF_CHI2NDOF", &muplus_LOKI_DTF_CHI2NDOF, &b_muplus_LOKI_DTF_CHI2NDOF);
   fChain->SetBranchAddress("muplus_LOKI_DTF_CTAU", &muplus_LOKI_DTF_CTAU, &b_muplus_LOKI_DTF_CTAU);
   fChain->SetBranchAddress("muplus_LOKI_DTF_CTAUERR", &muplus_LOKI_DTF_CTAUERR, &b_muplus_LOKI_DTF_CTAUERR);
   fChain->SetBranchAddress("muplus_LOKI_DTF_CTAUS", &muplus_LOKI_DTF_CTAUS, &b_muplus_LOKI_DTF_CTAUS);
   fChain->SetBranchAddress("muplus_MassError2_JpsiConstr", &muplus_MassError2_JpsiConstr, &b_muplus_MassError2_JpsiConstr);
   fChain->SetBranchAddress("muplus_Mass_JpsiConstr", &muplus_Mass_JpsiConstr, &b_muplus_Mass_JpsiConstr);
   fChain->SetBranchAddress("muplus_PX_JpsiConstr", &muplus_PX_JpsiConstr, &b_muplus_PX_JpsiConstr);
   fChain->SetBranchAddress("muplus_PX_PiConstr1", &muplus_PX_PiConstr1, &b_muplus_PX_PiConstr1);
   fChain->SetBranchAddress("muplus_PX_PiConstr2", &muplus_PX_PiConstr2, &b_muplus_PX_PiConstr2);
   fChain->SetBranchAddress("muplus_PY_JpsiConstr", &muplus_PY_JpsiConstr, &b_muplus_PY_JpsiConstr);
   fChain->SetBranchAddress("muplus_PY_PiConstr1", &muplus_PY_PiConstr1, &b_muplus_PY_PiConstr1);
   fChain->SetBranchAddress("muplus_PY_PiConstr2", &muplus_PY_PiConstr2, &b_muplus_PY_PiConstr2);
   fChain->SetBranchAddress("muplus_PZ_JpsiConstr", &muplus_PZ_JpsiConstr, &b_muplus_PZ_JpsiConstr);
   fChain->SetBranchAddress("muplus_PZ_PiConstr1", &muplus_PZ_PiConstr1, &b_muplus_PZ_PiConstr1);
   fChain->SetBranchAddress("muplus_PZ_PiConstr2", &muplus_PZ_PiConstr2, &b_muplus_PZ_PiConstr2);
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
   fChain->SetBranchAddress("muplus_TRACK_CHI2NDOF", &muplus_TRACK_CHI2NDOF, &b_muplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muplus_TRACK_PCHI2", &muplus_TRACK_PCHI2, &b_muplus_TRACK_PCHI2);
   fChain->SetBranchAddress("muplus_TRACK_MatchCHI2", &muplus_TRACK_MatchCHI2, &b_muplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("muplus_TRACK_GhostProb", &muplus_TRACK_GhostProb, &b_muplus_TRACK_GhostProb);
   fChain->SetBranchAddress("muplus_TRACK_CloneDist", &muplus_TRACK_CloneDist, &b_muplus_TRACK_CloneDist);
   fChain->SetBranchAddress("muplus_TRACK_Likelihood", &muplus_TRACK_Likelihood, &b_muplus_TRACK_Likelihood);
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
   fChain->SetBranchAddress("L0MuonDecision", &L0MuonDecision, &b_L0MuonDecision);
   fChain->SetBranchAddress("L0DiMuonDecision", &L0DiMuonDecision, &b_L0DiMuonDecision);
   fChain->SetBranchAddress("L0nSelections", &L0nSelections, &b_L0nSelections);
   fChain->SetBranchAddress("Hlt1DiMuonHighMassDecision", &Hlt1DiMuonHighMassDecision, &b_Hlt1DiMuonHighMassDecision);
   fChain->SetBranchAddress("Hlt1DiMuonLowMassDecision", &Hlt1DiMuonLowMassDecision, &b_Hlt1DiMuonLowMassDecision);
   fChain->SetBranchAddress("Hlt1SingleMuonNoIPDecision", &Hlt1SingleMuonNoIPDecision, &b_Hlt1SingleMuonNoIPDecision);
   fChain->SetBranchAddress("Hlt1SingleMuonHighPTDecision", &Hlt1SingleMuonHighPTDecision, &b_Hlt1SingleMuonHighPTDecision);
   fChain->SetBranchAddress("Hlt1TrackAllL0Decision", &Hlt1TrackAllL0Decision, &b_Hlt1TrackAllL0Decision);
   fChain->SetBranchAddress("Hlt1TrackMuonDecision", &Hlt1TrackMuonDecision, &b_Hlt1TrackMuonDecision);
   fChain->SetBranchAddress("Hlt1TrackPhotonDecision", &Hlt1TrackPhotonDecision, &b_Hlt1TrackPhotonDecision);
   fChain->SetBranchAddress("Hlt1L0AnyDecision", &Hlt1L0AnyDecision, &b_Hlt1L0AnyDecision);
   fChain->SetBranchAddress("Hlt1nSelections", &Hlt1nSelections, &b_Hlt1nSelections);
   fChain->SetBranchAddress("Hlt2MuonFromHLT1Decision", &Hlt2MuonFromHLT1Decision, &b_Hlt2MuonFromHLT1Decision);
   fChain->SetBranchAddress("Hlt2SingleMuonDecision", &Hlt2SingleMuonDecision, &b_Hlt2SingleMuonDecision);
   fChain->SetBranchAddress("Hlt2SingleMuonHighPTDecision", &Hlt2SingleMuonHighPTDecision, &b_Hlt2SingleMuonHighPTDecision);
   fChain->SetBranchAddress("Hlt2SingleMuonLowPTDecision", &Hlt2SingleMuonLowPTDecision, &b_Hlt2SingleMuonLowPTDecision);
   fChain->SetBranchAddress("Hlt2DiMuonDecision", &Hlt2DiMuonDecision, &b_Hlt2DiMuonDecision);
   fChain->SetBranchAddress("Hlt2DiMuonPsi2SDecision", &Hlt2DiMuonPsi2SDecision, &b_Hlt2DiMuonPsi2SDecision);
   fChain->SetBranchAddress("Hlt2DiMuonDetachedDecision", &Hlt2DiMuonDetachedDecision, &b_Hlt2DiMuonDetachedDecision);
   fChain->SetBranchAddress("Hlt2DiMuonDetachedHeavyDecision", &Hlt2DiMuonDetachedHeavyDecision, &b_Hlt2DiMuonDetachedHeavyDecision);
   fChain->SetBranchAddress("Hlt2DiMuonDetachedPsi2SDecision", &Hlt2DiMuonDetachedPsi2SDecision, &b_Hlt2DiMuonDetachedPsi2SDecision);
   fChain->SetBranchAddress("Hlt2DiMuonNoPVDecision", &Hlt2DiMuonNoPVDecision, &b_Hlt2DiMuonNoPVDecision);
   fChain->SetBranchAddress("Hlt2nSelections", &Hlt2nSelections, &b_Hlt2nSelections);
   fChain->SetBranchAddress("MaxRoutingBits", &MaxRoutingBits, &b_MaxRoutingBits);
   fChain->SetBranchAddress("RoutingBits", RoutingBits, &b_RoutingBits);
   fChain->SetBranchAddress("ipmin", &ipmin, &b_ipmin);
   fChain->SetBranchAddress("ipmax", &ipmax, &b_ipmax);
   fChain->SetBranchAddress("ptsum", &ptsum, &b_ptsum);
   fChain->SetBranchAddress("k_pidk", &k_pidk, &b_k_pidk);
   fChain->SetBranchAddress("k_pidpi", &k_pidpi, &b_k_pidpi);
   fChain->SetBranchAddress("pi_pidk", &pi_pidk, &b_pi_pidpk);
   fChain->SetBranchAddress("pi_pidpi", &pi_pidpi, &b_pi_pidpi);
   fChain->SetBranchAddress("mphi", &mphi, &b_mphi);
   fChain->SetBranchAddress("mkstar", &mkstar, &b_mkstar);
   fChain->SetBranchAddress("mpsipi", &mpsipi, &b_mpsipi);
   fChain->SetBranchAddress("mlb", &mlb, &b_mlb);
   fChain->SetBranchAddress("mbs", &mbs, &b_mbs);
   fChain->SetBranchAddress("normptsum", &normptsum, &b_normptsum);
   fChain->SetBranchAddress("normbpt", &normbpt, &b_normbpt);
   fChain->SetBranchAddress("logipmin", &logipmin, &b_logipmin);
   fChain->SetBranchAddress("logipmax", &logipmax, &b_logipmax);
   fChain->SetBranchAddress("logfd", &logfd, &b_logfd);
   fChain->SetBranchAddress("logvd", &logvd, &b_logfvd);
   fChain->SetBranchAddress("bdt", &bdt, &b_bdt);
   fChain->SetBranchAddress("bdtd", &bdtd, &b_bdtd);
   fChain->SetBranchAddress("bdtg", &bdtg, &b_bdtg);
   fChain->SetBranchAddress("bdtg3", &bdtg3, &b_bdtg3);
   fChain->SetBranchAddress("bdtg4", &bdtg4, &b_bdtg4);
   fChain->SetBranchAddress("mlp", &mlp, &b_mlp);
   fChain->SetBranchAddress("mbpipi", &mbpipi, &b_mbpipi);
   fChain->SetBranchAddress("mbk", &mbk, &b_mbk);
   fChain->SetBranchAddress("mlb2", &mlb2, &b_mlb2);
   fChain->SetBranchAddress("hasBestVtxChi2", &hasBestVtxChi2, &b_hasBestVtxChi2);
   fChain->SetBranchAddress("Nsig_sw", &Nsig_sw, &b_Nsig_sw);
   fChain->SetBranchAddress("Nbkg_sw", &Nbkg_sw, &b_Nbkg_sw);
   fChain->SetBranchAddress("L_Nsig", &L_Nsig, &b_L_Nsig);
   fChain->SetBranchAddress("L_Nbkg", &L_Nbkg, &b_L_Nbkg);
   fChain->SetBranchAddress("Nsig2_sw", &Nsig2_sw, &b_Nsig2_sw);
   fChain->SetBranchAddress("Nref_sw", &Nref_sw, &b_Nref_sw);
   fChain->SetBranchAddress("L_Nsig2", &L_Nsig2, &b_L_Nsig2);
   fChain->SetBranchAddress("L_Nref", &L_Nref, &b_L_Nref);
   Notify();
}

Bool_t write_out_angles::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void write_out_angles::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t write_out_angles::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef write_out_angles_cxx
