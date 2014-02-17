//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jul  1 18:29:02 2013 by ROOT version 5.34/05
// from TTree DecayTree/DecayTree
// found on file: ../../data/Lambdab0_Standard_Data.root
//////////////////////////////////////////////////////////

#ifndef Lambdab2JpsiLambda_reflections_h
#define Lambdab2JpsiLambda_reflections_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxb_particle_ENDVERTEX_COV = 1;
const Int_t kMaxb_particle_OWNPV_COV = 1;
const Int_t kMaxb_particle_TOPPV_COV = 1;
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
const Int_t kMaxLambda0_ENDVERTEX_COV = 1;
const Int_t kMaxLambda0_OWNPV_COV = 1;
const Int_t kMaxLambda0_TOPPV_COV = 1;
const Int_t kMaxLambda0_ORIVX_COV = 1;
const Int_t kMaxpiminus_OWNPV_COV = 1;
const Int_t kMaxpiminus_TOPPV_COV = 1;
const Int_t kMaxpiminus_ORIVX_COV = 1;
const Int_t kMaxpplus_OWNPV_COV = 1;
const Int_t kMaxpplus_TOPPV_COV = 1;
const Int_t kMaxpplus_ORIVX_COV = 1;

class Lambdab2JpsiLambda_reflections {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        b_particle_LOKI_BPVDLS;
   Double_t        b_particle_LOKI_DOCAZ;
   Double_t        b_particle_LOKI_ETA;
   Double_t        b_particle_LOKI_MIPCHI2DV;
   Double_t        b_particle_LOKI_PHI;
   Double_t        b_particle_LOKI_VCHI2PDOF;
   Double_t        b_particle_MINIP;
   Double_t        b_particle_MINIPCHI2;
   Double_t        b_particle_MINIPNEXTBEST;
   Double_t        b_particle_MINIPCHI2NEXTBEST;
   Double_t        b_particle_ENDVERTEX_X;
   Double_t        b_particle_ENDVERTEX_Y;
   Double_t        b_particle_ENDVERTEX_Z;
   Double_t        b_particle_ENDVERTEX_XERR;
   Double_t        b_particle_ENDVERTEX_YERR;
   Double_t        b_particle_ENDVERTEX_ZERR;
   Double_t        b_particle_ENDVERTEX_CHI2;
   Int_t           b_particle_ENDVERTEX_NDOF;
   Float_t         b_particle_ENDVERTEX_COV_[3][3];
   Double_t        b_particle_OWNPV_X;
   Double_t        b_particle_OWNPV_Y;
   Double_t        b_particle_OWNPV_Z;
   Double_t        b_particle_OWNPV_XERR;
   Double_t        b_particle_OWNPV_YERR;
   Double_t        b_particle_OWNPV_ZERR;
   Double_t        b_particle_OWNPV_CHI2;
   Int_t           b_particle_OWNPV_NDOF;
   Float_t         b_particle_OWNPV_COV_[3][3];
   Double_t        b_particle_IP_OWNPV;
   Double_t        b_particle_IPCHI2_OWNPV;
   Double_t        b_particle_FD_OWNPV;
   Double_t        b_particle_FDCHI2_OWNPV;
   Double_t        b_particle_DIRA_OWNPV;
   Double_t        b_particle_TOPPV_X;
   Double_t        b_particle_TOPPV_Y;
   Double_t        b_particle_TOPPV_Z;
   Double_t        b_particle_TOPPV_XERR;
   Double_t        b_particle_TOPPV_YERR;
   Double_t        b_particle_TOPPV_ZERR;
   Double_t        b_particle_TOPPV_CHI2;
   Int_t           b_particle_TOPPV_NDOF;
   Float_t         b_particle_TOPPV_COV_[3][3];
   Double_t        b_particle_IP_TOPPV;
   Double_t        b_particle_IPCHI2_TOPPV;
   Double_t        b_particle_FD_TOPPV;
   Double_t        b_particle_FDCHI2_TOPPV;
   Double_t        b_particle_DIRA_TOPPV;
   Double_t        b_particle_P;
   Double_t        b_particle_PT;
   Double_t        b_particle_PE;
   Double_t        b_particle_PX;
   Double_t        b_particle_PY;
   Double_t        b_particle_PZ;
   Double_t        b_particle_MM;
   Double_t        b_particle_MMERR;
   Double_t        b_particle_M;
   Int_t           b_particle_ID;
   Double_t        b_particle_TAU;
   Double_t        b_particle_TAUERR;
   Double_t        b_particle_TAUCHI2;
   Bool_t          b_particleL0Global_Dec;
   Bool_t          b_particleL0Global_TIS;
   Bool_t          b_particleL0Global_TOS;
   Bool_t          b_particleHlt1Global_Dec;
   Bool_t          b_particleHlt1Global_TIS;
   Bool_t          b_particleHlt1Global_TOS;
   Bool_t          b_particleHlt1Phys_Dec;
   Bool_t          b_particleHlt1Phys_TIS;
   Bool_t          b_particleHlt1Phys_TOS;
   Bool_t          b_particleHlt2Global_Dec;
   Bool_t          b_particleHlt2Global_TIS;
   Bool_t          b_particleHlt2Global_TOS;
   Bool_t          b_particleHlt2Phys_Dec;
   Bool_t          b_particleHlt2Phys_TIS;
   Bool_t          b_particleHlt2Phys_TOS;
   Bool_t          b_particleStrippingGlobal_Dec;
   Bool_t          b_particleStrippingGlobal_TIS;
   Bool_t          b_particleStrippingGlobal_TOS;
   Bool_t          b_particleHlt1DiMuonHighMassDecision_Dec;
   Bool_t          b_particleHlt1DiMuonHighMassDecision_TIS;
   Bool_t          b_particleHlt1DiMuonHighMassDecision_TOS;
   Bool_t          b_particleHlt1TrackAllL0Decision_Dec;
   Bool_t          b_particleHlt1TrackAllL0Decision_TIS;
   Bool_t          b_particleHlt1TrackAllL0Decision_TOS;
   Bool_t          b_particleHlt1TrackMuonDecision_Dec;
   Bool_t          b_particleHlt1TrackMuonDecision_TIS;
   Bool_t          b_particleHlt1TrackMuonDecision_TOS;
   Bool_t          b_particleHlt1DiMuonNoIPL0DiDecision_Dec;
   Bool_t          b_particleHlt1DiMuonNoIPL0DiDecision_TIS;
   Bool_t          b_particleHlt1DiMuonNoIPL0DiDecision_TOS;
   Bool_t          b_particleHlt1SingleMuonNoIPL0Decision_Dec;
   Bool_t          b_particleHlt1SingleMuonNoIPL0Decision_TIS;
   Bool_t          b_particleHlt1SingleMuonNoIPL0Decision_TOS;
   Bool_t          b_particleHlt2DiMuonJPsiDecision_Dec;
   Bool_t          b_particleHlt2DiMuonJPsiDecision_TIS;
   Bool_t          b_particleHlt2DiMuonJPsiDecision_TOS;
   Bool_t          b_particleHlt2DiMuonDetachedJPsiDecision_Dec;
   Bool_t          b_particleHlt2DiMuonDetachedJPsiDecision_TIS;
   Bool_t          b_particleHlt2DiMuonDetachedJPsiDecision_TOS;
   Bool_t          b_particleHlt2DiMuonUnbiasedJPsiDecision_Dec;
   Bool_t          b_particleHlt2DiMuonUnbiasedJPsiDecision_TIS;
   Bool_t          b_particleHlt2DiMuonUnbiasedJPsiDecision_TOS;
   Int_t           b_particle_MassFitConsAll_nPV;
   Float_t         b_particle_MassFitConsAll_M[10];   //[b_particle_MassFitConsAll_nPV]
   Float_t         b_particle_MassFitConsAll_MERR[10];   //[b_particle_MassFitConsAll_nPV]
   Float_t         b_particle_MassFitConsAll_P[10];   //[b_particle_MassFitConsAll_nPV]
   Float_t         b_particle_MassFitConsAll_PERR[10];   //[b_particle_MassFitConsAll_nPV]
   Float_t         b_particle_MassFitConsAll_chi2_B[10];   //[b_particle_MassFitConsAll_nPV]
   Float_t         b_particle_MassFitConsAll_nDOF[10];   //[b_particle_MassFitConsAll_nPV]
   Float_t         b_particle_MassFitConsAll_nIter[10];   //[b_particle_MassFitConsAll_nPV]
   Float_t         b_particle_MassFitConsAll_status[10];   //[b_particle_MassFitConsAll_nPV]
   Int_t           b_particle_MassFitConsJpsi_nPV;
   Float_t         b_particle_MassFitConsJpsi_M[10];   //[b_particle_MassFitConsJpsi_nPV]
   Float_t         b_particle_MassFitConsJpsi_MERR[10];   //[b_particle_MassFitConsJpsi_nPV]
   Float_t         b_particle_MassFitConsJpsi_P[10];   //[b_particle_MassFitConsJpsi_nPV]
   Float_t         b_particle_MassFitConsJpsi_PERR[10];   //[b_particle_MassFitConsJpsi_nPV]
   Float_t         b_particle_MassFitConsJpsi_chi2_B[10];   //[b_particle_MassFitConsJpsi_nPV]
   Float_t         b_particle_MassFitConsJpsi_nDOF[10];   //[b_particle_MassFitConsJpsi_nPV]
   Float_t         b_particle_MassFitConsJpsi_nIter[10];   //[b_particle_MassFitConsJpsi_nPV]
   Float_t         b_particle_MassFitConsJpsi_status[10];   //[b_particle_MassFitConsJpsi_nPV]
   Int_t           b_particle_StandardLifetimeFit_nPV;
   Float_t         b_particle_StandardLifetimeFit_J_psi_1S_M[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_J_psi_1S_MERR[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_J_psi_1S_P[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_J_psi_1S_PERR[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_J_psi_1S_ctau[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_J_psi_1S_ctauErr[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_J_psi_1S_decayLength[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_J_psi_1S_decayLengthErr[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_Lambda0_M[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_Lambda0_MERR[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_Lambda0_P[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_Lambda0_PERR[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_Lambda0_ctau[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_Lambda0_ctauErr[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_Lambda0_decayLength[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_Lambda0_decayLengthErr[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_M[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_MERR[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_P[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_PERR[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_PV_X[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_PV_Y[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_PV_Z[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_PV_key[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_chi2_B[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_ctau[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_ctauErr[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_decayLength[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_decayLengthErr[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_nDOF[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_nIter[10];   //[b_particle_StandardLifetimeFit_nPV]
   Float_t         b_particle_StandardLifetimeFit_status[10];   //[b_particle_StandardLifetimeFit_nPV]
   ULong64_t       b_particle_ModifiedPVPseudoLifetimeFit_NumberOfRemovedTracks;
   ULong64_t       b_particle_ModifiedPVPseudoLifetimeFit_AllRefittedVertices;
   Int_t           b_particle_ModifiedPVPseudoLifetimeFit_RefittedPVs;
   Int_t           b_particle_ModifiedPVPseudoLifetimeFit_nPV;
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_IP[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_IPCHI2[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_M[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_MERR[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_P[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_PERR[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_ctau[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_ctauErr[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_decayLength[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_decayLengthErr[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_M[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_MERR[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_P[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_PERR[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_ctau[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_ctauErr[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_decayLength[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_decayLengthErr[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_M[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_MERR[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_P[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_PERR[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_PV_X[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_PV_Y[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_PV_Z[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_PV_key[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_chi2_B[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_ctau[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_ctauErr[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_decayLength[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_decayLengthErr[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_nDOF[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_nIter[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVPseudoLifetimeFit_status[500];   //[b_particle_ModifiedPVPseudoLifetimeFit_nPV]
   ULong64_t       b_particle_ModifiedPVStandardLifetimeFit_NumberOfRemovedTracks;
   ULong64_t       b_particle_ModifiedPVStandardLifetimeFit_AllRefittedVertices;
   Int_t           b_particle_ModifiedPVStandardLifetimeFit_RefittedPVs;
   Int_t           b_particle_ModifiedPVStandardLifetimeFit_nPV;
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_IP[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_IPCHI2[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_M[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_MERR[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_P[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_PERR[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_ctau[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_ctauErr[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_decayLength[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_decayLengthErr[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_Lambda0_M[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_Lambda0_MERR[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_Lambda0_P[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_Lambda0_PERR[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_Lambda0_ctau[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_Lambda0_ctauErr[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_Lambda0_decayLength[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_Lambda0_decayLengthErr[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_M[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_MERR[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_P[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_PERR[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_PV_X[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_PV_Y[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_PV_Z[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_PV_key[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_chi2_B[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_ctau[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_ctauErr[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_decayLength[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_decayLengthErr[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_nDOF[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_nIter[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Float_t         b_particle_ModifiedPVStandardLifetimeFit_status[500];   //[b_particle_ModifiedPVStandardLifetimeFit_nPV]
   Double_t        J_psi_1S_LOKI_BPVDLS;
   Double_t        J_psi_1S_LOKI_DOCAZ;
   Double_t        J_psi_1S_LOKI_ETA;
   Double_t        J_psi_1S_LOKI_MIPCHI2DV;
   Double_t        J_psi_1S_LOKI_PHI;
   Double_t        J_psi_1S_LOKI_VCHI2PDOF;
   Double_t        J_psi_1S_CosTheta;
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
   Bool_t          J_psi_1SL0Global_Dec;
   Bool_t          J_psi_1SL0Global_TIS;
   Bool_t          J_psi_1SL0Global_TOS;
   Bool_t          J_psi_1SHlt1Global_Dec;
   Bool_t          J_psi_1SHlt1Global_TIS;
   Bool_t          J_psi_1SHlt1Global_TOS;
   Bool_t          J_psi_1SHlt1Phys_Dec;
   Bool_t          J_psi_1SHlt1Phys_TIS;
   Bool_t          J_psi_1SHlt1Phys_TOS;
   Bool_t          J_psi_1SHlt2Global_Dec;
   Bool_t          J_psi_1SHlt2Global_TIS;
   Bool_t          J_psi_1SHlt2Global_TOS;
   Bool_t          J_psi_1SHlt2Phys_Dec;
   Bool_t          J_psi_1SHlt2Phys_TIS;
   Bool_t          J_psi_1SHlt2Phys_TOS;
   Bool_t          J_psi_1SStrippingGlobal_Dec;
   Bool_t          J_psi_1SStrippingGlobal_TIS;
   Bool_t          J_psi_1SStrippingGlobal_TOS;
   Bool_t          J_psi_1SHlt1DiMuonHighMassDecision_Dec;
   Bool_t          J_psi_1SHlt1DiMuonHighMassDecision_TIS;
   Bool_t          J_psi_1SHlt1DiMuonHighMassDecision_TOS;
   Bool_t          J_psi_1SHlt1TrackAllL0Decision_Dec;
   Bool_t          J_psi_1SHlt1TrackAllL0Decision_TIS;
   Bool_t          J_psi_1SHlt1TrackAllL0Decision_TOS;
   Bool_t          J_psi_1SHlt1TrackMuonDecision_Dec;
   Bool_t          J_psi_1SHlt1TrackMuonDecision_TIS;
   Bool_t          J_psi_1SHlt1TrackMuonDecision_TOS;
   Bool_t          J_psi_1SHlt1DiMuonNoIPL0DiDecision_Dec;
   Bool_t          J_psi_1SHlt1DiMuonNoIPL0DiDecision_TIS;
   Bool_t          J_psi_1SHlt1DiMuonNoIPL0DiDecision_TOS;
   Bool_t          J_psi_1SHlt1SingleMuonNoIPL0Decision_Dec;
   Bool_t          J_psi_1SHlt1SingleMuonNoIPL0Decision_TIS;
   Bool_t          J_psi_1SHlt1SingleMuonNoIPL0Decision_TOS;
   Bool_t          J_psi_1SHlt2DiMuonJPsiDecision_Dec;
   Bool_t          J_psi_1SHlt2DiMuonJPsiDecision_TIS;
   Bool_t          J_psi_1SHlt2DiMuonJPsiDecision_TOS;
   Bool_t          J_psi_1SHlt2DiMuonDetachedJPsiDecision_Dec;
   Bool_t          J_psi_1SHlt2DiMuonDetachedJPsiDecision_TIS;
   Bool_t          J_psi_1SHlt2DiMuonDetachedJPsiDecision_TOS;
   Bool_t          J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_Dec;
   Bool_t          J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_TIS;
   Bool_t          J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_TOS;
   Double_t        muminus_LOKI_BPVDLS;
   Double_t        muminus_LOKI_DOCAZ;
   Double_t        muminus_LOKI_ETA;
   Double_t        muminus_LOKI_MIPCHI2DV;
   Double_t        muminus_LOKI_PHI;
   Double_t        muminus_LOKI_VCHI2PDOF;
   Double_t        muminus_CosTheta;
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
   Bool_t          muminusL0Global_Dec;
   Bool_t          muminusL0Global_TIS;
   Bool_t          muminusL0Global_TOS;
   Bool_t          muminusHlt1Global_Dec;
   Bool_t          muminusHlt1Global_TIS;
   Bool_t          muminusHlt1Global_TOS;
   Bool_t          muminusHlt1Phys_Dec;
   Bool_t          muminusHlt1Phys_TIS;
   Bool_t          muminusHlt1Phys_TOS;
   Bool_t          muminusHlt2Global_Dec;
   Bool_t          muminusHlt2Global_TIS;
   Bool_t          muminusHlt2Global_TOS;
   Bool_t          muminusHlt2Phys_Dec;
   Bool_t          muminusHlt2Phys_TIS;
   Bool_t          muminusHlt2Phys_TOS;
   Bool_t          muminusStrippingGlobal_Dec;
   Bool_t          muminusStrippingGlobal_TIS;
   Bool_t          muminusStrippingGlobal_TOS;
   Bool_t          muminusHlt1DiMuonHighMassDecision_Dec;
   Bool_t          muminusHlt1DiMuonHighMassDecision_TIS;
   Bool_t          muminusHlt1DiMuonHighMassDecision_TOS;
   Bool_t          muminusHlt1TrackAllL0Decision_Dec;
   Bool_t          muminusHlt1TrackAllL0Decision_TIS;
   Bool_t          muminusHlt1TrackAllL0Decision_TOS;
   Bool_t          muminusHlt1TrackMuonDecision_Dec;
   Bool_t          muminusHlt1TrackMuonDecision_TIS;
   Bool_t          muminusHlt1TrackMuonDecision_TOS;
   Bool_t          muminusHlt1DiMuonNoIPL0DiDecision_Dec;
   Bool_t          muminusHlt1DiMuonNoIPL0DiDecision_TIS;
   Bool_t          muminusHlt1DiMuonNoIPL0DiDecision_TOS;
   Bool_t          muminusHlt1SingleMuonNoIPL0Decision_Dec;
   Bool_t          muminusHlt1SingleMuonNoIPL0Decision_TIS;
   Bool_t          muminusHlt1SingleMuonNoIPL0Decision_TOS;
   Bool_t          muminusHlt2DiMuonJPsiDecision_Dec;
   Bool_t          muminusHlt2DiMuonJPsiDecision_TIS;
   Bool_t          muminusHlt2DiMuonJPsiDecision_TOS;
   Bool_t          muminusHlt2DiMuonDetachedJPsiDecision_Dec;
   Bool_t          muminusHlt2DiMuonDetachedJPsiDecision_TIS;
   Bool_t          muminusHlt2DiMuonDetachedJPsiDecision_TOS;
   Bool_t          muminusHlt2DiMuonUnbiasedJPsiDecision_Dec;
   Bool_t          muminusHlt2DiMuonUnbiasedJPsiDecision_TIS;
   Bool_t          muminusHlt2DiMuonUnbiasedJPsiDecision_TOS;
   Int_t           muminus_TRACK_Type;
   Int_t           muminus_TRACK_Key;
   Double_t        muminus_TRACK_CHI2NDOF;
   Double_t        muminus_TRACK_PCHI2;
   Bool_t          muminus_hasTT;
   Bool_t          muminus_hasT;
   Double_t        muminus_TRACK_MatchCHI2;
   Double_t        muminus_VELO_UTID;
   Double_t        muminus_VeloHits;
   Double_t        muminus_TRACK_GhostProb;
   Double_t        muminus_TRACK_CloneDist;
   Double_t        muplus_LOKI_BPVDLS;
   Double_t        muplus_LOKI_DOCAZ;
   Double_t        muplus_LOKI_ETA;
   Double_t        muplus_LOKI_MIPCHI2DV;
   Double_t        muplus_LOKI_PHI;
   Double_t        muplus_LOKI_VCHI2PDOF;
   Double_t        muplus_CosTheta;
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
   Bool_t          muplusL0Global_Dec;
   Bool_t          muplusL0Global_TIS;
   Bool_t          muplusL0Global_TOS;
   Bool_t          muplusHlt1Global_Dec;
   Bool_t          muplusHlt1Global_TIS;
   Bool_t          muplusHlt1Global_TOS;
   Bool_t          muplusHlt1Phys_Dec;
   Bool_t          muplusHlt1Phys_TIS;
   Bool_t          muplusHlt1Phys_TOS;
   Bool_t          muplusHlt2Global_Dec;
   Bool_t          muplusHlt2Global_TIS;
   Bool_t          muplusHlt2Global_TOS;
   Bool_t          muplusHlt2Phys_Dec;
   Bool_t          muplusHlt2Phys_TIS;
   Bool_t          muplusHlt2Phys_TOS;
   Bool_t          muplusStrippingGlobal_Dec;
   Bool_t          muplusStrippingGlobal_TIS;
   Bool_t          muplusStrippingGlobal_TOS;
   Bool_t          muplusHlt1DiMuonHighMassDecision_Dec;
   Bool_t          muplusHlt1DiMuonHighMassDecision_TIS;
   Bool_t          muplusHlt1DiMuonHighMassDecision_TOS;
   Bool_t          muplusHlt1TrackAllL0Decision_Dec;
   Bool_t          muplusHlt1TrackAllL0Decision_TIS;
   Bool_t          muplusHlt1TrackAllL0Decision_TOS;
   Bool_t          muplusHlt1TrackMuonDecision_Dec;
   Bool_t          muplusHlt1TrackMuonDecision_TIS;
   Bool_t          muplusHlt1TrackMuonDecision_TOS;
   Bool_t          muplusHlt1DiMuonNoIPL0DiDecision_Dec;
   Bool_t          muplusHlt1DiMuonNoIPL0DiDecision_TIS;
   Bool_t          muplusHlt1DiMuonNoIPL0DiDecision_TOS;
   Bool_t          muplusHlt1SingleMuonNoIPL0Decision_Dec;
   Bool_t          muplusHlt1SingleMuonNoIPL0Decision_TIS;
   Bool_t          muplusHlt1SingleMuonNoIPL0Decision_TOS;
   Bool_t          muplusHlt2DiMuonJPsiDecision_Dec;
   Bool_t          muplusHlt2DiMuonJPsiDecision_TIS;
   Bool_t          muplusHlt2DiMuonJPsiDecision_TOS;
   Bool_t          muplusHlt2DiMuonDetachedJPsiDecision_Dec;
   Bool_t          muplusHlt2DiMuonDetachedJPsiDecision_TIS;
   Bool_t          muplusHlt2DiMuonDetachedJPsiDecision_TOS;
   Bool_t          muplusHlt2DiMuonUnbiasedJPsiDecision_Dec;
   Bool_t          muplusHlt2DiMuonUnbiasedJPsiDecision_TIS;
   Bool_t          muplusHlt2DiMuonUnbiasedJPsiDecision_TOS;
   Int_t           muplus_TRACK_Type;
   Int_t           muplus_TRACK_Key;
   Double_t        muplus_TRACK_CHI2NDOF;
   Double_t        muplus_TRACK_PCHI2;
   Bool_t          muplus_hasTT;
   Bool_t          muplus_hasT;
   Double_t        muplus_TRACK_MatchCHI2;
   Double_t        muplus_VELO_UTID;
   Double_t        muplus_VeloHits;
   Double_t        muplus_TRACK_GhostProb;
   Double_t        muplus_TRACK_CloneDist;
   Double_t        Lambda0_LOKI_BPVDLS;
   Double_t        Lambda0_LOKI_DOCAZ;
   Double_t        Lambda0_LOKI_ETA;
   Double_t        Lambda0_LOKI_MIPCHI2DV;
   Double_t        Lambda0_LOKI_PHI;
   Double_t        Lambda0_LOKI_VCHI2PDOF;
   Double_t        Lambda0_CosTheta;
   Double_t        Lambda0_MINIP;
   Double_t        Lambda0_MINIPCHI2;
   Double_t        Lambda0_MINIPNEXTBEST;
   Double_t        Lambda0_MINIPCHI2NEXTBEST;
   Double_t        Lambda0_ENDVERTEX_X;
   Double_t        Lambda0_ENDVERTEX_Y;
   Double_t        Lambda0_ENDVERTEX_Z;
   Double_t        Lambda0_ENDVERTEX_XERR;
   Double_t        Lambda0_ENDVERTEX_YERR;
   Double_t        Lambda0_ENDVERTEX_ZERR;
   Double_t        Lambda0_ENDVERTEX_CHI2;
   Int_t           Lambda0_ENDVERTEX_NDOF;
   Float_t         Lambda0_ENDVERTEX_COV_[3][3];
   Double_t        Lambda0_OWNPV_X;
   Double_t        Lambda0_OWNPV_Y;
   Double_t        Lambda0_OWNPV_Z;
   Double_t        Lambda0_OWNPV_XERR;
   Double_t        Lambda0_OWNPV_YERR;
   Double_t        Lambda0_OWNPV_ZERR;
   Double_t        Lambda0_OWNPV_CHI2;
   Int_t           Lambda0_OWNPV_NDOF;
   Float_t         Lambda0_OWNPV_COV_[3][3];
   Double_t        Lambda0_IP_OWNPV;
   Double_t        Lambda0_IPCHI2_OWNPV;
   Double_t        Lambda0_FD_OWNPV;
   Double_t        Lambda0_FDCHI2_OWNPV;
   Double_t        Lambda0_DIRA_OWNPV;
   Double_t        Lambda0_TOPPV_X;
   Double_t        Lambda0_TOPPV_Y;
   Double_t        Lambda0_TOPPV_Z;
   Double_t        Lambda0_TOPPV_XERR;
   Double_t        Lambda0_TOPPV_YERR;
   Double_t        Lambda0_TOPPV_ZERR;
   Double_t        Lambda0_TOPPV_CHI2;
   Int_t           Lambda0_TOPPV_NDOF;
   Float_t         Lambda0_TOPPV_COV_[3][3];
   Double_t        Lambda0_IP_TOPPV;
   Double_t        Lambda0_IPCHI2_TOPPV;
   Double_t        Lambda0_FD_TOPPV;
   Double_t        Lambda0_FDCHI2_TOPPV;
   Double_t        Lambda0_DIRA_TOPPV;
   Double_t        Lambda0_ORIVX_X;
   Double_t        Lambda0_ORIVX_Y;
   Double_t        Lambda0_ORIVX_Z;
   Double_t        Lambda0_ORIVX_XERR;
   Double_t        Lambda0_ORIVX_YERR;
   Double_t        Lambda0_ORIVX_ZERR;
   Double_t        Lambda0_ORIVX_CHI2;
   Int_t           Lambda0_ORIVX_NDOF;
   Float_t         Lambda0_ORIVX_COV_[3][3];
   Double_t        Lambda0_IP_ORIVX;
   Double_t        Lambda0_IPCHI2_ORIVX;
   Double_t        Lambda0_FD_ORIVX;
   Double_t        Lambda0_FDCHI2_ORIVX;
   Double_t        Lambda0_DIRA_ORIVX;
   Double_t        Lambda0_P;
   Double_t        Lambda0_PT;
   Double_t        Lambda0_PE;
   Double_t        Lambda0_PX;
   Double_t        Lambda0_PY;
   Double_t        Lambda0_PZ;
   Double_t        Lambda0_MM;
   Double_t        Lambda0_MMERR;
   Double_t        Lambda0_M;
   Int_t           Lambda0_ID;
   Double_t        Lambda0_TAU;
   Double_t        Lambda0_TAUERR;
   Double_t        Lambda0_TAUCHI2;
   Bool_t          Lambda0L0Global_Dec;
   Bool_t          Lambda0L0Global_TIS;
   Bool_t          Lambda0L0Global_TOS;
   Bool_t          Lambda0Hlt1Global_Dec;
   Bool_t          Lambda0Hlt1Global_TIS;
   Bool_t          Lambda0Hlt1Global_TOS;
   Bool_t          Lambda0Hlt1Phys_Dec;
   Bool_t          Lambda0Hlt1Phys_TIS;
   Bool_t          Lambda0Hlt1Phys_TOS;
   Bool_t          Lambda0Hlt2Global_Dec;
   Bool_t          Lambda0Hlt2Global_TIS;
   Bool_t          Lambda0Hlt2Global_TOS;
   Bool_t          Lambda0Hlt2Phys_Dec;
   Bool_t          Lambda0Hlt2Phys_TIS;
   Bool_t          Lambda0Hlt2Phys_TOS;
   Bool_t          Lambda0StrippingGlobal_Dec;
   Bool_t          Lambda0StrippingGlobal_TIS;
   Bool_t          Lambda0StrippingGlobal_TOS;
   Bool_t          Lambda0Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          Lambda0Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          Lambda0Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          Lambda0Hlt1TrackAllL0Decision_Dec;
   Bool_t          Lambda0Hlt1TrackAllL0Decision_TIS;
   Bool_t          Lambda0Hlt1TrackAllL0Decision_TOS;
   Bool_t          Lambda0Hlt1TrackMuonDecision_Dec;
   Bool_t          Lambda0Hlt1TrackMuonDecision_TIS;
   Bool_t          Lambda0Hlt1TrackMuonDecision_TOS;
   Bool_t          Lambda0Hlt1DiMuonNoIPL0DiDecision_Dec;
   Bool_t          Lambda0Hlt1DiMuonNoIPL0DiDecision_TIS;
   Bool_t          Lambda0Hlt1DiMuonNoIPL0DiDecision_TOS;
   Bool_t          Lambda0Hlt1SingleMuonNoIPL0Decision_Dec;
   Bool_t          Lambda0Hlt1SingleMuonNoIPL0Decision_TIS;
   Bool_t          Lambda0Hlt1SingleMuonNoIPL0Decision_TOS;
   Bool_t          Lambda0Hlt2DiMuonJPsiDecision_Dec;
   Bool_t          Lambda0Hlt2DiMuonJPsiDecision_TIS;
   Bool_t          Lambda0Hlt2DiMuonJPsiDecision_TOS;
   Bool_t          Lambda0Hlt2DiMuonDetachedJPsiDecision_Dec;
   Bool_t          Lambda0Hlt2DiMuonDetachedJPsiDecision_TIS;
   Bool_t          Lambda0Hlt2DiMuonDetachedJPsiDecision_TOS;
   Bool_t          Lambda0Hlt2DiMuonUnbiasedJPsiDecision_Dec;
   Bool_t          Lambda0Hlt2DiMuonUnbiasedJPsiDecision_TIS;
   Bool_t          Lambda0Hlt2DiMuonUnbiasedJPsiDecision_TOS;
   Double_t        piminus_LOKI_BPVDLS;
   Double_t        piminus_LOKI_DOCAZ;
   Double_t        piminus_LOKI_ETA;
   Double_t        piminus_LOKI_MIPCHI2DV;
   Double_t        piminus_LOKI_PHI;
   Double_t        piminus_LOKI_VCHI2PDOF;
   Double_t        piminus_CosTheta;
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
   Bool_t          piminusL0Global_Dec;
   Bool_t          piminusL0Global_TIS;
   Bool_t          piminusL0Global_TOS;
   Bool_t          piminusHlt1Global_Dec;
   Bool_t          piminusHlt1Global_TIS;
   Bool_t          piminusHlt1Global_TOS;
   Bool_t          piminusHlt1Phys_Dec;
   Bool_t          piminusHlt1Phys_TIS;
   Bool_t          piminusHlt1Phys_TOS;
   Bool_t          piminusHlt2Global_Dec;
   Bool_t          piminusHlt2Global_TIS;
   Bool_t          piminusHlt2Global_TOS;
   Bool_t          piminusHlt2Phys_Dec;
   Bool_t          piminusHlt2Phys_TIS;
   Bool_t          piminusHlt2Phys_TOS;
   Bool_t          piminusStrippingGlobal_Dec;
   Bool_t          piminusStrippingGlobal_TIS;
   Bool_t          piminusStrippingGlobal_TOS;
   Bool_t          piminusHlt1DiMuonHighMassDecision_Dec;
   Bool_t          piminusHlt1DiMuonHighMassDecision_TIS;
   Bool_t          piminusHlt1DiMuonHighMassDecision_TOS;
   Bool_t          piminusHlt1TrackAllL0Decision_Dec;
   Bool_t          piminusHlt1TrackAllL0Decision_TIS;
   Bool_t          piminusHlt1TrackAllL0Decision_TOS;
   Bool_t          piminusHlt1TrackMuonDecision_Dec;
   Bool_t          piminusHlt1TrackMuonDecision_TIS;
   Bool_t          piminusHlt1TrackMuonDecision_TOS;
   Bool_t          piminusHlt1DiMuonNoIPL0DiDecision_Dec;
   Bool_t          piminusHlt1DiMuonNoIPL0DiDecision_TIS;
   Bool_t          piminusHlt1DiMuonNoIPL0DiDecision_TOS;
   Bool_t          piminusHlt1SingleMuonNoIPL0Decision_Dec;
   Bool_t          piminusHlt1SingleMuonNoIPL0Decision_TIS;
   Bool_t          piminusHlt1SingleMuonNoIPL0Decision_TOS;
   Bool_t          piminusHlt2DiMuonJPsiDecision_Dec;
   Bool_t          piminusHlt2DiMuonJPsiDecision_TIS;
   Bool_t          piminusHlt2DiMuonJPsiDecision_TOS;
   Bool_t          piminusHlt2DiMuonDetachedJPsiDecision_Dec;
   Bool_t          piminusHlt2DiMuonDetachedJPsiDecision_TIS;
   Bool_t          piminusHlt2DiMuonDetachedJPsiDecision_TOS;
   Bool_t          piminusHlt2DiMuonUnbiasedJPsiDecision_Dec;
   Bool_t          piminusHlt2DiMuonUnbiasedJPsiDecision_TIS;
   Bool_t          piminusHlt2DiMuonUnbiasedJPsiDecision_TOS;
   Int_t           piminus_TRACK_Type;
   Int_t           piminus_TRACK_Key;
   Double_t        piminus_TRACK_CHI2NDOF;
   Double_t        piminus_TRACK_PCHI2;
   Bool_t          piminus_hasTT;
   Bool_t          piminus_hasT;
   Double_t        piminus_TRACK_MatchCHI2;
   Double_t        piminus_VELO_UTID;
   Double_t        piminus_VeloHits;
   Double_t        piminus_TRACK_GhostProb;
   Double_t        piminus_TRACK_CloneDist;
   Double_t        pplus_LOKI_BPVDLS;
   Double_t        pplus_LOKI_DOCAZ;
   Double_t        pplus_LOKI_ETA;
   Double_t        pplus_LOKI_MIPCHI2DV;
   Double_t        pplus_LOKI_PHI;
   Double_t        pplus_LOKI_VCHI2PDOF;
   Double_t        pplus_CosTheta;
   Double_t        pplus_MINIP;
   Double_t        pplus_MINIPCHI2;
   Double_t        pplus_MINIPNEXTBEST;
   Double_t        pplus_MINIPCHI2NEXTBEST;
   Double_t        pplus_OWNPV_X;
   Double_t        pplus_OWNPV_Y;
   Double_t        pplus_OWNPV_Z;
   Double_t        pplus_OWNPV_XERR;
   Double_t        pplus_OWNPV_YERR;
   Double_t        pplus_OWNPV_ZERR;
   Double_t        pplus_OWNPV_CHI2;
   Int_t           pplus_OWNPV_NDOF;
   Float_t         pplus_OWNPV_COV_[3][3];
   Double_t        pplus_IP_OWNPV;
   Double_t        pplus_IPCHI2_OWNPV;
   Double_t        pplus_TOPPV_X;
   Double_t        pplus_TOPPV_Y;
   Double_t        pplus_TOPPV_Z;
   Double_t        pplus_TOPPV_XERR;
   Double_t        pplus_TOPPV_YERR;
   Double_t        pplus_TOPPV_ZERR;
   Double_t        pplus_TOPPV_CHI2;
   Int_t           pplus_TOPPV_NDOF;
   Float_t         pplus_TOPPV_COV_[3][3];
   Double_t        pplus_IP_TOPPV;
   Double_t        pplus_IPCHI2_TOPPV;
   Double_t        pplus_ORIVX_X;
   Double_t        pplus_ORIVX_Y;
   Double_t        pplus_ORIVX_Z;
   Double_t        pplus_ORIVX_XERR;
   Double_t        pplus_ORIVX_YERR;
   Double_t        pplus_ORIVX_ZERR;
   Double_t        pplus_ORIVX_CHI2;
   Int_t           pplus_ORIVX_NDOF;
   Float_t         pplus_ORIVX_COV_[3][3];
   Double_t        pplus_IP_ORIVX;
   Double_t        pplus_IPCHI2_ORIVX;
   Double_t        pplus_P;
   Double_t        pplus_PT;
   Double_t        pplus_PE;
   Double_t        pplus_PX;
   Double_t        pplus_PY;
   Double_t        pplus_PZ;
   Double_t        pplus_M;
   Int_t           pplus_ID;
   Double_t        pplus_PIDe;
   Double_t        pplus_PIDmu;
   Double_t        pplus_PIDK;
   Double_t        pplus_PIDp;
   Double_t        pplus_ProbNNe;
   Double_t        pplus_ProbNNk;
   Double_t        pplus_ProbNNp;
   Double_t        pplus_ProbNNpi;
   Double_t        pplus_ProbNNmu;
   Double_t        pplus_ProbNNghost;
   Bool_t          pplus_hasMuon;
   Bool_t          pplus_isMuon;
   Bool_t          pplus_hasRich;
   Bool_t          pplus_hasCalo;
   Bool_t          pplusL0Global_Dec;
   Bool_t          pplusL0Global_TIS;
   Bool_t          pplusL0Global_TOS;
   Bool_t          pplusHlt1Global_Dec;
   Bool_t          pplusHlt1Global_TIS;
   Bool_t          pplusHlt1Global_TOS;
   Bool_t          pplusHlt1Phys_Dec;
   Bool_t          pplusHlt1Phys_TIS;
   Bool_t          pplusHlt1Phys_TOS;
   Bool_t          pplusHlt2Global_Dec;
   Bool_t          pplusHlt2Global_TIS;
   Bool_t          pplusHlt2Global_TOS;
   Bool_t          pplusHlt2Phys_Dec;
   Bool_t          pplusHlt2Phys_TIS;
   Bool_t          pplusHlt2Phys_TOS;
   Bool_t          pplusStrippingGlobal_Dec;
   Bool_t          pplusStrippingGlobal_TIS;
   Bool_t          pplusStrippingGlobal_TOS;
   Bool_t          pplusHlt1DiMuonHighMassDecision_Dec;
   Bool_t          pplusHlt1DiMuonHighMassDecision_TIS;
   Bool_t          pplusHlt1DiMuonHighMassDecision_TOS;
   Bool_t          pplusHlt1TrackAllL0Decision_Dec;
   Bool_t          pplusHlt1TrackAllL0Decision_TIS;
   Bool_t          pplusHlt1TrackAllL0Decision_TOS;
   Bool_t          pplusHlt1TrackMuonDecision_Dec;
   Bool_t          pplusHlt1TrackMuonDecision_TIS;
   Bool_t          pplusHlt1TrackMuonDecision_TOS;
   Bool_t          pplusHlt1DiMuonNoIPL0DiDecision_Dec;
   Bool_t          pplusHlt1DiMuonNoIPL0DiDecision_TIS;
   Bool_t          pplusHlt1DiMuonNoIPL0DiDecision_TOS;
   Bool_t          pplusHlt1SingleMuonNoIPL0Decision_Dec;
   Bool_t          pplusHlt1SingleMuonNoIPL0Decision_TIS;
   Bool_t          pplusHlt1SingleMuonNoIPL0Decision_TOS;
   Bool_t          pplusHlt2DiMuonJPsiDecision_Dec;
   Bool_t          pplusHlt2DiMuonJPsiDecision_TIS;
   Bool_t          pplusHlt2DiMuonJPsiDecision_TOS;
   Bool_t          pplusHlt2DiMuonDetachedJPsiDecision_Dec;
   Bool_t          pplusHlt2DiMuonDetachedJPsiDecision_TIS;
   Bool_t          pplusHlt2DiMuonDetachedJPsiDecision_TOS;
   Bool_t          pplusHlt2DiMuonUnbiasedJPsiDecision_Dec;
   Bool_t          pplusHlt2DiMuonUnbiasedJPsiDecision_TIS;
   Bool_t          pplusHlt2DiMuonUnbiasedJPsiDecision_TOS;
   Int_t           pplus_TRACK_Type;
   Int_t           pplus_TRACK_Key;
   Double_t        pplus_TRACK_CHI2NDOF;
   Double_t        pplus_TRACK_PCHI2;
   Bool_t          pplus_hasTT;
   Bool_t          pplus_hasT;
   Double_t        pplus_TRACK_MatchCHI2;
   Double_t        pplus_VELO_UTID;
   Double_t        pplus_VeloHits;
   Double_t        pplus_TRACK_GhostProb;
   Double_t        pplus_TRACK_CloneDist;
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
   UInt_t          Primaries;
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
   Double_t        LL_DOCAzweight_1bin;
   Double_t        DD_DOCAzweight_1bin;
   Double_t        LL_DOCAzweight_1bin_p1sigma;
   Double_t        DD_DOCAzweight_1bin_p1sigma;
   Double_t        LL_DOCAzweight_1bin_m1sigma;
   Double_t        DD_DOCAzweight_1bin_m1sigma;
   Bool_t          LL_fiducial_cuts;
   Bool_t          DD_fiducial_cuts;
   Bool_t          isFullSelected_Corrected;
   Bool_t          isFullTriggered_Corrected;
   Bool_t          has2ndBestIPChi2;
   Bool_t          hasDetachedStrippingTriggered;
   Bool_t          hasExclStrippingTriggered;
   Bool_t          hasBestDTFCHI2;

   // List of branches
   TBranch        *b_b_particle_LOKI_BPVDLS;   //!
   TBranch        *b_b_particle_LOKI_DOCAZ;   //!
   TBranch        *b_b_particle_LOKI_ETA;   //!
   TBranch        *b_b_particle_LOKI_MIPCHI2DV;   //!
   TBranch        *b_b_particle_LOKI_PHI;   //!
   TBranch        *b_b_particle_LOKI_VCHI2PDOF;   //!
   TBranch        *b_b_particle_MINIP;   //!
   TBranch        *b_b_particle_MINIPCHI2;   //!
   TBranch        *b_b_particle_MINIPNEXTBEST;   //!
   TBranch        *b_b_particle_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_b_particle_ENDVERTEX_X;   //!
   TBranch        *b_b_particle_ENDVERTEX_Y;   //!
   TBranch        *b_b_particle_ENDVERTEX_Z;   //!
   TBranch        *b_b_particle_ENDVERTEX_XERR;   //!
   TBranch        *b_b_particle_ENDVERTEX_YERR;   //!
   TBranch        *b_b_particle_ENDVERTEX_ZERR;   //!
   TBranch        *b_b_particle_ENDVERTEX_CHI2;   //!
   TBranch        *b_b_particle_ENDVERTEX_NDOF;   //!
   TBranch        *b_b_particle_ENDVERTEX_COV_;   //!
   TBranch        *b_b_particle_OWNPV_X;   //!
   TBranch        *b_b_particle_OWNPV_Y;   //!
   TBranch        *b_b_particle_OWNPV_Z;   //!
   TBranch        *b_b_particle_OWNPV_XERR;   //!
   TBranch        *b_b_particle_OWNPV_YERR;   //!
   TBranch        *b_b_particle_OWNPV_ZERR;   //!
   TBranch        *b_b_particle_OWNPV_CHI2;   //!
   TBranch        *b_b_particle_OWNPV_NDOF;   //!
   TBranch        *b_b_particle_OWNPV_COV_;   //!
   TBranch        *b_b_particle_IP_OWNPV;   //!
   TBranch        *b_b_particle_IPCHI2_OWNPV;   //!
   TBranch        *b_b_particle_FD_OWNPV;   //!
   TBranch        *b_b_particle_FDCHI2_OWNPV;   //!
   TBranch        *b_b_particle_DIRA_OWNPV;   //!
   TBranch        *b_b_particle_TOPPV_X;   //!
   TBranch        *b_b_particle_TOPPV_Y;   //!
   TBranch        *b_b_particle_TOPPV_Z;   //!
   TBranch        *b_b_particle_TOPPV_XERR;   //!
   TBranch        *b_b_particle_TOPPV_YERR;   //!
   TBranch        *b_b_particle_TOPPV_ZERR;   //!
   TBranch        *b_b_particle_TOPPV_CHI2;   //!
   TBranch        *b_b_particle_TOPPV_NDOF;   //!
   TBranch        *b_b_particle_TOPPV_COV_;   //!
   TBranch        *b_b_particle_IP_TOPPV;   //!
   TBranch        *b_b_particle_IPCHI2_TOPPV;   //!
   TBranch        *b_b_particle_FD_TOPPV;   //!
   TBranch        *b_b_particle_FDCHI2_TOPPV;   //!
   TBranch        *b_b_particle_DIRA_TOPPV;   //!
   TBranch        *b_b_particle_P;   //!
   TBranch        *b_b_particle_PT;   //!
   TBranch        *b_b_particle_PE;   //!
   TBranch        *b_b_particle_PX;   //!
   TBranch        *b_b_particle_PY;   //!
   TBranch        *b_b_particle_PZ;   //!
   TBranch        *b_b_particle_MM;   //!
   TBranch        *b_b_particle_MMERR;   //!
   TBranch        *b_b_particle_M;   //!
   TBranch        *b_b_particle_ID;   //!
   TBranch        *b_b_particle_TAU;   //!
   TBranch        *b_b_particle_TAUERR;   //!
   TBranch        *b_b_particle_TAUCHI2;   //!
   TBranch        *b_b_particleL0Global_Dec;   //!
   TBranch        *b_b_particleL0Global_TIS;   //!
   TBranch        *b_b_particleL0Global_TOS;   //!
   TBranch        *b_b_particleHlt1Global_Dec;   //!
   TBranch        *b_b_particleHlt1Global_TIS;   //!
   TBranch        *b_b_particleHlt1Global_TOS;   //!
   TBranch        *b_b_particleHlt1Phys_Dec;   //!
   TBranch        *b_b_particleHlt1Phys_TIS;   //!
   TBranch        *b_b_particleHlt1Phys_TOS;   //!
   TBranch        *b_b_particleHlt2Global_Dec;   //!
   TBranch        *b_b_particleHlt2Global_TIS;   //!
   TBranch        *b_b_particleHlt2Global_TOS;   //!
   TBranch        *b_b_particleHlt2Phys_Dec;   //!
   TBranch        *b_b_particleHlt2Phys_TIS;   //!
   TBranch        *b_b_particleHlt2Phys_TOS;   //!
   TBranch        *b_b_particleStrippingGlobal_Dec;   //!
   TBranch        *b_b_particleStrippingGlobal_TIS;   //!
   TBranch        *b_b_particleStrippingGlobal_TOS;   //!
   TBranch        *b_b_particleHlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_b_particleHlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_b_particleHlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_b_particleHlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_b_particleHlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_b_particleHlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_b_particleHlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_b_particleHlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_b_particleHlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_b_particleHlt1DiMuonNoIPL0DiDecision_Dec;   //!
   TBranch        *b_b_particleHlt1DiMuonNoIPL0DiDecision_TIS;   //!
   TBranch        *b_b_particleHlt1DiMuonNoIPL0DiDecision_TOS;   //!
   TBranch        *b_b_particleHlt1SingleMuonNoIPL0Decision_Dec;   //!
   TBranch        *b_b_particleHlt1SingleMuonNoIPL0Decision_TIS;   //!
   TBranch        *b_b_particleHlt1SingleMuonNoIPL0Decision_TOS;   //!
   TBranch        *b_b_particleHlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_b_particleHlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_b_particleHlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_b_particleHlt2DiMuonDetachedJPsiDecision_Dec;   //!
   TBranch        *b_b_particleHlt2DiMuonDetachedJPsiDecision_TIS;   //!
   TBranch        *b_b_particleHlt2DiMuonDetachedJPsiDecision_TOS;   //!
   TBranch        *b_b_particleHlt2DiMuonUnbiasedJPsiDecision_Dec;   //!
   TBranch        *b_b_particleHlt2DiMuonUnbiasedJPsiDecision_TIS;   //!
   TBranch        *b_b_particleHlt2DiMuonUnbiasedJPsiDecision_TOS;   //!
   TBranch        *b_b_particle_MassFitConsAll_nPV;   //!
   TBranch        *b_b_particle_MassFitConsAll_M;   //!
   TBranch        *b_b_particle_MassFitConsAll_MERR;   //!
   TBranch        *b_b_particle_MassFitConsAll_P;   //!
   TBranch        *b_b_particle_MassFitConsAll_PERR;   //!
   TBranch        *b_b_particle_MassFitConsAll_chi2_B;   //!
   TBranch        *b_b_particle_MassFitConsAll_nDOF;   //!
   TBranch        *b_b_particle_MassFitConsAll_nIter;   //!
   TBranch        *b_b_particle_MassFitConsAll_status;   //!
   TBranch        *b_b_particle_MassFitConsJpsi_nPV;   //!
   TBranch        *b_b_particle_MassFitConsJpsi_M;   //!
   TBranch        *b_b_particle_MassFitConsJpsi_MERR;   //!
   TBranch        *b_b_particle_MassFitConsJpsi_P;   //!
   TBranch        *b_b_particle_MassFitConsJpsi_PERR;   //!
   TBranch        *b_b_particle_MassFitConsJpsi_chi2_B;   //!
   TBranch        *b_b_particle_MassFitConsJpsi_nDOF;   //!
   TBranch        *b_b_particle_MassFitConsJpsi_nIter;   //!
   TBranch        *b_b_particle_MassFitConsJpsi_status;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_nPV;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_J_psi_1S_M;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_J_psi_1S_MERR;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_J_psi_1S_P;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_J_psi_1S_PERR;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_J_psi_1S_ctau;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_J_psi_1S_ctauErr;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_J_psi_1S_decayLength;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_J_psi_1S_decayLengthErr;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_Lambda0_M;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_Lambda0_MERR;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_Lambda0_P;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_Lambda0_PERR;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_Lambda0_ctau;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_Lambda0_ctauErr;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_Lambda0_decayLength;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_Lambda0_decayLengthErr;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_M;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_MERR;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_P;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_PERR;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_PV_X;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_PV_Y;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_PV_Z;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_PV_key;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_chi2_B;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_ctau;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_ctauErr;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_decayLength;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_decayLengthErr;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_nDOF;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_nIter;   //!
   TBranch        *b_b_particle_StandardLifetimeFit_status;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_NumberOfRemovedTracks;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_AllRefittedVertices;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_RefittedPVs;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_nPV;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_IP;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_IPCHI2;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_M;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_MERR;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_P;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_PERR;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_ctau;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_ctauErr;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_decayLength;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_decayLengthErr;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_M;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_MERR;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_P;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_PERR;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_ctau;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_ctauErr;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_decayLength;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_decayLengthErr;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_M;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_MERR;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_P;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_PERR;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_PV_X;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_PV_Y;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_PV_Z;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_PV_key;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_chi2_B;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_ctau;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_ctauErr;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_decayLength;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_decayLengthErr;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_nDOF;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_nIter;   //!
   TBranch        *b_b_particle_ModifiedPVPseudoLifetimeFit_status;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_NumberOfRemovedTracks;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_AllRefittedVertices;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_RefittedPVs;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_nPV;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_IP;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_IPCHI2;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_M;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_MERR;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_P;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_PERR;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_ctau;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_ctauErr;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_decayLength;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_decayLengthErr;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_M;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_MERR;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_P;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_PERR;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_ctau;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_ctauErr;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_decayLength;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_decayLengthErr;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_M;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_MERR;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_P;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_PERR;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_PV_X;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_PV_Y;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_PV_Z;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_PV_key;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_chi2_B;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_ctau;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_ctauErr;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_decayLength;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_decayLengthErr;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_nDOF;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_nIter;   //!
   TBranch        *b_b_particle_ModifiedPVStandardLifetimeFit_status;   //!
   TBranch        *b_J_psi_1S_LOKI_BPVDLS;   //!
   TBranch        *b_J_psi_1S_LOKI_DOCAZ;   //!
   TBranch        *b_J_psi_1S_LOKI_ETA;   //!
   TBranch        *b_J_psi_1S_LOKI_MIPCHI2DV;   //!
   TBranch        *b_J_psi_1S_LOKI_PHI;   //!
   TBranch        *b_J_psi_1S_LOKI_VCHI2PDOF;   //!
   TBranch        *b_J_psi_1S_CosTheta;   //!
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
   TBranch        *b_J_psi_1SL0Global_Dec;   //!
   TBranch        *b_J_psi_1SL0Global_TIS;   //!
   TBranch        *b_J_psi_1SL0Global_TOS;   //!
   TBranch        *b_J_psi_1SHlt1Global_Dec;   //!
   TBranch        *b_J_psi_1SHlt1Global_TIS;   //!
   TBranch        *b_J_psi_1SHlt1Global_TOS;   //!
   TBranch        *b_J_psi_1SHlt1Phys_Dec;   //!
   TBranch        *b_J_psi_1SHlt1Phys_TIS;   //!
   TBranch        *b_J_psi_1SHlt1Phys_TOS;   //!
   TBranch        *b_J_psi_1SHlt2Global_Dec;   //!
   TBranch        *b_J_psi_1SHlt2Global_TIS;   //!
   TBranch        *b_J_psi_1SHlt2Global_TOS;   //!
   TBranch        *b_J_psi_1SHlt2Phys_Dec;   //!
   TBranch        *b_J_psi_1SHlt2Phys_TIS;   //!
   TBranch        *b_J_psi_1SHlt2Phys_TOS;   //!
   TBranch        *b_J_psi_1SStrippingGlobal_Dec;   //!
   TBranch        *b_J_psi_1SStrippingGlobal_TIS;   //!
   TBranch        *b_J_psi_1SStrippingGlobal_TOS;   //!
   TBranch        *b_J_psi_1SHlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_J_psi_1SHlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_J_psi_1SHlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_J_psi_1SHlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_J_psi_1SHlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_J_psi_1SHlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_J_psi_1SHlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_J_psi_1SHlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_J_psi_1SHlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_J_psi_1SHlt1DiMuonNoIPL0DiDecision_Dec;   //!
   TBranch        *b_J_psi_1SHlt1DiMuonNoIPL0DiDecision_TIS;   //!
   TBranch        *b_J_psi_1SHlt1DiMuonNoIPL0DiDecision_TOS;   //!
   TBranch        *b_J_psi_1SHlt1SingleMuonNoIPL0Decision_Dec;   //!
   TBranch        *b_J_psi_1SHlt1SingleMuonNoIPL0Decision_TIS;   //!
   TBranch        *b_J_psi_1SHlt1SingleMuonNoIPL0Decision_TOS;   //!
   TBranch        *b_J_psi_1SHlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_J_psi_1SHlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_J_psi_1SHlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_J_psi_1SHlt2DiMuonDetachedJPsiDecision_Dec;   //!
   TBranch        *b_J_psi_1SHlt2DiMuonDetachedJPsiDecision_TIS;   //!
   TBranch        *b_J_psi_1SHlt2DiMuonDetachedJPsiDecision_TOS;   //!
   TBranch        *b_J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_Dec;   //!
   TBranch        *b_J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_TIS;   //!
   TBranch        *b_J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_TOS;   //!
   TBranch        *b_muminus_LOKI_BPVDLS;   //!
   TBranch        *b_muminus_LOKI_DOCAZ;   //!
   TBranch        *b_muminus_LOKI_ETA;   //!
   TBranch        *b_muminus_LOKI_MIPCHI2DV;   //!
   TBranch        *b_muminus_LOKI_PHI;   //!
   TBranch        *b_muminus_LOKI_VCHI2PDOF;   //!
   TBranch        *b_muminus_CosTheta;   //!
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
   TBranch        *b_muminusL0Global_Dec;   //!
   TBranch        *b_muminusL0Global_TIS;   //!
   TBranch        *b_muminusL0Global_TOS;   //!
   TBranch        *b_muminusHlt1Global_Dec;   //!
   TBranch        *b_muminusHlt1Global_TIS;   //!
   TBranch        *b_muminusHlt1Global_TOS;   //!
   TBranch        *b_muminusHlt1Phys_Dec;   //!
   TBranch        *b_muminusHlt1Phys_TIS;   //!
   TBranch        *b_muminusHlt1Phys_TOS;   //!
   TBranch        *b_muminusHlt2Global_Dec;   //!
   TBranch        *b_muminusHlt2Global_TIS;   //!
   TBranch        *b_muminusHlt2Global_TOS;   //!
   TBranch        *b_muminusHlt2Phys_Dec;   //!
   TBranch        *b_muminusHlt2Phys_TIS;   //!
   TBranch        *b_muminusHlt2Phys_TOS;   //!
   TBranch        *b_muminusStrippingGlobal_Dec;   //!
   TBranch        *b_muminusStrippingGlobal_TIS;   //!
   TBranch        *b_muminusStrippingGlobal_TOS;   //!
   TBranch        *b_muminusHlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_muminusHlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_muminusHlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_muminusHlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_muminusHlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_muminusHlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_muminusHlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_muminusHlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_muminusHlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_muminusHlt1DiMuonNoIPL0DiDecision_Dec;   //!
   TBranch        *b_muminusHlt1DiMuonNoIPL0DiDecision_TIS;   //!
   TBranch        *b_muminusHlt1DiMuonNoIPL0DiDecision_TOS;   //!
   TBranch        *b_muminusHlt1SingleMuonNoIPL0Decision_Dec;   //!
   TBranch        *b_muminusHlt1SingleMuonNoIPL0Decision_TIS;   //!
   TBranch        *b_muminusHlt1SingleMuonNoIPL0Decision_TOS;   //!
   TBranch        *b_muminusHlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_muminusHlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_muminusHlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_muminusHlt2DiMuonDetachedJPsiDecision_Dec;   //!
   TBranch        *b_muminusHlt2DiMuonDetachedJPsiDecision_TIS;   //!
   TBranch        *b_muminusHlt2DiMuonDetachedJPsiDecision_TOS;   //!
   TBranch        *b_muminusHlt2DiMuonUnbiasedJPsiDecision_Dec;   //!
   TBranch        *b_muminusHlt2DiMuonUnbiasedJPsiDecision_TIS;   //!
   TBranch        *b_muminusHlt2DiMuonUnbiasedJPsiDecision_TOS;   //!
   TBranch        *b_muminus_TRACK_Type;   //!
   TBranch        *b_muminus_TRACK_Key;   //!
   TBranch        *b_muminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_muminus_TRACK_PCHI2;   //!
   TBranch        *b_muminus_hasTT;   //!
   TBranch        *b_muminus_hasT;   //!
   TBranch        *b_muminus_TRACK_MatchCHI2;   //!
   TBranch        *b_muminus_VELO_UTID;   //!
   TBranch        *b_muminus_VeloHits;   //!
   TBranch        *b_muminus_TRACK_GhostProb;   //!
   TBranch        *b_muminus_TRACK_CloneDist;   //!
   TBranch        *b_muplus_LOKI_BPVDLS;   //!
   TBranch        *b_muplus_LOKI_DOCAZ;   //!
   TBranch        *b_muplus_LOKI_ETA;   //!
   TBranch        *b_muplus_LOKI_MIPCHI2DV;   //!
   TBranch        *b_muplus_LOKI_PHI;   //!
   TBranch        *b_muplus_LOKI_VCHI2PDOF;   //!
   TBranch        *b_muplus_CosTheta;   //!
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
   TBranch        *b_muplusL0Global_Dec;   //!
   TBranch        *b_muplusL0Global_TIS;   //!
   TBranch        *b_muplusL0Global_TOS;   //!
   TBranch        *b_muplusHlt1Global_Dec;   //!
   TBranch        *b_muplusHlt1Global_TIS;   //!
   TBranch        *b_muplusHlt1Global_TOS;   //!
   TBranch        *b_muplusHlt1Phys_Dec;   //!
   TBranch        *b_muplusHlt1Phys_TIS;   //!
   TBranch        *b_muplusHlt1Phys_TOS;   //!
   TBranch        *b_muplusHlt2Global_Dec;   //!
   TBranch        *b_muplusHlt2Global_TIS;   //!
   TBranch        *b_muplusHlt2Global_TOS;   //!
   TBranch        *b_muplusHlt2Phys_Dec;   //!
   TBranch        *b_muplusHlt2Phys_TIS;   //!
   TBranch        *b_muplusHlt2Phys_TOS;   //!
   TBranch        *b_muplusStrippingGlobal_Dec;   //!
   TBranch        *b_muplusStrippingGlobal_TIS;   //!
   TBranch        *b_muplusStrippingGlobal_TOS;   //!
   TBranch        *b_muplusHlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_muplusHlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_muplusHlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_muplusHlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_muplusHlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_muplusHlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_muplusHlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_muplusHlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_muplusHlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_muplusHlt1DiMuonNoIPL0DiDecision_Dec;   //!
   TBranch        *b_muplusHlt1DiMuonNoIPL0DiDecision_TIS;   //!
   TBranch        *b_muplusHlt1DiMuonNoIPL0DiDecision_TOS;   //!
   TBranch        *b_muplusHlt1SingleMuonNoIPL0Decision_Dec;   //!
   TBranch        *b_muplusHlt1SingleMuonNoIPL0Decision_TIS;   //!
   TBranch        *b_muplusHlt1SingleMuonNoIPL0Decision_TOS;   //!
   TBranch        *b_muplusHlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_muplusHlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_muplusHlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_muplusHlt2DiMuonDetachedJPsiDecision_Dec;   //!
   TBranch        *b_muplusHlt2DiMuonDetachedJPsiDecision_TIS;   //!
   TBranch        *b_muplusHlt2DiMuonDetachedJPsiDecision_TOS;   //!
   TBranch        *b_muplusHlt2DiMuonUnbiasedJPsiDecision_Dec;   //!
   TBranch        *b_muplusHlt2DiMuonUnbiasedJPsiDecision_TIS;   //!
   TBranch        *b_muplusHlt2DiMuonUnbiasedJPsiDecision_TOS;   //!
   TBranch        *b_muplus_TRACK_Type;   //!
   TBranch        *b_muplus_TRACK_Key;   //!
   TBranch        *b_muplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_muplus_TRACK_PCHI2;   //!
   TBranch        *b_muplus_hasTT;   //!
   TBranch        *b_muplus_hasT;   //!
   TBranch        *b_muplus_TRACK_MatchCHI2;   //!
   TBranch        *b_muplus_VELO_UTID;   //!
   TBranch        *b_muplus_VeloHits;   //!
   TBranch        *b_muplus_TRACK_GhostProb;   //!
   TBranch        *b_muplus_TRACK_CloneDist;   //!
   TBranch        *b_Lambda0_LOKI_BPVDLS;   //!
   TBranch        *b_Lambda0_LOKI_DOCAZ;   //!
   TBranch        *b_Lambda0_LOKI_ETA;   //!
   TBranch        *b_Lambda0_LOKI_MIPCHI2DV;   //!
   TBranch        *b_Lambda0_LOKI_PHI;   //!
   TBranch        *b_Lambda0_LOKI_VCHI2PDOF;   //!
   TBranch        *b_Lambda0_CosTheta;   //!
   TBranch        *b_Lambda0_MINIP;   //!
   TBranch        *b_Lambda0_MINIPCHI2;   //!
   TBranch        *b_Lambda0_MINIPNEXTBEST;   //!
   TBranch        *b_Lambda0_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_Lambda0_ENDVERTEX_X;   //!
   TBranch        *b_Lambda0_ENDVERTEX_Y;   //!
   TBranch        *b_Lambda0_ENDVERTEX_Z;   //!
   TBranch        *b_Lambda0_ENDVERTEX_XERR;   //!
   TBranch        *b_Lambda0_ENDVERTEX_YERR;   //!
   TBranch        *b_Lambda0_ENDVERTEX_ZERR;   //!
   TBranch        *b_Lambda0_ENDVERTEX_CHI2;   //!
   TBranch        *b_Lambda0_ENDVERTEX_NDOF;   //!
   TBranch        *b_Lambda0_ENDVERTEX_COV_;   //!
   TBranch        *b_Lambda0_OWNPV_X;   //!
   TBranch        *b_Lambda0_OWNPV_Y;   //!
   TBranch        *b_Lambda0_OWNPV_Z;   //!
   TBranch        *b_Lambda0_OWNPV_XERR;   //!
   TBranch        *b_Lambda0_OWNPV_YERR;   //!
   TBranch        *b_Lambda0_OWNPV_ZERR;   //!
   TBranch        *b_Lambda0_OWNPV_CHI2;   //!
   TBranch        *b_Lambda0_OWNPV_NDOF;   //!
   TBranch        *b_Lambda0_OWNPV_COV_;   //!
   TBranch        *b_Lambda0_IP_OWNPV;   //!
   TBranch        *b_Lambda0_IPCHI2_OWNPV;   //!
   TBranch        *b_Lambda0_FD_OWNPV;   //!
   TBranch        *b_Lambda0_FDCHI2_OWNPV;   //!
   TBranch        *b_Lambda0_DIRA_OWNPV;   //!
   TBranch        *b_Lambda0_TOPPV_X;   //!
   TBranch        *b_Lambda0_TOPPV_Y;   //!
   TBranch        *b_Lambda0_TOPPV_Z;   //!
   TBranch        *b_Lambda0_TOPPV_XERR;   //!
   TBranch        *b_Lambda0_TOPPV_YERR;   //!
   TBranch        *b_Lambda0_TOPPV_ZERR;   //!
   TBranch        *b_Lambda0_TOPPV_CHI2;   //!
   TBranch        *b_Lambda0_TOPPV_NDOF;   //!
   TBranch        *b_Lambda0_TOPPV_COV_;   //!
   TBranch        *b_Lambda0_IP_TOPPV;   //!
   TBranch        *b_Lambda0_IPCHI2_TOPPV;   //!
   TBranch        *b_Lambda0_FD_TOPPV;   //!
   TBranch        *b_Lambda0_FDCHI2_TOPPV;   //!
   TBranch        *b_Lambda0_DIRA_TOPPV;   //!
   TBranch        *b_Lambda0_ORIVX_X;   //!
   TBranch        *b_Lambda0_ORIVX_Y;   //!
   TBranch        *b_Lambda0_ORIVX_Z;   //!
   TBranch        *b_Lambda0_ORIVX_XERR;   //!
   TBranch        *b_Lambda0_ORIVX_YERR;   //!
   TBranch        *b_Lambda0_ORIVX_ZERR;   //!
   TBranch        *b_Lambda0_ORIVX_CHI2;   //!
   TBranch        *b_Lambda0_ORIVX_NDOF;   //!
   TBranch        *b_Lambda0_ORIVX_COV_;   //!
   TBranch        *b_Lambda0_IP_ORIVX;   //!
   TBranch        *b_Lambda0_IPCHI2_ORIVX;   //!
   TBranch        *b_Lambda0_FD_ORIVX;   //!
   TBranch        *b_Lambda0_FDCHI2_ORIVX;   //!
   TBranch        *b_Lambda0_DIRA_ORIVX;   //!
   TBranch        *b_Lambda0_P;   //!
   TBranch        *b_Lambda0_PT;   //!
   TBranch        *b_Lambda0_PE;   //!
   TBranch        *b_Lambda0_PX;   //!
   TBranch        *b_Lambda0_PY;   //!
   TBranch        *b_Lambda0_PZ;   //!
   TBranch        *b_Lambda0_MM;   //!
   TBranch        *b_Lambda0_MMERR;   //!
   TBranch        *b_Lambda0_M;   //!
   TBranch        *b_Lambda0_ID;   //!
   TBranch        *b_Lambda0_TAU;   //!
   TBranch        *b_Lambda0_TAUERR;   //!
   TBranch        *b_Lambda0_TAUCHI2;   //!
   TBranch        *b_Lambda0L0Global_Dec;   //!
   TBranch        *b_Lambda0L0Global_TIS;   //!
   TBranch        *b_Lambda0L0Global_TOS;   //!
   TBranch        *b_Lambda0Hlt1Global_Dec;   //!
   TBranch        *b_Lambda0Hlt1Global_TIS;   //!
   TBranch        *b_Lambda0Hlt1Global_TOS;   //!
   TBranch        *b_Lambda0Hlt1Phys_Dec;   //!
   TBranch        *b_Lambda0Hlt1Phys_TIS;   //!
   TBranch        *b_Lambda0Hlt1Phys_TOS;   //!
   TBranch        *b_Lambda0Hlt2Global_Dec;   //!
   TBranch        *b_Lambda0Hlt2Global_TIS;   //!
   TBranch        *b_Lambda0Hlt2Global_TOS;   //!
   TBranch        *b_Lambda0Hlt2Phys_Dec;   //!
   TBranch        *b_Lambda0Hlt2Phys_TIS;   //!
   TBranch        *b_Lambda0Hlt2Phys_TOS;   //!
   TBranch        *b_Lambda0StrippingGlobal_Dec;   //!
   TBranch        *b_Lambda0StrippingGlobal_TIS;   //!
   TBranch        *b_Lambda0StrippingGlobal_TOS;   //!
   TBranch        *b_Lambda0Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_Lambda0Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_Lambda0Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_Lambda0Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Lambda0Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Lambda0Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Lambda0Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_Lambda0Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_Lambda0Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_Lambda0Hlt1DiMuonNoIPL0DiDecision_Dec;   //!
   TBranch        *b_Lambda0Hlt1DiMuonNoIPL0DiDecision_TIS;   //!
   TBranch        *b_Lambda0Hlt1DiMuonNoIPL0DiDecision_TOS;   //!
   TBranch        *b_Lambda0Hlt1SingleMuonNoIPL0Decision_Dec;   //!
   TBranch        *b_Lambda0Hlt1SingleMuonNoIPL0Decision_TIS;   //!
   TBranch        *b_Lambda0Hlt1SingleMuonNoIPL0Decision_TOS;   //!
   TBranch        *b_Lambda0Hlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_Lambda0Hlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_Lambda0Hlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_Lambda0Hlt2DiMuonDetachedJPsiDecision_Dec;   //!
   TBranch        *b_Lambda0Hlt2DiMuonDetachedJPsiDecision_TIS;   //!
   TBranch        *b_Lambda0Hlt2DiMuonDetachedJPsiDecision_TOS;   //!
   TBranch        *b_Lambda0Hlt2DiMuonUnbiasedJPsiDecision_Dec;   //!
   TBranch        *b_Lambda0Hlt2DiMuonUnbiasedJPsiDecision_TIS;   //!
   TBranch        *b_Lambda0Hlt2DiMuonUnbiasedJPsiDecision_TOS;   //!
   TBranch        *b_piminus_LOKI_BPVDLS;   //!
   TBranch        *b_piminus_LOKI_DOCAZ;   //!
   TBranch        *b_piminus_LOKI_ETA;   //!
   TBranch        *b_piminus_LOKI_MIPCHI2DV;   //!
   TBranch        *b_piminus_LOKI_PHI;   //!
   TBranch        *b_piminus_LOKI_VCHI2PDOF;   //!
   TBranch        *b_piminus_CosTheta;   //!
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
   TBranch        *b_piminusL0Global_Dec;   //!
   TBranch        *b_piminusL0Global_TIS;   //!
   TBranch        *b_piminusL0Global_TOS;   //!
   TBranch        *b_piminusHlt1Global_Dec;   //!
   TBranch        *b_piminusHlt1Global_TIS;   //!
   TBranch        *b_piminusHlt1Global_TOS;   //!
   TBranch        *b_piminusHlt1Phys_Dec;   //!
   TBranch        *b_piminusHlt1Phys_TIS;   //!
   TBranch        *b_piminusHlt1Phys_TOS;   //!
   TBranch        *b_piminusHlt2Global_Dec;   //!
   TBranch        *b_piminusHlt2Global_TIS;   //!
   TBranch        *b_piminusHlt2Global_TOS;   //!
   TBranch        *b_piminusHlt2Phys_Dec;   //!
   TBranch        *b_piminusHlt2Phys_TIS;   //!
   TBranch        *b_piminusHlt2Phys_TOS;   //!
   TBranch        *b_piminusStrippingGlobal_Dec;   //!
   TBranch        *b_piminusStrippingGlobal_TIS;   //!
   TBranch        *b_piminusStrippingGlobal_TOS;   //!
   TBranch        *b_piminusHlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_piminusHlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_piminusHlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_piminusHlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_piminusHlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_piminusHlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_piminusHlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_piminusHlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_piminusHlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_piminusHlt1DiMuonNoIPL0DiDecision_Dec;   //!
   TBranch        *b_piminusHlt1DiMuonNoIPL0DiDecision_TIS;   //!
   TBranch        *b_piminusHlt1DiMuonNoIPL0DiDecision_TOS;   //!
   TBranch        *b_piminusHlt1SingleMuonNoIPL0Decision_Dec;   //!
   TBranch        *b_piminusHlt1SingleMuonNoIPL0Decision_TIS;   //!
   TBranch        *b_piminusHlt1SingleMuonNoIPL0Decision_TOS;   //!
   TBranch        *b_piminusHlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_piminusHlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_piminusHlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_piminusHlt2DiMuonDetachedJPsiDecision_Dec;   //!
   TBranch        *b_piminusHlt2DiMuonDetachedJPsiDecision_TIS;   //!
   TBranch        *b_piminusHlt2DiMuonDetachedJPsiDecision_TOS;   //!
   TBranch        *b_piminusHlt2DiMuonUnbiasedJPsiDecision_Dec;   //!
   TBranch        *b_piminusHlt2DiMuonUnbiasedJPsiDecision_TIS;   //!
   TBranch        *b_piminusHlt2DiMuonUnbiasedJPsiDecision_TOS;   //!
   TBranch        *b_piminus_TRACK_Type;   //!
   TBranch        *b_piminus_TRACK_Key;   //!
   TBranch        *b_piminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_piminus_TRACK_PCHI2;   //!
   TBranch        *b_piminus_hasTT;   //!
   TBranch        *b_piminus_hasT;   //!
   TBranch        *b_piminus_TRACK_MatchCHI2;   //!
   TBranch        *b_piminus_VELO_UTID;   //!
   TBranch        *b_piminus_VeloHits;   //!
   TBranch        *b_piminus_TRACK_GhostProb;   //!
   TBranch        *b_piminus_TRACK_CloneDist;   //!
   TBranch        *b_pplus_LOKI_BPVDLS;   //!
   TBranch        *b_pplus_LOKI_DOCAZ;   //!
   TBranch        *b_pplus_LOKI_ETA;   //!
   TBranch        *b_pplus_LOKI_MIPCHI2DV;   //!
   TBranch        *b_pplus_LOKI_PHI;   //!
   TBranch        *b_pplus_LOKI_VCHI2PDOF;   //!
   TBranch        *b_pplus_CosTheta;   //!
   TBranch        *b_pplus_MINIP;   //!
   TBranch        *b_pplus_MINIPCHI2;   //!
   TBranch        *b_pplus_MINIPNEXTBEST;   //!
   TBranch        *b_pplus_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_pplus_OWNPV_X;   //!
   TBranch        *b_pplus_OWNPV_Y;   //!
   TBranch        *b_pplus_OWNPV_Z;   //!
   TBranch        *b_pplus_OWNPV_XERR;   //!
   TBranch        *b_pplus_OWNPV_YERR;   //!
   TBranch        *b_pplus_OWNPV_ZERR;   //!
   TBranch        *b_pplus_OWNPV_CHI2;   //!
   TBranch        *b_pplus_OWNPV_NDOF;   //!
   TBranch        *b_pplus_OWNPV_COV_;   //!
   TBranch        *b_pplus_IP_OWNPV;   //!
   TBranch        *b_pplus_IPCHI2_OWNPV;   //!
   TBranch        *b_pplus_TOPPV_X;   //!
   TBranch        *b_pplus_TOPPV_Y;   //!
   TBranch        *b_pplus_TOPPV_Z;   //!
   TBranch        *b_pplus_TOPPV_XERR;   //!
   TBranch        *b_pplus_TOPPV_YERR;   //!
   TBranch        *b_pplus_TOPPV_ZERR;   //!
   TBranch        *b_pplus_TOPPV_CHI2;   //!
   TBranch        *b_pplus_TOPPV_NDOF;   //!
   TBranch        *b_pplus_TOPPV_COV_;   //!
   TBranch        *b_pplus_IP_TOPPV;   //!
   TBranch        *b_pplus_IPCHI2_TOPPV;   //!
   TBranch        *b_pplus_ORIVX_X;   //!
   TBranch        *b_pplus_ORIVX_Y;   //!
   TBranch        *b_pplus_ORIVX_Z;   //!
   TBranch        *b_pplus_ORIVX_XERR;   //!
   TBranch        *b_pplus_ORIVX_YERR;   //!
   TBranch        *b_pplus_ORIVX_ZERR;   //!
   TBranch        *b_pplus_ORIVX_CHI2;   //!
   TBranch        *b_pplus_ORIVX_NDOF;   //!
   TBranch        *b_pplus_ORIVX_COV_;   //!
   TBranch        *b_pplus_IP_ORIVX;   //!
   TBranch        *b_pplus_IPCHI2_ORIVX;   //!
   TBranch        *b_pplus_P;   //!
   TBranch        *b_pplus_PT;   //!
   TBranch        *b_pplus_PE;   //!
   TBranch        *b_pplus_PX;   //!
   TBranch        *b_pplus_PY;   //!
   TBranch        *b_pplus_PZ;   //!
   TBranch        *b_pplus_M;   //!
   TBranch        *b_pplus_ID;   //!
   TBranch        *b_pplus_PIDe;   //!
   TBranch        *b_pplus_PIDmu;   //!
   TBranch        *b_pplus_PIDK;   //!
   TBranch        *b_pplus_PIDp;   //!
   TBranch        *b_pplus_ProbNNe;   //!
   TBranch        *b_pplus_ProbNNk;   //!
   TBranch        *b_pplus_ProbNNp;   //!
   TBranch        *b_pplus_ProbNNpi;   //!
   TBranch        *b_pplus_ProbNNmu;   //!
   TBranch        *b_pplus_ProbNNghost;   //!
   TBranch        *b_pplus_hasMuon;   //!
   TBranch        *b_pplus_isMuon;   //!
   TBranch        *b_pplus_hasRich;   //!
   TBranch        *b_pplus_hasCalo;   //!
   TBranch        *b_pplusL0Global_Dec;   //!
   TBranch        *b_pplusL0Global_TIS;   //!
   TBranch        *b_pplusL0Global_TOS;   //!
   TBranch        *b_pplusHlt1Global_Dec;   //!
   TBranch        *b_pplusHlt1Global_TIS;   //!
   TBranch        *b_pplusHlt1Global_TOS;   //!
   TBranch        *b_pplusHlt1Phys_Dec;   //!
   TBranch        *b_pplusHlt1Phys_TIS;   //!
   TBranch        *b_pplusHlt1Phys_TOS;   //!
   TBranch        *b_pplusHlt2Global_Dec;   //!
   TBranch        *b_pplusHlt2Global_TIS;   //!
   TBranch        *b_pplusHlt2Global_TOS;   //!
   TBranch        *b_pplusHlt2Phys_Dec;   //!
   TBranch        *b_pplusHlt2Phys_TIS;   //!
   TBranch        *b_pplusHlt2Phys_TOS;   //!
   TBranch        *b_pplusStrippingGlobal_Dec;   //!
   TBranch        *b_pplusStrippingGlobal_TIS;   //!
   TBranch        *b_pplusStrippingGlobal_TOS;   //!
   TBranch        *b_pplusHlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_pplusHlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_pplusHlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_pplusHlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_pplusHlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_pplusHlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_pplusHlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_pplusHlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_pplusHlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_pplusHlt1DiMuonNoIPL0DiDecision_Dec;   //!
   TBranch        *b_pplusHlt1DiMuonNoIPL0DiDecision_TIS;   //!
   TBranch        *b_pplusHlt1DiMuonNoIPL0DiDecision_TOS;   //!
   TBranch        *b_pplusHlt1SingleMuonNoIPL0Decision_Dec;   //!
   TBranch        *b_pplusHlt1SingleMuonNoIPL0Decision_TIS;   //!
   TBranch        *b_pplusHlt1SingleMuonNoIPL0Decision_TOS;   //!
   TBranch        *b_pplusHlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_pplusHlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_pplusHlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_pplusHlt2DiMuonDetachedJPsiDecision_Dec;   //!
   TBranch        *b_pplusHlt2DiMuonDetachedJPsiDecision_TIS;   //!
   TBranch        *b_pplusHlt2DiMuonDetachedJPsiDecision_TOS;   //!
   TBranch        *b_pplusHlt2DiMuonUnbiasedJPsiDecision_Dec;   //!
   TBranch        *b_pplusHlt2DiMuonUnbiasedJPsiDecision_TIS;   //!
   TBranch        *b_pplusHlt2DiMuonUnbiasedJPsiDecision_TOS;   //!
   TBranch        *b_pplus_TRACK_Type;   //!
   TBranch        *b_pplus_TRACK_Key;   //!
   TBranch        *b_pplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_pplus_TRACK_PCHI2;   //!
   TBranch        *b_pplus_hasTT;   //!
   TBranch        *b_pplus_hasT;   //!
   TBranch        *b_pplus_TRACK_MatchCHI2;   //!
   TBranch        *b_pplus_VELO_UTID;   //!
   TBranch        *b_pplus_VeloHits;   //!
   TBranch        *b_pplus_TRACK_GhostProb;   //!
   TBranch        *b_pplus_TRACK_CloneDist;   //!
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
   TBranch        *b_Primaries;   //!
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
   TBranch        *b_LL_DOCAzweight_1bin;   //!
   TBranch        *b_DD_DOCAzweight_1bin;   //!
   TBranch        *b_LL_DOCAzweight_1bin_p1sigma;   //!
   TBranch        *b_DD_DOCAzweight_1bin_p1sigma;   //!
   TBranch        *b_LL_DOCAzweight_1bin_m1sigma;   //!
   TBranch        *b_DD_DOCAzweight_1bin_m1sigma;   //!
   TBranch        *b_LL_fiducial_cuts;   //!
   TBranch        *b_DD_fiducial_cuts;   //!
   TBranch        *b_isFullSelected_Corrected;   //!
   TBranch        *b_isFullTriggered_Corrected;   //!
   TBranch        *b_has2ndBestIPChi2;   //!
   TBranch        *b_hasDetachedStrippingTriggered;   //!
   TBranch        *b_hasExclStrippingTriggered;   //!
   TBranch        *b_hasBestDTFCHI2;   //!

   Lambdab2JpsiLambda_reflections(TTree *tree=0);
   virtual ~Lambdab2JpsiLambda_reflections();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Lambdab2JpsiLambda_reflections_cxx
Lambdab2JpsiLambda_reflections::Lambdab2JpsiLambda_reflections(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      //TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../../data/Lambdab0_Standard_Data.root");
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../../data/Lambdab0_FullDD_Data.root");
      if (!f || !f->IsOpen()) {
         //f = new TFile("../../data/Lambdab0_Standard_Data.root");
         f = new TFile("../../data/Lambdab0_FullDD_Data.root");
      }
      f->GetObject("DecayTree",tree);

   }
   Init(tree);
}

Lambdab2JpsiLambda_reflections::~Lambdab2JpsiLambda_reflections()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Lambdab2JpsiLambda_reflections::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Lambdab2JpsiLambda_reflections::LoadTree(Long64_t entry)
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

void Lambdab2JpsiLambda_reflections::Init(TTree *tree)
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

   fChain->SetBranchAddress("b_particle_LOKI_BPVDLS", &b_particle_LOKI_BPVDLS, &b_b_particle_LOKI_BPVDLS);
   fChain->SetBranchAddress("b_particle_LOKI_DOCAZ", &b_particle_LOKI_DOCAZ, &b_b_particle_LOKI_DOCAZ);
   fChain->SetBranchAddress("b_particle_LOKI_ETA", &b_particle_LOKI_ETA, &b_b_particle_LOKI_ETA);
   fChain->SetBranchAddress("b_particle_LOKI_MIPCHI2DV", &b_particle_LOKI_MIPCHI2DV, &b_b_particle_LOKI_MIPCHI2DV);
   fChain->SetBranchAddress("b_particle_LOKI_PHI", &b_particle_LOKI_PHI, &b_b_particle_LOKI_PHI);
   fChain->SetBranchAddress("b_particle_LOKI_VCHI2PDOF", &b_particle_LOKI_VCHI2PDOF, &b_b_particle_LOKI_VCHI2PDOF);
   fChain->SetBranchAddress("b_particle_MINIP", &b_particle_MINIP, &b_b_particle_MINIP);
   fChain->SetBranchAddress("b_particle_MINIPCHI2", &b_particle_MINIPCHI2, &b_b_particle_MINIPCHI2);
   fChain->SetBranchAddress("b_particle_MINIPNEXTBEST", &b_particle_MINIPNEXTBEST, &b_b_particle_MINIPNEXTBEST);
   fChain->SetBranchAddress("b_particle_MINIPCHI2NEXTBEST", &b_particle_MINIPCHI2NEXTBEST, &b_b_particle_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("b_particle_ENDVERTEX_X", &b_particle_ENDVERTEX_X, &b_b_particle_ENDVERTEX_X);
   fChain->SetBranchAddress("b_particle_ENDVERTEX_Y", &b_particle_ENDVERTEX_Y, &b_b_particle_ENDVERTEX_Y);
   fChain->SetBranchAddress("b_particle_ENDVERTEX_Z", &b_particle_ENDVERTEX_Z, &b_b_particle_ENDVERTEX_Z);
   fChain->SetBranchAddress("b_particle_ENDVERTEX_XERR", &b_particle_ENDVERTEX_XERR, &b_b_particle_ENDVERTEX_XERR);
   fChain->SetBranchAddress("b_particle_ENDVERTEX_YERR", &b_particle_ENDVERTEX_YERR, &b_b_particle_ENDVERTEX_YERR);
   fChain->SetBranchAddress("b_particle_ENDVERTEX_ZERR", &b_particle_ENDVERTEX_ZERR, &b_b_particle_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("b_particle_ENDVERTEX_CHI2", &b_particle_ENDVERTEX_CHI2, &b_b_particle_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("b_particle_ENDVERTEX_NDOF", &b_particle_ENDVERTEX_NDOF, &b_b_particle_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("b_particle_ENDVERTEX_COV_", b_particle_ENDVERTEX_COV_, &b_b_particle_ENDVERTEX_COV_);
   fChain->SetBranchAddress("b_particle_OWNPV_X", &b_particle_OWNPV_X, &b_b_particle_OWNPV_X);
   fChain->SetBranchAddress("b_particle_OWNPV_Y", &b_particle_OWNPV_Y, &b_b_particle_OWNPV_Y);
   fChain->SetBranchAddress("b_particle_OWNPV_Z", &b_particle_OWNPV_Z, &b_b_particle_OWNPV_Z);
   fChain->SetBranchAddress("b_particle_OWNPV_XERR", &b_particle_OWNPV_XERR, &b_b_particle_OWNPV_XERR);
   fChain->SetBranchAddress("b_particle_OWNPV_YERR", &b_particle_OWNPV_YERR, &b_b_particle_OWNPV_YERR);
   fChain->SetBranchAddress("b_particle_OWNPV_ZERR", &b_particle_OWNPV_ZERR, &b_b_particle_OWNPV_ZERR);
   fChain->SetBranchAddress("b_particle_OWNPV_CHI2", &b_particle_OWNPV_CHI2, &b_b_particle_OWNPV_CHI2);
   fChain->SetBranchAddress("b_particle_OWNPV_NDOF", &b_particle_OWNPV_NDOF, &b_b_particle_OWNPV_NDOF);
   fChain->SetBranchAddress("b_particle_OWNPV_COV_", b_particle_OWNPV_COV_, &b_b_particle_OWNPV_COV_);
   fChain->SetBranchAddress("b_particle_IP_OWNPV", &b_particle_IP_OWNPV, &b_b_particle_IP_OWNPV);
   fChain->SetBranchAddress("b_particle_IPCHI2_OWNPV", &b_particle_IPCHI2_OWNPV, &b_b_particle_IPCHI2_OWNPV);
   fChain->SetBranchAddress("b_particle_FD_OWNPV", &b_particle_FD_OWNPV, &b_b_particle_FD_OWNPV);
   fChain->SetBranchAddress("b_particle_FDCHI2_OWNPV", &b_particle_FDCHI2_OWNPV, &b_b_particle_FDCHI2_OWNPV);
   fChain->SetBranchAddress("b_particle_DIRA_OWNPV", &b_particle_DIRA_OWNPV, &b_b_particle_DIRA_OWNPV);
   fChain->SetBranchAddress("b_particle_TOPPV_X", &b_particle_TOPPV_X, &b_b_particle_TOPPV_X);
   fChain->SetBranchAddress("b_particle_TOPPV_Y", &b_particle_TOPPV_Y, &b_b_particle_TOPPV_Y);
   fChain->SetBranchAddress("b_particle_TOPPV_Z", &b_particle_TOPPV_Z, &b_b_particle_TOPPV_Z);
   fChain->SetBranchAddress("b_particle_TOPPV_XERR", &b_particle_TOPPV_XERR, &b_b_particle_TOPPV_XERR);
   fChain->SetBranchAddress("b_particle_TOPPV_YERR", &b_particle_TOPPV_YERR, &b_b_particle_TOPPV_YERR);
   fChain->SetBranchAddress("b_particle_TOPPV_ZERR", &b_particle_TOPPV_ZERR, &b_b_particle_TOPPV_ZERR);
   fChain->SetBranchAddress("b_particle_TOPPV_CHI2", &b_particle_TOPPV_CHI2, &b_b_particle_TOPPV_CHI2);
   fChain->SetBranchAddress("b_particle_TOPPV_NDOF", &b_particle_TOPPV_NDOF, &b_b_particle_TOPPV_NDOF);
   fChain->SetBranchAddress("b_particle_TOPPV_COV_", b_particle_TOPPV_COV_, &b_b_particle_TOPPV_COV_);
   fChain->SetBranchAddress("b_particle_IP_TOPPV", &b_particle_IP_TOPPV, &b_b_particle_IP_TOPPV);
   fChain->SetBranchAddress("b_particle_IPCHI2_TOPPV", &b_particle_IPCHI2_TOPPV, &b_b_particle_IPCHI2_TOPPV);
   fChain->SetBranchAddress("b_particle_FD_TOPPV", &b_particle_FD_TOPPV, &b_b_particle_FD_TOPPV);
   fChain->SetBranchAddress("b_particle_FDCHI2_TOPPV", &b_particle_FDCHI2_TOPPV, &b_b_particle_FDCHI2_TOPPV);
   fChain->SetBranchAddress("b_particle_DIRA_TOPPV", &b_particle_DIRA_TOPPV, &b_b_particle_DIRA_TOPPV);
   fChain->SetBranchAddress("b_particle_P", &b_particle_P, &b_b_particle_P);
   fChain->SetBranchAddress("b_particle_PT", &b_particle_PT, &b_b_particle_PT);
   fChain->SetBranchAddress("b_particle_PE", &b_particle_PE, &b_b_particle_PE);
   fChain->SetBranchAddress("b_particle_PX", &b_particle_PX, &b_b_particle_PX);
   fChain->SetBranchAddress("b_particle_PY", &b_particle_PY, &b_b_particle_PY);
   fChain->SetBranchAddress("b_particle_PZ", &b_particle_PZ, &b_b_particle_PZ);
   fChain->SetBranchAddress("b_particle_MM", &b_particle_MM, &b_b_particle_MM);
   fChain->SetBranchAddress("b_particle_MMERR", &b_particle_MMERR, &b_b_particle_MMERR);
   fChain->SetBranchAddress("b_particle_M", &b_particle_M, &b_b_particle_M);
   fChain->SetBranchAddress("b_particle_ID", &b_particle_ID, &b_b_particle_ID);
   fChain->SetBranchAddress("b_particle_TAU", &b_particle_TAU, &b_b_particle_TAU);
   fChain->SetBranchAddress("b_particle_TAUERR", &b_particle_TAUERR, &b_b_particle_TAUERR);
   fChain->SetBranchAddress("b_particle_TAUCHI2", &b_particle_TAUCHI2, &b_b_particle_TAUCHI2);
   fChain->SetBranchAddress("b_particleL0Global_Dec", &b_particleL0Global_Dec, &b_b_particleL0Global_Dec);
   fChain->SetBranchAddress("b_particleL0Global_TIS", &b_particleL0Global_TIS, &b_b_particleL0Global_TIS);
   fChain->SetBranchAddress("b_particleL0Global_TOS", &b_particleL0Global_TOS, &b_b_particleL0Global_TOS);
   fChain->SetBranchAddress("b_particleHlt1Global_Dec", &b_particleHlt1Global_Dec, &b_b_particleHlt1Global_Dec);
   fChain->SetBranchAddress("b_particleHlt1Global_TIS", &b_particleHlt1Global_TIS, &b_b_particleHlt1Global_TIS);
   fChain->SetBranchAddress("b_particleHlt1Global_TOS", &b_particleHlt1Global_TOS, &b_b_particleHlt1Global_TOS);
   fChain->SetBranchAddress("b_particleHlt1Phys_Dec", &b_particleHlt1Phys_Dec, &b_b_particleHlt1Phys_Dec);
   fChain->SetBranchAddress("b_particleHlt1Phys_TIS", &b_particleHlt1Phys_TIS, &b_b_particleHlt1Phys_TIS);
   fChain->SetBranchAddress("b_particleHlt1Phys_TOS", &b_particleHlt1Phys_TOS, &b_b_particleHlt1Phys_TOS);
   fChain->SetBranchAddress("b_particleHlt2Global_Dec", &b_particleHlt2Global_Dec, &b_b_particleHlt2Global_Dec);
   fChain->SetBranchAddress("b_particleHlt2Global_TIS", &b_particleHlt2Global_TIS, &b_b_particleHlt2Global_TIS);
   fChain->SetBranchAddress("b_particleHlt2Global_TOS", &b_particleHlt2Global_TOS, &b_b_particleHlt2Global_TOS);
   fChain->SetBranchAddress("b_particleHlt2Phys_Dec", &b_particleHlt2Phys_Dec, &b_b_particleHlt2Phys_Dec);
   fChain->SetBranchAddress("b_particleHlt2Phys_TIS", &b_particleHlt2Phys_TIS, &b_b_particleHlt2Phys_TIS);
   fChain->SetBranchAddress("b_particleHlt2Phys_TOS", &b_particleHlt2Phys_TOS, &b_b_particleHlt2Phys_TOS);
   fChain->SetBranchAddress("b_particleStrippingGlobal_Dec", &b_particleStrippingGlobal_Dec, &b_b_particleStrippingGlobal_Dec);
   fChain->SetBranchAddress("b_particleStrippingGlobal_TIS", &b_particleStrippingGlobal_TIS, &b_b_particleStrippingGlobal_TIS);
   fChain->SetBranchAddress("b_particleStrippingGlobal_TOS", &b_particleStrippingGlobal_TOS, &b_b_particleStrippingGlobal_TOS);
   fChain->SetBranchAddress("b_particleHlt1DiMuonHighMassDecision_Dec", &b_particleHlt1DiMuonHighMassDecision_Dec, &b_b_particleHlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("b_particleHlt1DiMuonHighMassDecision_TIS", &b_particleHlt1DiMuonHighMassDecision_TIS, &b_b_particleHlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("b_particleHlt1DiMuonHighMassDecision_TOS", &b_particleHlt1DiMuonHighMassDecision_TOS, &b_b_particleHlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("b_particleHlt1TrackAllL0Decision_Dec", &b_particleHlt1TrackAllL0Decision_Dec, &b_b_particleHlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("b_particleHlt1TrackAllL0Decision_TIS", &b_particleHlt1TrackAllL0Decision_TIS, &b_b_particleHlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("b_particleHlt1TrackAllL0Decision_TOS", &b_particleHlt1TrackAllL0Decision_TOS, &b_b_particleHlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("b_particleHlt1TrackMuonDecision_Dec", &b_particleHlt1TrackMuonDecision_Dec, &b_b_particleHlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("b_particleHlt1TrackMuonDecision_TIS", &b_particleHlt1TrackMuonDecision_TIS, &b_b_particleHlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("b_particleHlt1TrackMuonDecision_TOS", &b_particleHlt1TrackMuonDecision_TOS, &b_b_particleHlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("b_particleHlt1DiMuonNoIPL0DiDecision_Dec", &b_particleHlt1DiMuonNoIPL0DiDecision_Dec, &b_b_particleHlt1DiMuonNoIPL0DiDecision_Dec);
   fChain->SetBranchAddress("b_particleHlt1DiMuonNoIPL0DiDecision_TIS", &b_particleHlt1DiMuonNoIPL0DiDecision_TIS, &b_b_particleHlt1DiMuonNoIPL0DiDecision_TIS);
   fChain->SetBranchAddress("b_particleHlt1DiMuonNoIPL0DiDecision_TOS", &b_particleHlt1DiMuonNoIPL0DiDecision_TOS, &b_b_particleHlt1DiMuonNoIPL0DiDecision_TOS);
   fChain->SetBranchAddress("b_particleHlt1SingleMuonNoIPL0Decision_Dec", &b_particleHlt1SingleMuonNoIPL0Decision_Dec, &b_b_particleHlt1SingleMuonNoIPL0Decision_Dec);
   fChain->SetBranchAddress("b_particleHlt1SingleMuonNoIPL0Decision_TIS", &b_particleHlt1SingleMuonNoIPL0Decision_TIS, &b_b_particleHlt1SingleMuonNoIPL0Decision_TIS);
   fChain->SetBranchAddress("b_particleHlt1SingleMuonNoIPL0Decision_TOS", &b_particleHlt1SingleMuonNoIPL0Decision_TOS, &b_b_particleHlt1SingleMuonNoIPL0Decision_TOS);
   fChain->SetBranchAddress("b_particleHlt2DiMuonJPsiDecision_Dec", &b_particleHlt2DiMuonJPsiDecision_Dec, &b_b_particleHlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("b_particleHlt2DiMuonJPsiDecision_TIS", &b_particleHlt2DiMuonJPsiDecision_TIS, &b_b_particleHlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("b_particleHlt2DiMuonJPsiDecision_TOS", &b_particleHlt2DiMuonJPsiDecision_TOS, &b_b_particleHlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("b_particleHlt2DiMuonDetachedJPsiDecision_Dec", &b_particleHlt2DiMuonDetachedJPsiDecision_Dec, &b_b_particleHlt2DiMuonDetachedJPsiDecision_Dec);
   fChain->SetBranchAddress("b_particleHlt2DiMuonDetachedJPsiDecision_TIS", &b_particleHlt2DiMuonDetachedJPsiDecision_TIS, &b_b_particleHlt2DiMuonDetachedJPsiDecision_TIS);
   fChain->SetBranchAddress("b_particleHlt2DiMuonDetachedJPsiDecision_TOS", &b_particleHlt2DiMuonDetachedJPsiDecision_TOS, &b_b_particleHlt2DiMuonDetachedJPsiDecision_TOS);
   fChain->SetBranchAddress("b_particleHlt2DiMuonUnbiasedJPsiDecision_Dec", &b_particleHlt2DiMuonUnbiasedJPsiDecision_Dec, &b_b_particleHlt2DiMuonUnbiasedJPsiDecision_Dec);
   fChain->SetBranchAddress("b_particleHlt2DiMuonUnbiasedJPsiDecision_TIS", &b_particleHlt2DiMuonUnbiasedJPsiDecision_TIS, &b_b_particleHlt2DiMuonUnbiasedJPsiDecision_TIS);
   fChain->SetBranchAddress("b_particleHlt2DiMuonUnbiasedJPsiDecision_TOS", &b_particleHlt2DiMuonUnbiasedJPsiDecision_TOS, &b_b_particleHlt2DiMuonUnbiasedJPsiDecision_TOS);
   fChain->SetBranchAddress("b_particle_MassFitConsAll_nPV", &b_particle_MassFitConsAll_nPV, &b_b_particle_MassFitConsAll_nPV);
   fChain->SetBranchAddress("b_particle_MassFitConsAll_M", b_particle_MassFitConsAll_M, &b_b_particle_MassFitConsAll_M);
   fChain->SetBranchAddress("b_particle_MassFitConsAll_MERR", b_particle_MassFitConsAll_MERR, &b_b_particle_MassFitConsAll_MERR);
   fChain->SetBranchAddress("b_particle_MassFitConsAll_P", b_particle_MassFitConsAll_P, &b_b_particle_MassFitConsAll_P);
   fChain->SetBranchAddress("b_particle_MassFitConsAll_PERR", b_particle_MassFitConsAll_PERR, &b_b_particle_MassFitConsAll_PERR);
   fChain->SetBranchAddress("b_particle_MassFitConsAll_chi2_B", b_particle_MassFitConsAll_chi2_B, &b_b_particle_MassFitConsAll_chi2_B);
   fChain->SetBranchAddress("b_particle_MassFitConsAll_nDOF", b_particle_MassFitConsAll_nDOF, &b_b_particle_MassFitConsAll_nDOF);
   fChain->SetBranchAddress("b_particle_MassFitConsAll_nIter", b_particle_MassFitConsAll_nIter, &b_b_particle_MassFitConsAll_nIter);
   fChain->SetBranchAddress("b_particle_MassFitConsAll_status", b_particle_MassFitConsAll_status, &b_b_particle_MassFitConsAll_status);
   fChain->SetBranchAddress("b_particle_MassFitConsJpsi_nPV", &b_particle_MassFitConsJpsi_nPV, &b_b_particle_MassFitConsJpsi_nPV);
   fChain->SetBranchAddress("b_particle_MassFitConsJpsi_M", b_particle_MassFitConsJpsi_M, &b_b_particle_MassFitConsJpsi_M);
   fChain->SetBranchAddress("b_particle_MassFitConsJpsi_MERR", b_particle_MassFitConsJpsi_MERR, &b_b_particle_MassFitConsJpsi_MERR);
   fChain->SetBranchAddress("b_particle_MassFitConsJpsi_P", b_particle_MassFitConsJpsi_P, &b_b_particle_MassFitConsJpsi_P);
   fChain->SetBranchAddress("b_particle_MassFitConsJpsi_PERR", b_particle_MassFitConsJpsi_PERR, &b_b_particle_MassFitConsJpsi_PERR);
   fChain->SetBranchAddress("b_particle_MassFitConsJpsi_chi2_B", b_particle_MassFitConsJpsi_chi2_B, &b_b_particle_MassFitConsJpsi_chi2_B);
   fChain->SetBranchAddress("b_particle_MassFitConsJpsi_nDOF", b_particle_MassFitConsJpsi_nDOF, &b_b_particle_MassFitConsJpsi_nDOF);
   fChain->SetBranchAddress("b_particle_MassFitConsJpsi_nIter", b_particle_MassFitConsJpsi_nIter, &b_b_particle_MassFitConsJpsi_nIter);
   fChain->SetBranchAddress("b_particle_MassFitConsJpsi_status", b_particle_MassFitConsJpsi_status, &b_b_particle_MassFitConsJpsi_status);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_nPV", &b_particle_StandardLifetimeFit_nPV, &b_b_particle_StandardLifetimeFit_nPV);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_J_psi_1S_M", b_particle_StandardLifetimeFit_J_psi_1S_M, &b_b_particle_StandardLifetimeFit_J_psi_1S_M);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_J_psi_1S_MERR", b_particle_StandardLifetimeFit_J_psi_1S_MERR, &b_b_particle_StandardLifetimeFit_J_psi_1S_MERR);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_J_psi_1S_P", b_particle_StandardLifetimeFit_J_psi_1S_P, &b_b_particle_StandardLifetimeFit_J_psi_1S_P);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_J_psi_1S_PERR", b_particle_StandardLifetimeFit_J_psi_1S_PERR, &b_b_particle_StandardLifetimeFit_J_psi_1S_PERR);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_J_psi_1S_ctau", b_particle_StandardLifetimeFit_J_psi_1S_ctau, &b_b_particle_StandardLifetimeFit_J_psi_1S_ctau);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_J_psi_1S_ctauErr", b_particle_StandardLifetimeFit_J_psi_1S_ctauErr, &b_b_particle_StandardLifetimeFit_J_psi_1S_ctauErr);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_J_psi_1S_decayLength", b_particle_StandardLifetimeFit_J_psi_1S_decayLength, &b_b_particle_StandardLifetimeFit_J_psi_1S_decayLength);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_J_psi_1S_decayLengthErr", b_particle_StandardLifetimeFit_J_psi_1S_decayLengthErr, &b_b_particle_StandardLifetimeFit_J_psi_1S_decayLengthErr);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_Lambda0_M", b_particle_StandardLifetimeFit_Lambda0_M, &b_b_particle_StandardLifetimeFit_Lambda0_M);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_Lambda0_MERR", b_particle_StandardLifetimeFit_Lambda0_MERR, &b_b_particle_StandardLifetimeFit_Lambda0_MERR);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_Lambda0_P", b_particle_StandardLifetimeFit_Lambda0_P, &b_b_particle_StandardLifetimeFit_Lambda0_P);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_Lambda0_PERR", b_particle_StandardLifetimeFit_Lambda0_PERR, &b_b_particle_StandardLifetimeFit_Lambda0_PERR);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_Lambda0_ctau", b_particle_StandardLifetimeFit_Lambda0_ctau, &b_b_particle_StandardLifetimeFit_Lambda0_ctau);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_Lambda0_ctauErr", b_particle_StandardLifetimeFit_Lambda0_ctauErr, &b_b_particle_StandardLifetimeFit_Lambda0_ctauErr);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_Lambda0_decayLength", b_particle_StandardLifetimeFit_Lambda0_decayLength, &b_b_particle_StandardLifetimeFit_Lambda0_decayLength);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_Lambda0_decayLengthErr", b_particle_StandardLifetimeFit_Lambda0_decayLengthErr, &b_b_particle_StandardLifetimeFit_Lambda0_decayLengthErr);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_M", b_particle_StandardLifetimeFit_M, &b_b_particle_StandardLifetimeFit_M);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_MERR", b_particle_StandardLifetimeFit_MERR, &b_b_particle_StandardLifetimeFit_MERR);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_P", b_particle_StandardLifetimeFit_P, &b_b_particle_StandardLifetimeFit_P);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_PERR", b_particle_StandardLifetimeFit_PERR, &b_b_particle_StandardLifetimeFit_PERR);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_PV_X", b_particle_StandardLifetimeFit_PV_X, &b_b_particle_StandardLifetimeFit_PV_X);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_PV_Y", b_particle_StandardLifetimeFit_PV_Y, &b_b_particle_StandardLifetimeFit_PV_Y);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_PV_Z", b_particle_StandardLifetimeFit_PV_Z, &b_b_particle_StandardLifetimeFit_PV_Z);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_PV_key", b_particle_StandardLifetimeFit_PV_key, &b_b_particle_StandardLifetimeFit_PV_key);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_chi2_B", b_particle_StandardLifetimeFit_chi2_B, &b_b_particle_StandardLifetimeFit_chi2_B);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_ctau", b_particle_StandardLifetimeFit_ctau, &b_b_particle_StandardLifetimeFit_ctau);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_ctauErr", b_particle_StandardLifetimeFit_ctauErr, &b_b_particle_StandardLifetimeFit_ctauErr);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_decayLength", b_particle_StandardLifetimeFit_decayLength, &b_b_particle_StandardLifetimeFit_decayLength);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_decayLengthErr", b_particle_StandardLifetimeFit_decayLengthErr, &b_b_particle_StandardLifetimeFit_decayLengthErr);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_nDOF", b_particle_StandardLifetimeFit_nDOF, &b_b_particle_StandardLifetimeFit_nDOF);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_nIter", b_particle_StandardLifetimeFit_nIter, &b_b_particle_StandardLifetimeFit_nIter);
   fChain->SetBranchAddress("b_particle_StandardLifetimeFit_status", b_particle_StandardLifetimeFit_status, &b_b_particle_StandardLifetimeFit_status);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_NumberOfRemovedTracks", &b_particle_ModifiedPVPseudoLifetimeFit_NumberOfRemovedTracks, &b_b_particle_ModifiedPVPseudoLifetimeFit_NumberOfRemovedTracks);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_AllRefittedVertices", &b_particle_ModifiedPVPseudoLifetimeFit_AllRefittedVertices, &b_b_particle_ModifiedPVPseudoLifetimeFit_AllRefittedVertices);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_RefittedPVs", &b_particle_ModifiedPVPseudoLifetimeFit_RefittedPVs, &b_b_particle_ModifiedPVPseudoLifetimeFit_RefittedPVs);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_nPV", &b_particle_ModifiedPVPseudoLifetimeFit_nPV, &b_b_particle_ModifiedPVPseudoLifetimeFit_nPV);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_IP", b_particle_ModifiedPVPseudoLifetimeFit_IP, &b_b_particle_ModifiedPVPseudoLifetimeFit_IP);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_IPCHI2", b_particle_ModifiedPVPseudoLifetimeFit_IPCHI2, &b_b_particle_ModifiedPVPseudoLifetimeFit_IPCHI2);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_M", b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_M, &b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_M);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_MERR", b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_MERR, &b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_MERR);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_P", b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_P, &b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_P);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_PERR", b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_PERR, &b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_PERR);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_ctau", b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_ctau, &b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_ctau);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_ctauErr", b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_ctauErr, &b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_ctauErr);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_decayLength", b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_decayLength, &b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_decayLength);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_decayLengthErr", b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_decayLengthErr, &b_b_particle_ModifiedPVPseudoLifetimeFit_J_psi_1S_decayLengthErr);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_M", b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_M, &b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_M);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_MERR", b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_MERR, &b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_MERR);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_P", b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_P, &b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_P);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_PERR", b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_PERR, &b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_PERR);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_ctau", b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_ctau, &b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_ctau);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_ctauErr", b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_ctauErr, &b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_ctauErr);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_decayLength", b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_decayLength, &b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_decayLength);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_decayLengthErr", b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_decayLengthErr, &b_b_particle_ModifiedPVPseudoLifetimeFit_Lambda0_decayLengthErr);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_M", b_particle_ModifiedPVPseudoLifetimeFit_M, &b_b_particle_ModifiedPVPseudoLifetimeFit_M);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_MERR", b_particle_ModifiedPVPseudoLifetimeFit_MERR, &b_b_particle_ModifiedPVPseudoLifetimeFit_MERR);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_P", b_particle_ModifiedPVPseudoLifetimeFit_P, &b_b_particle_ModifiedPVPseudoLifetimeFit_P);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_PERR", b_particle_ModifiedPVPseudoLifetimeFit_PERR, &b_b_particle_ModifiedPVPseudoLifetimeFit_PERR);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_PV_X", b_particle_ModifiedPVPseudoLifetimeFit_PV_X, &b_b_particle_ModifiedPVPseudoLifetimeFit_PV_X);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_PV_Y", b_particle_ModifiedPVPseudoLifetimeFit_PV_Y, &b_b_particle_ModifiedPVPseudoLifetimeFit_PV_Y);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_PV_Z", b_particle_ModifiedPVPseudoLifetimeFit_PV_Z, &b_b_particle_ModifiedPVPseudoLifetimeFit_PV_Z);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_PV_key", b_particle_ModifiedPVPseudoLifetimeFit_PV_key, &b_b_particle_ModifiedPVPseudoLifetimeFit_PV_key);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_chi2_B", b_particle_ModifiedPVPseudoLifetimeFit_chi2_B, &b_b_particle_ModifiedPVPseudoLifetimeFit_chi2_B);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_ctau", b_particle_ModifiedPVPseudoLifetimeFit_ctau, &b_b_particle_ModifiedPVPseudoLifetimeFit_ctau);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_ctauErr", b_particle_ModifiedPVPseudoLifetimeFit_ctauErr, &b_b_particle_ModifiedPVPseudoLifetimeFit_ctauErr);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_decayLength", b_particle_ModifiedPVPseudoLifetimeFit_decayLength, &b_b_particle_ModifiedPVPseudoLifetimeFit_decayLength);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_decayLengthErr", b_particle_ModifiedPVPseudoLifetimeFit_decayLengthErr, &b_b_particle_ModifiedPVPseudoLifetimeFit_decayLengthErr);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_nDOF", b_particle_ModifiedPVPseudoLifetimeFit_nDOF, &b_b_particle_ModifiedPVPseudoLifetimeFit_nDOF);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_nIter", b_particle_ModifiedPVPseudoLifetimeFit_nIter, &b_b_particle_ModifiedPVPseudoLifetimeFit_nIter);
   fChain->SetBranchAddress("b_particle_ModifiedPVPseudoLifetimeFit_status", b_particle_ModifiedPVPseudoLifetimeFit_status, &b_b_particle_ModifiedPVPseudoLifetimeFit_status);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_NumberOfRemovedTracks", &b_particle_ModifiedPVStandardLifetimeFit_NumberOfRemovedTracks, &b_b_particle_ModifiedPVStandardLifetimeFit_NumberOfRemovedTracks);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_AllRefittedVertices", &b_particle_ModifiedPVStandardLifetimeFit_AllRefittedVertices, &b_b_particle_ModifiedPVStandardLifetimeFit_AllRefittedVertices);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_RefittedPVs", &b_particle_ModifiedPVStandardLifetimeFit_RefittedPVs, &b_b_particle_ModifiedPVStandardLifetimeFit_RefittedPVs);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_nPV", &b_particle_ModifiedPVStandardLifetimeFit_nPV, &b_b_particle_ModifiedPVStandardLifetimeFit_nPV);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_IP", b_particle_ModifiedPVStandardLifetimeFit_IP, &b_b_particle_ModifiedPVStandardLifetimeFit_IP);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_IPCHI2", b_particle_ModifiedPVStandardLifetimeFit_IPCHI2, &b_b_particle_ModifiedPVStandardLifetimeFit_IPCHI2);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_M", b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_M, &b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_M);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_MERR", b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_MERR, &b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_MERR);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_P", b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_P, &b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_P);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_PERR", b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_PERR, &b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_PERR);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_ctau", b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_ctau, &b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_ctau);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_ctauErr", b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_ctauErr, &b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_ctauErr);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_decayLength", b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_decayLength, &b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_decayLength);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_decayLengthErr", b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_decayLengthErr, &b_b_particle_ModifiedPVStandardLifetimeFit_J_psi_1S_decayLengthErr);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_Lambda0_M", b_particle_ModifiedPVStandardLifetimeFit_Lambda0_M, &b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_M);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_Lambda0_MERR", b_particle_ModifiedPVStandardLifetimeFit_Lambda0_MERR, &b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_MERR);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_Lambda0_P", b_particle_ModifiedPVStandardLifetimeFit_Lambda0_P, &b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_P);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_Lambda0_PERR", b_particle_ModifiedPVStandardLifetimeFit_Lambda0_PERR, &b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_PERR);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_Lambda0_ctau", b_particle_ModifiedPVStandardLifetimeFit_Lambda0_ctau, &b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_ctau);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_Lambda0_ctauErr", b_particle_ModifiedPVStandardLifetimeFit_Lambda0_ctauErr, &b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_ctauErr);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_Lambda0_decayLength", b_particle_ModifiedPVStandardLifetimeFit_Lambda0_decayLength, &b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_decayLength);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_Lambda0_decayLengthErr", b_particle_ModifiedPVStandardLifetimeFit_Lambda0_decayLengthErr, &b_b_particle_ModifiedPVStandardLifetimeFit_Lambda0_decayLengthErr);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_M", b_particle_ModifiedPVStandardLifetimeFit_M, &b_b_particle_ModifiedPVStandardLifetimeFit_M);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_MERR", b_particle_ModifiedPVStandardLifetimeFit_MERR, &b_b_particle_ModifiedPVStandardLifetimeFit_MERR);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_P", b_particle_ModifiedPVStandardLifetimeFit_P, &b_b_particle_ModifiedPVStandardLifetimeFit_P);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_PERR", b_particle_ModifiedPVStandardLifetimeFit_PERR, &b_b_particle_ModifiedPVStandardLifetimeFit_PERR);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_PV_X", b_particle_ModifiedPVStandardLifetimeFit_PV_X, &b_b_particle_ModifiedPVStandardLifetimeFit_PV_X);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_PV_Y", b_particle_ModifiedPVStandardLifetimeFit_PV_Y, &b_b_particle_ModifiedPVStandardLifetimeFit_PV_Y);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_PV_Z", b_particle_ModifiedPVStandardLifetimeFit_PV_Z, &b_b_particle_ModifiedPVStandardLifetimeFit_PV_Z);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_PV_key", b_particle_ModifiedPVStandardLifetimeFit_PV_key, &b_b_particle_ModifiedPVStandardLifetimeFit_PV_key);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_chi2_B", b_particle_ModifiedPVStandardLifetimeFit_chi2_B, &b_b_particle_ModifiedPVStandardLifetimeFit_chi2_B);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_ctau", b_particle_ModifiedPVStandardLifetimeFit_ctau, &b_b_particle_ModifiedPVStandardLifetimeFit_ctau);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_ctauErr", b_particle_ModifiedPVStandardLifetimeFit_ctauErr, &b_b_particle_ModifiedPVStandardLifetimeFit_ctauErr);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_decayLength", b_particle_ModifiedPVStandardLifetimeFit_decayLength, &b_b_particle_ModifiedPVStandardLifetimeFit_decayLength);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_decayLengthErr", b_particle_ModifiedPVStandardLifetimeFit_decayLengthErr, &b_b_particle_ModifiedPVStandardLifetimeFit_decayLengthErr);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_nDOF", b_particle_ModifiedPVStandardLifetimeFit_nDOF, &b_b_particle_ModifiedPVStandardLifetimeFit_nDOF);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_nIter", b_particle_ModifiedPVStandardLifetimeFit_nIter, &b_b_particle_ModifiedPVStandardLifetimeFit_nIter);
   fChain->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_status", b_particle_ModifiedPVStandardLifetimeFit_status, &b_b_particle_ModifiedPVStandardLifetimeFit_status);
   fChain->SetBranchAddress("J_psi_1S_LOKI_BPVDLS", &J_psi_1S_LOKI_BPVDLS, &b_J_psi_1S_LOKI_BPVDLS);
   fChain->SetBranchAddress("J_psi_1S_LOKI_DOCAZ", &J_psi_1S_LOKI_DOCAZ, &b_J_psi_1S_LOKI_DOCAZ);
   fChain->SetBranchAddress("J_psi_1S_LOKI_ETA", &J_psi_1S_LOKI_ETA, &b_J_psi_1S_LOKI_ETA);
   fChain->SetBranchAddress("J_psi_1S_LOKI_MIPCHI2DV", &J_psi_1S_LOKI_MIPCHI2DV, &b_J_psi_1S_LOKI_MIPCHI2DV);
   fChain->SetBranchAddress("J_psi_1S_LOKI_PHI", &J_psi_1S_LOKI_PHI, &b_J_psi_1S_LOKI_PHI);
   fChain->SetBranchAddress("J_psi_1S_LOKI_VCHI2PDOF", &J_psi_1S_LOKI_VCHI2PDOF, &b_J_psi_1S_LOKI_VCHI2PDOF);
   fChain->SetBranchAddress("J_psi_1S_CosTheta", &J_psi_1S_CosTheta, &b_J_psi_1S_CosTheta);
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
   fChain->SetBranchAddress("J_psi_1SL0Global_Dec", &J_psi_1SL0Global_Dec, &b_J_psi_1SL0Global_Dec);
   fChain->SetBranchAddress("J_psi_1SL0Global_TIS", &J_psi_1SL0Global_TIS, &b_J_psi_1SL0Global_TIS);
   fChain->SetBranchAddress("J_psi_1SL0Global_TOS", &J_psi_1SL0Global_TOS, &b_J_psi_1SL0Global_TOS);
   fChain->SetBranchAddress("J_psi_1SHlt1Global_Dec", &J_psi_1SHlt1Global_Dec, &b_J_psi_1SHlt1Global_Dec);
   fChain->SetBranchAddress("J_psi_1SHlt1Global_TIS", &J_psi_1SHlt1Global_TIS, &b_J_psi_1SHlt1Global_TIS);
   fChain->SetBranchAddress("J_psi_1SHlt1Global_TOS", &J_psi_1SHlt1Global_TOS, &b_J_psi_1SHlt1Global_TOS);
   fChain->SetBranchAddress("J_psi_1SHlt1Phys_Dec", &J_psi_1SHlt1Phys_Dec, &b_J_psi_1SHlt1Phys_Dec);
   fChain->SetBranchAddress("J_psi_1SHlt1Phys_TIS", &J_psi_1SHlt1Phys_TIS, &b_J_psi_1SHlt1Phys_TIS);
   fChain->SetBranchAddress("J_psi_1SHlt1Phys_TOS", &J_psi_1SHlt1Phys_TOS, &b_J_psi_1SHlt1Phys_TOS);
   fChain->SetBranchAddress("J_psi_1SHlt2Global_Dec", &J_psi_1SHlt2Global_Dec, &b_J_psi_1SHlt2Global_Dec);
   fChain->SetBranchAddress("J_psi_1SHlt2Global_TIS", &J_psi_1SHlt2Global_TIS, &b_J_psi_1SHlt2Global_TIS);
   fChain->SetBranchAddress("J_psi_1SHlt2Global_TOS", &J_psi_1SHlt2Global_TOS, &b_J_psi_1SHlt2Global_TOS);
   fChain->SetBranchAddress("J_psi_1SHlt2Phys_Dec", &J_psi_1SHlt2Phys_Dec, &b_J_psi_1SHlt2Phys_Dec);
   fChain->SetBranchAddress("J_psi_1SHlt2Phys_TIS", &J_psi_1SHlt2Phys_TIS, &b_J_psi_1SHlt2Phys_TIS);
   fChain->SetBranchAddress("J_psi_1SHlt2Phys_TOS", &J_psi_1SHlt2Phys_TOS, &b_J_psi_1SHlt2Phys_TOS);
   fChain->SetBranchAddress("J_psi_1SStrippingGlobal_Dec", &J_psi_1SStrippingGlobal_Dec, &b_J_psi_1SStrippingGlobal_Dec);
   fChain->SetBranchAddress("J_psi_1SStrippingGlobal_TIS", &J_psi_1SStrippingGlobal_TIS, &b_J_psi_1SStrippingGlobal_TIS);
   fChain->SetBranchAddress("J_psi_1SStrippingGlobal_TOS", &J_psi_1SStrippingGlobal_TOS, &b_J_psi_1SStrippingGlobal_TOS);
   fChain->SetBranchAddress("J_psi_1SHlt1DiMuonHighMassDecision_Dec", &J_psi_1SHlt1DiMuonHighMassDecision_Dec, &b_J_psi_1SHlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("J_psi_1SHlt1DiMuonHighMassDecision_TIS", &J_psi_1SHlt1DiMuonHighMassDecision_TIS, &b_J_psi_1SHlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("J_psi_1SHlt1DiMuonHighMassDecision_TOS", &J_psi_1SHlt1DiMuonHighMassDecision_TOS, &b_J_psi_1SHlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("J_psi_1SHlt1TrackAllL0Decision_Dec", &J_psi_1SHlt1TrackAllL0Decision_Dec, &b_J_psi_1SHlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("J_psi_1SHlt1TrackAllL0Decision_TIS", &J_psi_1SHlt1TrackAllL0Decision_TIS, &b_J_psi_1SHlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("J_psi_1SHlt1TrackAllL0Decision_TOS", &J_psi_1SHlt1TrackAllL0Decision_TOS, &b_J_psi_1SHlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("J_psi_1SHlt1TrackMuonDecision_Dec", &J_psi_1SHlt1TrackMuonDecision_Dec, &b_J_psi_1SHlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("J_psi_1SHlt1TrackMuonDecision_TIS", &J_psi_1SHlt1TrackMuonDecision_TIS, &b_J_psi_1SHlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("J_psi_1SHlt1TrackMuonDecision_TOS", &J_psi_1SHlt1TrackMuonDecision_TOS, &b_J_psi_1SHlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("J_psi_1SHlt1DiMuonNoIPL0DiDecision_Dec", &J_psi_1SHlt1DiMuonNoIPL0DiDecision_Dec, &b_J_psi_1SHlt1DiMuonNoIPL0DiDecision_Dec);
   fChain->SetBranchAddress("J_psi_1SHlt1DiMuonNoIPL0DiDecision_TIS", &J_psi_1SHlt1DiMuonNoIPL0DiDecision_TIS, &b_J_psi_1SHlt1DiMuonNoIPL0DiDecision_TIS);
   fChain->SetBranchAddress("J_psi_1SHlt1DiMuonNoIPL0DiDecision_TOS", &J_psi_1SHlt1DiMuonNoIPL0DiDecision_TOS, &b_J_psi_1SHlt1DiMuonNoIPL0DiDecision_TOS);
   fChain->SetBranchAddress("J_psi_1SHlt1SingleMuonNoIPL0Decision_Dec", &J_psi_1SHlt1SingleMuonNoIPL0Decision_Dec, &b_J_psi_1SHlt1SingleMuonNoIPL0Decision_Dec);
   fChain->SetBranchAddress("J_psi_1SHlt1SingleMuonNoIPL0Decision_TIS", &J_psi_1SHlt1SingleMuonNoIPL0Decision_TIS, &b_J_psi_1SHlt1SingleMuonNoIPL0Decision_TIS);
   fChain->SetBranchAddress("J_psi_1SHlt1SingleMuonNoIPL0Decision_TOS", &J_psi_1SHlt1SingleMuonNoIPL0Decision_TOS, &b_J_psi_1SHlt1SingleMuonNoIPL0Decision_TOS);
   fChain->SetBranchAddress("J_psi_1SHlt2DiMuonJPsiDecision_Dec", &J_psi_1SHlt2DiMuonJPsiDecision_Dec, &b_J_psi_1SHlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("J_psi_1SHlt2DiMuonJPsiDecision_TIS", &J_psi_1SHlt2DiMuonJPsiDecision_TIS, &b_J_psi_1SHlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("J_psi_1SHlt2DiMuonJPsiDecision_TOS", &J_psi_1SHlt2DiMuonJPsiDecision_TOS, &b_J_psi_1SHlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("J_psi_1SHlt2DiMuonDetachedJPsiDecision_Dec", &J_psi_1SHlt2DiMuonDetachedJPsiDecision_Dec, &b_J_psi_1SHlt2DiMuonDetachedJPsiDecision_Dec);
   fChain->SetBranchAddress("J_psi_1SHlt2DiMuonDetachedJPsiDecision_TIS", &J_psi_1SHlt2DiMuonDetachedJPsiDecision_TIS, &b_J_psi_1SHlt2DiMuonDetachedJPsiDecision_TIS);
   fChain->SetBranchAddress("J_psi_1SHlt2DiMuonDetachedJPsiDecision_TOS", &J_psi_1SHlt2DiMuonDetachedJPsiDecision_TOS, &b_J_psi_1SHlt2DiMuonDetachedJPsiDecision_TOS);
   fChain->SetBranchAddress("J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_Dec", &J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_Dec, &b_J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_Dec);
   fChain->SetBranchAddress("J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_TIS", &J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_TIS, &b_J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_TIS);
   fChain->SetBranchAddress("J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_TOS", &J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_TOS, &b_J_psi_1SHlt2DiMuonUnbiasedJPsiDecision_TOS);
   fChain->SetBranchAddress("muminus_LOKI_BPVDLS", &muminus_LOKI_BPVDLS, &b_muminus_LOKI_BPVDLS);
   fChain->SetBranchAddress("muminus_LOKI_DOCAZ", &muminus_LOKI_DOCAZ, &b_muminus_LOKI_DOCAZ);
   fChain->SetBranchAddress("muminus_LOKI_ETA", &muminus_LOKI_ETA, &b_muminus_LOKI_ETA);
   fChain->SetBranchAddress("muminus_LOKI_MIPCHI2DV", &muminus_LOKI_MIPCHI2DV, &b_muminus_LOKI_MIPCHI2DV);
   fChain->SetBranchAddress("muminus_LOKI_PHI", &muminus_LOKI_PHI, &b_muminus_LOKI_PHI);
   fChain->SetBranchAddress("muminus_LOKI_VCHI2PDOF", &muminus_LOKI_VCHI2PDOF, &b_muminus_LOKI_VCHI2PDOF);
   fChain->SetBranchAddress("muminus_CosTheta", &muminus_CosTheta, &b_muminus_CosTheta);
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
   fChain->SetBranchAddress("muminusL0Global_Dec", &muminusL0Global_Dec, &b_muminusL0Global_Dec);
   fChain->SetBranchAddress("muminusL0Global_TIS", &muminusL0Global_TIS, &b_muminusL0Global_TIS);
   fChain->SetBranchAddress("muminusL0Global_TOS", &muminusL0Global_TOS, &b_muminusL0Global_TOS);
   fChain->SetBranchAddress("muminusHlt1Global_Dec", &muminusHlt1Global_Dec, &b_muminusHlt1Global_Dec);
   fChain->SetBranchAddress("muminusHlt1Global_TIS", &muminusHlt1Global_TIS, &b_muminusHlt1Global_TIS);
   fChain->SetBranchAddress("muminusHlt1Global_TOS", &muminusHlt1Global_TOS, &b_muminusHlt1Global_TOS);
   fChain->SetBranchAddress("muminusHlt1Phys_Dec", &muminusHlt1Phys_Dec, &b_muminusHlt1Phys_Dec);
   fChain->SetBranchAddress("muminusHlt1Phys_TIS", &muminusHlt1Phys_TIS, &b_muminusHlt1Phys_TIS);
   fChain->SetBranchAddress("muminusHlt1Phys_TOS", &muminusHlt1Phys_TOS, &b_muminusHlt1Phys_TOS);
   fChain->SetBranchAddress("muminusHlt2Global_Dec", &muminusHlt2Global_Dec, &b_muminusHlt2Global_Dec);
   fChain->SetBranchAddress("muminusHlt2Global_TIS", &muminusHlt2Global_TIS, &b_muminusHlt2Global_TIS);
   fChain->SetBranchAddress("muminusHlt2Global_TOS", &muminusHlt2Global_TOS, &b_muminusHlt2Global_TOS);
   fChain->SetBranchAddress("muminusHlt2Phys_Dec", &muminusHlt2Phys_Dec, &b_muminusHlt2Phys_Dec);
   fChain->SetBranchAddress("muminusHlt2Phys_TIS", &muminusHlt2Phys_TIS, &b_muminusHlt2Phys_TIS);
   fChain->SetBranchAddress("muminusHlt2Phys_TOS", &muminusHlt2Phys_TOS, &b_muminusHlt2Phys_TOS);
   fChain->SetBranchAddress("muminusStrippingGlobal_Dec", &muminusStrippingGlobal_Dec, &b_muminusStrippingGlobal_Dec);
   fChain->SetBranchAddress("muminusStrippingGlobal_TIS", &muminusStrippingGlobal_TIS, &b_muminusStrippingGlobal_TIS);
   fChain->SetBranchAddress("muminusStrippingGlobal_TOS", &muminusStrippingGlobal_TOS, &b_muminusStrippingGlobal_TOS);
   fChain->SetBranchAddress("muminusHlt1DiMuonHighMassDecision_Dec", &muminusHlt1DiMuonHighMassDecision_Dec, &b_muminusHlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("muminusHlt1DiMuonHighMassDecision_TIS", &muminusHlt1DiMuonHighMassDecision_TIS, &b_muminusHlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("muminusHlt1DiMuonHighMassDecision_TOS", &muminusHlt1DiMuonHighMassDecision_TOS, &b_muminusHlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("muminusHlt1TrackAllL0Decision_Dec", &muminusHlt1TrackAllL0Decision_Dec, &b_muminusHlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("muminusHlt1TrackAllL0Decision_TIS", &muminusHlt1TrackAllL0Decision_TIS, &b_muminusHlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("muminusHlt1TrackAllL0Decision_TOS", &muminusHlt1TrackAllL0Decision_TOS, &b_muminusHlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("muminusHlt1TrackMuonDecision_Dec", &muminusHlt1TrackMuonDecision_Dec, &b_muminusHlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("muminusHlt1TrackMuonDecision_TIS", &muminusHlt1TrackMuonDecision_TIS, &b_muminusHlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("muminusHlt1TrackMuonDecision_TOS", &muminusHlt1TrackMuonDecision_TOS, &b_muminusHlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("muminusHlt1DiMuonNoIPL0DiDecision_Dec", &muminusHlt1DiMuonNoIPL0DiDecision_Dec, &b_muminusHlt1DiMuonNoIPL0DiDecision_Dec);
   fChain->SetBranchAddress("muminusHlt1DiMuonNoIPL0DiDecision_TIS", &muminusHlt1DiMuonNoIPL0DiDecision_TIS, &b_muminusHlt1DiMuonNoIPL0DiDecision_TIS);
   fChain->SetBranchAddress("muminusHlt1DiMuonNoIPL0DiDecision_TOS", &muminusHlt1DiMuonNoIPL0DiDecision_TOS, &b_muminusHlt1DiMuonNoIPL0DiDecision_TOS);
   fChain->SetBranchAddress("muminusHlt1SingleMuonNoIPL0Decision_Dec", &muminusHlt1SingleMuonNoIPL0Decision_Dec, &b_muminusHlt1SingleMuonNoIPL0Decision_Dec);
   fChain->SetBranchAddress("muminusHlt1SingleMuonNoIPL0Decision_TIS", &muminusHlt1SingleMuonNoIPL0Decision_TIS, &b_muminusHlt1SingleMuonNoIPL0Decision_TIS);
   fChain->SetBranchAddress("muminusHlt1SingleMuonNoIPL0Decision_TOS", &muminusHlt1SingleMuonNoIPL0Decision_TOS, &b_muminusHlt1SingleMuonNoIPL0Decision_TOS);
   fChain->SetBranchAddress("muminusHlt2DiMuonJPsiDecision_Dec", &muminusHlt2DiMuonJPsiDecision_Dec, &b_muminusHlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("muminusHlt2DiMuonJPsiDecision_TIS", &muminusHlt2DiMuonJPsiDecision_TIS, &b_muminusHlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("muminusHlt2DiMuonJPsiDecision_TOS", &muminusHlt2DiMuonJPsiDecision_TOS, &b_muminusHlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("muminusHlt2DiMuonDetachedJPsiDecision_Dec", &muminusHlt2DiMuonDetachedJPsiDecision_Dec, &b_muminusHlt2DiMuonDetachedJPsiDecision_Dec);
   fChain->SetBranchAddress("muminusHlt2DiMuonDetachedJPsiDecision_TIS", &muminusHlt2DiMuonDetachedJPsiDecision_TIS, &b_muminusHlt2DiMuonDetachedJPsiDecision_TIS);
   fChain->SetBranchAddress("muminusHlt2DiMuonDetachedJPsiDecision_TOS", &muminusHlt2DiMuonDetachedJPsiDecision_TOS, &b_muminusHlt2DiMuonDetachedJPsiDecision_TOS);
   fChain->SetBranchAddress("muminusHlt2DiMuonUnbiasedJPsiDecision_Dec", &muminusHlt2DiMuonUnbiasedJPsiDecision_Dec, &b_muminusHlt2DiMuonUnbiasedJPsiDecision_Dec);
   fChain->SetBranchAddress("muminusHlt2DiMuonUnbiasedJPsiDecision_TIS", &muminusHlt2DiMuonUnbiasedJPsiDecision_TIS, &b_muminusHlt2DiMuonUnbiasedJPsiDecision_TIS);
   fChain->SetBranchAddress("muminusHlt2DiMuonUnbiasedJPsiDecision_TOS", &muminusHlt2DiMuonUnbiasedJPsiDecision_TOS, &b_muminusHlt2DiMuonUnbiasedJPsiDecision_TOS);
   fChain->SetBranchAddress("muminus_TRACK_Type", &muminus_TRACK_Type, &b_muminus_TRACK_Type);
   fChain->SetBranchAddress("muminus_TRACK_Key", &muminus_TRACK_Key, &b_muminus_TRACK_Key);
   fChain->SetBranchAddress("muminus_TRACK_CHI2NDOF", &muminus_TRACK_CHI2NDOF, &b_muminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muminus_TRACK_PCHI2", &muminus_TRACK_PCHI2, &b_muminus_TRACK_PCHI2);
   fChain->SetBranchAddress("muminus_hasTT", &muminus_hasTT, &b_muminus_hasTT);
   fChain->SetBranchAddress("muminus_hasT", &muminus_hasT, &b_muminus_hasT);
   fChain->SetBranchAddress("muminus_TRACK_MatchCHI2", &muminus_TRACK_MatchCHI2, &b_muminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("muminus_VELO_UTID", &muminus_VELO_UTID, &b_muminus_VELO_UTID);
   fChain->SetBranchAddress("muminus_VeloHits", &muminus_VeloHits, &b_muminus_VeloHits);
   fChain->SetBranchAddress("muminus_TRACK_GhostProb", &muminus_TRACK_GhostProb, &b_muminus_TRACK_GhostProb);
   fChain->SetBranchAddress("muminus_TRACK_CloneDist", &muminus_TRACK_CloneDist, &b_muminus_TRACK_CloneDist);
   fChain->SetBranchAddress("muplus_LOKI_BPVDLS", &muplus_LOKI_BPVDLS, &b_muplus_LOKI_BPVDLS);
   fChain->SetBranchAddress("muplus_LOKI_DOCAZ", &muplus_LOKI_DOCAZ, &b_muplus_LOKI_DOCAZ);
   fChain->SetBranchAddress("muplus_LOKI_ETA", &muplus_LOKI_ETA, &b_muplus_LOKI_ETA);
   fChain->SetBranchAddress("muplus_LOKI_MIPCHI2DV", &muplus_LOKI_MIPCHI2DV, &b_muplus_LOKI_MIPCHI2DV);
   fChain->SetBranchAddress("muplus_LOKI_PHI", &muplus_LOKI_PHI, &b_muplus_LOKI_PHI);
   fChain->SetBranchAddress("muplus_LOKI_VCHI2PDOF", &muplus_LOKI_VCHI2PDOF, &b_muplus_LOKI_VCHI2PDOF);
   fChain->SetBranchAddress("muplus_CosTheta", &muplus_CosTheta, &b_muplus_CosTheta);
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
   fChain->SetBranchAddress("muplusL0Global_Dec", &muplusL0Global_Dec, &b_muplusL0Global_Dec);
   fChain->SetBranchAddress("muplusL0Global_TIS", &muplusL0Global_TIS, &b_muplusL0Global_TIS);
   fChain->SetBranchAddress("muplusL0Global_TOS", &muplusL0Global_TOS, &b_muplusL0Global_TOS);
   fChain->SetBranchAddress("muplusHlt1Global_Dec", &muplusHlt1Global_Dec, &b_muplusHlt1Global_Dec);
   fChain->SetBranchAddress("muplusHlt1Global_TIS", &muplusHlt1Global_TIS, &b_muplusHlt1Global_TIS);
   fChain->SetBranchAddress("muplusHlt1Global_TOS", &muplusHlt1Global_TOS, &b_muplusHlt1Global_TOS);
   fChain->SetBranchAddress("muplusHlt1Phys_Dec", &muplusHlt1Phys_Dec, &b_muplusHlt1Phys_Dec);
   fChain->SetBranchAddress("muplusHlt1Phys_TIS", &muplusHlt1Phys_TIS, &b_muplusHlt1Phys_TIS);
   fChain->SetBranchAddress("muplusHlt1Phys_TOS", &muplusHlt1Phys_TOS, &b_muplusHlt1Phys_TOS);
   fChain->SetBranchAddress("muplusHlt2Global_Dec", &muplusHlt2Global_Dec, &b_muplusHlt2Global_Dec);
   fChain->SetBranchAddress("muplusHlt2Global_TIS", &muplusHlt2Global_TIS, &b_muplusHlt2Global_TIS);
   fChain->SetBranchAddress("muplusHlt2Global_TOS", &muplusHlt2Global_TOS, &b_muplusHlt2Global_TOS);
   fChain->SetBranchAddress("muplusHlt2Phys_Dec", &muplusHlt2Phys_Dec, &b_muplusHlt2Phys_Dec);
   fChain->SetBranchAddress("muplusHlt2Phys_TIS", &muplusHlt2Phys_TIS, &b_muplusHlt2Phys_TIS);
   fChain->SetBranchAddress("muplusHlt2Phys_TOS", &muplusHlt2Phys_TOS, &b_muplusHlt2Phys_TOS);
   fChain->SetBranchAddress("muplusStrippingGlobal_Dec", &muplusStrippingGlobal_Dec, &b_muplusStrippingGlobal_Dec);
   fChain->SetBranchAddress("muplusStrippingGlobal_TIS", &muplusStrippingGlobal_TIS, &b_muplusStrippingGlobal_TIS);
   fChain->SetBranchAddress("muplusStrippingGlobal_TOS", &muplusStrippingGlobal_TOS, &b_muplusStrippingGlobal_TOS);
   fChain->SetBranchAddress("muplusHlt1DiMuonHighMassDecision_Dec", &muplusHlt1DiMuonHighMassDecision_Dec, &b_muplusHlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("muplusHlt1DiMuonHighMassDecision_TIS", &muplusHlt1DiMuonHighMassDecision_TIS, &b_muplusHlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("muplusHlt1DiMuonHighMassDecision_TOS", &muplusHlt1DiMuonHighMassDecision_TOS, &b_muplusHlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("muplusHlt1TrackAllL0Decision_Dec", &muplusHlt1TrackAllL0Decision_Dec, &b_muplusHlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("muplusHlt1TrackAllL0Decision_TIS", &muplusHlt1TrackAllL0Decision_TIS, &b_muplusHlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("muplusHlt1TrackAllL0Decision_TOS", &muplusHlt1TrackAllL0Decision_TOS, &b_muplusHlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("muplusHlt1TrackMuonDecision_Dec", &muplusHlt1TrackMuonDecision_Dec, &b_muplusHlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("muplusHlt1TrackMuonDecision_TIS", &muplusHlt1TrackMuonDecision_TIS, &b_muplusHlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("muplusHlt1TrackMuonDecision_TOS", &muplusHlt1TrackMuonDecision_TOS, &b_muplusHlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("muplusHlt1DiMuonNoIPL0DiDecision_Dec", &muplusHlt1DiMuonNoIPL0DiDecision_Dec, &b_muplusHlt1DiMuonNoIPL0DiDecision_Dec);
   fChain->SetBranchAddress("muplusHlt1DiMuonNoIPL0DiDecision_TIS", &muplusHlt1DiMuonNoIPL0DiDecision_TIS, &b_muplusHlt1DiMuonNoIPL0DiDecision_TIS);
   fChain->SetBranchAddress("muplusHlt1DiMuonNoIPL0DiDecision_TOS", &muplusHlt1DiMuonNoIPL0DiDecision_TOS, &b_muplusHlt1DiMuonNoIPL0DiDecision_TOS);
   fChain->SetBranchAddress("muplusHlt1SingleMuonNoIPL0Decision_Dec", &muplusHlt1SingleMuonNoIPL0Decision_Dec, &b_muplusHlt1SingleMuonNoIPL0Decision_Dec);
   fChain->SetBranchAddress("muplusHlt1SingleMuonNoIPL0Decision_TIS", &muplusHlt1SingleMuonNoIPL0Decision_TIS, &b_muplusHlt1SingleMuonNoIPL0Decision_TIS);
   fChain->SetBranchAddress("muplusHlt1SingleMuonNoIPL0Decision_TOS", &muplusHlt1SingleMuonNoIPL0Decision_TOS, &b_muplusHlt1SingleMuonNoIPL0Decision_TOS);
   fChain->SetBranchAddress("muplusHlt2DiMuonJPsiDecision_Dec", &muplusHlt2DiMuonJPsiDecision_Dec, &b_muplusHlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("muplusHlt2DiMuonJPsiDecision_TIS", &muplusHlt2DiMuonJPsiDecision_TIS, &b_muplusHlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("muplusHlt2DiMuonJPsiDecision_TOS", &muplusHlt2DiMuonJPsiDecision_TOS, &b_muplusHlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("muplusHlt2DiMuonDetachedJPsiDecision_Dec", &muplusHlt2DiMuonDetachedJPsiDecision_Dec, &b_muplusHlt2DiMuonDetachedJPsiDecision_Dec);
   fChain->SetBranchAddress("muplusHlt2DiMuonDetachedJPsiDecision_TIS", &muplusHlt2DiMuonDetachedJPsiDecision_TIS, &b_muplusHlt2DiMuonDetachedJPsiDecision_TIS);
   fChain->SetBranchAddress("muplusHlt2DiMuonDetachedJPsiDecision_TOS", &muplusHlt2DiMuonDetachedJPsiDecision_TOS, &b_muplusHlt2DiMuonDetachedJPsiDecision_TOS);
   fChain->SetBranchAddress("muplusHlt2DiMuonUnbiasedJPsiDecision_Dec", &muplusHlt2DiMuonUnbiasedJPsiDecision_Dec, &b_muplusHlt2DiMuonUnbiasedJPsiDecision_Dec);
   fChain->SetBranchAddress("muplusHlt2DiMuonUnbiasedJPsiDecision_TIS", &muplusHlt2DiMuonUnbiasedJPsiDecision_TIS, &b_muplusHlt2DiMuonUnbiasedJPsiDecision_TIS);
   fChain->SetBranchAddress("muplusHlt2DiMuonUnbiasedJPsiDecision_TOS", &muplusHlt2DiMuonUnbiasedJPsiDecision_TOS, &b_muplusHlt2DiMuonUnbiasedJPsiDecision_TOS);
   fChain->SetBranchAddress("muplus_TRACK_Type", &muplus_TRACK_Type, &b_muplus_TRACK_Type);
   fChain->SetBranchAddress("muplus_TRACK_Key", &muplus_TRACK_Key, &b_muplus_TRACK_Key);
   fChain->SetBranchAddress("muplus_TRACK_CHI2NDOF", &muplus_TRACK_CHI2NDOF, &b_muplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muplus_TRACK_PCHI2", &muplus_TRACK_PCHI2, &b_muplus_TRACK_PCHI2);
   fChain->SetBranchAddress("muplus_hasTT", &muplus_hasTT, &b_muplus_hasTT);
   fChain->SetBranchAddress("muplus_hasT", &muplus_hasT, &b_muplus_hasT);
   fChain->SetBranchAddress("muplus_TRACK_MatchCHI2", &muplus_TRACK_MatchCHI2, &b_muplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("muplus_VELO_UTID", &muplus_VELO_UTID, &b_muplus_VELO_UTID);
   fChain->SetBranchAddress("muplus_VeloHits", &muplus_VeloHits, &b_muplus_VeloHits);
   fChain->SetBranchAddress("muplus_TRACK_GhostProb", &muplus_TRACK_GhostProb, &b_muplus_TRACK_GhostProb);
   fChain->SetBranchAddress("muplus_TRACK_CloneDist", &muplus_TRACK_CloneDist, &b_muplus_TRACK_CloneDist);
   fChain->SetBranchAddress("Lambda0_LOKI_BPVDLS", &Lambda0_LOKI_BPVDLS, &b_Lambda0_LOKI_BPVDLS);
   fChain->SetBranchAddress("Lambda0_LOKI_DOCAZ", &Lambda0_LOKI_DOCAZ, &b_Lambda0_LOKI_DOCAZ);
   fChain->SetBranchAddress("Lambda0_LOKI_ETA", &Lambda0_LOKI_ETA, &b_Lambda0_LOKI_ETA);
   fChain->SetBranchAddress("Lambda0_LOKI_MIPCHI2DV", &Lambda0_LOKI_MIPCHI2DV, &b_Lambda0_LOKI_MIPCHI2DV);
   fChain->SetBranchAddress("Lambda0_LOKI_PHI", &Lambda0_LOKI_PHI, &b_Lambda0_LOKI_PHI);
   fChain->SetBranchAddress("Lambda0_LOKI_VCHI2PDOF", &Lambda0_LOKI_VCHI2PDOF, &b_Lambda0_LOKI_VCHI2PDOF);
   fChain->SetBranchAddress("Lambda0_CosTheta", &Lambda0_CosTheta, &b_Lambda0_CosTheta);
   fChain->SetBranchAddress("Lambda0_MINIP", &Lambda0_MINIP, &b_Lambda0_MINIP);
   fChain->SetBranchAddress("Lambda0_MINIPCHI2", &Lambda0_MINIPCHI2, &b_Lambda0_MINIPCHI2);
   fChain->SetBranchAddress("Lambda0_MINIPNEXTBEST", &Lambda0_MINIPNEXTBEST, &b_Lambda0_MINIPNEXTBEST);
   fChain->SetBranchAddress("Lambda0_MINIPCHI2NEXTBEST", &Lambda0_MINIPCHI2NEXTBEST, &b_Lambda0_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("Lambda0_ENDVERTEX_X", &Lambda0_ENDVERTEX_X, &b_Lambda0_ENDVERTEX_X);
   fChain->SetBranchAddress("Lambda0_ENDVERTEX_Y", &Lambda0_ENDVERTEX_Y, &b_Lambda0_ENDVERTEX_Y);
   fChain->SetBranchAddress("Lambda0_ENDVERTEX_Z", &Lambda0_ENDVERTEX_Z, &b_Lambda0_ENDVERTEX_Z);
   fChain->SetBranchAddress("Lambda0_ENDVERTEX_XERR", &Lambda0_ENDVERTEX_XERR, &b_Lambda0_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Lambda0_ENDVERTEX_YERR", &Lambda0_ENDVERTEX_YERR, &b_Lambda0_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Lambda0_ENDVERTEX_ZERR", &Lambda0_ENDVERTEX_ZERR, &b_Lambda0_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Lambda0_ENDVERTEX_CHI2", &Lambda0_ENDVERTEX_CHI2, &b_Lambda0_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Lambda0_ENDVERTEX_NDOF", &Lambda0_ENDVERTEX_NDOF, &b_Lambda0_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Lambda0_ENDVERTEX_COV_", Lambda0_ENDVERTEX_COV_, &b_Lambda0_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Lambda0_OWNPV_X", &Lambda0_OWNPV_X, &b_Lambda0_OWNPV_X);
   fChain->SetBranchAddress("Lambda0_OWNPV_Y", &Lambda0_OWNPV_Y, &b_Lambda0_OWNPV_Y);
   fChain->SetBranchAddress("Lambda0_OWNPV_Z", &Lambda0_OWNPV_Z, &b_Lambda0_OWNPV_Z);
   fChain->SetBranchAddress("Lambda0_OWNPV_XERR", &Lambda0_OWNPV_XERR, &b_Lambda0_OWNPV_XERR);
   fChain->SetBranchAddress("Lambda0_OWNPV_YERR", &Lambda0_OWNPV_YERR, &b_Lambda0_OWNPV_YERR);
   fChain->SetBranchAddress("Lambda0_OWNPV_ZERR", &Lambda0_OWNPV_ZERR, &b_Lambda0_OWNPV_ZERR);
   fChain->SetBranchAddress("Lambda0_OWNPV_CHI2", &Lambda0_OWNPV_CHI2, &b_Lambda0_OWNPV_CHI2);
   fChain->SetBranchAddress("Lambda0_OWNPV_NDOF", &Lambda0_OWNPV_NDOF, &b_Lambda0_OWNPV_NDOF);
   fChain->SetBranchAddress("Lambda0_OWNPV_COV_", Lambda0_OWNPV_COV_, &b_Lambda0_OWNPV_COV_);
   fChain->SetBranchAddress("Lambda0_IP_OWNPV", &Lambda0_IP_OWNPV, &b_Lambda0_IP_OWNPV);
   fChain->SetBranchAddress("Lambda0_IPCHI2_OWNPV", &Lambda0_IPCHI2_OWNPV, &b_Lambda0_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Lambda0_FD_OWNPV", &Lambda0_FD_OWNPV, &b_Lambda0_FD_OWNPV);
   fChain->SetBranchAddress("Lambda0_FDCHI2_OWNPV", &Lambda0_FDCHI2_OWNPV, &b_Lambda0_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Lambda0_DIRA_OWNPV", &Lambda0_DIRA_OWNPV, &b_Lambda0_DIRA_OWNPV);
   fChain->SetBranchAddress("Lambda0_TOPPV_X", &Lambda0_TOPPV_X, &b_Lambda0_TOPPV_X);
   fChain->SetBranchAddress("Lambda0_TOPPV_Y", &Lambda0_TOPPV_Y, &b_Lambda0_TOPPV_Y);
   fChain->SetBranchAddress("Lambda0_TOPPV_Z", &Lambda0_TOPPV_Z, &b_Lambda0_TOPPV_Z);
   fChain->SetBranchAddress("Lambda0_TOPPV_XERR", &Lambda0_TOPPV_XERR, &b_Lambda0_TOPPV_XERR);
   fChain->SetBranchAddress("Lambda0_TOPPV_YERR", &Lambda0_TOPPV_YERR, &b_Lambda0_TOPPV_YERR);
   fChain->SetBranchAddress("Lambda0_TOPPV_ZERR", &Lambda0_TOPPV_ZERR, &b_Lambda0_TOPPV_ZERR);
   fChain->SetBranchAddress("Lambda0_TOPPV_CHI2", &Lambda0_TOPPV_CHI2, &b_Lambda0_TOPPV_CHI2);
   fChain->SetBranchAddress("Lambda0_TOPPV_NDOF", &Lambda0_TOPPV_NDOF, &b_Lambda0_TOPPV_NDOF);
   fChain->SetBranchAddress("Lambda0_TOPPV_COV_", Lambda0_TOPPV_COV_, &b_Lambda0_TOPPV_COV_);
   fChain->SetBranchAddress("Lambda0_IP_TOPPV", &Lambda0_IP_TOPPV, &b_Lambda0_IP_TOPPV);
   fChain->SetBranchAddress("Lambda0_IPCHI2_TOPPV", &Lambda0_IPCHI2_TOPPV, &b_Lambda0_IPCHI2_TOPPV);
   fChain->SetBranchAddress("Lambda0_FD_TOPPV", &Lambda0_FD_TOPPV, &b_Lambda0_FD_TOPPV);
   fChain->SetBranchAddress("Lambda0_FDCHI2_TOPPV", &Lambda0_FDCHI2_TOPPV, &b_Lambda0_FDCHI2_TOPPV);
   fChain->SetBranchAddress("Lambda0_DIRA_TOPPV", &Lambda0_DIRA_TOPPV, &b_Lambda0_DIRA_TOPPV);
   fChain->SetBranchAddress("Lambda0_ORIVX_X", &Lambda0_ORIVX_X, &b_Lambda0_ORIVX_X);
   fChain->SetBranchAddress("Lambda0_ORIVX_Y", &Lambda0_ORIVX_Y, &b_Lambda0_ORIVX_Y);
   fChain->SetBranchAddress("Lambda0_ORIVX_Z", &Lambda0_ORIVX_Z, &b_Lambda0_ORIVX_Z);
   fChain->SetBranchAddress("Lambda0_ORIVX_XERR", &Lambda0_ORIVX_XERR, &b_Lambda0_ORIVX_XERR);
   fChain->SetBranchAddress("Lambda0_ORIVX_YERR", &Lambda0_ORIVX_YERR, &b_Lambda0_ORIVX_YERR);
   fChain->SetBranchAddress("Lambda0_ORIVX_ZERR", &Lambda0_ORIVX_ZERR, &b_Lambda0_ORIVX_ZERR);
   fChain->SetBranchAddress("Lambda0_ORIVX_CHI2", &Lambda0_ORIVX_CHI2, &b_Lambda0_ORIVX_CHI2);
   fChain->SetBranchAddress("Lambda0_ORIVX_NDOF", &Lambda0_ORIVX_NDOF, &b_Lambda0_ORIVX_NDOF);
   fChain->SetBranchAddress("Lambda0_ORIVX_COV_", Lambda0_ORIVX_COV_, &b_Lambda0_ORIVX_COV_);
   fChain->SetBranchAddress("Lambda0_IP_ORIVX", &Lambda0_IP_ORIVX, &b_Lambda0_IP_ORIVX);
   fChain->SetBranchAddress("Lambda0_IPCHI2_ORIVX", &Lambda0_IPCHI2_ORIVX, &b_Lambda0_IPCHI2_ORIVX);
   fChain->SetBranchAddress("Lambda0_FD_ORIVX", &Lambda0_FD_ORIVX, &b_Lambda0_FD_ORIVX);
   fChain->SetBranchAddress("Lambda0_FDCHI2_ORIVX", &Lambda0_FDCHI2_ORIVX, &b_Lambda0_FDCHI2_ORIVX);
   fChain->SetBranchAddress("Lambda0_DIRA_ORIVX", &Lambda0_DIRA_ORIVX, &b_Lambda0_DIRA_ORIVX);
   fChain->SetBranchAddress("Lambda0_P", &Lambda0_P, &b_Lambda0_P);
   fChain->SetBranchAddress("Lambda0_PT", &Lambda0_PT, &b_Lambda0_PT);
   fChain->SetBranchAddress("Lambda0_PE", &Lambda0_PE, &b_Lambda0_PE);
   fChain->SetBranchAddress("Lambda0_PX", &Lambda0_PX, &b_Lambda0_PX);
   fChain->SetBranchAddress("Lambda0_PY", &Lambda0_PY, &b_Lambda0_PY);
   fChain->SetBranchAddress("Lambda0_PZ", &Lambda0_PZ, &b_Lambda0_PZ);
   fChain->SetBranchAddress("Lambda0_MM", &Lambda0_MM, &b_Lambda0_MM);
   fChain->SetBranchAddress("Lambda0_MMERR", &Lambda0_MMERR, &b_Lambda0_MMERR);
   fChain->SetBranchAddress("Lambda0_M", &Lambda0_M, &b_Lambda0_M);
   fChain->SetBranchAddress("Lambda0_ID", &Lambda0_ID, &b_Lambda0_ID);
   fChain->SetBranchAddress("Lambda0_TAU", &Lambda0_TAU, &b_Lambda0_TAU);
   fChain->SetBranchAddress("Lambda0_TAUERR", &Lambda0_TAUERR, &b_Lambda0_TAUERR);
   fChain->SetBranchAddress("Lambda0_TAUCHI2", &Lambda0_TAUCHI2, &b_Lambda0_TAUCHI2);
   fChain->SetBranchAddress("Lambda0L0Global_Dec", &Lambda0L0Global_Dec, &b_Lambda0L0Global_Dec);
   fChain->SetBranchAddress("Lambda0L0Global_TIS", &Lambda0L0Global_TIS, &b_Lambda0L0Global_TIS);
   fChain->SetBranchAddress("Lambda0L0Global_TOS", &Lambda0L0Global_TOS, &b_Lambda0L0Global_TOS);
   fChain->SetBranchAddress("Lambda0Hlt1Global_Dec", &Lambda0Hlt1Global_Dec, &b_Lambda0Hlt1Global_Dec);
   fChain->SetBranchAddress("Lambda0Hlt1Global_TIS", &Lambda0Hlt1Global_TIS, &b_Lambda0Hlt1Global_TIS);
   fChain->SetBranchAddress("Lambda0Hlt1Global_TOS", &Lambda0Hlt1Global_TOS, &b_Lambda0Hlt1Global_TOS);
   fChain->SetBranchAddress("Lambda0Hlt1Phys_Dec", &Lambda0Hlt1Phys_Dec, &b_Lambda0Hlt1Phys_Dec);
   fChain->SetBranchAddress("Lambda0Hlt1Phys_TIS", &Lambda0Hlt1Phys_TIS, &b_Lambda0Hlt1Phys_TIS);
   fChain->SetBranchAddress("Lambda0Hlt1Phys_TOS", &Lambda0Hlt1Phys_TOS, &b_Lambda0Hlt1Phys_TOS);
   fChain->SetBranchAddress("Lambda0Hlt2Global_Dec", &Lambda0Hlt2Global_Dec, &b_Lambda0Hlt2Global_Dec);
   fChain->SetBranchAddress("Lambda0Hlt2Global_TIS", &Lambda0Hlt2Global_TIS, &b_Lambda0Hlt2Global_TIS);
   fChain->SetBranchAddress("Lambda0Hlt2Global_TOS", &Lambda0Hlt2Global_TOS, &b_Lambda0Hlt2Global_TOS);
   fChain->SetBranchAddress("Lambda0Hlt2Phys_Dec", &Lambda0Hlt2Phys_Dec, &b_Lambda0Hlt2Phys_Dec);
   fChain->SetBranchAddress("Lambda0Hlt2Phys_TIS", &Lambda0Hlt2Phys_TIS, &b_Lambda0Hlt2Phys_TIS);
   fChain->SetBranchAddress("Lambda0Hlt2Phys_TOS", &Lambda0Hlt2Phys_TOS, &b_Lambda0Hlt2Phys_TOS);
   fChain->SetBranchAddress("Lambda0StrippingGlobal_Dec", &Lambda0StrippingGlobal_Dec, &b_Lambda0StrippingGlobal_Dec);
   fChain->SetBranchAddress("Lambda0StrippingGlobal_TIS", &Lambda0StrippingGlobal_TIS, &b_Lambda0StrippingGlobal_TIS);
   fChain->SetBranchAddress("Lambda0StrippingGlobal_TOS", &Lambda0StrippingGlobal_TOS, &b_Lambda0StrippingGlobal_TOS);
   fChain->SetBranchAddress("Lambda0Hlt1DiMuonHighMassDecision_Dec", &Lambda0Hlt1DiMuonHighMassDecision_Dec, &b_Lambda0Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("Lambda0Hlt1DiMuonHighMassDecision_TIS", &Lambda0Hlt1DiMuonHighMassDecision_TIS, &b_Lambda0Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("Lambda0Hlt1DiMuonHighMassDecision_TOS", &Lambda0Hlt1DiMuonHighMassDecision_TOS, &b_Lambda0Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("Lambda0Hlt1TrackAllL0Decision_Dec", &Lambda0Hlt1TrackAllL0Decision_Dec, &b_Lambda0Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Lambda0Hlt1TrackAllL0Decision_TIS", &Lambda0Hlt1TrackAllL0Decision_TIS, &b_Lambda0Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Lambda0Hlt1TrackAllL0Decision_TOS", &Lambda0Hlt1TrackAllL0Decision_TOS, &b_Lambda0Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Lambda0Hlt1TrackMuonDecision_Dec", &Lambda0Hlt1TrackMuonDecision_Dec, &b_Lambda0Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("Lambda0Hlt1TrackMuonDecision_TIS", &Lambda0Hlt1TrackMuonDecision_TIS, &b_Lambda0Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("Lambda0Hlt1TrackMuonDecision_TOS", &Lambda0Hlt1TrackMuonDecision_TOS, &b_Lambda0Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("Lambda0Hlt1DiMuonNoIPL0DiDecision_Dec", &Lambda0Hlt1DiMuonNoIPL0DiDecision_Dec, &b_Lambda0Hlt1DiMuonNoIPL0DiDecision_Dec);
   fChain->SetBranchAddress("Lambda0Hlt1DiMuonNoIPL0DiDecision_TIS", &Lambda0Hlt1DiMuonNoIPL0DiDecision_TIS, &b_Lambda0Hlt1DiMuonNoIPL0DiDecision_TIS);
   fChain->SetBranchAddress("Lambda0Hlt1DiMuonNoIPL0DiDecision_TOS", &Lambda0Hlt1DiMuonNoIPL0DiDecision_TOS, &b_Lambda0Hlt1DiMuonNoIPL0DiDecision_TOS);
   fChain->SetBranchAddress("Lambda0Hlt1SingleMuonNoIPL0Decision_Dec", &Lambda0Hlt1SingleMuonNoIPL0Decision_Dec, &b_Lambda0Hlt1SingleMuonNoIPL0Decision_Dec);
   fChain->SetBranchAddress("Lambda0Hlt1SingleMuonNoIPL0Decision_TIS", &Lambda0Hlt1SingleMuonNoIPL0Decision_TIS, &b_Lambda0Hlt1SingleMuonNoIPL0Decision_TIS);
   fChain->SetBranchAddress("Lambda0Hlt1SingleMuonNoIPL0Decision_TOS", &Lambda0Hlt1SingleMuonNoIPL0Decision_TOS, &b_Lambda0Hlt1SingleMuonNoIPL0Decision_TOS);
   fChain->SetBranchAddress("Lambda0Hlt2DiMuonJPsiDecision_Dec", &Lambda0Hlt2DiMuonJPsiDecision_Dec, &b_Lambda0Hlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("Lambda0Hlt2DiMuonJPsiDecision_TIS", &Lambda0Hlt2DiMuonJPsiDecision_TIS, &b_Lambda0Hlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("Lambda0Hlt2DiMuonJPsiDecision_TOS", &Lambda0Hlt2DiMuonJPsiDecision_TOS, &b_Lambda0Hlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("Lambda0Hlt2DiMuonDetachedJPsiDecision_Dec", &Lambda0Hlt2DiMuonDetachedJPsiDecision_Dec, &b_Lambda0Hlt2DiMuonDetachedJPsiDecision_Dec);
   fChain->SetBranchAddress("Lambda0Hlt2DiMuonDetachedJPsiDecision_TIS", &Lambda0Hlt2DiMuonDetachedJPsiDecision_TIS, &b_Lambda0Hlt2DiMuonDetachedJPsiDecision_TIS);
   fChain->SetBranchAddress("Lambda0Hlt2DiMuonDetachedJPsiDecision_TOS", &Lambda0Hlt2DiMuonDetachedJPsiDecision_TOS, &b_Lambda0Hlt2DiMuonDetachedJPsiDecision_TOS);
   fChain->SetBranchAddress("Lambda0Hlt2DiMuonUnbiasedJPsiDecision_Dec", &Lambda0Hlt2DiMuonUnbiasedJPsiDecision_Dec, &b_Lambda0Hlt2DiMuonUnbiasedJPsiDecision_Dec);
   fChain->SetBranchAddress("Lambda0Hlt2DiMuonUnbiasedJPsiDecision_TIS", &Lambda0Hlt2DiMuonUnbiasedJPsiDecision_TIS, &b_Lambda0Hlt2DiMuonUnbiasedJPsiDecision_TIS);
   fChain->SetBranchAddress("Lambda0Hlt2DiMuonUnbiasedJPsiDecision_TOS", &Lambda0Hlt2DiMuonUnbiasedJPsiDecision_TOS, &b_Lambda0Hlt2DiMuonUnbiasedJPsiDecision_TOS);
   fChain->SetBranchAddress("piminus_LOKI_BPVDLS", &piminus_LOKI_BPVDLS, &b_piminus_LOKI_BPVDLS);
   fChain->SetBranchAddress("piminus_LOKI_DOCAZ", &piminus_LOKI_DOCAZ, &b_piminus_LOKI_DOCAZ);
   fChain->SetBranchAddress("piminus_LOKI_ETA", &piminus_LOKI_ETA, &b_piminus_LOKI_ETA);
   fChain->SetBranchAddress("piminus_LOKI_MIPCHI2DV", &piminus_LOKI_MIPCHI2DV, &b_piminus_LOKI_MIPCHI2DV);
   fChain->SetBranchAddress("piminus_LOKI_PHI", &piminus_LOKI_PHI, &b_piminus_LOKI_PHI);
   fChain->SetBranchAddress("piminus_LOKI_VCHI2PDOF", &piminus_LOKI_VCHI2PDOF, &b_piminus_LOKI_VCHI2PDOF);
   fChain->SetBranchAddress("piminus_CosTheta", &piminus_CosTheta, &b_piminus_CosTheta);
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
   fChain->SetBranchAddress("piminusL0Global_Dec", &piminusL0Global_Dec, &b_piminusL0Global_Dec);
   fChain->SetBranchAddress("piminusL0Global_TIS", &piminusL0Global_TIS, &b_piminusL0Global_TIS);
   fChain->SetBranchAddress("piminusL0Global_TOS", &piminusL0Global_TOS, &b_piminusL0Global_TOS);
   fChain->SetBranchAddress("piminusHlt1Global_Dec", &piminusHlt1Global_Dec, &b_piminusHlt1Global_Dec);
   fChain->SetBranchAddress("piminusHlt1Global_TIS", &piminusHlt1Global_TIS, &b_piminusHlt1Global_TIS);
   fChain->SetBranchAddress("piminusHlt1Global_TOS", &piminusHlt1Global_TOS, &b_piminusHlt1Global_TOS);
   fChain->SetBranchAddress("piminusHlt1Phys_Dec", &piminusHlt1Phys_Dec, &b_piminusHlt1Phys_Dec);
   fChain->SetBranchAddress("piminusHlt1Phys_TIS", &piminusHlt1Phys_TIS, &b_piminusHlt1Phys_TIS);
   fChain->SetBranchAddress("piminusHlt1Phys_TOS", &piminusHlt1Phys_TOS, &b_piminusHlt1Phys_TOS);
   fChain->SetBranchAddress("piminusHlt2Global_Dec", &piminusHlt2Global_Dec, &b_piminusHlt2Global_Dec);
   fChain->SetBranchAddress("piminusHlt2Global_TIS", &piminusHlt2Global_TIS, &b_piminusHlt2Global_TIS);
   fChain->SetBranchAddress("piminusHlt2Global_TOS", &piminusHlt2Global_TOS, &b_piminusHlt2Global_TOS);
   fChain->SetBranchAddress("piminusHlt2Phys_Dec", &piminusHlt2Phys_Dec, &b_piminusHlt2Phys_Dec);
   fChain->SetBranchAddress("piminusHlt2Phys_TIS", &piminusHlt2Phys_TIS, &b_piminusHlt2Phys_TIS);
   fChain->SetBranchAddress("piminusHlt2Phys_TOS", &piminusHlt2Phys_TOS, &b_piminusHlt2Phys_TOS);
   fChain->SetBranchAddress("piminusStrippingGlobal_Dec", &piminusStrippingGlobal_Dec, &b_piminusStrippingGlobal_Dec);
   fChain->SetBranchAddress("piminusStrippingGlobal_TIS", &piminusStrippingGlobal_TIS, &b_piminusStrippingGlobal_TIS);
   fChain->SetBranchAddress("piminusStrippingGlobal_TOS", &piminusStrippingGlobal_TOS, &b_piminusStrippingGlobal_TOS);
   fChain->SetBranchAddress("piminusHlt1DiMuonHighMassDecision_Dec", &piminusHlt1DiMuonHighMassDecision_Dec, &b_piminusHlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("piminusHlt1DiMuonHighMassDecision_TIS", &piminusHlt1DiMuonHighMassDecision_TIS, &b_piminusHlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("piminusHlt1DiMuonHighMassDecision_TOS", &piminusHlt1DiMuonHighMassDecision_TOS, &b_piminusHlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("piminusHlt1TrackAllL0Decision_Dec", &piminusHlt1TrackAllL0Decision_Dec, &b_piminusHlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("piminusHlt1TrackAllL0Decision_TIS", &piminusHlt1TrackAllL0Decision_TIS, &b_piminusHlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("piminusHlt1TrackAllL0Decision_TOS", &piminusHlt1TrackAllL0Decision_TOS, &b_piminusHlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("piminusHlt1TrackMuonDecision_Dec", &piminusHlt1TrackMuonDecision_Dec, &b_piminusHlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("piminusHlt1TrackMuonDecision_TIS", &piminusHlt1TrackMuonDecision_TIS, &b_piminusHlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("piminusHlt1TrackMuonDecision_TOS", &piminusHlt1TrackMuonDecision_TOS, &b_piminusHlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("piminusHlt1DiMuonNoIPL0DiDecision_Dec", &piminusHlt1DiMuonNoIPL0DiDecision_Dec, &b_piminusHlt1DiMuonNoIPL0DiDecision_Dec);
   fChain->SetBranchAddress("piminusHlt1DiMuonNoIPL0DiDecision_TIS", &piminusHlt1DiMuonNoIPL0DiDecision_TIS, &b_piminusHlt1DiMuonNoIPL0DiDecision_TIS);
   fChain->SetBranchAddress("piminusHlt1DiMuonNoIPL0DiDecision_TOS", &piminusHlt1DiMuonNoIPL0DiDecision_TOS, &b_piminusHlt1DiMuonNoIPL0DiDecision_TOS);
   fChain->SetBranchAddress("piminusHlt1SingleMuonNoIPL0Decision_Dec", &piminusHlt1SingleMuonNoIPL0Decision_Dec, &b_piminusHlt1SingleMuonNoIPL0Decision_Dec);
   fChain->SetBranchAddress("piminusHlt1SingleMuonNoIPL0Decision_TIS", &piminusHlt1SingleMuonNoIPL0Decision_TIS, &b_piminusHlt1SingleMuonNoIPL0Decision_TIS);
   fChain->SetBranchAddress("piminusHlt1SingleMuonNoIPL0Decision_TOS", &piminusHlt1SingleMuonNoIPL0Decision_TOS, &b_piminusHlt1SingleMuonNoIPL0Decision_TOS);
   fChain->SetBranchAddress("piminusHlt2DiMuonJPsiDecision_Dec", &piminusHlt2DiMuonJPsiDecision_Dec, &b_piminusHlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("piminusHlt2DiMuonJPsiDecision_TIS", &piminusHlt2DiMuonJPsiDecision_TIS, &b_piminusHlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("piminusHlt2DiMuonJPsiDecision_TOS", &piminusHlt2DiMuonJPsiDecision_TOS, &b_piminusHlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("piminusHlt2DiMuonDetachedJPsiDecision_Dec", &piminusHlt2DiMuonDetachedJPsiDecision_Dec, &b_piminusHlt2DiMuonDetachedJPsiDecision_Dec);
   fChain->SetBranchAddress("piminusHlt2DiMuonDetachedJPsiDecision_TIS", &piminusHlt2DiMuonDetachedJPsiDecision_TIS, &b_piminusHlt2DiMuonDetachedJPsiDecision_TIS);
   fChain->SetBranchAddress("piminusHlt2DiMuonDetachedJPsiDecision_TOS", &piminusHlt2DiMuonDetachedJPsiDecision_TOS, &b_piminusHlt2DiMuonDetachedJPsiDecision_TOS);
   fChain->SetBranchAddress("piminusHlt2DiMuonUnbiasedJPsiDecision_Dec", &piminusHlt2DiMuonUnbiasedJPsiDecision_Dec, &b_piminusHlt2DiMuonUnbiasedJPsiDecision_Dec);
   fChain->SetBranchAddress("piminusHlt2DiMuonUnbiasedJPsiDecision_TIS", &piminusHlt2DiMuonUnbiasedJPsiDecision_TIS, &b_piminusHlt2DiMuonUnbiasedJPsiDecision_TIS);
   fChain->SetBranchAddress("piminusHlt2DiMuonUnbiasedJPsiDecision_TOS", &piminusHlt2DiMuonUnbiasedJPsiDecision_TOS, &b_piminusHlt2DiMuonUnbiasedJPsiDecision_TOS);
   fChain->SetBranchAddress("piminus_TRACK_Type", &piminus_TRACK_Type, &b_piminus_TRACK_Type);
   fChain->SetBranchAddress("piminus_TRACK_Key", &piminus_TRACK_Key, &b_piminus_TRACK_Key);
   fChain->SetBranchAddress("piminus_TRACK_CHI2NDOF", &piminus_TRACK_CHI2NDOF, &b_piminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("piminus_TRACK_PCHI2", &piminus_TRACK_PCHI2, &b_piminus_TRACK_PCHI2);
   fChain->SetBranchAddress("piminus_hasTT", &piminus_hasTT, &b_piminus_hasTT);
   fChain->SetBranchAddress("piminus_hasT", &piminus_hasT, &b_piminus_hasT);
   fChain->SetBranchAddress("piminus_TRACK_MatchCHI2", &piminus_TRACK_MatchCHI2, &b_piminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("piminus_VELO_UTID", &piminus_VELO_UTID, &b_piminus_VELO_UTID);
   fChain->SetBranchAddress("piminus_VeloHits", &piminus_VeloHits, &b_piminus_VeloHits);
   fChain->SetBranchAddress("piminus_TRACK_GhostProb", &piminus_TRACK_GhostProb, &b_piminus_TRACK_GhostProb);
   fChain->SetBranchAddress("piminus_TRACK_CloneDist", &piminus_TRACK_CloneDist, &b_piminus_TRACK_CloneDist);
   fChain->SetBranchAddress("pplus_LOKI_BPVDLS", &pplus_LOKI_BPVDLS, &b_pplus_LOKI_BPVDLS);
   fChain->SetBranchAddress("pplus_LOKI_DOCAZ", &pplus_LOKI_DOCAZ, &b_pplus_LOKI_DOCAZ);
   fChain->SetBranchAddress("pplus_LOKI_ETA", &pplus_LOKI_ETA, &b_pplus_LOKI_ETA);
   fChain->SetBranchAddress("pplus_LOKI_MIPCHI2DV", &pplus_LOKI_MIPCHI2DV, &b_pplus_LOKI_MIPCHI2DV);
   fChain->SetBranchAddress("pplus_LOKI_PHI", &pplus_LOKI_PHI, &b_pplus_LOKI_PHI);
   fChain->SetBranchAddress("pplus_LOKI_VCHI2PDOF", &pplus_LOKI_VCHI2PDOF, &b_pplus_LOKI_VCHI2PDOF);
   fChain->SetBranchAddress("pplus_CosTheta", &pplus_CosTheta, &b_pplus_CosTheta);
   fChain->SetBranchAddress("pplus_MINIP", &pplus_MINIP, &b_pplus_MINIP);
   fChain->SetBranchAddress("pplus_MINIPCHI2", &pplus_MINIPCHI2, &b_pplus_MINIPCHI2);
   fChain->SetBranchAddress("pplus_MINIPNEXTBEST", &pplus_MINIPNEXTBEST, &b_pplus_MINIPNEXTBEST);
   fChain->SetBranchAddress("pplus_MINIPCHI2NEXTBEST", &pplus_MINIPCHI2NEXTBEST, &b_pplus_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("pplus_OWNPV_X", &pplus_OWNPV_X, &b_pplus_OWNPV_X);
   fChain->SetBranchAddress("pplus_OWNPV_Y", &pplus_OWNPV_Y, &b_pplus_OWNPV_Y);
   fChain->SetBranchAddress("pplus_OWNPV_Z", &pplus_OWNPV_Z, &b_pplus_OWNPV_Z);
   fChain->SetBranchAddress("pplus_OWNPV_XERR", &pplus_OWNPV_XERR, &b_pplus_OWNPV_XERR);
   fChain->SetBranchAddress("pplus_OWNPV_YERR", &pplus_OWNPV_YERR, &b_pplus_OWNPV_YERR);
   fChain->SetBranchAddress("pplus_OWNPV_ZERR", &pplus_OWNPV_ZERR, &b_pplus_OWNPV_ZERR);
   fChain->SetBranchAddress("pplus_OWNPV_CHI2", &pplus_OWNPV_CHI2, &b_pplus_OWNPV_CHI2);
   fChain->SetBranchAddress("pplus_OWNPV_NDOF", &pplus_OWNPV_NDOF, &b_pplus_OWNPV_NDOF);
   fChain->SetBranchAddress("pplus_OWNPV_COV_", pplus_OWNPV_COV_, &b_pplus_OWNPV_COV_);
   fChain->SetBranchAddress("pplus_IP_OWNPV", &pplus_IP_OWNPV, &b_pplus_IP_OWNPV);
   fChain->SetBranchAddress("pplus_IPCHI2_OWNPV", &pplus_IPCHI2_OWNPV, &b_pplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("pplus_TOPPV_X", &pplus_TOPPV_X, &b_pplus_TOPPV_X);
   fChain->SetBranchAddress("pplus_TOPPV_Y", &pplus_TOPPV_Y, &b_pplus_TOPPV_Y);
   fChain->SetBranchAddress("pplus_TOPPV_Z", &pplus_TOPPV_Z, &b_pplus_TOPPV_Z);
   fChain->SetBranchAddress("pplus_TOPPV_XERR", &pplus_TOPPV_XERR, &b_pplus_TOPPV_XERR);
   fChain->SetBranchAddress("pplus_TOPPV_YERR", &pplus_TOPPV_YERR, &b_pplus_TOPPV_YERR);
   fChain->SetBranchAddress("pplus_TOPPV_ZERR", &pplus_TOPPV_ZERR, &b_pplus_TOPPV_ZERR);
   fChain->SetBranchAddress("pplus_TOPPV_CHI2", &pplus_TOPPV_CHI2, &b_pplus_TOPPV_CHI2);
   fChain->SetBranchAddress("pplus_TOPPV_NDOF", &pplus_TOPPV_NDOF, &b_pplus_TOPPV_NDOF);
   fChain->SetBranchAddress("pplus_TOPPV_COV_", pplus_TOPPV_COV_, &b_pplus_TOPPV_COV_);
   fChain->SetBranchAddress("pplus_IP_TOPPV", &pplus_IP_TOPPV, &b_pplus_IP_TOPPV);
   fChain->SetBranchAddress("pplus_IPCHI2_TOPPV", &pplus_IPCHI2_TOPPV, &b_pplus_IPCHI2_TOPPV);
   fChain->SetBranchAddress("pplus_ORIVX_X", &pplus_ORIVX_X, &b_pplus_ORIVX_X);
   fChain->SetBranchAddress("pplus_ORIVX_Y", &pplus_ORIVX_Y, &b_pplus_ORIVX_Y);
   fChain->SetBranchAddress("pplus_ORIVX_Z", &pplus_ORIVX_Z, &b_pplus_ORIVX_Z);
   fChain->SetBranchAddress("pplus_ORIVX_XERR", &pplus_ORIVX_XERR, &b_pplus_ORIVX_XERR);
   fChain->SetBranchAddress("pplus_ORIVX_YERR", &pplus_ORIVX_YERR, &b_pplus_ORIVX_YERR);
   fChain->SetBranchAddress("pplus_ORIVX_ZERR", &pplus_ORIVX_ZERR, &b_pplus_ORIVX_ZERR);
   fChain->SetBranchAddress("pplus_ORIVX_CHI2", &pplus_ORIVX_CHI2, &b_pplus_ORIVX_CHI2);
   fChain->SetBranchAddress("pplus_ORIVX_NDOF", &pplus_ORIVX_NDOF, &b_pplus_ORIVX_NDOF);
   fChain->SetBranchAddress("pplus_ORIVX_COV_", pplus_ORIVX_COV_, &b_pplus_ORIVX_COV_);
   fChain->SetBranchAddress("pplus_IP_ORIVX", &pplus_IP_ORIVX, &b_pplus_IP_ORIVX);
   fChain->SetBranchAddress("pplus_IPCHI2_ORIVX", &pplus_IPCHI2_ORIVX, &b_pplus_IPCHI2_ORIVX);
   fChain->SetBranchAddress("pplus_P", &pplus_P, &b_pplus_P);
   fChain->SetBranchAddress("pplus_PT", &pplus_PT, &b_pplus_PT);
   fChain->SetBranchAddress("pplus_PE", &pplus_PE, &b_pplus_PE);
   fChain->SetBranchAddress("pplus_PX", &pplus_PX, &b_pplus_PX);
   fChain->SetBranchAddress("pplus_PY", &pplus_PY, &b_pplus_PY);
   fChain->SetBranchAddress("pplus_PZ", &pplus_PZ, &b_pplus_PZ);
   fChain->SetBranchAddress("pplus_M", &pplus_M, &b_pplus_M);
   fChain->SetBranchAddress("pplus_ID", &pplus_ID, &b_pplus_ID);
   fChain->SetBranchAddress("pplus_PIDe", &pplus_PIDe, &b_pplus_PIDe);
   fChain->SetBranchAddress("pplus_PIDmu", &pplus_PIDmu, &b_pplus_PIDmu);
   fChain->SetBranchAddress("pplus_PIDK", &pplus_PIDK, &b_pplus_PIDK);
   fChain->SetBranchAddress("pplus_PIDp", &pplus_PIDp, &b_pplus_PIDp);
   fChain->SetBranchAddress("pplus_ProbNNe", &pplus_ProbNNe, &b_pplus_ProbNNe);
   fChain->SetBranchAddress("pplus_ProbNNk", &pplus_ProbNNk, &b_pplus_ProbNNk);
   fChain->SetBranchAddress("pplus_ProbNNp", &pplus_ProbNNp, &b_pplus_ProbNNp);
   fChain->SetBranchAddress("pplus_ProbNNpi", &pplus_ProbNNpi, &b_pplus_ProbNNpi);
   fChain->SetBranchAddress("pplus_ProbNNmu", &pplus_ProbNNmu, &b_pplus_ProbNNmu);
   fChain->SetBranchAddress("pplus_ProbNNghost", &pplus_ProbNNghost, &b_pplus_ProbNNghost);
   fChain->SetBranchAddress("pplus_hasMuon", &pplus_hasMuon, &b_pplus_hasMuon);
   fChain->SetBranchAddress("pplus_isMuon", &pplus_isMuon, &b_pplus_isMuon);
   fChain->SetBranchAddress("pplus_hasRich", &pplus_hasRich, &b_pplus_hasRich);
   fChain->SetBranchAddress("pplus_hasCalo", &pplus_hasCalo, &b_pplus_hasCalo);
   fChain->SetBranchAddress("pplusL0Global_Dec", &pplusL0Global_Dec, &b_pplusL0Global_Dec);
   fChain->SetBranchAddress("pplusL0Global_TIS", &pplusL0Global_TIS, &b_pplusL0Global_TIS);
   fChain->SetBranchAddress("pplusL0Global_TOS", &pplusL0Global_TOS, &b_pplusL0Global_TOS);
   fChain->SetBranchAddress("pplusHlt1Global_Dec", &pplusHlt1Global_Dec, &b_pplusHlt1Global_Dec);
   fChain->SetBranchAddress("pplusHlt1Global_TIS", &pplusHlt1Global_TIS, &b_pplusHlt1Global_TIS);
   fChain->SetBranchAddress("pplusHlt1Global_TOS", &pplusHlt1Global_TOS, &b_pplusHlt1Global_TOS);
   fChain->SetBranchAddress("pplusHlt1Phys_Dec", &pplusHlt1Phys_Dec, &b_pplusHlt1Phys_Dec);
   fChain->SetBranchAddress("pplusHlt1Phys_TIS", &pplusHlt1Phys_TIS, &b_pplusHlt1Phys_TIS);
   fChain->SetBranchAddress("pplusHlt1Phys_TOS", &pplusHlt1Phys_TOS, &b_pplusHlt1Phys_TOS);
   fChain->SetBranchAddress("pplusHlt2Global_Dec", &pplusHlt2Global_Dec, &b_pplusHlt2Global_Dec);
   fChain->SetBranchAddress("pplusHlt2Global_TIS", &pplusHlt2Global_TIS, &b_pplusHlt2Global_TIS);
   fChain->SetBranchAddress("pplusHlt2Global_TOS", &pplusHlt2Global_TOS, &b_pplusHlt2Global_TOS);
   fChain->SetBranchAddress("pplusHlt2Phys_Dec", &pplusHlt2Phys_Dec, &b_pplusHlt2Phys_Dec);
   fChain->SetBranchAddress("pplusHlt2Phys_TIS", &pplusHlt2Phys_TIS, &b_pplusHlt2Phys_TIS);
   fChain->SetBranchAddress("pplusHlt2Phys_TOS", &pplusHlt2Phys_TOS, &b_pplusHlt2Phys_TOS);
   fChain->SetBranchAddress("pplusStrippingGlobal_Dec", &pplusStrippingGlobal_Dec, &b_pplusStrippingGlobal_Dec);
   fChain->SetBranchAddress("pplusStrippingGlobal_TIS", &pplusStrippingGlobal_TIS, &b_pplusStrippingGlobal_TIS);
   fChain->SetBranchAddress("pplusStrippingGlobal_TOS", &pplusStrippingGlobal_TOS, &b_pplusStrippingGlobal_TOS);
   fChain->SetBranchAddress("pplusHlt1DiMuonHighMassDecision_Dec", &pplusHlt1DiMuonHighMassDecision_Dec, &b_pplusHlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("pplusHlt1DiMuonHighMassDecision_TIS", &pplusHlt1DiMuonHighMassDecision_TIS, &b_pplusHlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("pplusHlt1DiMuonHighMassDecision_TOS", &pplusHlt1DiMuonHighMassDecision_TOS, &b_pplusHlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("pplusHlt1TrackAllL0Decision_Dec", &pplusHlt1TrackAllL0Decision_Dec, &b_pplusHlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("pplusHlt1TrackAllL0Decision_TIS", &pplusHlt1TrackAllL0Decision_TIS, &b_pplusHlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("pplusHlt1TrackAllL0Decision_TOS", &pplusHlt1TrackAllL0Decision_TOS, &b_pplusHlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("pplusHlt1TrackMuonDecision_Dec", &pplusHlt1TrackMuonDecision_Dec, &b_pplusHlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("pplusHlt1TrackMuonDecision_TIS", &pplusHlt1TrackMuonDecision_TIS, &b_pplusHlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("pplusHlt1TrackMuonDecision_TOS", &pplusHlt1TrackMuonDecision_TOS, &b_pplusHlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("pplusHlt1DiMuonNoIPL0DiDecision_Dec", &pplusHlt1DiMuonNoIPL0DiDecision_Dec, &b_pplusHlt1DiMuonNoIPL0DiDecision_Dec);
   fChain->SetBranchAddress("pplusHlt1DiMuonNoIPL0DiDecision_TIS", &pplusHlt1DiMuonNoIPL0DiDecision_TIS, &b_pplusHlt1DiMuonNoIPL0DiDecision_TIS);
   fChain->SetBranchAddress("pplusHlt1DiMuonNoIPL0DiDecision_TOS", &pplusHlt1DiMuonNoIPL0DiDecision_TOS, &b_pplusHlt1DiMuonNoIPL0DiDecision_TOS);
   fChain->SetBranchAddress("pplusHlt1SingleMuonNoIPL0Decision_Dec", &pplusHlt1SingleMuonNoIPL0Decision_Dec, &b_pplusHlt1SingleMuonNoIPL0Decision_Dec);
   fChain->SetBranchAddress("pplusHlt1SingleMuonNoIPL0Decision_TIS", &pplusHlt1SingleMuonNoIPL0Decision_TIS, &b_pplusHlt1SingleMuonNoIPL0Decision_TIS);
   fChain->SetBranchAddress("pplusHlt1SingleMuonNoIPL0Decision_TOS", &pplusHlt1SingleMuonNoIPL0Decision_TOS, &b_pplusHlt1SingleMuonNoIPL0Decision_TOS);
   fChain->SetBranchAddress("pplusHlt2DiMuonJPsiDecision_Dec", &pplusHlt2DiMuonJPsiDecision_Dec, &b_pplusHlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("pplusHlt2DiMuonJPsiDecision_TIS", &pplusHlt2DiMuonJPsiDecision_TIS, &b_pplusHlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("pplusHlt2DiMuonJPsiDecision_TOS", &pplusHlt2DiMuonJPsiDecision_TOS, &b_pplusHlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("pplusHlt2DiMuonDetachedJPsiDecision_Dec", &pplusHlt2DiMuonDetachedJPsiDecision_Dec, &b_pplusHlt2DiMuonDetachedJPsiDecision_Dec);
   fChain->SetBranchAddress("pplusHlt2DiMuonDetachedJPsiDecision_TIS", &pplusHlt2DiMuonDetachedJPsiDecision_TIS, &b_pplusHlt2DiMuonDetachedJPsiDecision_TIS);
   fChain->SetBranchAddress("pplusHlt2DiMuonDetachedJPsiDecision_TOS", &pplusHlt2DiMuonDetachedJPsiDecision_TOS, &b_pplusHlt2DiMuonDetachedJPsiDecision_TOS);
   fChain->SetBranchAddress("pplusHlt2DiMuonUnbiasedJPsiDecision_Dec", &pplusHlt2DiMuonUnbiasedJPsiDecision_Dec, &b_pplusHlt2DiMuonUnbiasedJPsiDecision_Dec);
   fChain->SetBranchAddress("pplusHlt2DiMuonUnbiasedJPsiDecision_TIS", &pplusHlt2DiMuonUnbiasedJPsiDecision_TIS, &b_pplusHlt2DiMuonUnbiasedJPsiDecision_TIS);
   fChain->SetBranchAddress("pplusHlt2DiMuonUnbiasedJPsiDecision_TOS", &pplusHlt2DiMuonUnbiasedJPsiDecision_TOS, &b_pplusHlt2DiMuonUnbiasedJPsiDecision_TOS);
   fChain->SetBranchAddress("pplus_TRACK_Type", &pplus_TRACK_Type, &b_pplus_TRACK_Type);
   fChain->SetBranchAddress("pplus_TRACK_Key", &pplus_TRACK_Key, &b_pplus_TRACK_Key);
   fChain->SetBranchAddress("pplus_TRACK_CHI2NDOF", &pplus_TRACK_CHI2NDOF, &b_pplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("pplus_TRACK_PCHI2", &pplus_TRACK_PCHI2, &b_pplus_TRACK_PCHI2);
   fChain->SetBranchAddress("pplus_hasTT", &pplus_hasTT, &b_pplus_hasTT);
   fChain->SetBranchAddress("pplus_hasT", &pplus_hasT, &b_pplus_hasT);
   fChain->SetBranchAddress("pplus_TRACK_MatchCHI2", &pplus_TRACK_MatchCHI2, &b_pplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("pplus_VELO_UTID", &pplus_VELO_UTID, &b_pplus_VELO_UTID);
   fChain->SetBranchAddress("pplus_VeloHits", &pplus_VeloHits, &b_pplus_VeloHits);
   fChain->SetBranchAddress("pplus_TRACK_GhostProb", &pplus_TRACK_GhostProb, &b_pplus_TRACK_GhostProb);
   fChain->SetBranchAddress("pplus_TRACK_CloneDist", &pplus_TRACK_CloneDist, &b_pplus_TRACK_CloneDist);
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
   fChain->SetBranchAddress("Primaries", &Primaries, &b_Primaries);
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
   fChain->SetBranchAddress("LL_DOCAzweight_1bin", &LL_DOCAzweight_1bin, &b_LL_DOCAzweight_1bin);
   fChain->SetBranchAddress("DD_DOCAzweight_1bin", &DD_DOCAzweight_1bin, &b_DD_DOCAzweight_1bin);
   fChain->SetBranchAddress("LL_DOCAzweight_1bin_p1sigma", &LL_DOCAzweight_1bin_p1sigma, &b_LL_DOCAzweight_1bin_p1sigma);
   fChain->SetBranchAddress("DD_DOCAzweight_1bin_p1sigma", &DD_DOCAzweight_1bin_p1sigma, &b_DD_DOCAzweight_1bin_p1sigma);
   fChain->SetBranchAddress("LL_DOCAzweight_1bin_m1sigma", &LL_DOCAzweight_1bin_m1sigma, &b_LL_DOCAzweight_1bin_m1sigma);
   fChain->SetBranchAddress("DD_DOCAzweight_1bin_m1sigma", &DD_DOCAzweight_1bin_m1sigma, &b_DD_DOCAzweight_1bin_m1sigma);
   fChain->SetBranchAddress("LL_fiducial_cuts", &LL_fiducial_cuts, &b_LL_fiducial_cuts);
   fChain->SetBranchAddress("DD_fiducial_cuts", &DD_fiducial_cuts, &b_DD_fiducial_cuts);
   fChain->SetBranchAddress("isFullSelected_Corrected", &isFullSelected_Corrected, &b_isFullSelected_Corrected);
   fChain->SetBranchAddress("isFullTriggered_Corrected", &isFullTriggered_Corrected, &b_isFullTriggered_Corrected);
   fChain->SetBranchAddress("has2ndBestIPChi2", &has2ndBestIPChi2, &b_has2ndBestIPChi2);
   fChain->SetBranchAddress("hasDetachedStrippingTriggered", &hasDetachedStrippingTriggered, &b_hasDetachedStrippingTriggered);
   fChain->SetBranchAddress("hasExclStrippingTriggered", &hasExclStrippingTriggered, &b_hasExclStrippingTriggered);
   fChain->SetBranchAddress("hasBestDTFCHI2", &hasBestDTFCHI2, &b_hasBestDTFCHI2);
   Notify();
}

Bool_t Lambdab2JpsiLambda_reflections::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Lambdab2JpsiLambda_reflections::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Lambdab2JpsiLambda_reflections::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Lambdab2JpsiLambda_reflections_cxx
