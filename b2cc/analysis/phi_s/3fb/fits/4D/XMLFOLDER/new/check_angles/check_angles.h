//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon May 26 13:09:14 2014 by ROOT version 5.99/05
// from TTree MCDecayTree/MCDecayTree
// found on file: /Disk/speyside8/lhcb/gcowan1/generation/Bs2JpsiPhi/DVntuple.root
//////////////////////////////////////////////////////////

#ifndef check_angles_h
#define check_angles_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TLorentzVector.h>

// Header file for the classes stored in the TTree if any.

class check_angles {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        B_s0_nPhotos;
   Int_t           B_s0_MC_MOTHER_ID;
   Int_t           B_s0_MC_MOTHER_KEY;
   Int_t           B_s0_MC_GD_MOTHER_ID;
   Int_t           B_s0_MC_GD_MOTHER_KEY;
   Int_t           B_s0_MC_GD_GD_MOTHER_ID;
   Int_t           B_s0_MC_GD_GD_MOTHER_KEY;
   Double_t        B_s0_TRUEP_E;
   Double_t        B_s0_TRUEP_X;
   Double_t        B_s0_TRUEP_Y;
   Double_t        B_s0_TRUEP_Z;
   Double_t        B_s0_TRUEPT;
   Double_t        B_s0_TRUEORIGINVERTEX_X;
   Double_t        B_s0_TRUEORIGINVERTEX_Y;
   Double_t        B_s0_TRUEORIGINVERTEX_Z;
   Double_t        B_s0_TRUEENDVERTEX_X;
   Double_t        B_s0_TRUEENDVERTEX_Y;
   Double_t        B_s0_TRUEENDVERTEX_Z;
   Bool_t          B_s0_TRUEISSTABLE;
   Double_t        B_s0_TRUETAU;
   Bool_t          B_s0_OSCIL;
   Double_t        B_s0_TRUEThetaL;
   Double_t        B_s0_TRUEThetaK;
   Double_t        B_s0_TRUEPhi;
   Double_t        B_s0_TRUEThetaTr;
   Double_t        B_s0_TRUEPhiTr;
   Double_t        B_s0_TRUEThetaVtr;
   Double_t        J_psi_1S_nPhotos;
   Int_t           J_psi_1S_MC_MOTHER_ID;
   Int_t           J_psi_1S_MC_MOTHER_KEY;
   Int_t           J_psi_1S_MC_GD_MOTHER_ID;
   Int_t           J_psi_1S_MC_GD_MOTHER_KEY;
   Int_t           J_psi_1S_MC_GD_GD_MOTHER_ID;
   Int_t           J_psi_1S_MC_GD_GD_MOTHER_KEY;
   Double_t        J_psi_1S_TRUEP_E;
   Double_t        J_psi_1S_TRUEP_X;
   Double_t        J_psi_1S_TRUEP_Y;
   Double_t        J_psi_1S_TRUEP_Z;
   Double_t        J_psi_1S_TRUEPT;
   Double_t        J_psi_1S_TRUEORIGINVERTEX_X;
   Double_t        J_psi_1S_TRUEORIGINVERTEX_Y;
   Double_t        J_psi_1S_TRUEORIGINVERTEX_Z;
   Double_t        J_psi_1S_TRUEENDVERTEX_X;
   Double_t        J_psi_1S_TRUEENDVERTEX_Y;
   Double_t        J_psi_1S_TRUEENDVERTEX_Z;
   Bool_t          J_psi_1S_TRUEISSTABLE;
   Double_t        J_psi_1S_TRUETAU;
   Bool_t          J_psi_1S_OSCIL;
   Double_t        J_psi_1S_TRUEThetaL;
   Double_t        J_psi_1S_TRUEThetaK;
   Double_t        J_psi_1S_TRUEPhi;
   Double_t        J_psi_1S_TRUEThetaTr;
   Double_t        J_psi_1S_TRUEPhiTr;
   Double_t        J_psi_1S_TRUEThetaVtr;
   Double_t        muplus_nPhotos;
   Int_t           muplus_MC_MOTHER_ID;
   Int_t           muplus_MC_MOTHER_KEY;
   Int_t           muplus_MC_GD_MOTHER_ID;
   Int_t           muplus_MC_GD_MOTHER_KEY;
   Int_t           muplus_MC_GD_GD_MOTHER_ID;
   Int_t           muplus_MC_GD_GD_MOTHER_KEY;
   Double_t        muplus_TRUEP_E;
   Double_t        muplus_TRUEP_X;
   Double_t        muplus_TRUEP_Y;
   Double_t        muplus_TRUEP_Z;
   Double_t        muplus_TRUEPT;
   Double_t        muplus_TRUEORIGINVERTEX_X;
   Double_t        muplus_TRUEORIGINVERTEX_Y;
   Double_t        muplus_TRUEORIGINVERTEX_Z;
   Double_t        muplus_TRUEENDVERTEX_X;
   Double_t        muplus_TRUEENDVERTEX_Y;
   Double_t        muplus_TRUEENDVERTEX_Z;
   Bool_t          muplus_TRUEISSTABLE;
   Double_t        muplus_TRUETAU;
   Bool_t          muplus_OSCIL;
   Double_t        muplus_TRUEThetaL;
   Double_t        muplus_TRUEThetaK;
   Double_t        muplus_TRUEPhi;
   Double_t        muplus_TRUEThetaTr;
   Double_t        muplus_TRUEPhiTr;
   Double_t        muplus_TRUEThetaVtr;
   Double_t        muminus_nPhotos;
   Int_t           muminus_MC_MOTHER_ID;
   Int_t           muminus_MC_MOTHER_KEY;
   Int_t           muminus_MC_GD_MOTHER_ID;
   Int_t           muminus_MC_GD_MOTHER_KEY;
   Int_t           muminus_MC_GD_GD_MOTHER_ID;
   Int_t           muminus_MC_GD_GD_MOTHER_KEY;
   Double_t        muminus_TRUEP_E;
   Double_t        muminus_TRUEP_X;
   Double_t        muminus_TRUEP_Y;
   Double_t        muminus_TRUEP_Z;
   Double_t        muminus_TRUEPT;
   Double_t        muminus_TRUEORIGINVERTEX_X;
   Double_t        muminus_TRUEORIGINVERTEX_Y;
   Double_t        muminus_TRUEORIGINVERTEX_Z;
   Double_t        muminus_TRUEENDVERTEX_X;
   Double_t        muminus_TRUEENDVERTEX_Y;
   Double_t        muminus_TRUEENDVERTEX_Z;
   Bool_t          muminus_TRUEISSTABLE;
   Double_t        muminus_TRUETAU;
   Bool_t          muminus_OSCIL;
   Double_t        muminus_TRUEThetaL;
   Double_t        muminus_TRUEThetaK;
   Double_t        muminus_TRUEPhi;
   Double_t        muminus_TRUEThetaTr;
   Double_t        muminus_TRUEPhiTr;
   Double_t        muminus_TRUEThetaVtr;
   Double_t        phi_1020_nPhotos;
   Int_t           phi_1020_MC_MOTHER_ID;
   Int_t           phi_1020_MC_MOTHER_KEY;
   Int_t           phi_1020_MC_GD_MOTHER_ID;
   Int_t           phi_1020_MC_GD_MOTHER_KEY;
   Int_t           phi_1020_MC_GD_GD_MOTHER_ID;
   Int_t           phi_1020_MC_GD_GD_MOTHER_KEY;
   Double_t        phi_1020_TRUEP_E;
   Double_t        phi_1020_TRUEP_X;
   Double_t        phi_1020_TRUEP_Y;
   Double_t        phi_1020_TRUEP_Z;
   Double_t        phi_1020_TRUEPT;
   Double_t        phi_1020_TRUEORIGINVERTEX_X;
   Double_t        phi_1020_TRUEORIGINVERTEX_Y;
   Double_t        phi_1020_TRUEORIGINVERTEX_Z;
   Double_t        phi_1020_TRUEENDVERTEX_X;
   Double_t        phi_1020_TRUEENDVERTEX_Y;
   Double_t        phi_1020_TRUEENDVERTEX_Z;
   Bool_t          phi_1020_TRUEISSTABLE;
   Double_t        phi_1020_TRUETAU;
   Bool_t          phi_1020_OSCIL;
   Double_t        phi_1020_TRUEThetaL;
   Double_t        phi_1020_TRUEThetaK;
   Double_t        phi_1020_TRUEPhi;
   Double_t        phi_1020_TRUEThetaTr;
   Double_t        phi_1020_TRUEPhiTr;
   Double_t        phi_1020_TRUEThetaVtr;
   Double_t        Kplus_nPhotos;
   Int_t           Kplus_MC_MOTHER_ID;
   Int_t           Kplus_MC_MOTHER_KEY;
   Int_t           Kplus_MC_GD_MOTHER_ID;
   Int_t           Kplus_MC_GD_MOTHER_KEY;
   Int_t           Kplus_MC_GD_GD_MOTHER_ID;
   Int_t           Kplus_MC_GD_GD_MOTHER_KEY;
   Double_t        Kplus_TRUEP_E;
   Double_t        Kplus_TRUEP_X;
   Double_t        Kplus_TRUEP_Y;
   Double_t        Kplus_TRUEP_Z;
   Double_t        Kplus_TRUEPT;
   Double_t        Kplus_TRUEORIGINVERTEX_X;
   Double_t        Kplus_TRUEORIGINVERTEX_Y;
   Double_t        Kplus_TRUEORIGINVERTEX_Z;
   Double_t        Kplus_TRUEENDVERTEX_X;
   Double_t        Kplus_TRUEENDVERTEX_Y;
   Double_t        Kplus_TRUEENDVERTEX_Z;
   Bool_t          Kplus_TRUEISSTABLE;
   Double_t        Kplus_TRUETAU;
   Bool_t          Kplus_OSCIL;
   Double_t        Kplus_TRUEThetaL;
   Double_t        Kplus_TRUEThetaK;
   Double_t        Kplus_TRUEPhi;
   Double_t        Kplus_TRUEThetaTr;
   Double_t        Kplus_TRUEPhiTr;
   Double_t        Kplus_TRUEThetaVtr;
   Double_t        Kminus_nPhotos;
   Int_t           Kminus_MC_MOTHER_ID;
   Int_t           Kminus_MC_MOTHER_KEY;
   Int_t           Kminus_MC_GD_MOTHER_ID;
   Int_t           Kminus_MC_GD_MOTHER_KEY;
   Int_t           Kminus_MC_GD_GD_MOTHER_ID;
   Int_t           Kminus_MC_GD_GD_MOTHER_KEY;
   Double_t        Kminus_TRUEP_E;
   Double_t        Kminus_TRUEP_X;
   Double_t        Kminus_TRUEP_Y;
   Double_t        Kminus_TRUEP_Z;
   Double_t        Kminus_TRUEPT;
   Double_t        Kminus_TRUEORIGINVERTEX_X;
   Double_t        Kminus_TRUEORIGINVERTEX_Y;
   Double_t        Kminus_TRUEORIGINVERTEX_Z;
   Double_t        Kminus_TRUEENDVERTEX_X;
   Double_t        Kminus_TRUEENDVERTEX_Y;
   Double_t        Kminus_TRUEENDVERTEX_Z;
   Bool_t          Kminus_TRUEISSTABLE;
   Double_t        Kminus_TRUETAU;
   Bool_t          Kminus_OSCIL;
   Double_t        Kminus_TRUEThetaL;
   Double_t        Kminus_TRUEThetaK;
   Double_t        Kminus_TRUEPhi;
   Double_t        Kminus_TRUEThetaTr;
   Double_t        Kminus_TRUEPhiTr;
   Double_t        Kminus_TRUEThetaVtr;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;

   // List of branches
   TBranch        *b_B_s0_nPhotos;   //!
   TBranch        *b_B_s0_MC_MOTHER_ID;   //!
   TBranch        *b_B_s0_MC_MOTHER_KEY;   //!
   TBranch        *b_B_s0_MC_GD_MOTHER_ID;   //!
   TBranch        *b_B_s0_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_B_s0_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_B_s0_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_B_s0_TRUEP_E;   //!
   TBranch        *b_B_s0_TRUEP_X;   //!
   TBranch        *b_B_s0_TRUEP_Y;   //!
   TBranch        *b_B_s0_TRUEP_Z;   //!
   TBranch        *b_B_s0_TRUEPT;   //!
   TBranch        *b_B_s0_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_B_s0_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_B_s0_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_B_s0_TRUEENDVERTEX_X;   //!
   TBranch        *b_B_s0_TRUEENDVERTEX_Y;   //!
   TBranch        *b_B_s0_TRUEENDVERTEX_Z;   //!
   TBranch        *b_B_s0_TRUEISSTABLE;   //!
   TBranch        *b_B_s0_TRUETAU;   //!
   TBranch        *b_B_s0_OSCIL;   //!
   TBranch        *b_B_s0_TRUEThetaL;   //!
   TBranch        *b_B_s0_TRUEThetaK;   //!
   TBranch        *b_B_s0_TRUEPhi;   //!
   TBranch        *b_B_s0_TRUEThetaTr;   //!
   TBranch        *b_B_s0_TRUEPhiTr;   //!
   TBranch        *b_B_s0_TRUEThetaVtr;   //!
   TBranch        *b_J_psi_1S_nPhotos;   //!
   TBranch        *b_J_psi_1S_MC_MOTHER_ID;   //!
   TBranch        *b_J_psi_1S_MC_MOTHER_KEY;   //!
   TBranch        *b_J_psi_1S_MC_GD_MOTHER_ID;   //!
   TBranch        *b_J_psi_1S_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_J_psi_1S_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_J_psi_1S_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_J_psi_1S_TRUEP_E;   //!
   TBranch        *b_J_psi_1S_TRUEP_X;   //!
   TBranch        *b_J_psi_1S_TRUEP_Y;   //!
   TBranch        *b_J_psi_1S_TRUEP_Z;   //!
   TBranch        *b_J_psi_1S_TRUEPT;   //!
   TBranch        *b_J_psi_1S_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_J_psi_1S_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_J_psi_1S_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_J_psi_1S_TRUEENDVERTEX_X;   //!
   TBranch        *b_J_psi_1S_TRUEENDVERTEX_Y;   //!
   TBranch        *b_J_psi_1S_TRUEENDVERTEX_Z;   //!
   TBranch        *b_J_psi_1S_TRUEISSTABLE;   //!
   TBranch        *b_J_psi_1S_TRUETAU;   //!
   TBranch        *b_J_psi_1S_OSCIL;   //!
   TBranch        *b_J_psi_1S_TRUEThetaL;   //!
   TBranch        *b_J_psi_1S_TRUEThetaK;   //!
   TBranch        *b_J_psi_1S_TRUEPhi;   //!
   TBranch        *b_J_psi_1S_TRUEThetaTr;   //!
   TBranch        *b_J_psi_1S_TRUEPhiTr;   //!
   TBranch        *b_J_psi_1S_TRUEThetaVtr;   //!
   TBranch        *b_muplus_nPhotos;   //!
   TBranch        *b_muplus_MC_MOTHER_ID;   //!
   TBranch        *b_muplus_MC_MOTHER_KEY;   //!
   TBranch        *b_muplus_MC_GD_MOTHER_ID;   //!
   TBranch        *b_muplus_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_muplus_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_muplus_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_muplus_TRUEP_E;   //!
   TBranch        *b_muplus_TRUEP_X;   //!
   TBranch        *b_muplus_TRUEP_Y;   //!
   TBranch        *b_muplus_TRUEP_Z;   //!
   TBranch        *b_muplus_TRUEPT;   //!
   TBranch        *b_muplus_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_muplus_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_muplus_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_muplus_TRUEENDVERTEX_X;   //!
   TBranch        *b_muplus_TRUEENDVERTEX_Y;   //!
   TBranch        *b_muplus_TRUEENDVERTEX_Z;   //!
   TBranch        *b_muplus_TRUEISSTABLE;   //!
   TBranch        *b_muplus_TRUETAU;   //!
   TBranch        *b_muplus_OSCIL;   //!
   TBranch        *b_muplus_TRUEThetaL;   //!
   TBranch        *b_muplus_TRUEThetaK;   //!
   TBranch        *b_muplus_TRUEPhi;   //!
   TBranch        *b_muplus_TRUEThetaTr;   //!
   TBranch        *b_muplus_TRUEPhiTr;   //!
   TBranch        *b_muplus_TRUEThetaVtr;   //!
   TBranch        *b_muminus_nPhotos;   //!
   TBranch        *b_muminus_MC_MOTHER_ID;   //!
   TBranch        *b_muminus_MC_MOTHER_KEY;   //!
   TBranch        *b_muminus_MC_GD_MOTHER_ID;   //!
   TBranch        *b_muminus_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_muminus_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_muminus_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_muminus_TRUEP_E;   //!
   TBranch        *b_muminus_TRUEP_X;   //!
   TBranch        *b_muminus_TRUEP_Y;   //!
   TBranch        *b_muminus_TRUEP_Z;   //!
   TBranch        *b_muminus_TRUEPT;   //!
   TBranch        *b_muminus_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_muminus_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_muminus_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_muminus_TRUEENDVERTEX_X;   //!
   TBranch        *b_muminus_TRUEENDVERTEX_Y;   //!
   TBranch        *b_muminus_TRUEENDVERTEX_Z;   //!
   TBranch        *b_muminus_TRUEISSTABLE;   //!
   TBranch        *b_muminus_TRUETAU;   //!
   TBranch        *b_muminus_OSCIL;   //!
   TBranch        *b_muminus_TRUEThetaL;   //!
   TBranch        *b_muminus_TRUEThetaK;   //!
   TBranch        *b_muminus_TRUEPhi;   //!
   TBranch        *b_muminus_TRUEThetaTr;   //!
   TBranch        *b_muminus_TRUEPhiTr;   //!
   TBranch        *b_muminus_TRUEThetaVtr;   //!
   TBranch        *b_phi_1020_nPhotos;   //!
   TBranch        *b_phi_1020_MC_MOTHER_ID;   //!
   TBranch        *b_phi_1020_MC_MOTHER_KEY;   //!
   TBranch        *b_phi_1020_MC_GD_MOTHER_ID;   //!
   TBranch        *b_phi_1020_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_phi_1020_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_phi_1020_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_phi_1020_TRUEP_E;   //!
   TBranch        *b_phi_1020_TRUEP_X;   //!
   TBranch        *b_phi_1020_TRUEP_Y;   //!
   TBranch        *b_phi_1020_TRUEP_Z;   //!
   TBranch        *b_phi_1020_TRUEPT;   //!
   TBranch        *b_phi_1020_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_phi_1020_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_phi_1020_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_phi_1020_TRUEENDVERTEX_X;   //!
   TBranch        *b_phi_1020_TRUEENDVERTEX_Y;   //!
   TBranch        *b_phi_1020_TRUEENDVERTEX_Z;   //!
   TBranch        *b_phi_1020_TRUEISSTABLE;   //!
   TBranch        *b_phi_1020_TRUETAU;   //!
   TBranch        *b_phi_1020_OSCIL;   //!
   TBranch        *b_phi_1020_TRUEThetaL;   //!
   TBranch        *b_phi_1020_TRUEThetaK;   //!
   TBranch        *b_phi_1020_TRUEPhi;   //!
   TBranch        *b_phi_1020_TRUEThetaTr;   //!
   TBranch        *b_phi_1020_TRUEPhiTr;   //!
   TBranch        *b_phi_1020_TRUEThetaVtr;   //!
   TBranch        *b_Kplus_nPhotos;   //!
   TBranch        *b_Kplus_MC_MOTHER_ID;   //!
   TBranch        *b_Kplus_MC_MOTHER_KEY;   //!
   TBranch        *b_Kplus_MC_GD_MOTHER_ID;   //!
   TBranch        *b_Kplus_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_Kplus_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_Kplus_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_Kplus_TRUEP_E;   //!
   TBranch        *b_Kplus_TRUEP_X;   //!
   TBranch        *b_Kplus_TRUEP_Y;   //!
   TBranch        *b_Kplus_TRUEP_Z;   //!
   TBranch        *b_Kplus_TRUEPT;   //!
   TBranch        *b_Kplus_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_Kplus_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_Kplus_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_Kplus_TRUEENDVERTEX_X;   //!
   TBranch        *b_Kplus_TRUEENDVERTEX_Y;   //!
   TBranch        *b_Kplus_TRUEENDVERTEX_Z;   //!
   TBranch        *b_Kplus_TRUEISSTABLE;   //!
   TBranch        *b_Kplus_TRUETAU;   //!
   TBranch        *b_Kplus_OSCIL;   //!
   TBranch        *b_Kplus_TRUEThetaL;   //!
   TBranch        *b_Kplus_TRUEThetaK;   //!
   TBranch        *b_Kplus_TRUEPhi;   //!
   TBranch        *b_Kplus_TRUEThetaTr;   //!
   TBranch        *b_Kplus_TRUEPhiTr;   //!
   TBranch        *b_Kplus_TRUEThetaVtr;   //!
   TBranch        *b_Kminus_nPhotos;   //!
   TBranch        *b_Kminus_MC_MOTHER_ID;   //!
   TBranch        *b_Kminus_MC_MOTHER_KEY;   //!
   TBranch        *b_Kminus_MC_GD_MOTHER_ID;   //!
   TBranch        *b_Kminus_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_Kminus_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_Kminus_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_Kminus_TRUEP_E;   //!
   TBranch        *b_Kminus_TRUEP_X;   //!
   TBranch        *b_Kminus_TRUEP_Y;   //!
   TBranch        *b_Kminus_TRUEP_Z;   //!
   TBranch        *b_Kminus_TRUEPT;   //!
   TBranch        *b_Kminus_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_Kminus_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_Kminus_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_Kminus_TRUEENDVERTEX_X;   //!
   TBranch        *b_Kminus_TRUEENDVERTEX_Y;   //!
   TBranch        *b_Kminus_TRUEENDVERTEX_Z;   //!
   TBranch        *b_Kminus_TRUEISSTABLE;   //!
   TBranch        *b_Kminus_TRUETAU;   //!
   TBranch        *b_Kminus_OSCIL;   //!
   TBranch        *b_Kminus_TRUEThetaL;   //!
   TBranch        *b_Kminus_TRUEThetaK;   //!
   TBranch        *b_Kminus_TRUEPhi;   //!
   TBranch        *b_Kminus_TRUEThetaTr;   //!
   TBranch        *b_Kminus_TRUEPhiTr;   //!
   TBranch        *b_Kminus_TRUEThetaVtr;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!

   check_angles(TTree *tree=0);
   virtual ~check_angles();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual void PRD(const  TLorentzVector & _pMuPlus,
           const  TLorentzVector & _pMuMinus,
           const  TLorentzVector & _pPi,
           const  TLorentzVector & _pK,
           double & m23,
           double & cosKPi,
           double & cosPsi) const;
    virtual void PRD_trans(const  TLorentzVector & _pMuPlus,
           const  TLorentzVector & _pMuMinus,
           const  TLorentzVector & _pPi,
           const  TLorentzVector & _pK,
           double & m23,
           double & cosPsi) const;
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

#ifdef check_angles_cxx
check_angles::check_angles(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/Disk/speyside8/lhcb/gcowan1/generation/Bs2JpsiPhi/DVntuple.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/Disk/speyside8/lhcb/gcowan1/generation/Bs2JpsiPhi/DVntuple.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/Disk/speyside8/lhcb/gcowan1/generation/Bs2JpsiPhi/DVntuple.root:/MCDecayTreeTuple");
      dir->GetObject("MCDecayTree",tree);

   }
   Init(tree);
}

check_angles::~check_angles()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t check_angles::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t check_angles::LoadTree(Long64_t entry)
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

void check_angles::Init(TTree *tree)
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

   fChain->SetBranchAddress("B_s0_nPhotos", &B_s0_nPhotos, &b_B_s0_nPhotos);
   fChain->SetBranchAddress("B_s0_MC_MOTHER_ID", &B_s0_MC_MOTHER_ID, &b_B_s0_MC_MOTHER_ID);
   fChain->SetBranchAddress("B_s0_MC_MOTHER_KEY", &B_s0_MC_MOTHER_KEY, &b_B_s0_MC_MOTHER_KEY);
   fChain->SetBranchAddress("B_s0_MC_GD_MOTHER_ID", &B_s0_MC_GD_MOTHER_ID, &b_B_s0_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("B_s0_MC_GD_MOTHER_KEY", &B_s0_MC_GD_MOTHER_KEY, &b_B_s0_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("B_s0_MC_GD_GD_MOTHER_ID", &B_s0_MC_GD_GD_MOTHER_ID, &b_B_s0_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("B_s0_MC_GD_GD_MOTHER_KEY", &B_s0_MC_GD_GD_MOTHER_KEY, &b_B_s0_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("B_s0_TRUEP_E", &B_s0_TRUEP_E, &b_B_s0_TRUEP_E);
   fChain->SetBranchAddress("B_s0_TRUEP_X", &B_s0_TRUEP_X, &b_B_s0_TRUEP_X);
   fChain->SetBranchAddress("B_s0_TRUEP_Y", &B_s0_TRUEP_Y, &b_B_s0_TRUEP_Y);
   fChain->SetBranchAddress("B_s0_TRUEP_Z", &B_s0_TRUEP_Z, &b_B_s0_TRUEP_Z);
   fChain->SetBranchAddress("B_s0_TRUEPT", &B_s0_TRUEPT, &b_B_s0_TRUEPT);
   fChain->SetBranchAddress("B_s0_TRUEORIGINVERTEX_X", &B_s0_TRUEORIGINVERTEX_X, &b_B_s0_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("B_s0_TRUEORIGINVERTEX_Y", &B_s0_TRUEORIGINVERTEX_Y, &b_B_s0_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("B_s0_TRUEORIGINVERTEX_Z", &B_s0_TRUEORIGINVERTEX_Z, &b_B_s0_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("B_s0_TRUEENDVERTEX_X", &B_s0_TRUEENDVERTEX_X, &b_B_s0_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("B_s0_TRUEENDVERTEX_Y", &B_s0_TRUEENDVERTEX_Y, &b_B_s0_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("B_s0_TRUEENDVERTEX_Z", &B_s0_TRUEENDVERTEX_Z, &b_B_s0_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("B_s0_TRUEISSTABLE", &B_s0_TRUEISSTABLE, &b_B_s0_TRUEISSTABLE);
   fChain->SetBranchAddress("B_s0_TRUETAU", &B_s0_TRUETAU, &b_B_s0_TRUETAU);
   fChain->SetBranchAddress("B_s0_OSCIL", &B_s0_OSCIL, &b_B_s0_OSCIL);
   fChain->SetBranchAddress("B_s0_TRUEThetaL", &B_s0_TRUEThetaL, &b_B_s0_TRUEThetaL);
   fChain->SetBranchAddress("B_s0_TRUEThetaK", &B_s0_TRUEThetaK, &b_B_s0_TRUEThetaK);
   fChain->SetBranchAddress("B_s0_TRUEPhi", &B_s0_TRUEPhi, &b_B_s0_TRUEPhi);
   fChain->SetBranchAddress("B_s0_TRUEThetaTr", &B_s0_TRUEThetaTr, &b_B_s0_TRUEThetaTr);
   fChain->SetBranchAddress("B_s0_TRUEPhiTr", &B_s0_TRUEPhiTr, &b_B_s0_TRUEPhiTr);
   fChain->SetBranchAddress("B_s0_TRUEThetaVtr", &B_s0_TRUEThetaVtr, &b_B_s0_TRUEThetaVtr);
   fChain->SetBranchAddress("J_psi_1S_nPhotos", &J_psi_1S_nPhotos, &b_J_psi_1S_nPhotos);
   fChain->SetBranchAddress("J_psi_1S_MC_MOTHER_ID", &J_psi_1S_MC_MOTHER_ID, &b_J_psi_1S_MC_MOTHER_ID);
   fChain->SetBranchAddress("J_psi_1S_MC_MOTHER_KEY", &J_psi_1S_MC_MOTHER_KEY, &b_J_psi_1S_MC_MOTHER_KEY);
   fChain->SetBranchAddress("J_psi_1S_MC_GD_MOTHER_ID", &J_psi_1S_MC_GD_MOTHER_ID, &b_J_psi_1S_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("J_psi_1S_MC_GD_MOTHER_KEY", &J_psi_1S_MC_GD_MOTHER_KEY, &b_J_psi_1S_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("J_psi_1S_MC_GD_GD_MOTHER_ID", &J_psi_1S_MC_GD_GD_MOTHER_ID, &b_J_psi_1S_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("J_psi_1S_MC_GD_GD_MOTHER_KEY", &J_psi_1S_MC_GD_GD_MOTHER_KEY, &b_J_psi_1S_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("J_psi_1S_TRUEP_E", &J_psi_1S_TRUEP_E, &b_J_psi_1S_TRUEP_E);
   fChain->SetBranchAddress("J_psi_1S_TRUEP_X", &J_psi_1S_TRUEP_X, &b_J_psi_1S_TRUEP_X);
   fChain->SetBranchAddress("J_psi_1S_TRUEP_Y", &J_psi_1S_TRUEP_Y, &b_J_psi_1S_TRUEP_Y);
   fChain->SetBranchAddress("J_psi_1S_TRUEP_Z", &J_psi_1S_TRUEP_Z, &b_J_psi_1S_TRUEP_Z);
   fChain->SetBranchAddress("J_psi_1S_TRUEPT", &J_psi_1S_TRUEPT, &b_J_psi_1S_TRUEPT);
   fChain->SetBranchAddress("J_psi_1S_TRUEORIGINVERTEX_X", &J_psi_1S_TRUEORIGINVERTEX_X, &b_J_psi_1S_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("J_psi_1S_TRUEORIGINVERTEX_Y", &J_psi_1S_TRUEORIGINVERTEX_Y, &b_J_psi_1S_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("J_psi_1S_TRUEORIGINVERTEX_Z", &J_psi_1S_TRUEORIGINVERTEX_Z, &b_J_psi_1S_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("J_psi_1S_TRUEENDVERTEX_X", &J_psi_1S_TRUEENDVERTEX_X, &b_J_psi_1S_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("J_psi_1S_TRUEENDVERTEX_Y", &J_psi_1S_TRUEENDVERTEX_Y, &b_J_psi_1S_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("J_psi_1S_TRUEENDVERTEX_Z", &J_psi_1S_TRUEENDVERTEX_Z, &b_J_psi_1S_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("J_psi_1S_TRUEISSTABLE", &J_psi_1S_TRUEISSTABLE, &b_J_psi_1S_TRUEISSTABLE);
   fChain->SetBranchAddress("J_psi_1S_TRUETAU", &J_psi_1S_TRUETAU, &b_J_psi_1S_TRUETAU);
   fChain->SetBranchAddress("J_psi_1S_OSCIL", &J_psi_1S_OSCIL, &b_J_psi_1S_OSCIL);
   fChain->SetBranchAddress("J_psi_1S_TRUEThetaL", &J_psi_1S_TRUEThetaL, &b_J_psi_1S_TRUEThetaL);
   fChain->SetBranchAddress("J_psi_1S_TRUEThetaK", &J_psi_1S_TRUEThetaK, &b_J_psi_1S_TRUEThetaK);
   fChain->SetBranchAddress("J_psi_1S_TRUEPhi", &J_psi_1S_TRUEPhi, &b_J_psi_1S_TRUEPhi);
   fChain->SetBranchAddress("J_psi_1S_TRUEThetaTr", &J_psi_1S_TRUEThetaTr, &b_J_psi_1S_TRUEThetaTr);
   fChain->SetBranchAddress("J_psi_1S_TRUEPhiTr", &J_psi_1S_TRUEPhiTr, &b_J_psi_1S_TRUEPhiTr);
   fChain->SetBranchAddress("J_psi_1S_TRUEThetaVtr", &J_psi_1S_TRUEThetaVtr, &b_J_psi_1S_TRUEThetaVtr);
   fChain->SetBranchAddress("muplus_nPhotos", &muplus_nPhotos, &b_muplus_nPhotos);
   fChain->SetBranchAddress("muplus_MC_MOTHER_ID", &muplus_MC_MOTHER_ID, &b_muplus_MC_MOTHER_ID);
   fChain->SetBranchAddress("muplus_MC_MOTHER_KEY", &muplus_MC_MOTHER_KEY, &b_muplus_MC_MOTHER_KEY);
   fChain->SetBranchAddress("muplus_MC_GD_MOTHER_ID", &muplus_MC_GD_MOTHER_ID, &b_muplus_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("muplus_MC_GD_MOTHER_KEY", &muplus_MC_GD_MOTHER_KEY, &b_muplus_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("muplus_MC_GD_GD_MOTHER_ID", &muplus_MC_GD_GD_MOTHER_ID, &b_muplus_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("muplus_MC_GD_GD_MOTHER_KEY", &muplus_MC_GD_GD_MOTHER_KEY, &b_muplus_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("muplus_TRUEP_E", &muplus_TRUEP_E, &b_muplus_TRUEP_E);
   fChain->SetBranchAddress("muplus_TRUEP_X", &muplus_TRUEP_X, &b_muplus_TRUEP_X);
   fChain->SetBranchAddress("muplus_TRUEP_Y", &muplus_TRUEP_Y, &b_muplus_TRUEP_Y);
   fChain->SetBranchAddress("muplus_TRUEP_Z", &muplus_TRUEP_Z, &b_muplus_TRUEP_Z);
   fChain->SetBranchAddress("muplus_TRUEPT", &muplus_TRUEPT, &b_muplus_TRUEPT);
   fChain->SetBranchAddress("muplus_TRUEORIGINVERTEX_X", &muplus_TRUEORIGINVERTEX_X, &b_muplus_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("muplus_TRUEORIGINVERTEX_Y", &muplus_TRUEORIGINVERTEX_Y, &b_muplus_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("muplus_TRUEORIGINVERTEX_Z", &muplus_TRUEORIGINVERTEX_Z, &b_muplus_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("muplus_TRUEENDVERTEX_X", &muplus_TRUEENDVERTEX_X, &b_muplus_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("muplus_TRUEENDVERTEX_Y", &muplus_TRUEENDVERTEX_Y, &b_muplus_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("muplus_TRUEENDVERTEX_Z", &muplus_TRUEENDVERTEX_Z, &b_muplus_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("muplus_TRUEISSTABLE", &muplus_TRUEISSTABLE, &b_muplus_TRUEISSTABLE);
   fChain->SetBranchAddress("muplus_TRUETAU", &muplus_TRUETAU, &b_muplus_TRUETAU);
   fChain->SetBranchAddress("muplus_OSCIL", &muplus_OSCIL, &b_muplus_OSCIL);
   fChain->SetBranchAddress("muplus_TRUEThetaL", &muplus_TRUEThetaL, &b_muplus_TRUEThetaL);
   fChain->SetBranchAddress("muplus_TRUEThetaK", &muplus_TRUEThetaK, &b_muplus_TRUEThetaK);
   fChain->SetBranchAddress("muplus_TRUEPhi", &muplus_TRUEPhi, &b_muplus_TRUEPhi);
   fChain->SetBranchAddress("muplus_TRUEThetaTr", &muplus_TRUEThetaTr, &b_muplus_TRUEThetaTr);
   fChain->SetBranchAddress("muplus_TRUEPhiTr", &muplus_TRUEPhiTr, &b_muplus_TRUEPhiTr);
   fChain->SetBranchAddress("muplus_TRUEThetaVtr", &muplus_TRUEThetaVtr, &b_muplus_TRUEThetaVtr);
   fChain->SetBranchAddress("muminus_nPhotos", &muminus_nPhotos, &b_muminus_nPhotos);
   fChain->SetBranchAddress("muminus_MC_MOTHER_ID", &muminus_MC_MOTHER_ID, &b_muminus_MC_MOTHER_ID);
   fChain->SetBranchAddress("muminus_MC_MOTHER_KEY", &muminus_MC_MOTHER_KEY, &b_muminus_MC_MOTHER_KEY);
   fChain->SetBranchAddress("muminus_MC_GD_MOTHER_ID", &muminus_MC_GD_MOTHER_ID, &b_muminus_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("muminus_MC_GD_MOTHER_KEY", &muminus_MC_GD_MOTHER_KEY, &b_muminus_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("muminus_MC_GD_GD_MOTHER_ID", &muminus_MC_GD_GD_MOTHER_ID, &b_muminus_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("muminus_MC_GD_GD_MOTHER_KEY", &muminus_MC_GD_GD_MOTHER_KEY, &b_muminus_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("muminus_TRUEP_E", &muminus_TRUEP_E, &b_muminus_TRUEP_E);
   fChain->SetBranchAddress("muminus_TRUEP_X", &muminus_TRUEP_X, &b_muminus_TRUEP_X);
   fChain->SetBranchAddress("muminus_TRUEP_Y", &muminus_TRUEP_Y, &b_muminus_TRUEP_Y);
   fChain->SetBranchAddress("muminus_TRUEP_Z", &muminus_TRUEP_Z, &b_muminus_TRUEP_Z);
   fChain->SetBranchAddress("muminus_TRUEPT", &muminus_TRUEPT, &b_muminus_TRUEPT);
   fChain->SetBranchAddress("muminus_TRUEORIGINVERTEX_X", &muminus_TRUEORIGINVERTEX_X, &b_muminus_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("muminus_TRUEORIGINVERTEX_Y", &muminus_TRUEORIGINVERTEX_Y, &b_muminus_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("muminus_TRUEORIGINVERTEX_Z", &muminus_TRUEORIGINVERTEX_Z, &b_muminus_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("muminus_TRUEENDVERTEX_X", &muminus_TRUEENDVERTEX_X, &b_muminus_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("muminus_TRUEENDVERTEX_Y", &muminus_TRUEENDVERTEX_Y, &b_muminus_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("muminus_TRUEENDVERTEX_Z", &muminus_TRUEENDVERTEX_Z, &b_muminus_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("muminus_TRUEISSTABLE", &muminus_TRUEISSTABLE, &b_muminus_TRUEISSTABLE);
   fChain->SetBranchAddress("muminus_TRUETAU", &muminus_TRUETAU, &b_muminus_TRUETAU);
   fChain->SetBranchAddress("muminus_OSCIL", &muminus_OSCIL, &b_muminus_OSCIL);
   fChain->SetBranchAddress("muminus_TRUEThetaL", &muminus_TRUEThetaL, &b_muminus_TRUEThetaL);
   fChain->SetBranchAddress("muminus_TRUEThetaK", &muminus_TRUEThetaK, &b_muminus_TRUEThetaK);
   fChain->SetBranchAddress("muminus_TRUEPhi", &muminus_TRUEPhi, &b_muminus_TRUEPhi);
   fChain->SetBranchAddress("muminus_TRUEThetaTr", &muminus_TRUEThetaTr, &b_muminus_TRUEThetaTr);
   fChain->SetBranchAddress("muminus_TRUEPhiTr", &muminus_TRUEPhiTr, &b_muminus_TRUEPhiTr);
   fChain->SetBranchAddress("muminus_TRUEThetaVtr", &muminus_TRUEThetaVtr, &b_muminus_TRUEThetaVtr);
   fChain->SetBranchAddress("phi_1020_nPhotos", &phi_1020_nPhotos, &b_phi_1020_nPhotos);
   fChain->SetBranchAddress("phi_1020_MC_MOTHER_ID", &phi_1020_MC_MOTHER_ID, &b_phi_1020_MC_MOTHER_ID);
   fChain->SetBranchAddress("phi_1020_MC_MOTHER_KEY", &phi_1020_MC_MOTHER_KEY, &b_phi_1020_MC_MOTHER_KEY);
   fChain->SetBranchAddress("phi_1020_MC_GD_MOTHER_ID", &phi_1020_MC_GD_MOTHER_ID, &b_phi_1020_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("phi_1020_MC_GD_MOTHER_KEY", &phi_1020_MC_GD_MOTHER_KEY, &b_phi_1020_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("phi_1020_MC_GD_GD_MOTHER_ID", &phi_1020_MC_GD_GD_MOTHER_ID, &b_phi_1020_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("phi_1020_MC_GD_GD_MOTHER_KEY", &phi_1020_MC_GD_GD_MOTHER_KEY, &b_phi_1020_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("phi_1020_TRUEP_E", &phi_1020_TRUEP_E, &b_phi_1020_TRUEP_E);
   fChain->SetBranchAddress("phi_1020_TRUEP_X", &phi_1020_TRUEP_X, &b_phi_1020_TRUEP_X);
   fChain->SetBranchAddress("phi_1020_TRUEP_Y", &phi_1020_TRUEP_Y, &b_phi_1020_TRUEP_Y);
   fChain->SetBranchAddress("phi_1020_TRUEP_Z", &phi_1020_TRUEP_Z, &b_phi_1020_TRUEP_Z);
   fChain->SetBranchAddress("phi_1020_TRUEPT", &phi_1020_TRUEPT, &b_phi_1020_TRUEPT);
   fChain->SetBranchAddress("phi_1020_TRUEORIGINVERTEX_X", &phi_1020_TRUEORIGINVERTEX_X, &b_phi_1020_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("phi_1020_TRUEORIGINVERTEX_Y", &phi_1020_TRUEORIGINVERTEX_Y, &b_phi_1020_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("phi_1020_TRUEORIGINVERTEX_Z", &phi_1020_TRUEORIGINVERTEX_Z, &b_phi_1020_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("phi_1020_TRUEENDVERTEX_X", &phi_1020_TRUEENDVERTEX_X, &b_phi_1020_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("phi_1020_TRUEENDVERTEX_Y", &phi_1020_TRUEENDVERTEX_Y, &b_phi_1020_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("phi_1020_TRUEENDVERTEX_Z", &phi_1020_TRUEENDVERTEX_Z, &b_phi_1020_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("phi_1020_TRUEISSTABLE", &phi_1020_TRUEISSTABLE, &b_phi_1020_TRUEISSTABLE);
   fChain->SetBranchAddress("phi_1020_TRUETAU", &phi_1020_TRUETAU, &b_phi_1020_TRUETAU);
   fChain->SetBranchAddress("phi_1020_OSCIL", &phi_1020_OSCIL, &b_phi_1020_OSCIL);
   fChain->SetBranchAddress("phi_1020_TRUEThetaL", &phi_1020_TRUEThetaL, &b_phi_1020_TRUEThetaL);
   fChain->SetBranchAddress("phi_1020_TRUEThetaK", &phi_1020_TRUEThetaK, &b_phi_1020_TRUEThetaK);
   fChain->SetBranchAddress("phi_1020_TRUEPhi", &phi_1020_TRUEPhi, &b_phi_1020_TRUEPhi);
   fChain->SetBranchAddress("phi_1020_TRUEThetaTr", &phi_1020_TRUEThetaTr, &b_phi_1020_TRUEThetaTr);
   fChain->SetBranchAddress("phi_1020_TRUEPhiTr", &phi_1020_TRUEPhiTr, &b_phi_1020_TRUEPhiTr);
   fChain->SetBranchAddress("phi_1020_TRUEThetaVtr", &phi_1020_TRUEThetaVtr, &b_phi_1020_TRUEThetaVtr);
   fChain->SetBranchAddress("Kplus_nPhotos", &Kplus_nPhotos, &b_Kplus_nPhotos);
   fChain->SetBranchAddress("Kplus_MC_MOTHER_ID", &Kplus_MC_MOTHER_ID, &b_Kplus_MC_MOTHER_ID);
   fChain->SetBranchAddress("Kplus_MC_MOTHER_KEY", &Kplus_MC_MOTHER_KEY, &b_Kplus_MC_MOTHER_KEY);
   fChain->SetBranchAddress("Kplus_MC_GD_MOTHER_ID", &Kplus_MC_GD_MOTHER_ID, &b_Kplus_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("Kplus_MC_GD_MOTHER_KEY", &Kplus_MC_GD_MOTHER_KEY, &b_Kplus_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Kplus_MC_GD_GD_MOTHER_ID", &Kplus_MC_GD_GD_MOTHER_ID, &b_Kplus_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("Kplus_MC_GD_GD_MOTHER_KEY", &Kplus_MC_GD_GD_MOTHER_KEY, &b_Kplus_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Kplus_TRUEP_E", &Kplus_TRUEP_E, &b_Kplus_TRUEP_E);
   fChain->SetBranchAddress("Kplus_TRUEP_X", &Kplus_TRUEP_X, &b_Kplus_TRUEP_X);
   fChain->SetBranchAddress("Kplus_TRUEP_Y", &Kplus_TRUEP_Y, &b_Kplus_TRUEP_Y);
   fChain->SetBranchAddress("Kplus_TRUEP_Z", &Kplus_TRUEP_Z, &b_Kplus_TRUEP_Z);
   fChain->SetBranchAddress("Kplus_TRUEPT", &Kplus_TRUEPT, &b_Kplus_TRUEPT);
   fChain->SetBranchAddress("Kplus_TRUEORIGINVERTEX_X", &Kplus_TRUEORIGINVERTEX_X, &b_Kplus_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("Kplus_TRUEORIGINVERTEX_Y", &Kplus_TRUEORIGINVERTEX_Y, &b_Kplus_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("Kplus_TRUEORIGINVERTEX_Z", &Kplus_TRUEORIGINVERTEX_Z, &b_Kplus_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("Kplus_TRUEENDVERTEX_X", &Kplus_TRUEENDVERTEX_X, &b_Kplus_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("Kplus_TRUEENDVERTEX_Y", &Kplus_TRUEENDVERTEX_Y, &b_Kplus_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("Kplus_TRUEENDVERTEX_Z", &Kplus_TRUEENDVERTEX_Z, &b_Kplus_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("Kplus_TRUEISSTABLE", &Kplus_TRUEISSTABLE, &b_Kplus_TRUEISSTABLE);
   fChain->SetBranchAddress("Kplus_TRUETAU", &Kplus_TRUETAU, &b_Kplus_TRUETAU);
   fChain->SetBranchAddress("Kplus_OSCIL", &Kplus_OSCIL, &b_Kplus_OSCIL);
   fChain->SetBranchAddress("Kplus_TRUEThetaL", &Kplus_TRUEThetaL, &b_Kplus_TRUEThetaL);
   fChain->SetBranchAddress("Kplus_TRUEThetaK", &Kplus_TRUEThetaK, &b_Kplus_TRUEThetaK);
   fChain->SetBranchAddress("Kplus_TRUEPhi", &Kplus_TRUEPhi, &b_Kplus_TRUEPhi);
   fChain->SetBranchAddress("Kplus_TRUEThetaTr", &Kplus_TRUEThetaTr, &b_Kplus_TRUEThetaTr);
   fChain->SetBranchAddress("Kplus_TRUEPhiTr", &Kplus_TRUEPhiTr, &b_Kplus_TRUEPhiTr);
   fChain->SetBranchAddress("Kplus_TRUEThetaVtr", &Kplus_TRUEThetaVtr, &b_Kplus_TRUEThetaVtr);
   fChain->SetBranchAddress("Kminus_nPhotos", &Kminus_nPhotos, &b_Kminus_nPhotos);
   fChain->SetBranchAddress("Kminus_MC_MOTHER_ID", &Kminus_MC_MOTHER_ID, &b_Kminus_MC_MOTHER_ID);
   fChain->SetBranchAddress("Kminus_MC_MOTHER_KEY", &Kminus_MC_MOTHER_KEY, &b_Kminus_MC_MOTHER_KEY);
   fChain->SetBranchAddress("Kminus_MC_GD_MOTHER_ID", &Kminus_MC_GD_MOTHER_ID, &b_Kminus_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("Kminus_MC_GD_MOTHER_KEY", &Kminus_MC_GD_MOTHER_KEY, &b_Kminus_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Kminus_MC_GD_GD_MOTHER_ID", &Kminus_MC_GD_GD_MOTHER_ID, &b_Kminus_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("Kminus_MC_GD_GD_MOTHER_KEY", &Kminus_MC_GD_GD_MOTHER_KEY, &b_Kminus_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Kminus_TRUEP_E", &Kminus_TRUEP_E, &b_Kminus_TRUEP_E);
   fChain->SetBranchAddress("Kminus_TRUEP_X", &Kminus_TRUEP_X, &b_Kminus_TRUEP_X);
   fChain->SetBranchAddress("Kminus_TRUEP_Y", &Kminus_TRUEP_Y, &b_Kminus_TRUEP_Y);
   fChain->SetBranchAddress("Kminus_TRUEP_Z", &Kminus_TRUEP_Z, &b_Kminus_TRUEP_Z);
   fChain->SetBranchAddress("Kminus_TRUEPT", &Kminus_TRUEPT, &b_Kminus_TRUEPT);
   fChain->SetBranchAddress("Kminus_TRUEORIGINVERTEX_X", &Kminus_TRUEORIGINVERTEX_X, &b_Kminus_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("Kminus_TRUEORIGINVERTEX_Y", &Kminus_TRUEORIGINVERTEX_Y, &b_Kminus_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("Kminus_TRUEORIGINVERTEX_Z", &Kminus_TRUEORIGINVERTEX_Z, &b_Kminus_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("Kminus_TRUEENDVERTEX_X", &Kminus_TRUEENDVERTEX_X, &b_Kminus_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("Kminus_TRUEENDVERTEX_Y", &Kminus_TRUEENDVERTEX_Y, &b_Kminus_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("Kminus_TRUEENDVERTEX_Z", &Kminus_TRUEENDVERTEX_Z, &b_Kminus_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("Kminus_TRUEISSTABLE", &Kminus_TRUEISSTABLE, &b_Kminus_TRUEISSTABLE);
   fChain->SetBranchAddress("Kminus_TRUETAU", &Kminus_TRUETAU, &b_Kminus_TRUETAU);
   fChain->SetBranchAddress("Kminus_OSCIL", &Kminus_OSCIL, &b_Kminus_OSCIL);
   fChain->SetBranchAddress("Kminus_TRUEThetaL", &Kminus_TRUEThetaL, &b_Kminus_TRUEThetaL);
   fChain->SetBranchAddress("Kminus_TRUEThetaK", &Kminus_TRUEThetaK, &b_Kminus_TRUEThetaK);
   fChain->SetBranchAddress("Kminus_TRUEPhi", &Kminus_TRUEPhi, &b_Kminus_TRUEPhi);
   fChain->SetBranchAddress("Kminus_TRUEThetaTr", &Kminus_TRUEThetaTr, &b_Kminus_TRUEThetaTr);
   fChain->SetBranchAddress("Kminus_TRUEPhiTr", &Kminus_TRUEPhiTr, &b_Kminus_TRUEPhiTr);
   fChain->SetBranchAddress("Kminus_TRUEThetaVtr", &Kminus_TRUEThetaVtr, &b_Kminus_TRUEThetaVtr);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   Notify();
}

Bool_t check_angles::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void check_angles::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t check_angles::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef check_angles_cxx
