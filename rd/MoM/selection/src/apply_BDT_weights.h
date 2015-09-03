//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Sep  3 11:55:48 2015 by ROOT version 6.04/02
// from TTree DecayTree/DecayTree
// found on file: /afs/cern.ch/work/g/gcowan/gangadir/workspace/gcowan/LocalXML/320/10/output/BuKll.root
//////////////////////////////////////////////////////////

#ifndef apply_BDT_weights_h
#define apply_BDT_weights_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class apply_BDT_weights {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        Bplus_IPCHI2_OWNPV;
   Double_t        Bplus_IP_OWNPV;
   Double_t        Bplus_MINIP;
   Double_t        Bplus_MINIPCHI2;
   Double_t        Bplus_fitted_E;
   Double_t        Bplus_fitted_X;
   Double_t        Bplus_fitted_Y;
   Double_t        Bplus_fitted_Z;
   Double_t        Bplus_fitted_dimuon_E;
   Double_t        Bplus_fitted_dimuon_X;
   Double_t        Bplus_fitted_dimuon_Y;
   Double_t        Bplus_fitted_dimuon_Z;
   Double_t        Bplus_fitted_dimuon_M;
   Double_t        Bplus_fitted_dimuon_M_5500;
   Double_t        Bplus_fitted_dimuon_M_5580;
   Double_t        Bplus_fitted_dimuon_M_5660;
   Double_t        Bplus_fitted_dimuon_M_5740;
   Double_t        Bplus_fitted_dimuon_M_5820;
   Double_t        Bplus_P;
   Double_t        Bplus_PT;
   Double_t        Bplus_PE;
   Double_t        Bplus_PX;
   Double_t        Bplus_PY;
   Double_t        Bplus_PZ;
   Double_t        Bplus_MM;
   Double_t        Bplus_MMERR;
   Double_t        Bplus_M;
   Double_t        Bplus_DIRA_OWNPV;
   Double_t        Bplus_ENDVERTEX_CHI2;
   Double_t        Bplus_FD_CHI2;
   Double_t        Bplus_ID;
   Double_t        Bplus_KMu_D;
   Double_t        Bplus_KMu_Jpsi;
   Double_t        Bplus_TAU;
   Double_t        Bplus_dimuon_mass_B_constr;
   Double_t        Bplus_dimuon_mass_PV_constr;
   Double_t        Bplus_dimuon_mass_PV_constr_B_constr;
   Double_t        Bplus_dimuon_mass_no_constr;
   Bool_t          Bplus_L0Global_Dec;
   Bool_t          Bplus_L0Global_TIS;
   Bool_t          Bplus_L0Global_TOS;
   Bool_t          Bplus_Hlt1Global_Dec;
   Bool_t          Bplus_Hlt1Global_TIS;
   Bool_t          Bplus_Hlt1Global_TOS;
   Bool_t          Bplus_Hlt1Phys_Dec;
   Bool_t          Bplus_Hlt1Phys_TIS;
   Bool_t          Bplus_Hlt1Phys_TOS;
   Bool_t          Bplus_Hlt2Global_Dec;
   Bool_t          Bplus_Hlt2Global_TIS;
   Bool_t          Bplus_Hlt2Global_TOS;
   Bool_t          Bplus_Hlt2Phys_Dec;
   Bool_t          Bplus_Hlt2Phys_TIS;
   Bool_t          Bplus_Hlt2Phys_TOS;
   Bool_t          Bplus_L0PhysicsDecision_Dec;
   Bool_t          Bplus_L0PhysicsDecision_TIS;
   Bool_t          Bplus_L0PhysicsDecision_TOS;
   Bool_t          Bplus_L0MuonDecision_Dec;
   Bool_t          Bplus_L0MuonDecision_TIS;
   Bool_t          Bplus_L0MuonDecision_TOS;
   Bool_t          Bplus_L0DiMuonDecision_Dec;
   Bool_t          Bplus_L0DiMuonDecision_TIS;
   Bool_t          Bplus_L0DiMuonDecision_TOS;
   Bool_t          Bplus_L0MuonHighDecision_Dec;
   Bool_t          Bplus_L0MuonHighDecision_TIS;
   Bool_t          Bplus_L0MuonHighDecision_TOS;
   Bool_t          Bplus_L0HadronDecision_Dec;
   Bool_t          Bplus_L0HadronDecision_TIS;
   Bool_t          Bplus_L0HadronDecision_TOS;
   Bool_t          Bplus_L0ElectronDecision_Dec;
   Bool_t          Bplus_L0ElectronDecision_TIS;
   Bool_t          Bplus_L0ElectronDecision_TOS;
   Bool_t          Bplus_L0PhotonDecision_Dec;
   Bool_t          Bplus_L0PhotonDecision_TIS;
   Bool_t          Bplus_L0PhotonDecision_TOS;
   Bool_t          Bplus_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          Bplus_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          Bplus_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          Bplus_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          Bplus_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          Bplus_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          Bplus_Hlt1SingleMuonNoIPDecision_Dec;
   Bool_t          Bplus_Hlt1SingleMuonNoIPDecision_TIS;
   Bool_t          Bplus_Hlt1SingleMuonNoIPDecision_TOS;
   Bool_t          Bplus_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          Bplus_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          Bplus_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          Bplus_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Bplus_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Bplus_Hlt1TrackAllL0Decision_TOS;
   Bool_t          Bplus_Hlt1TrackMuonDecision_Dec;
   Bool_t          Bplus_Hlt1TrackMuonDecision_TIS;
   Bool_t          Bplus_Hlt1TrackMuonDecision_TOS;
   Bool_t          Bplus_Hlt1TrackPhotonDecision_Dec;
   Bool_t          Bplus_Hlt1TrackPhotonDecision_TIS;
   Bool_t          Bplus_Hlt1TrackPhotonDecision_TOS;
   Bool_t          Bplus_Hlt1L0AnyDecision_Dec;
   Bool_t          Bplus_Hlt1L0AnyDecision_TIS;
   Bool_t          Bplus_Hlt1L0AnyDecision_TOS;
   Bool_t          Bplus_Hlt2SingleElectronTFLowPtDecision_Dec;
   Bool_t          Bplus_Hlt2SingleElectronTFLowPtDecision_TIS;
   Bool_t          Bplus_Hlt2SingleElectronTFLowPtDecision_TOS;
   Bool_t          Bplus_Hlt2SingleElectronTFHighPtDecision_Dec;
   Bool_t          Bplus_Hlt2SingleElectronTFHighPtDecision_TIS;
   Bool_t          Bplus_Hlt2SingleElectronTFHighPtDecision_TOS;
   Bool_t          Bplus_Hlt2DiElectronHighMassDecision_Dec;
   Bool_t          Bplus_Hlt2DiElectronHighMassDecision_TIS;
   Bool_t          Bplus_Hlt2DiElectronHighMassDecision_TOS;
   Bool_t          Bplus_Hlt2DiElectronBDecision_Dec;
   Bool_t          Bplus_Hlt2DiElectronBDecision_TIS;
   Bool_t          Bplus_Hlt2DiElectronBDecision_TOS;
   Bool_t          Bplus_Hlt2B2HHLTUnbiasedDecision_Dec;
   Bool_t          Bplus_Hlt2B2HHLTUnbiasedDecision_TIS;
   Bool_t          Bplus_Hlt2B2HHLTUnbiasedDecision_TOS;
   Bool_t          Bplus_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          Bplus_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          Bplus_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          Bplus_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          Bplus_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          Bplus_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          Bplus_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          Bplus_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          Bplus_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          Bplus_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          Bplus_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          Bplus_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          Bplus_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          Bplus_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          Bplus_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          Bplus_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          Bplus_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          Bplus_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          Bplus_Hlt2TopoMu2BodyBBDTDecision_Dec;
   Bool_t          Bplus_Hlt2TopoMu2BodyBBDTDecision_TIS;
   Bool_t          Bplus_Hlt2TopoMu2BodyBBDTDecision_TOS;
   Bool_t          Bplus_Hlt2TopoMu3BodyBBDTDecision_Dec;
   Bool_t          Bplus_Hlt2TopoMu3BodyBBDTDecision_TIS;
   Bool_t          Bplus_Hlt2TopoMu3BodyBBDTDecision_TOS;
   Bool_t          Bplus_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          Bplus_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          Bplus_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          Bplus_Hlt2TopoE2BodyBBDTDecision_Dec;
   Bool_t          Bplus_Hlt2TopoE2BodyBBDTDecision_TIS;
   Bool_t          Bplus_Hlt2TopoE2BodyBBDTDecision_TOS;
   Bool_t          Bplus_Hlt2TopoE3BodyBBDTDecision_Dec;
   Bool_t          Bplus_Hlt2TopoE3BodyBBDTDecision_TIS;
   Bool_t          Bplus_Hlt2TopoE3BodyBBDTDecision_TOS;
   Bool_t          Bplus_Hlt2TopoE4BodyBBDTDecision_Dec;
   Bool_t          Bplus_Hlt2TopoE4BodyBBDTDecision_TIS;
   Bool_t          Bplus_Hlt2TopoE4BodyBBDTDecision_TOS;
   Bool_t          Bplus_Hlt2MuonFromHLT1Decision_Dec;
   Bool_t          Bplus_Hlt2MuonFromHLT1Decision_TIS;
   Bool_t          Bplus_Hlt2MuonFromHLT1Decision_TOS;
   Bool_t          Bplus_Hlt2DiMuonDecision_Dec;
   Bool_t          Bplus_Hlt2DiMuonDecision_TIS;
   Bool_t          Bplus_Hlt2DiMuonDecision_TOS;
   Bool_t          Bplus_Hlt2DiMuonLowMassDecision_Dec;
   Bool_t          Bplus_Hlt2DiMuonLowMassDecision_TIS;
   Bool_t          Bplus_Hlt2DiMuonLowMassDecision_TOS;
   Bool_t          Bplus_Hlt2DiMuonJPsiDecision_Dec;
   Bool_t          Bplus_Hlt2DiMuonJPsiDecision_TIS;
   Bool_t          Bplus_Hlt2DiMuonJPsiDecision_TOS;
   Bool_t          Bplus_Hlt2DiMuonJPsiHighPTDecision_Dec;
   Bool_t          Bplus_Hlt2DiMuonJPsiHighPTDecision_TIS;
   Bool_t          Bplus_Hlt2DiMuonJPsiHighPTDecision_TOS;
   Bool_t          Bplus_Hlt2DiMuonPsi2SDecision_Dec;
   Bool_t          Bplus_Hlt2DiMuonPsi2SDecision_TIS;
   Bool_t          Bplus_Hlt2DiMuonPsi2SDecision_TOS;
   Bool_t          Bplus_Hlt2DiMuonBDecision_Dec;
   Bool_t          Bplus_Hlt2DiMuonBDecision_TIS;
   Bool_t          Bplus_Hlt2DiMuonBDecision_TOS;
   Double_t        Jpsi_IPCHI2_OWNPV;
   Double_t        Jpsi_IP_OWNPV;
   Double_t        Jpsi_MINIP;
   Double_t        Jpsi_MINIPCHI2;
   Double_t        Jpsi_P;
   Double_t        Jpsi_PT;
   Double_t        Jpsi_PE;
   Double_t        Jpsi_PX;
   Double_t        Jpsi_PY;
   Double_t        Jpsi_PZ;
   Double_t        Jpsi_MM;
   Double_t        Jpsi_MMERR;
   Double_t        Jpsi_M;
   Bool_t          Jpsi_L0Global_Dec;
   Bool_t          Jpsi_L0Global_TIS;
   Bool_t          Jpsi_L0Global_TOS;
   Bool_t          Jpsi_Hlt1Global_Dec;
   Bool_t          Jpsi_Hlt1Global_TIS;
   Bool_t          Jpsi_Hlt1Global_TOS;
   Bool_t          Jpsi_Hlt1Phys_Dec;
   Bool_t          Jpsi_Hlt1Phys_TIS;
   Bool_t          Jpsi_Hlt1Phys_TOS;
   Bool_t          Jpsi_Hlt2Global_Dec;
   Bool_t          Jpsi_Hlt2Global_TIS;
   Bool_t          Jpsi_Hlt2Global_TOS;
   Bool_t          Jpsi_Hlt2Phys_Dec;
   Bool_t          Jpsi_Hlt2Phys_TIS;
   Bool_t          Jpsi_Hlt2Phys_TOS;
   Bool_t          Jpsi_L0PhysicsDecision_Dec;
   Bool_t          Jpsi_L0PhysicsDecision_TIS;
   Bool_t          Jpsi_L0PhysicsDecision_TOS;
   Bool_t          Jpsi_L0MuonDecision_Dec;
   Bool_t          Jpsi_L0MuonDecision_TIS;
   Bool_t          Jpsi_L0MuonDecision_TOS;
   Bool_t          Jpsi_L0DiMuonDecision_Dec;
   Bool_t          Jpsi_L0DiMuonDecision_TIS;
   Bool_t          Jpsi_L0DiMuonDecision_TOS;
   Bool_t          Jpsi_L0MuonHighDecision_Dec;
   Bool_t          Jpsi_L0MuonHighDecision_TIS;
   Bool_t          Jpsi_L0MuonHighDecision_TOS;
   Bool_t          Jpsi_L0HadronDecision_Dec;
   Bool_t          Jpsi_L0HadronDecision_TIS;
   Bool_t          Jpsi_L0HadronDecision_TOS;
   Bool_t          Jpsi_L0ElectronDecision_Dec;
   Bool_t          Jpsi_L0ElectronDecision_TIS;
   Bool_t          Jpsi_L0ElectronDecision_TOS;
   Bool_t          Jpsi_L0PhotonDecision_Dec;
   Bool_t          Jpsi_L0PhotonDecision_TIS;
   Bool_t          Jpsi_L0PhotonDecision_TOS;
   Bool_t          Jpsi_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          Jpsi_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          Jpsi_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          Jpsi_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          Jpsi_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          Jpsi_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          Jpsi_Hlt1SingleMuonNoIPDecision_Dec;
   Bool_t          Jpsi_Hlt1SingleMuonNoIPDecision_TIS;
   Bool_t          Jpsi_Hlt1SingleMuonNoIPDecision_TOS;
   Bool_t          Jpsi_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          Jpsi_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          Jpsi_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          Jpsi_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Jpsi_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Jpsi_Hlt1TrackAllL0Decision_TOS;
   Bool_t          Jpsi_Hlt1TrackMuonDecision_Dec;
   Bool_t          Jpsi_Hlt1TrackMuonDecision_TIS;
   Bool_t          Jpsi_Hlt1TrackMuonDecision_TOS;
   Bool_t          Jpsi_Hlt1TrackPhotonDecision_Dec;
   Bool_t          Jpsi_Hlt1TrackPhotonDecision_TIS;
   Bool_t          Jpsi_Hlt1TrackPhotonDecision_TOS;
   Bool_t          Jpsi_Hlt1L0AnyDecision_Dec;
   Bool_t          Jpsi_Hlt1L0AnyDecision_TIS;
   Bool_t          Jpsi_Hlt1L0AnyDecision_TOS;
   Bool_t          Jpsi_Hlt2SingleElectronTFLowPtDecision_Dec;
   Bool_t          Jpsi_Hlt2SingleElectronTFLowPtDecision_TIS;
   Bool_t          Jpsi_Hlt2SingleElectronTFLowPtDecision_TOS;
   Bool_t          Jpsi_Hlt2SingleElectronTFHighPtDecision_Dec;
   Bool_t          Jpsi_Hlt2SingleElectronTFHighPtDecision_TIS;
   Bool_t          Jpsi_Hlt2SingleElectronTFHighPtDecision_TOS;
   Bool_t          Jpsi_Hlt2DiElectronHighMassDecision_Dec;
   Bool_t          Jpsi_Hlt2DiElectronHighMassDecision_TIS;
   Bool_t          Jpsi_Hlt2DiElectronHighMassDecision_TOS;
   Bool_t          Jpsi_Hlt2DiElectronBDecision_Dec;
   Bool_t          Jpsi_Hlt2DiElectronBDecision_TIS;
   Bool_t          Jpsi_Hlt2DiElectronBDecision_TOS;
   Bool_t          Jpsi_Hlt2B2HHLTUnbiasedDecision_Dec;
   Bool_t          Jpsi_Hlt2B2HHLTUnbiasedDecision_TIS;
   Bool_t          Jpsi_Hlt2B2HHLTUnbiasedDecision_TOS;
   Bool_t          Jpsi_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          Jpsi_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          Jpsi_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          Jpsi_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          Jpsi_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          Jpsi_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          Jpsi_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          Jpsi_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          Jpsi_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          Jpsi_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          Jpsi_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          Jpsi_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          Jpsi_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          Jpsi_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          Jpsi_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          Jpsi_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          Jpsi_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          Jpsi_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          Jpsi_Hlt2TopoMu2BodyBBDTDecision_Dec;
   Bool_t          Jpsi_Hlt2TopoMu2BodyBBDTDecision_TIS;
   Bool_t          Jpsi_Hlt2TopoMu2BodyBBDTDecision_TOS;
   Bool_t          Jpsi_Hlt2TopoMu3BodyBBDTDecision_Dec;
   Bool_t          Jpsi_Hlt2TopoMu3BodyBBDTDecision_TIS;
   Bool_t          Jpsi_Hlt2TopoMu3BodyBBDTDecision_TOS;
   Bool_t          Jpsi_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          Jpsi_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          Jpsi_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          Jpsi_Hlt2TopoE2BodyBBDTDecision_Dec;
   Bool_t          Jpsi_Hlt2TopoE2BodyBBDTDecision_TIS;
   Bool_t          Jpsi_Hlt2TopoE2BodyBBDTDecision_TOS;
   Bool_t          Jpsi_Hlt2TopoE3BodyBBDTDecision_Dec;
   Bool_t          Jpsi_Hlt2TopoE3BodyBBDTDecision_TIS;
   Bool_t          Jpsi_Hlt2TopoE3BodyBBDTDecision_TOS;
   Bool_t          Jpsi_Hlt2TopoE4BodyBBDTDecision_Dec;
   Bool_t          Jpsi_Hlt2TopoE4BodyBBDTDecision_TIS;
   Bool_t          Jpsi_Hlt2TopoE4BodyBBDTDecision_TOS;
   Bool_t          Jpsi_Hlt2MuonFromHLT1Decision_Dec;
   Bool_t          Jpsi_Hlt2MuonFromHLT1Decision_TIS;
   Bool_t          Jpsi_Hlt2MuonFromHLT1Decision_TOS;
   Bool_t          Jpsi_Hlt2DiMuonDecision_Dec;
   Bool_t          Jpsi_Hlt2DiMuonDecision_TIS;
   Bool_t          Jpsi_Hlt2DiMuonDecision_TOS;
   Bool_t          Jpsi_Hlt2DiMuonLowMassDecision_Dec;
   Bool_t          Jpsi_Hlt2DiMuonLowMassDecision_TIS;
   Bool_t          Jpsi_Hlt2DiMuonLowMassDecision_TOS;
   Bool_t          Jpsi_Hlt2DiMuonJPsiDecision_Dec;
   Bool_t          Jpsi_Hlt2DiMuonJPsiDecision_TIS;
   Bool_t          Jpsi_Hlt2DiMuonJPsiDecision_TOS;
   Bool_t          Jpsi_Hlt2DiMuonJPsiHighPTDecision_Dec;
   Bool_t          Jpsi_Hlt2DiMuonJPsiHighPTDecision_TIS;
   Bool_t          Jpsi_Hlt2DiMuonJPsiHighPTDecision_TOS;
   Bool_t          Jpsi_Hlt2DiMuonPsi2SDecision_Dec;
   Bool_t          Jpsi_Hlt2DiMuonPsi2SDecision_TIS;
   Bool_t          Jpsi_Hlt2DiMuonPsi2SDecision_TOS;
   Bool_t          Jpsi_Hlt2DiMuonBDecision_Dec;
   Bool_t          Jpsi_Hlt2DiMuonBDecision_TIS;
   Bool_t          Jpsi_Hlt2DiMuonBDecision_TOS;
   Double_t        muplus_IPCHI2_OWNPV;
   Double_t        muplus_IP_OWNPV;
   Double_t        muplus_MINIP;
   Double_t        muplus_MINIPCHI2;
   Double_t        muplus_P;
   Double_t        muplus_PT;
   Double_t        muplus_PE;
   Double_t        muplus_PX;
   Double_t        muplus_PY;
   Double_t        muplus_PZ;
   Double_t        muplus_M;
   Double_t        muplus_NNK;
   Double_t        muplus_NNmu;
   Double_t        muplus_NNpi;
   Double_t        muplus_PIDmu;
   Double_t        muplus_TRACK_CHI2;
   Double_t        muplus_ghost;
   Bool_t          muplus_L0Global_Dec;
   Bool_t          muplus_L0Global_TIS;
   Bool_t          muplus_L0Global_TOS;
   Bool_t          muplus_Hlt1Global_Dec;
   Bool_t          muplus_Hlt1Global_TIS;
   Bool_t          muplus_Hlt1Global_TOS;
   Bool_t          muplus_Hlt1Phys_Dec;
   Bool_t          muplus_Hlt1Phys_TIS;
   Bool_t          muplus_Hlt1Phys_TOS;
   Bool_t          muplus_Hlt2Global_Dec;
   Bool_t          muplus_Hlt2Global_TIS;
   Bool_t          muplus_Hlt2Global_TOS;
   Bool_t          muplus_Hlt2Phys_Dec;
   Bool_t          muplus_Hlt2Phys_TIS;
   Bool_t          muplus_Hlt2Phys_TOS;
   Bool_t          muplus_L0PhysicsDecision_Dec;
   Bool_t          muplus_L0PhysicsDecision_TIS;
   Bool_t          muplus_L0PhysicsDecision_TOS;
   Bool_t          muplus_L0MuonDecision_Dec;
   Bool_t          muplus_L0MuonDecision_TIS;
   Bool_t          muplus_L0MuonDecision_TOS;
   Bool_t          muplus_L0DiMuonDecision_Dec;
   Bool_t          muplus_L0DiMuonDecision_TIS;
   Bool_t          muplus_L0DiMuonDecision_TOS;
   Bool_t          muplus_L0MuonHighDecision_Dec;
   Bool_t          muplus_L0MuonHighDecision_TIS;
   Bool_t          muplus_L0MuonHighDecision_TOS;
   Bool_t          muplus_L0HadronDecision_Dec;
   Bool_t          muplus_L0HadronDecision_TIS;
   Bool_t          muplus_L0HadronDecision_TOS;
   Bool_t          muplus_L0ElectronDecision_Dec;
   Bool_t          muplus_L0ElectronDecision_TIS;
   Bool_t          muplus_L0ElectronDecision_TOS;
   Bool_t          muplus_L0PhotonDecision_Dec;
   Bool_t          muplus_L0PhotonDecision_TIS;
   Bool_t          muplus_L0PhotonDecision_TOS;
   Bool_t          muplus_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          muplus_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          muplus_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          muplus_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          muplus_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          muplus_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          muplus_Hlt1SingleMuonNoIPDecision_Dec;
   Bool_t          muplus_Hlt1SingleMuonNoIPDecision_TIS;
   Bool_t          muplus_Hlt1SingleMuonNoIPDecision_TOS;
   Bool_t          muplus_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          muplus_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          muplus_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          muplus_Hlt1TrackAllL0Decision_Dec;
   Bool_t          muplus_Hlt1TrackAllL0Decision_TIS;
   Bool_t          muplus_Hlt1TrackAllL0Decision_TOS;
   Bool_t          muplus_Hlt1TrackMuonDecision_Dec;
   Bool_t          muplus_Hlt1TrackMuonDecision_TIS;
   Bool_t          muplus_Hlt1TrackMuonDecision_TOS;
   Bool_t          muplus_Hlt1TrackPhotonDecision_Dec;
   Bool_t          muplus_Hlt1TrackPhotonDecision_TIS;
   Bool_t          muplus_Hlt1TrackPhotonDecision_TOS;
   Bool_t          muplus_Hlt1L0AnyDecision_Dec;
   Bool_t          muplus_Hlt1L0AnyDecision_TIS;
   Bool_t          muplus_Hlt1L0AnyDecision_TOS;
   Bool_t          muplus_Hlt2SingleElectronTFLowPtDecision_Dec;
   Bool_t          muplus_Hlt2SingleElectronTFLowPtDecision_TIS;
   Bool_t          muplus_Hlt2SingleElectronTFLowPtDecision_TOS;
   Bool_t          muplus_Hlt2SingleElectronTFHighPtDecision_Dec;
   Bool_t          muplus_Hlt2SingleElectronTFHighPtDecision_TIS;
   Bool_t          muplus_Hlt2SingleElectronTFHighPtDecision_TOS;
   Bool_t          muplus_Hlt2DiElectronHighMassDecision_Dec;
   Bool_t          muplus_Hlt2DiElectronHighMassDecision_TIS;
   Bool_t          muplus_Hlt2DiElectronHighMassDecision_TOS;
   Bool_t          muplus_Hlt2DiElectronBDecision_Dec;
   Bool_t          muplus_Hlt2DiElectronBDecision_TIS;
   Bool_t          muplus_Hlt2DiElectronBDecision_TOS;
   Bool_t          muplus_Hlt2B2HHLTUnbiasedDecision_Dec;
   Bool_t          muplus_Hlt2B2HHLTUnbiasedDecision_TIS;
   Bool_t          muplus_Hlt2B2HHLTUnbiasedDecision_TOS;
   Bool_t          muplus_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          muplus_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          muplus_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          muplus_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          muplus_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          muplus_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          muplus_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          muplus_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          muplus_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          muplus_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          muplus_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          muplus_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          muplus_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          muplus_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          muplus_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          muplus_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          muplus_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          muplus_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          muplus_Hlt2TopoMu2BodyBBDTDecision_Dec;
   Bool_t          muplus_Hlt2TopoMu2BodyBBDTDecision_TIS;
   Bool_t          muplus_Hlt2TopoMu2BodyBBDTDecision_TOS;
   Bool_t          muplus_Hlt2TopoMu3BodyBBDTDecision_Dec;
   Bool_t          muplus_Hlt2TopoMu3BodyBBDTDecision_TIS;
   Bool_t          muplus_Hlt2TopoMu3BodyBBDTDecision_TOS;
   Bool_t          muplus_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          muplus_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          muplus_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          muplus_Hlt2TopoE2BodyBBDTDecision_Dec;
   Bool_t          muplus_Hlt2TopoE2BodyBBDTDecision_TIS;
   Bool_t          muplus_Hlt2TopoE2BodyBBDTDecision_TOS;
   Bool_t          muplus_Hlt2TopoE3BodyBBDTDecision_Dec;
   Bool_t          muplus_Hlt2TopoE3BodyBBDTDecision_TIS;
   Bool_t          muplus_Hlt2TopoE3BodyBBDTDecision_TOS;
   Bool_t          muplus_Hlt2TopoE4BodyBBDTDecision_Dec;
   Bool_t          muplus_Hlt2TopoE4BodyBBDTDecision_TIS;
   Bool_t          muplus_Hlt2TopoE4BodyBBDTDecision_TOS;
   Bool_t          muplus_Hlt2MuonFromHLT1Decision_Dec;
   Bool_t          muplus_Hlt2MuonFromHLT1Decision_TIS;
   Bool_t          muplus_Hlt2MuonFromHLT1Decision_TOS;
   Bool_t          muplus_Hlt2DiMuonDecision_Dec;
   Bool_t          muplus_Hlt2DiMuonDecision_TIS;
   Bool_t          muplus_Hlt2DiMuonDecision_TOS;
   Bool_t          muplus_Hlt2DiMuonLowMassDecision_Dec;
   Bool_t          muplus_Hlt2DiMuonLowMassDecision_TIS;
   Bool_t          muplus_Hlt2DiMuonLowMassDecision_TOS;
   Bool_t          muplus_Hlt2DiMuonJPsiDecision_Dec;
   Bool_t          muplus_Hlt2DiMuonJPsiDecision_TIS;
   Bool_t          muplus_Hlt2DiMuonJPsiDecision_TOS;
   Bool_t          muplus_Hlt2DiMuonJPsiHighPTDecision_Dec;
   Bool_t          muplus_Hlt2DiMuonJPsiHighPTDecision_TIS;
   Bool_t          muplus_Hlt2DiMuonJPsiHighPTDecision_TOS;
   Bool_t          muplus_Hlt2DiMuonPsi2SDecision_Dec;
   Bool_t          muplus_Hlt2DiMuonPsi2SDecision_TIS;
   Bool_t          muplus_Hlt2DiMuonPsi2SDecision_TOS;
   Bool_t          muplus_Hlt2DiMuonBDecision_Dec;
   Bool_t          muplus_Hlt2DiMuonBDecision_TIS;
   Bool_t          muplus_Hlt2DiMuonBDecision_TOS;
   Double_t        muminus_IPCHI2_OWNPV;
   Double_t        muminus_IP_OWNPV;
   Double_t        muminus_MINIP;
   Double_t        muminus_MINIPCHI2;
   Double_t        muminus_P;
   Double_t        muminus_PT;
   Double_t        muminus_PE;
   Double_t        muminus_PX;
   Double_t        muminus_PY;
   Double_t        muminus_PZ;
   Double_t        muminus_M;
   Double_t        muminus_NNK;
   Double_t        muminus_NNmu;
   Double_t        muminus_NNpi;
   Double_t        muminus_PIDmu;
   Double_t        muminus_TRACK_CHI2;
   Double_t        muminus_ghost;
   Bool_t          muminus_L0Global_Dec;
   Bool_t          muminus_L0Global_TIS;
   Bool_t          muminus_L0Global_TOS;
   Bool_t          muminus_Hlt1Global_Dec;
   Bool_t          muminus_Hlt1Global_TIS;
   Bool_t          muminus_Hlt1Global_TOS;
   Bool_t          muminus_Hlt1Phys_Dec;
   Bool_t          muminus_Hlt1Phys_TIS;
   Bool_t          muminus_Hlt1Phys_TOS;
   Bool_t          muminus_Hlt2Global_Dec;
   Bool_t          muminus_Hlt2Global_TIS;
   Bool_t          muminus_Hlt2Global_TOS;
   Bool_t          muminus_Hlt2Phys_Dec;
   Bool_t          muminus_Hlt2Phys_TIS;
   Bool_t          muminus_Hlt2Phys_TOS;
   Bool_t          muminus_L0PhysicsDecision_Dec;
   Bool_t          muminus_L0PhysicsDecision_TIS;
   Bool_t          muminus_L0PhysicsDecision_TOS;
   Bool_t          muminus_L0MuonDecision_Dec;
   Bool_t          muminus_L0MuonDecision_TIS;
   Bool_t          muminus_L0MuonDecision_TOS;
   Bool_t          muminus_L0DiMuonDecision_Dec;
   Bool_t          muminus_L0DiMuonDecision_TIS;
   Bool_t          muminus_L0DiMuonDecision_TOS;
   Bool_t          muminus_L0MuonHighDecision_Dec;
   Bool_t          muminus_L0MuonHighDecision_TIS;
   Bool_t          muminus_L0MuonHighDecision_TOS;
   Bool_t          muminus_L0HadronDecision_Dec;
   Bool_t          muminus_L0HadronDecision_TIS;
   Bool_t          muminus_L0HadronDecision_TOS;
   Bool_t          muminus_L0ElectronDecision_Dec;
   Bool_t          muminus_L0ElectronDecision_TIS;
   Bool_t          muminus_L0ElectronDecision_TOS;
   Bool_t          muminus_L0PhotonDecision_Dec;
   Bool_t          muminus_L0PhotonDecision_TIS;
   Bool_t          muminus_L0PhotonDecision_TOS;
   Bool_t          muminus_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          muminus_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          muminus_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          muminus_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          muminus_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          muminus_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          muminus_Hlt1SingleMuonNoIPDecision_Dec;
   Bool_t          muminus_Hlt1SingleMuonNoIPDecision_TIS;
   Bool_t          muminus_Hlt1SingleMuonNoIPDecision_TOS;
   Bool_t          muminus_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          muminus_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          muminus_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          muminus_Hlt1TrackAllL0Decision_Dec;
   Bool_t          muminus_Hlt1TrackAllL0Decision_TIS;
   Bool_t          muminus_Hlt1TrackAllL0Decision_TOS;
   Bool_t          muminus_Hlt1TrackMuonDecision_Dec;
   Bool_t          muminus_Hlt1TrackMuonDecision_TIS;
   Bool_t          muminus_Hlt1TrackMuonDecision_TOS;
   Bool_t          muminus_Hlt1TrackPhotonDecision_Dec;
   Bool_t          muminus_Hlt1TrackPhotonDecision_TIS;
   Bool_t          muminus_Hlt1TrackPhotonDecision_TOS;
   Bool_t          muminus_Hlt1L0AnyDecision_Dec;
   Bool_t          muminus_Hlt1L0AnyDecision_TIS;
   Bool_t          muminus_Hlt1L0AnyDecision_TOS;
   Bool_t          muminus_Hlt2SingleElectronTFLowPtDecision_Dec;
   Bool_t          muminus_Hlt2SingleElectronTFLowPtDecision_TIS;
   Bool_t          muminus_Hlt2SingleElectronTFLowPtDecision_TOS;
   Bool_t          muminus_Hlt2SingleElectronTFHighPtDecision_Dec;
   Bool_t          muminus_Hlt2SingleElectronTFHighPtDecision_TIS;
   Bool_t          muminus_Hlt2SingleElectronTFHighPtDecision_TOS;
   Bool_t          muminus_Hlt2DiElectronHighMassDecision_Dec;
   Bool_t          muminus_Hlt2DiElectronHighMassDecision_TIS;
   Bool_t          muminus_Hlt2DiElectronHighMassDecision_TOS;
   Bool_t          muminus_Hlt2DiElectronBDecision_Dec;
   Bool_t          muminus_Hlt2DiElectronBDecision_TIS;
   Bool_t          muminus_Hlt2DiElectronBDecision_TOS;
   Bool_t          muminus_Hlt2B2HHLTUnbiasedDecision_Dec;
   Bool_t          muminus_Hlt2B2HHLTUnbiasedDecision_TIS;
   Bool_t          muminus_Hlt2B2HHLTUnbiasedDecision_TOS;
   Bool_t          muminus_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          muminus_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          muminus_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          muminus_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          muminus_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          muminus_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          muminus_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          muminus_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          muminus_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          muminus_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          muminus_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          muminus_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          muminus_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          muminus_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          muminus_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          muminus_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          muminus_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          muminus_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          muminus_Hlt2TopoMu2BodyBBDTDecision_Dec;
   Bool_t          muminus_Hlt2TopoMu2BodyBBDTDecision_TIS;
   Bool_t          muminus_Hlt2TopoMu2BodyBBDTDecision_TOS;
   Bool_t          muminus_Hlt2TopoMu3BodyBBDTDecision_Dec;
   Bool_t          muminus_Hlt2TopoMu3BodyBBDTDecision_TIS;
   Bool_t          muminus_Hlt2TopoMu3BodyBBDTDecision_TOS;
   Bool_t          muminus_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          muminus_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          muminus_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          muminus_Hlt2TopoE2BodyBBDTDecision_Dec;
   Bool_t          muminus_Hlt2TopoE2BodyBBDTDecision_TIS;
   Bool_t          muminus_Hlt2TopoE2BodyBBDTDecision_TOS;
   Bool_t          muminus_Hlt2TopoE3BodyBBDTDecision_Dec;
   Bool_t          muminus_Hlt2TopoE3BodyBBDTDecision_TIS;
   Bool_t          muminus_Hlt2TopoE3BodyBBDTDecision_TOS;
   Bool_t          muminus_Hlt2TopoE4BodyBBDTDecision_Dec;
   Bool_t          muminus_Hlt2TopoE4BodyBBDTDecision_TIS;
   Bool_t          muminus_Hlt2TopoE4BodyBBDTDecision_TOS;
   Bool_t          muminus_Hlt2MuonFromHLT1Decision_Dec;
   Bool_t          muminus_Hlt2MuonFromHLT1Decision_TIS;
   Bool_t          muminus_Hlt2MuonFromHLT1Decision_TOS;
   Bool_t          muminus_Hlt2DiMuonDecision_Dec;
   Bool_t          muminus_Hlt2DiMuonDecision_TIS;
   Bool_t          muminus_Hlt2DiMuonDecision_TOS;
   Bool_t          muminus_Hlt2DiMuonLowMassDecision_Dec;
   Bool_t          muminus_Hlt2DiMuonLowMassDecision_TIS;
   Bool_t          muminus_Hlt2DiMuonLowMassDecision_TOS;
   Bool_t          muminus_Hlt2DiMuonJPsiDecision_Dec;
   Bool_t          muminus_Hlt2DiMuonJPsiDecision_TIS;
   Bool_t          muminus_Hlt2DiMuonJPsiDecision_TOS;
   Bool_t          muminus_Hlt2DiMuonJPsiHighPTDecision_Dec;
   Bool_t          muminus_Hlt2DiMuonJPsiHighPTDecision_TIS;
   Bool_t          muminus_Hlt2DiMuonJPsiHighPTDecision_TOS;
   Bool_t          muminus_Hlt2DiMuonPsi2SDecision_Dec;
   Bool_t          muminus_Hlt2DiMuonPsi2SDecision_TIS;
   Bool_t          muminus_Hlt2DiMuonPsi2SDecision_TOS;
   Bool_t          muminus_Hlt2DiMuonBDecision_Dec;
   Bool_t          muminus_Hlt2DiMuonBDecision_TIS;
   Bool_t          muminus_Hlt2DiMuonBDecision_TOS;
   Double_t        Kplus_IPCHI2_OWNPV;
   Double_t        Kplus_IP_OWNPV;
   Double_t        Kplus_MINIP;
   Double_t        Kplus_MINIPCHI2;
   Double_t        Kplus_P;
   Double_t        Kplus_PT;
   Double_t        Kplus_PE;
   Double_t        Kplus_PX;
   Double_t        Kplus_PY;
   Double_t        Kplus_PZ;
   Double_t        Kplus_M;
   Double_t        Kplus_NNK;
   Double_t        Kplus_NNKmu;
   Double_t        Kplus_NNKpi;
   Double_t        Kplus_NNmu;
   Double_t        Kplus_NNpi;
   Double_t        Kplus_PIDK;
   Double_t        Kplus_PIDmu;
   Double_t        Kplus_TRACK_CHI2;
   Double_t        Kplus_ghost;
   Double_t        Kplus_inMuon;
   Double_t        Kplus_isMuon;
   Double_t        Kplus_isMuonLoose;
   Double_t        Kplus_nTT;
   Bool_t          Kplus_L0Global_Dec;
   Bool_t          Kplus_L0Global_TIS;
   Bool_t          Kplus_L0Global_TOS;
   Bool_t          Kplus_Hlt1Global_Dec;
   Bool_t          Kplus_Hlt1Global_TIS;
   Bool_t          Kplus_Hlt1Global_TOS;
   Bool_t          Kplus_Hlt1Phys_Dec;
   Bool_t          Kplus_Hlt1Phys_TIS;
   Bool_t          Kplus_Hlt1Phys_TOS;
   Bool_t          Kplus_Hlt2Global_Dec;
   Bool_t          Kplus_Hlt2Global_TIS;
   Bool_t          Kplus_Hlt2Global_TOS;
   Bool_t          Kplus_Hlt2Phys_Dec;
   Bool_t          Kplus_Hlt2Phys_TIS;
   Bool_t          Kplus_Hlt2Phys_TOS;
   Bool_t          Kplus_L0PhysicsDecision_Dec;
   Bool_t          Kplus_L0PhysicsDecision_TIS;
   Bool_t          Kplus_L0PhysicsDecision_TOS;
   Bool_t          Kplus_L0MuonDecision_Dec;
   Bool_t          Kplus_L0MuonDecision_TIS;
   Bool_t          Kplus_L0MuonDecision_TOS;
   Bool_t          Kplus_L0DiMuonDecision_Dec;
   Bool_t          Kplus_L0DiMuonDecision_TIS;
   Bool_t          Kplus_L0DiMuonDecision_TOS;
   Bool_t          Kplus_L0MuonHighDecision_Dec;
   Bool_t          Kplus_L0MuonHighDecision_TIS;
   Bool_t          Kplus_L0MuonHighDecision_TOS;
   Bool_t          Kplus_L0HadronDecision_Dec;
   Bool_t          Kplus_L0HadronDecision_TIS;
   Bool_t          Kplus_L0HadronDecision_TOS;
   Bool_t          Kplus_L0ElectronDecision_Dec;
   Bool_t          Kplus_L0ElectronDecision_TIS;
   Bool_t          Kplus_L0ElectronDecision_TOS;
   Bool_t          Kplus_L0PhotonDecision_Dec;
   Bool_t          Kplus_L0PhotonDecision_TIS;
   Bool_t          Kplus_L0PhotonDecision_TOS;
   Bool_t          Kplus_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          Kplus_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          Kplus_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          Kplus_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          Kplus_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          Kplus_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          Kplus_Hlt1SingleMuonNoIPDecision_Dec;
   Bool_t          Kplus_Hlt1SingleMuonNoIPDecision_TIS;
   Bool_t          Kplus_Hlt1SingleMuonNoIPDecision_TOS;
   Bool_t          Kplus_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          Kplus_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          Kplus_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          Kplus_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Kplus_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Kplus_Hlt1TrackAllL0Decision_TOS;
   Bool_t          Kplus_Hlt1TrackMuonDecision_Dec;
   Bool_t          Kplus_Hlt1TrackMuonDecision_TIS;
   Bool_t          Kplus_Hlt1TrackMuonDecision_TOS;
   Bool_t          Kplus_Hlt1TrackPhotonDecision_Dec;
   Bool_t          Kplus_Hlt1TrackPhotonDecision_TIS;
   Bool_t          Kplus_Hlt1TrackPhotonDecision_TOS;
   Bool_t          Kplus_Hlt1L0AnyDecision_Dec;
   Bool_t          Kplus_Hlt1L0AnyDecision_TIS;
   Bool_t          Kplus_Hlt1L0AnyDecision_TOS;
   Bool_t          Kplus_Hlt2SingleElectronTFLowPtDecision_Dec;
   Bool_t          Kplus_Hlt2SingleElectronTFLowPtDecision_TIS;
   Bool_t          Kplus_Hlt2SingleElectronTFLowPtDecision_TOS;
   Bool_t          Kplus_Hlt2SingleElectronTFHighPtDecision_Dec;
   Bool_t          Kplus_Hlt2SingleElectronTFHighPtDecision_TIS;
   Bool_t          Kplus_Hlt2SingleElectronTFHighPtDecision_TOS;
   Bool_t          Kplus_Hlt2DiElectronHighMassDecision_Dec;
   Bool_t          Kplus_Hlt2DiElectronHighMassDecision_TIS;
   Bool_t          Kplus_Hlt2DiElectronHighMassDecision_TOS;
   Bool_t          Kplus_Hlt2DiElectronBDecision_Dec;
   Bool_t          Kplus_Hlt2DiElectronBDecision_TIS;
   Bool_t          Kplus_Hlt2DiElectronBDecision_TOS;
   Bool_t          Kplus_Hlt2B2HHLTUnbiasedDecision_Dec;
   Bool_t          Kplus_Hlt2B2HHLTUnbiasedDecision_TIS;
   Bool_t          Kplus_Hlt2B2HHLTUnbiasedDecision_TOS;
   Bool_t          Kplus_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          Kplus_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          Kplus_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          Kplus_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          Kplus_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          Kplus_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          Kplus_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          Kplus_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          Kplus_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          Kplus_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          Kplus_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          Kplus_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          Kplus_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          Kplus_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          Kplus_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          Kplus_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          Kplus_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          Kplus_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          Kplus_Hlt2TopoMu2BodyBBDTDecision_Dec;
   Bool_t          Kplus_Hlt2TopoMu2BodyBBDTDecision_TIS;
   Bool_t          Kplus_Hlt2TopoMu2BodyBBDTDecision_TOS;
   Bool_t          Kplus_Hlt2TopoMu3BodyBBDTDecision_Dec;
   Bool_t          Kplus_Hlt2TopoMu3BodyBBDTDecision_TIS;
   Bool_t          Kplus_Hlt2TopoMu3BodyBBDTDecision_TOS;
   Bool_t          Kplus_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          Kplus_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          Kplus_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          Kplus_Hlt2TopoE2BodyBBDTDecision_Dec;
   Bool_t          Kplus_Hlt2TopoE2BodyBBDTDecision_TIS;
   Bool_t          Kplus_Hlt2TopoE2BodyBBDTDecision_TOS;
   Bool_t          Kplus_Hlt2TopoE3BodyBBDTDecision_Dec;
   Bool_t          Kplus_Hlt2TopoE3BodyBBDTDecision_TIS;
   Bool_t          Kplus_Hlt2TopoE3BodyBBDTDecision_TOS;
   Bool_t          Kplus_Hlt2TopoE4BodyBBDTDecision_Dec;
   Bool_t          Kplus_Hlt2TopoE4BodyBBDTDecision_TIS;
   Bool_t          Kplus_Hlt2TopoE4BodyBBDTDecision_TOS;
   Bool_t          Kplus_Hlt2MuonFromHLT1Decision_Dec;
   Bool_t          Kplus_Hlt2MuonFromHLT1Decision_TIS;
   Bool_t          Kplus_Hlt2MuonFromHLT1Decision_TOS;
   Bool_t          Kplus_Hlt2DiMuonDecision_Dec;
   Bool_t          Kplus_Hlt2DiMuonDecision_TIS;
   Bool_t          Kplus_Hlt2DiMuonDecision_TOS;
   Bool_t          Kplus_Hlt2DiMuonLowMassDecision_Dec;
   Bool_t          Kplus_Hlt2DiMuonLowMassDecision_TIS;
   Bool_t          Kplus_Hlt2DiMuonLowMassDecision_TOS;
   Bool_t          Kplus_Hlt2DiMuonJPsiDecision_Dec;
   Bool_t          Kplus_Hlt2DiMuonJPsiDecision_TIS;
   Bool_t          Kplus_Hlt2DiMuonJPsiDecision_TOS;
   Bool_t          Kplus_Hlt2DiMuonJPsiHighPTDecision_Dec;
   Bool_t          Kplus_Hlt2DiMuonJPsiHighPTDecision_TIS;
   Bool_t          Kplus_Hlt2DiMuonJPsiHighPTDecision_TOS;
   Bool_t          Kplus_Hlt2DiMuonPsi2SDecision_Dec;
   Bool_t          Kplus_Hlt2DiMuonPsi2SDecision_TIS;
   Bool_t          Kplus_Hlt2DiMuonPsi2SDecision_TOS;
   Bool_t          Kplus_Hlt2DiMuonBDecision_Dec;
   Bool_t          Kplus_Hlt2DiMuonBDecision_TIS;
   Bool_t          Kplus_Hlt2DiMuonBDecision_TOS;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   UInt_t          BCID;
   Int_t           BCType;
   UInt_t          OdinTCK;
   UInt_t          L0DUTCK;
   UInt_t          HLT1TCK;
   UInt_t          HLT2TCK;
   ULong64_t       GpsTime;
   Short_t         Polarity;
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
   TBranch        *b_Bplus_IPCHI2_OWNPV;   //!
   TBranch        *b_Bplus_IP_OWNPV;   //!
   TBranch        *b_Bplus_MINIP;   //!
   TBranch        *b_Bplus_MINIPCHI2;   //!
   TBranch        *b_Bplus_fitted_E;   //!
   TBranch        *b_Bplus_fitted_X;   //!
   TBranch        *b_Bplus_fitted_Y;   //!
   TBranch        *b_Bplus_fitted_Z;   //!
   TBranch        *b_Bplus_fitted_dimuon_E;   //!
   TBranch        *b_Bplus_fitted_dimuon_X;   //!
   TBranch        *b_Bplus_fitted_dimuon_Y;   //!
   TBranch        *b_Bplus_fitted_dimuon_Z;   //!
   TBranch        *b_Bplus_fitted_dimuon_M;   //!
   TBranch        *b_Bplus_fitted_dimuon_M_5500;   //!
   TBranch        *b_Bplus_fitted_dimuon_M_5580;   //!
   TBranch        *b_Bplus_fitted_dimuon_M_5660;   //!
   TBranch        *b_Bplus_fitted_dimuon_M_5740;   //!
   TBranch        *b_Bplus_fitted_dimuon_M_5820;   //!
   TBranch        *b_Bplus_P;   //!
   TBranch        *b_Bplus_PT;   //!
   TBranch        *b_Bplus_PE;   //!
   TBranch        *b_Bplus_PX;   //!
   TBranch        *b_Bplus_PY;   //!
   TBranch        *b_Bplus_PZ;   //!
   TBranch        *b_Bplus_MM;   //!
   TBranch        *b_Bplus_MMERR;   //!
   TBranch        *b_Bplus_M;   //!
   TBranch        *b_Bplus_DIRA_OWNPV;   //!
   TBranch        *b_Bplus_ENDVERTEX_CHI2;   //!
   TBranch        *b_Bplus_FD_CHI2;   //!
   TBranch        *b_Bplus_ID;   //!
   TBranch        *b_Bplus_KMu_D;   //!
   TBranch        *b_Bplus_KMu_Jpsi;   //!
   TBranch        *b_Bplus_TAU;   //!
   TBranch        *b_Bplus_dimuon_mass_B_constr;   //!
   TBranch        *b_Bplus_dimuon_mass_PV_constr;   //!
   TBranch        *b_Bplus_dimuon_mass_PV_constr_B_constr;   //!
   TBranch        *b_Bplus_dimuon_mass_no_constr;   //!
   TBranch        *b_Bplus_L0Global_Dec;   //!
   TBranch        *b_Bplus_L0Global_TIS;   //!
   TBranch        *b_Bplus_L0Global_TOS;   //!
   TBranch        *b_Bplus_Hlt1Global_Dec;   //!
   TBranch        *b_Bplus_Hlt1Global_TIS;   //!
   TBranch        *b_Bplus_Hlt1Global_TOS;   //!
   TBranch        *b_Bplus_Hlt1Phys_Dec;   //!
   TBranch        *b_Bplus_Hlt1Phys_TIS;   //!
   TBranch        *b_Bplus_Hlt1Phys_TOS;   //!
   TBranch        *b_Bplus_Hlt2Global_Dec;   //!
   TBranch        *b_Bplus_Hlt2Global_TIS;   //!
   TBranch        *b_Bplus_Hlt2Global_TOS;   //!
   TBranch        *b_Bplus_Hlt2Phys_Dec;   //!
   TBranch        *b_Bplus_Hlt2Phys_TIS;   //!
   TBranch        *b_Bplus_Hlt2Phys_TOS;   //!
   TBranch        *b_Bplus_L0PhysicsDecision_Dec;   //!
   TBranch        *b_Bplus_L0PhysicsDecision_TIS;   //!
   TBranch        *b_Bplus_L0PhysicsDecision_TOS;   //!
   TBranch        *b_Bplus_L0MuonDecision_Dec;   //!
   TBranch        *b_Bplus_L0MuonDecision_TIS;   //!
   TBranch        *b_Bplus_L0MuonDecision_TOS;   //!
   TBranch        *b_Bplus_L0DiMuonDecision_Dec;   //!
   TBranch        *b_Bplus_L0DiMuonDecision_TIS;   //!
   TBranch        *b_Bplus_L0DiMuonDecision_TOS;   //!
   TBranch        *b_Bplus_L0MuonHighDecision_Dec;   //!
   TBranch        *b_Bplus_L0MuonHighDecision_TIS;   //!
   TBranch        *b_Bplus_L0MuonHighDecision_TOS;   //!
   TBranch        *b_Bplus_L0HadronDecision_Dec;   //!
   TBranch        *b_Bplus_L0HadronDecision_TIS;   //!
   TBranch        *b_Bplus_L0HadronDecision_TOS;   //!
   TBranch        *b_Bplus_L0ElectronDecision_Dec;   //!
   TBranch        *b_Bplus_L0ElectronDecision_TIS;   //!
   TBranch        *b_Bplus_L0ElectronDecision_TOS;   //!
   TBranch        *b_Bplus_L0PhotonDecision_Dec;   //!
   TBranch        *b_Bplus_L0PhotonDecision_TIS;   //!
   TBranch        *b_Bplus_L0PhotonDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt1SingleMuonNoIPDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt1SingleMuonNoIPDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt1SingleMuonNoIPDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Bplus_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Bplus_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Bplus_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt1TrackPhotonDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt1TrackPhotonDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt1TrackPhotonDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2SingleElectronTFLowPtDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2SingleElectronTFLowPtDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2SingleElectronTFLowPtDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2SingleElectronTFHighPtDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2SingleElectronTFHighPtDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2SingleElectronTFHighPtDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2DiElectronHighMassDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2DiElectronHighMassDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2DiElectronHighMassDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2DiElectronBDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2DiElectronBDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2DiElectronBDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2B2HHLTUnbiasedDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2B2HHLTUnbiasedDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2B2HHLTUnbiasedDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2TopoMu2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2TopoMu2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2TopoMu2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2TopoMu3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2TopoMu3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2TopoMu3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2TopoE2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2TopoE2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2TopoE2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2TopoE3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2TopoE3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2TopoE3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2TopoE4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2TopoE4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2TopoE4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2MuonFromHLT1Decision_Dec;   //!
   TBranch        *b_Bplus_Hlt2MuonFromHLT1Decision_TIS;   //!
   TBranch        *b_Bplus_Hlt2MuonFromHLT1Decision_TOS;   //!
   TBranch        *b_Bplus_Hlt2DiMuonDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2DiMuonDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2DiMuonDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2DiMuonJPsiHighPTDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2DiMuonJPsiHighPTDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2DiMuonJPsiHighPTDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2DiMuonPsi2SDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2DiMuonPsi2SDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2DiMuonPsi2SDecision_TOS;   //!
   TBranch        *b_Bplus_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_Bplus_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_Bplus_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_Jpsi_IPCHI2_OWNPV;   //!
   TBranch        *b_Jpsi_IP_OWNPV;   //!
   TBranch        *b_Jpsi_MINIP;   //!
   TBranch        *b_Jpsi_MINIPCHI2;   //!
   TBranch        *b_Jpsi_P;   //!
   TBranch        *b_Jpsi_PT;   //!
   TBranch        *b_Jpsi_PE;   //!
   TBranch        *b_Jpsi_PX;   //!
   TBranch        *b_Jpsi_PY;   //!
   TBranch        *b_Jpsi_PZ;   //!
   TBranch        *b_Jpsi_MM;   //!
   TBranch        *b_Jpsi_MMERR;   //!
   TBranch        *b_Jpsi_M;   //!
   TBranch        *b_Jpsi_L0Global_Dec;   //!
   TBranch        *b_Jpsi_L0Global_TIS;   //!
   TBranch        *b_Jpsi_L0Global_TOS;   //!
   TBranch        *b_Jpsi_Hlt1Global_Dec;   //!
   TBranch        *b_Jpsi_Hlt1Global_TIS;   //!
   TBranch        *b_Jpsi_Hlt1Global_TOS;   //!
   TBranch        *b_Jpsi_Hlt1Phys_Dec;   //!
   TBranch        *b_Jpsi_Hlt1Phys_TIS;   //!
   TBranch        *b_Jpsi_Hlt1Phys_TOS;   //!
   TBranch        *b_Jpsi_Hlt2Global_Dec;   //!
   TBranch        *b_Jpsi_Hlt2Global_TIS;   //!
   TBranch        *b_Jpsi_Hlt2Global_TOS;   //!
   TBranch        *b_Jpsi_Hlt2Phys_Dec;   //!
   TBranch        *b_Jpsi_Hlt2Phys_TIS;   //!
   TBranch        *b_Jpsi_Hlt2Phys_TOS;   //!
   TBranch        *b_Jpsi_L0PhysicsDecision_Dec;   //!
   TBranch        *b_Jpsi_L0PhysicsDecision_TIS;   //!
   TBranch        *b_Jpsi_L0PhysicsDecision_TOS;   //!
   TBranch        *b_Jpsi_L0MuonDecision_Dec;   //!
   TBranch        *b_Jpsi_L0MuonDecision_TIS;   //!
   TBranch        *b_Jpsi_L0MuonDecision_TOS;   //!
   TBranch        *b_Jpsi_L0DiMuonDecision_Dec;   //!
   TBranch        *b_Jpsi_L0DiMuonDecision_TIS;   //!
   TBranch        *b_Jpsi_L0DiMuonDecision_TOS;   //!
   TBranch        *b_Jpsi_L0MuonHighDecision_Dec;   //!
   TBranch        *b_Jpsi_L0MuonHighDecision_TIS;   //!
   TBranch        *b_Jpsi_L0MuonHighDecision_TOS;   //!
   TBranch        *b_Jpsi_L0HadronDecision_Dec;   //!
   TBranch        *b_Jpsi_L0HadronDecision_TIS;   //!
   TBranch        *b_Jpsi_L0HadronDecision_TOS;   //!
   TBranch        *b_Jpsi_L0ElectronDecision_Dec;   //!
   TBranch        *b_Jpsi_L0ElectronDecision_TIS;   //!
   TBranch        *b_Jpsi_L0ElectronDecision_TOS;   //!
   TBranch        *b_Jpsi_L0PhotonDecision_Dec;   //!
   TBranch        *b_Jpsi_L0PhotonDecision_TIS;   //!
   TBranch        *b_Jpsi_L0PhotonDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt1SingleMuonNoIPDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt1SingleMuonNoIPDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt1SingleMuonNoIPDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Jpsi_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Jpsi_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Jpsi_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt1TrackPhotonDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt1TrackPhotonDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt1TrackPhotonDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2SingleElectronTFLowPtDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2SingleElectronTFLowPtDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2SingleElectronTFLowPtDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2SingleElectronTFHighPtDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2SingleElectronTFHighPtDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2SingleElectronTFHighPtDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2DiElectronHighMassDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2DiElectronHighMassDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2DiElectronHighMassDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2DiElectronBDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2DiElectronBDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2DiElectronBDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2B2HHLTUnbiasedDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2B2HHLTUnbiasedDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2B2HHLTUnbiasedDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2TopoMu2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2TopoMu2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2TopoMu2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2TopoMu3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2TopoMu3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2TopoMu3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2TopoE2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2TopoE2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2TopoE2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2TopoE3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2TopoE3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2TopoE3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2TopoE4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2TopoE4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2TopoE4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2MuonFromHLT1Decision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2MuonFromHLT1Decision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2MuonFromHLT1Decision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonJPsiHighPTDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonJPsiHighPTDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonJPsiHighPTDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonPsi2SDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonPsi2SDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonPsi2SDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_Jpsi_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_muplus_IPCHI2_OWNPV;   //!
   TBranch        *b_muplus_IP_OWNPV;   //!
   TBranch        *b_muplus_MINIP;   //!
   TBranch        *b_muplus_MINIPCHI2;   //!
   TBranch        *b_muplus_P;   //!
   TBranch        *b_muplus_PT;   //!
   TBranch        *b_muplus_PE;   //!
   TBranch        *b_muplus_PX;   //!
   TBranch        *b_muplus_PY;   //!
   TBranch        *b_muplus_PZ;   //!
   TBranch        *b_muplus_M;   //!
   TBranch        *b_muplus_NNK;   //!
   TBranch        *b_muplus_NNmu;   //!
   TBranch        *b_muplus_NNpi;   //!
   TBranch        *b_muplus_PIDmu;   //!
   TBranch        *b_muplus_TRACK_CHI2;   //!
   TBranch        *b_muplus_ghost;   //!
   TBranch        *b_muplus_L0Global_Dec;   //!
   TBranch        *b_muplus_L0Global_TIS;   //!
   TBranch        *b_muplus_L0Global_TOS;   //!
   TBranch        *b_muplus_Hlt1Global_Dec;   //!
   TBranch        *b_muplus_Hlt1Global_TIS;   //!
   TBranch        *b_muplus_Hlt1Global_TOS;   //!
   TBranch        *b_muplus_Hlt1Phys_Dec;   //!
   TBranch        *b_muplus_Hlt1Phys_TIS;   //!
   TBranch        *b_muplus_Hlt1Phys_TOS;   //!
   TBranch        *b_muplus_Hlt2Global_Dec;   //!
   TBranch        *b_muplus_Hlt2Global_TIS;   //!
   TBranch        *b_muplus_Hlt2Global_TOS;   //!
   TBranch        *b_muplus_Hlt2Phys_Dec;   //!
   TBranch        *b_muplus_Hlt2Phys_TIS;   //!
   TBranch        *b_muplus_Hlt2Phys_TOS;   //!
   TBranch        *b_muplus_L0PhysicsDecision_Dec;   //!
   TBranch        *b_muplus_L0PhysicsDecision_TIS;   //!
   TBranch        *b_muplus_L0PhysicsDecision_TOS;   //!
   TBranch        *b_muplus_L0MuonDecision_Dec;   //!
   TBranch        *b_muplus_L0MuonDecision_TIS;   //!
   TBranch        *b_muplus_L0MuonDecision_TOS;   //!
   TBranch        *b_muplus_L0DiMuonDecision_Dec;   //!
   TBranch        *b_muplus_L0DiMuonDecision_TIS;   //!
   TBranch        *b_muplus_L0DiMuonDecision_TOS;   //!
   TBranch        *b_muplus_L0MuonHighDecision_Dec;   //!
   TBranch        *b_muplus_L0MuonHighDecision_TIS;   //!
   TBranch        *b_muplus_L0MuonHighDecision_TOS;   //!
   TBranch        *b_muplus_L0HadronDecision_Dec;   //!
   TBranch        *b_muplus_L0HadronDecision_TIS;   //!
   TBranch        *b_muplus_L0HadronDecision_TOS;   //!
   TBranch        *b_muplus_L0ElectronDecision_Dec;   //!
   TBranch        *b_muplus_L0ElectronDecision_TIS;   //!
   TBranch        *b_muplus_L0ElectronDecision_TOS;   //!
   TBranch        *b_muplus_L0PhotonDecision_Dec;   //!
   TBranch        *b_muplus_L0PhotonDecision_TIS;   //!
   TBranch        *b_muplus_L0PhotonDecision_TOS;   //!
   TBranch        *b_muplus_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_muplus_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_muplus_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_muplus_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_muplus_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_muplus_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_muplus_Hlt1SingleMuonNoIPDecision_Dec;   //!
   TBranch        *b_muplus_Hlt1SingleMuonNoIPDecision_TIS;   //!
   TBranch        *b_muplus_Hlt1SingleMuonNoIPDecision_TOS;   //!
   TBranch        *b_muplus_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_muplus_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_muplus_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_muplus_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_muplus_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_muplus_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_muplus_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_muplus_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_muplus_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_muplus_Hlt1TrackPhotonDecision_Dec;   //!
   TBranch        *b_muplus_Hlt1TrackPhotonDecision_TIS;   //!
   TBranch        *b_muplus_Hlt1TrackPhotonDecision_TOS;   //!
   TBranch        *b_muplus_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_muplus_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_muplus_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2SingleElectronTFLowPtDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2SingleElectronTFLowPtDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2SingleElectronTFLowPtDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2SingleElectronTFHighPtDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2SingleElectronTFHighPtDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2SingleElectronTFHighPtDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiElectronHighMassDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiElectronHighMassDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiElectronHighMassDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiElectronBDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiElectronBDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiElectronBDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2B2HHLTUnbiasedDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2B2HHLTUnbiasedDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2B2HHLTUnbiasedDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2TopoMu2BodyBBDTDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2TopoMu2BodyBBDTDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2TopoMu2BodyBBDTDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2TopoMu3BodyBBDTDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2TopoMu3BodyBBDTDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2TopoMu3BodyBBDTDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2TopoE2BodyBBDTDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2TopoE2BodyBBDTDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2TopoE2BodyBBDTDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2TopoE3BodyBBDTDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2TopoE3BodyBBDTDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2TopoE3BodyBBDTDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2TopoE4BodyBBDTDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2TopoE4BodyBBDTDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2TopoE4BodyBBDTDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2MuonFromHLT1Decision_Dec;   //!
   TBranch        *b_muplus_Hlt2MuonFromHLT1Decision_TIS;   //!
   TBranch        *b_muplus_Hlt2MuonFromHLT1Decision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonJPsiHighPTDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonJPsiHighPTDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonJPsiHighPTDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonPsi2SDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonPsi2SDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonPsi2SDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_muminus_IPCHI2_OWNPV;   //!
   TBranch        *b_muminus_IP_OWNPV;   //!
   TBranch        *b_muminus_MINIP;   //!
   TBranch        *b_muminus_MINIPCHI2;   //!
   TBranch        *b_muminus_P;   //!
   TBranch        *b_muminus_PT;   //!
   TBranch        *b_muminus_PE;   //!
   TBranch        *b_muminus_PX;   //!
   TBranch        *b_muminus_PY;   //!
   TBranch        *b_muminus_PZ;   //!
   TBranch        *b_muminus_M;   //!
   TBranch        *b_muminus_NNK;   //!
   TBranch        *b_muminus_NNmu;   //!
   TBranch        *b_muminus_NNpi;   //!
   TBranch        *b_muminus_PIDmu;   //!
   TBranch        *b_muminus_TRACK_CHI2;   //!
   TBranch        *b_muminus_ghost;   //!
   TBranch        *b_muminus_L0Global_Dec;   //!
   TBranch        *b_muminus_L0Global_TIS;   //!
   TBranch        *b_muminus_L0Global_TOS;   //!
   TBranch        *b_muminus_Hlt1Global_Dec;   //!
   TBranch        *b_muminus_Hlt1Global_TIS;   //!
   TBranch        *b_muminus_Hlt1Global_TOS;   //!
   TBranch        *b_muminus_Hlt1Phys_Dec;   //!
   TBranch        *b_muminus_Hlt1Phys_TIS;   //!
   TBranch        *b_muminus_Hlt1Phys_TOS;   //!
   TBranch        *b_muminus_Hlt2Global_Dec;   //!
   TBranch        *b_muminus_Hlt2Global_TIS;   //!
   TBranch        *b_muminus_Hlt2Global_TOS;   //!
   TBranch        *b_muminus_Hlt2Phys_Dec;   //!
   TBranch        *b_muminus_Hlt2Phys_TIS;   //!
   TBranch        *b_muminus_Hlt2Phys_TOS;   //!
   TBranch        *b_muminus_L0PhysicsDecision_Dec;   //!
   TBranch        *b_muminus_L0PhysicsDecision_TIS;   //!
   TBranch        *b_muminus_L0PhysicsDecision_TOS;   //!
   TBranch        *b_muminus_L0MuonDecision_Dec;   //!
   TBranch        *b_muminus_L0MuonDecision_TIS;   //!
   TBranch        *b_muminus_L0MuonDecision_TOS;   //!
   TBranch        *b_muminus_L0DiMuonDecision_Dec;   //!
   TBranch        *b_muminus_L0DiMuonDecision_TIS;   //!
   TBranch        *b_muminus_L0DiMuonDecision_TOS;   //!
   TBranch        *b_muminus_L0MuonHighDecision_Dec;   //!
   TBranch        *b_muminus_L0MuonHighDecision_TIS;   //!
   TBranch        *b_muminus_L0MuonHighDecision_TOS;   //!
   TBranch        *b_muminus_L0HadronDecision_Dec;   //!
   TBranch        *b_muminus_L0HadronDecision_TIS;   //!
   TBranch        *b_muminus_L0HadronDecision_TOS;   //!
   TBranch        *b_muminus_L0ElectronDecision_Dec;   //!
   TBranch        *b_muminus_L0ElectronDecision_TIS;   //!
   TBranch        *b_muminus_L0ElectronDecision_TOS;   //!
   TBranch        *b_muminus_L0PhotonDecision_Dec;   //!
   TBranch        *b_muminus_L0PhotonDecision_TIS;   //!
   TBranch        *b_muminus_L0PhotonDecision_TOS;   //!
   TBranch        *b_muminus_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_muminus_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_muminus_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_muminus_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_muminus_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_muminus_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_muminus_Hlt1SingleMuonNoIPDecision_Dec;   //!
   TBranch        *b_muminus_Hlt1SingleMuonNoIPDecision_TIS;   //!
   TBranch        *b_muminus_Hlt1SingleMuonNoIPDecision_TOS;   //!
   TBranch        *b_muminus_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_muminus_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_muminus_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_muminus_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_muminus_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_muminus_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_muminus_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_muminus_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_muminus_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_muminus_Hlt1TrackPhotonDecision_Dec;   //!
   TBranch        *b_muminus_Hlt1TrackPhotonDecision_TIS;   //!
   TBranch        *b_muminus_Hlt1TrackPhotonDecision_TOS;   //!
   TBranch        *b_muminus_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_muminus_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_muminus_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2SingleElectronTFLowPtDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2SingleElectronTFLowPtDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2SingleElectronTFLowPtDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2SingleElectronTFHighPtDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2SingleElectronTFHighPtDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2SingleElectronTFHighPtDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiElectronHighMassDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiElectronHighMassDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiElectronHighMassDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiElectronBDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiElectronBDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiElectronBDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2B2HHLTUnbiasedDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2B2HHLTUnbiasedDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2B2HHLTUnbiasedDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2TopoMu2BodyBBDTDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2TopoMu2BodyBBDTDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2TopoMu2BodyBBDTDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2TopoMu3BodyBBDTDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2TopoMu3BodyBBDTDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2TopoMu3BodyBBDTDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2TopoE2BodyBBDTDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2TopoE2BodyBBDTDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2TopoE2BodyBBDTDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2TopoE3BodyBBDTDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2TopoE3BodyBBDTDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2TopoE3BodyBBDTDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2TopoE4BodyBBDTDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2TopoE4BodyBBDTDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2TopoE4BodyBBDTDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2MuonFromHLT1Decision_Dec;   //!
   TBranch        *b_muminus_Hlt2MuonFromHLT1Decision_TIS;   //!
   TBranch        *b_muminus_Hlt2MuonFromHLT1Decision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonJPsiHighPTDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonJPsiHighPTDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonJPsiHighPTDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonPsi2SDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonPsi2SDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonPsi2SDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_Kplus_IPCHI2_OWNPV;   //!
   TBranch        *b_Kplus_IP_OWNPV;   //!
   TBranch        *b_Kplus_MINIP;   //!
   TBranch        *b_Kplus_MINIPCHI2;   //!
   TBranch        *b_Kplus_P;   //!
   TBranch        *b_Kplus_PT;   //!
   TBranch        *b_Kplus_PE;   //!
   TBranch        *b_Kplus_PX;   //!
   TBranch        *b_Kplus_PY;   //!
   TBranch        *b_Kplus_PZ;   //!
   TBranch        *b_Kplus_M;   //!
   TBranch        *b_Kplus_NNK;   //!
   TBranch        *b_Kplus_NNKmu;   //!
   TBranch        *b_Kplus_NNKpi;   //!
   TBranch        *b_Kplus_NNmu;   //!
   TBranch        *b_Kplus_NNpi;   //!
   TBranch        *b_Kplus_PIDK;   //!
   TBranch        *b_Kplus_PIDmu;   //!
   TBranch        *b_Kplus_TRACK_CHI2;   //!
   TBranch        *b_Kplus_ghost;   //!
   TBranch        *b_Kplus_inMuon;   //!
   TBranch        *b_Kplus_isMuon;   //!
   TBranch        *b_Kplus_isMuonLoose;   //!
   TBranch        *b_Kplus_nTT;   //!
   TBranch        *b_Kplus_L0Global_Dec;   //!
   TBranch        *b_Kplus_L0Global_TIS;   //!
   TBranch        *b_Kplus_L0Global_TOS;   //!
   TBranch        *b_Kplus_Hlt1Global_Dec;   //!
   TBranch        *b_Kplus_Hlt1Global_TIS;   //!
   TBranch        *b_Kplus_Hlt1Global_TOS;   //!
   TBranch        *b_Kplus_Hlt1Phys_Dec;   //!
   TBranch        *b_Kplus_Hlt1Phys_TIS;   //!
   TBranch        *b_Kplus_Hlt1Phys_TOS;   //!
   TBranch        *b_Kplus_Hlt2Global_Dec;   //!
   TBranch        *b_Kplus_Hlt2Global_TIS;   //!
   TBranch        *b_Kplus_Hlt2Global_TOS;   //!
   TBranch        *b_Kplus_Hlt2Phys_Dec;   //!
   TBranch        *b_Kplus_Hlt2Phys_TIS;   //!
   TBranch        *b_Kplus_Hlt2Phys_TOS;   //!
   TBranch        *b_Kplus_L0PhysicsDecision_Dec;   //!
   TBranch        *b_Kplus_L0PhysicsDecision_TIS;   //!
   TBranch        *b_Kplus_L0PhysicsDecision_TOS;   //!
   TBranch        *b_Kplus_L0MuonDecision_Dec;   //!
   TBranch        *b_Kplus_L0MuonDecision_TIS;   //!
   TBranch        *b_Kplus_L0MuonDecision_TOS;   //!
   TBranch        *b_Kplus_L0DiMuonDecision_Dec;   //!
   TBranch        *b_Kplus_L0DiMuonDecision_TIS;   //!
   TBranch        *b_Kplus_L0DiMuonDecision_TOS;   //!
   TBranch        *b_Kplus_L0MuonHighDecision_Dec;   //!
   TBranch        *b_Kplus_L0MuonHighDecision_TIS;   //!
   TBranch        *b_Kplus_L0MuonHighDecision_TOS;   //!
   TBranch        *b_Kplus_L0HadronDecision_Dec;   //!
   TBranch        *b_Kplus_L0HadronDecision_TIS;   //!
   TBranch        *b_Kplus_L0HadronDecision_TOS;   //!
   TBranch        *b_Kplus_L0ElectronDecision_Dec;   //!
   TBranch        *b_Kplus_L0ElectronDecision_TIS;   //!
   TBranch        *b_Kplus_L0ElectronDecision_TOS;   //!
   TBranch        *b_Kplus_L0PhotonDecision_Dec;   //!
   TBranch        *b_Kplus_L0PhotonDecision_TIS;   //!
   TBranch        *b_Kplus_L0PhotonDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt1SingleMuonNoIPDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt1SingleMuonNoIPDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt1SingleMuonNoIPDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Kplus_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Kplus_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Kplus_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt1TrackPhotonDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt1TrackPhotonDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt1TrackPhotonDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2SingleElectronTFLowPtDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2SingleElectronTFLowPtDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2SingleElectronTFLowPtDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2SingleElectronTFHighPtDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2SingleElectronTFHighPtDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2SingleElectronTFHighPtDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2DiElectronHighMassDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2DiElectronHighMassDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2DiElectronHighMassDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2DiElectronBDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2DiElectronBDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2DiElectronBDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2B2HHLTUnbiasedDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2B2HHLTUnbiasedDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2B2HHLTUnbiasedDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2TopoMu2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2TopoMu2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2TopoMu2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2TopoMu3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2TopoMu3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2TopoMu3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2TopoE2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2TopoE2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2TopoE2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2TopoE3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2TopoE3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2TopoE3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2TopoE4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2TopoE4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2TopoE4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2MuonFromHLT1Decision_Dec;   //!
   TBranch        *b_Kplus_Hlt2MuonFromHLT1Decision_TIS;   //!
   TBranch        *b_Kplus_Hlt2MuonFromHLT1Decision_TOS;   //!
   TBranch        *b_Kplus_Hlt2DiMuonDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2DiMuonDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2DiMuonDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2DiMuonJPsiHighPTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2DiMuonJPsiHighPTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2DiMuonJPsiHighPTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2DiMuonPsi2SDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2DiMuonPsi2SDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2DiMuonPsi2SDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_BCID;   //!
   TBranch        *b_BCType;   //!
   TBranch        *b_OdinTCK;   //!
   TBranch        *b_L0DUTCK;   //!
   TBranch        *b_HLT1TCK;   //!
   TBranch        *b_HLT2TCK;   //!
   TBranch        *b_GpsTime;   //!
   TBranch        *b_Polarity;   //!
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

   apply_BDT_weights(TTree *tree=0);
   virtual ~apply_BDT_weights();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef apply_BDT_weights_cxx
apply_BDT_weights::apply_BDT_weights(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/afs/cern.ch/work/g/gcowan/gangadir/workspace/gcowan/LocalXML/320/output/BuKll.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/afs/cern.ch/work/g/gcowan/gangadir/workspace/gcowan/LocalXML/320/output/BuKll.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/afs/cern.ch/work/g/gcowan/gangadir/workspace/gcowan/LocalXML/320/output/BuKll.root:/Jpsi_Tuple");
      dir->GetObject("DecayTree",tree);

   }
   Init(tree);
}

apply_BDT_weights::~apply_BDT_weights()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t apply_BDT_weights::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t apply_BDT_weights::LoadTree(Long64_t entry)
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

void apply_BDT_weights::Init(TTree *tree)
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

   fChain->SetBranchAddress("Bplus_IPCHI2_OWNPV", &Bplus_IPCHI2_OWNPV, &b_Bplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Bplus_IP_OWNPV", &Bplus_IP_OWNPV, &b_Bplus_IP_OWNPV);
   fChain->SetBranchAddress("Bplus_MINIP", &Bplus_MINIP, &b_Bplus_MINIP);
   fChain->SetBranchAddress("Bplus_MINIPCHI2", &Bplus_MINIPCHI2, &b_Bplus_MINIPCHI2);
   fChain->SetBranchAddress("Bplus_fitted_E", &Bplus_fitted_E, &b_Bplus_fitted_E);
   fChain->SetBranchAddress("Bplus_fitted_X", &Bplus_fitted_X, &b_Bplus_fitted_X);
   fChain->SetBranchAddress("Bplus_fitted_Y", &Bplus_fitted_Y, &b_Bplus_fitted_Y);
   fChain->SetBranchAddress("Bplus_fitted_Z", &Bplus_fitted_Z, &b_Bplus_fitted_Z);
   fChain->SetBranchAddress("Bplus_fitted_dimuon_E", &Bplus_fitted_dimuon_E, &b_Bplus_fitted_dimuon_E);
   fChain->SetBranchAddress("Bplus_fitted_dimuon_X", &Bplus_fitted_dimuon_X, &b_Bplus_fitted_dimuon_X);
   fChain->SetBranchAddress("Bplus_fitted_dimuon_Y", &Bplus_fitted_dimuon_Y, &b_Bplus_fitted_dimuon_Y);
   fChain->SetBranchAddress("Bplus_fitted_dimuon_Z", &Bplus_fitted_dimuon_Z, &b_Bplus_fitted_dimuon_Z);
   fChain->SetBranchAddress("Bplus_fitted_dimuon_M", &Bplus_fitted_dimuon_M, &b_Bplus_fitted_dimuon_M);
   fChain->SetBranchAddress("Bplus_fitted_dimuon_M_5500", &Bplus_fitted_dimuon_M_5500, &b_Bplus_fitted_dimuon_M_5500);
   fChain->SetBranchAddress("Bplus_fitted_dimuon_M_5580", &Bplus_fitted_dimuon_M_5580, &b_Bplus_fitted_dimuon_M_5580);
   fChain->SetBranchAddress("Bplus_fitted_dimuon_M_5660", &Bplus_fitted_dimuon_M_5660, &b_Bplus_fitted_dimuon_M_5660);
   fChain->SetBranchAddress("Bplus_fitted_dimuon_M_5740", &Bplus_fitted_dimuon_M_5740, &b_Bplus_fitted_dimuon_M_5740);
   fChain->SetBranchAddress("Bplus_fitted_dimuon_M_5820", &Bplus_fitted_dimuon_M_5820, &b_Bplus_fitted_dimuon_M_5820);
   fChain->SetBranchAddress("Bplus_P", &Bplus_P, &b_Bplus_P);
   fChain->SetBranchAddress("Bplus_PT", &Bplus_PT, &b_Bplus_PT);
   fChain->SetBranchAddress("Bplus_PE", &Bplus_PE, &b_Bplus_PE);
   fChain->SetBranchAddress("Bplus_PX", &Bplus_PX, &b_Bplus_PX);
   fChain->SetBranchAddress("Bplus_PY", &Bplus_PY, &b_Bplus_PY);
   fChain->SetBranchAddress("Bplus_PZ", &Bplus_PZ, &b_Bplus_PZ);
   fChain->SetBranchAddress("Bplus_MM", &Bplus_MM, &b_Bplus_MM);
   fChain->SetBranchAddress("Bplus_MMERR", &Bplus_MMERR, &b_Bplus_MMERR);
   fChain->SetBranchAddress("Bplus_M", &Bplus_M, &b_Bplus_M);
   fChain->SetBranchAddress("Bplus_DIRA_OWNPV", &Bplus_DIRA_OWNPV, &b_Bplus_DIRA_OWNPV);
   fChain->SetBranchAddress("Bplus_ENDVERTEX_CHI2", &Bplus_ENDVERTEX_CHI2, &b_Bplus_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Bplus_FD_CHI2", &Bplus_FD_CHI2, &b_Bplus_FD_CHI2);
   fChain->SetBranchAddress("Bplus_ID", &Bplus_ID, &b_Bplus_ID);
   fChain->SetBranchAddress("Bplus_KMu_D", &Bplus_KMu_D, &b_Bplus_KMu_D);
   fChain->SetBranchAddress("Bplus_KMu_Jpsi", &Bplus_KMu_Jpsi, &b_Bplus_KMu_Jpsi);
   fChain->SetBranchAddress("Bplus_TAU", &Bplus_TAU, &b_Bplus_TAU);
   fChain->SetBranchAddress("Bplus_dimuon_mass_B_constr", &Bplus_dimuon_mass_B_constr, &b_Bplus_dimuon_mass_B_constr);
   fChain->SetBranchAddress("Bplus_dimuon_mass_PV_constr", &Bplus_dimuon_mass_PV_constr, &b_Bplus_dimuon_mass_PV_constr);
   fChain->SetBranchAddress("Bplus_dimuon_mass_PV_constr_B_constr", &Bplus_dimuon_mass_PV_constr_B_constr, &b_Bplus_dimuon_mass_PV_constr_B_constr);
   fChain->SetBranchAddress("Bplus_dimuon_mass_no_constr", &Bplus_dimuon_mass_no_constr, &b_Bplus_dimuon_mass_no_constr);
   fChain->SetBranchAddress("Bplus_L0Global_Dec", &Bplus_L0Global_Dec, &b_Bplus_L0Global_Dec);
   fChain->SetBranchAddress("Bplus_L0Global_TIS", &Bplus_L0Global_TIS, &b_Bplus_L0Global_TIS);
   fChain->SetBranchAddress("Bplus_L0Global_TOS", &Bplus_L0Global_TOS, &b_Bplus_L0Global_TOS);
   fChain->SetBranchAddress("Bplus_Hlt1Global_Dec", &Bplus_Hlt1Global_Dec, &b_Bplus_Hlt1Global_Dec);
   fChain->SetBranchAddress("Bplus_Hlt1Global_TIS", &Bplus_Hlt1Global_TIS, &b_Bplus_Hlt1Global_TIS);
   fChain->SetBranchAddress("Bplus_Hlt1Global_TOS", &Bplus_Hlt1Global_TOS, &b_Bplus_Hlt1Global_TOS);
   fChain->SetBranchAddress("Bplus_Hlt1Phys_Dec", &Bplus_Hlt1Phys_Dec, &b_Bplus_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Bplus_Hlt1Phys_TIS", &Bplus_Hlt1Phys_TIS, &b_Bplus_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Bplus_Hlt1Phys_TOS", &Bplus_Hlt1Phys_TOS, &b_Bplus_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2Global_Dec", &Bplus_Hlt2Global_Dec, &b_Bplus_Hlt2Global_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2Global_TIS", &Bplus_Hlt2Global_TIS, &b_Bplus_Hlt2Global_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2Global_TOS", &Bplus_Hlt2Global_TOS, &b_Bplus_Hlt2Global_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2Phys_Dec", &Bplus_Hlt2Phys_Dec, &b_Bplus_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2Phys_TIS", &Bplus_Hlt2Phys_TIS, &b_Bplus_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2Phys_TOS", &Bplus_Hlt2Phys_TOS, &b_Bplus_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Bplus_L0PhysicsDecision_Dec", &Bplus_L0PhysicsDecision_Dec, &b_Bplus_L0PhysicsDecision_Dec);
   fChain->SetBranchAddress("Bplus_L0PhysicsDecision_TIS", &Bplus_L0PhysicsDecision_TIS, &b_Bplus_L0PhysicsDecision_TIS);
   fChain->SetBranchAddress("Bplus_L0PhysicsDecision_TOS", &Bplus_L0PhysicsDecision_TOS, &b_Bplus_L0PhysicsDecision_TOS);
   fChain->SetBranchAddress("Bplus_L0MuonDecision_Dec", &Bplus_L0MuonDecision_Dec, &b_Bplus_L0MuonDecision_Dec);
   fChain->SetBranchAddress("Bplus_L0MuonDecision_TIS", &Bplus_L0MuonDecision_TIS, &b_Bplus_L0MuonDecision_TIS);
   fChain->SetBranchAddress("Bplus_L0MuonDecision_TOS", &Bplus_L0MuonDecision_TOS, &b_Bplus_L0MuonDecision_TOS);
   fChain->SetBranchAddress("Bplus_L0DiMuonDecision_Dec", &Bplus_L0DiMuonDecision_Dec, &b_Bplus_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("Bplus_L0DiMuonDecision_TIS", &Bplus_L0DiMuonDecision_TIS, &b_Bplus_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("Bplus_L0DiMuonDecision_TOS", &Bplus_L0DiMuonDecision_TOS, &b_Bplus_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("Bplus_L0MuonHighDecision_Dec", &Bplus_L0MuonHighDecision_Dec, &b_Bplus_L0MuonHighDecision_Dec);
   fChain->SetBranchAddress("Bplus_L0MuonHighDecision_TIS", &Bplus_L0MuonHighDecision_TIS, &b_Bplus_L0MuonHighDecision_TIS);
   fChain->SetBranchAddress("Bplus_L0MuonHighDecision_TOS", &Bplus_L0MuonHighDecision_TOS, &b_Bplus_L0MuonHighDecision_TOS);
   fChain->SetBranchAddress("Bplus_L0HadronDecision_Dec", &Bplus_L0HadronDecision_Dec, &b_Bplus_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Bplus_L0HadronDecision_TIS", &Bplus_L0HadronDecision_TIS, &b_Bplus_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Bplus_L0HadronDecision_TOS", &Bplus_L0HadronDecision_TOS, &b_Bplus_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Bplus_L0ElectronDecision_Dec", &Bplus_L0ElectronDecision_Dec, &b_Bplus_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("Bplus_L0ElectronDecision_TIS", &Bplus_L0ElectronDecision_TIS, &b_Bplus_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("Bplus_L0ElectronDecision_TOS", &Bplus_L0ElectronDecision_TOS, &b_Bplus_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("Bplus_L0PhotonDecision_Dec", &Bplus_L0PhotonDecision_Dec, &b_Bplus_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("Bplus_L0PhotonDecision_TIS", &Bplus_L0PhotonDecision_TIS, &b_Bplus_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("Bplus_L0PhotonDecision_TOS", &Bplus_L0PhotonDecision_TOS, &b_Bplus_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt1DiMuonHighMassDecision_Dec", &Bplus_Hlt1DiMuonHighMassDecision_Dec, &b_Bplus_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt1DiMuonHighMassDecision_TIS", &Bplus_Hlt1DiMuonHighMassDecision_TIS, &b_Bplus_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt1DiMuonHighMassDecision_TOS", &Bplus_Hlt1DiMuonHighMassDecision_TOS, &b_Bplus_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt1DiMuonLowMassDecision_Dec", &Bplus_Hlt1DiMuonLowMassDecision_Dec, &b_Bplus_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt1DiMuonLowMassDecision_TIS", &Bplus_Hlt1DiMuonLowMassDecision_TIS, &b_Bplus_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt1DiMuonLowMassDecision_TOS", &Bplus_Hlt1DiMuonLowMassDecision_TOS, &b_Bplus_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt1SingleMuonNoIPDecision_Dec", &Bplus_Hlt1SingleMuonNoIPDecision_Dec, &b_Bplus_Hlt1SingleMuonNoIPDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt1SingleMuonNoIPDecision_TIS", &Bplus_Hlt1SingleMuonNoIPDecision_TIS, &b_Bplus_Hlt1SingleMuonNoIPDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt1SingleMuonNoIPDecision_TOS", &Bplus_Hlt1SingleMuonNoIPDecision_TOS, &b_Bplus_Hlt1SingleMuonNoIPDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt1SingleMuonHighPTDecision_Dec", &Bplus_Hlt1SingleMuonHighPTDecision_Dec, &b_Bplus_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt1SingleMuonHighPTDecision_TIS", &Bplus_Hlt1SingleMuonHighPTDecision_TIS, &b_Bplus_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt1SingleMuonHighPTDecision_TOS", &Bplus_Hlt1SingleMuonHighPTDecision_TOS, &b_Bplus_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt1TrackAllL0Decision_Dec", &Bplus_Hlt1TrackAllL0Decision_Dec, &b_Bplus_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt1TrackAllL0Decision_TIS", &Bplus_Hlt1TrackAllL0Decision_TIS, &b_Bplus_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt1TrackAllL0Decision_TOS", &Bplus_Hlt1TrackAllL0Decision_TOS, &b_Bplus_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt1TrackMuonDecision_Dec", &Bplus_Hlt1TrackMuonDecision_Dec, &b_Bplus_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt1TrackMuonDecision_TIS", &Bplus_Hlt1TrackMuonDecision_TIS, &b_Bplus_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt1TrackMuonDecision_TOS", &Bplus_Hlt1TrackMuonDecision_TOS, &b_Bplus_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt1TrackPhotonDecision_Dec", &Bplus_Hlt1TrackPhotonDecision_Dec, &b_Bplus_Hlt1TrackPhotonDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt1TrackPhotonDecision_TIS", &Bplus_Hlt1TrackPhotonDecision_TIS, &b_Bplus_Hlt1TrackPhotonDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt1TrackPhotonDecision_TOS", &Bplus_Hlt1TrackPhotonDecision_TOS, &b_Bplus_Hlt1TrackPhotonDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt1L0AnyDecision_Dec", &Bplus_Hlt1L0AnyDecision_Dec, &b_Bplus_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt1L0AnyDecision_TIS", &Bplus_Hlt1L0AnyDecision_TIS, &b_Bplus_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt1L0AnyDecision_TOS", &Bplus_Hlt1L0AnyDecision_TOS, &b_Bplus_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2SingleElectronTFLowPtDecision_Dec", &Bplus_Hlt2SingleElectronTFLowPtDecision_Dec, &b_Bplus_Hlt2SingleElectronTFLowPtDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2SingleElectronTFLowPtDecision_TIS", &Bplus_Hlt2SingleElectronTFLowPtDecision_TIS, &b_Bplus_Hlt2SingleElectronTFLowPtDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2SingleElectronTFLowPtDecision_TOS", &Bplus_Hlt2SingleElectronTFLowPtDecision_TOS, &b_Bplus_Hlt2SingleElectronTFLowPtDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2SingleElectronTFHighPtDecision_Dec", &Bplus_Hlt2SingleElectronTFHighPtDecision_Dec, &b_Bplus_Hlt2SingleElectronTFHighPtDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2SingleElectronTFHighPtDecision_TIS", &Bplus_Hlt2SingleElectronTFHighPtDecision_TIS, &b_Bplus_Hlt2SingleElectronTFHighPtDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2SingleElectronTFHighPtDecision_TOS", &Bplus_Hlt2SingleElectronTFHighPtDecision_TOS, &b_Bplus_Hlt2SingleElectronTFHighPtDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2DiElectronHighMassDecision_Dec", &Bplus_Hlt2DiElectronHighMassDecision_Dec, &b_Bplus_Hlt2DiElectronHighMassDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2DiElectronHighMassDecision_TIS", &Bplus_Hlt2DiElectronHighMassDecision_TIS, &b_Bplus_Hlt2DiElectronHighMassDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2DiElectronHighMassDecision_TOS", &Bplus_Hlt2DiElectronHighMassDecision_TOS, &b_Bplus_Hlt2DiElectronHighMassDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2DiElectronBDecision_Dec", &Bplus_Hlt2DiElectronBDecision_Dec, &b_Bplus_Hlt2DiElectronBDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2DiElectronBDecision_TIS", &Bplus_Hlt2DiElectronBDecision_TIS, &b_Bplus_Hlt2DiElectronBDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2DiElectronBDecision_TOS", &Bplus_Hlt2DiElectronBDecision_TOS, &b_Bplus_Hlt2DiElectronBDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2B2HHLTUnbiasedDecision_Dec", &Bplus_Hlt2B2HHLTUnbiasedDecision_Dec, &b_Bplus_Hlt2B2HHLTUnbiasedDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2B2HHLTUnbiasedDecision_TIS", &Bplus_Hlt2B2HHLTUnbiasedDecision_TIS, &b_Bplus_Hlt2B2HHLTUnbiasedDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2B2HHLTUnbiasedDecision_TOS", &Bplus_Hlt2B2HHLTUnbiasedDecision_TOS, &b_Bplus_Hlt2B2HHLTUnbiasedDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2Topo2BodySimpleDecision_Dec", &Bplus_Hlt2Topo2BodySimpleDecision_Dec, &b_Bplus_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2Topo2BodySimpleDecision_TIS", &Bplus_Hlt2Topo2BodySimpleDecision_TIS, &b_Bplus_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2Topo2BodySimpleDecision_TOS", &Bplus_Hlt2Topo2BodySimpleDecision_TOS, &b_Bplus_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2Topo3BodySimpleDecision_Dec", &Bplus_Hlt2Topo3BodySimpleDecision_Dec, &b_Bplus_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2Topo3BodySimpleDecision_TIS", &Bplus_Hlt2Topo3BodySimpleDecision_TIS, &b_Bplus_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2Topo3BodySimpleDecision_TOS", &Bplus_Hlt2Topo3BodySimpleDecision_TOS, &b_Bplus_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2Topo4BodySimpleDecision_Dec", &Bplus_Hlt2Topo4BodySimpleDecision_Dec, &b_Bplus_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2Topo4BodySimpleDecision_TIS", &Bplus_Hlt2Topo4BodySimpleDecision_TIS, &b_Bplus_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2Topo4BodySimpleDecision_TOS", &Bplus_Hlt2Topo4BodySimpleDecision_TOS, &b_Bplus_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2Topo2BodyBBDTDecision_Dec", &Bplus_Hlt2Topo2BodyBBDTDecision_Dec, &b_Bplus_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2Topo2BodyBBDTDecision_TIS", &Bplus_Hlt2Topo2BodyBBDTDecision_TIS, &b_Bplus_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2Topo2BodyBBDTDecision_TOS", &Bplus_Hlt2Topo2BodyBBDTDecision_TOS, &b_Bplus_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2Topo3BodyBBDTDecision_Dec", &Bplus_Hlt2Topo3BodyBBDTDecision_Dec, &b_Bplus_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2Topo3BodyBBDTDecision_TIS", &Bplus_Hlt2Topo3BodyBBDTDecision_TIS, &b_Bplus_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2Topo3BodyBBDTDecision_TOS", &Bplus_Hlt2Topo3BodyBBDTDecision_TOS, &b_Bplus_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2Topo4BodyBBDTDecision_Dec", &Bplus_Hlt2Topo4BodyBBDTDecision_Dec, &b_Bplus_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2Topo4BodyBBDTDecision_TIS", &Bplus_Hlt2Topo4BodyBBDTDecision_TIS, &b_Bplus_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2Topo4BodyBBDTDecision_TOS", &Bplus_Hlt2Topo4BodyBBDTDecision_TOS, &b_Bplus_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2TopoMu2BodyBBDTDecision_Dec", &Bplus_Hlt2TopoMu2BodyBBDTDecision_Dec, &b_Bplus_Hlt2TopoMu2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2TopoMu2BodyBBDTDecision_TIS", &Bplus_Hlt2TopoMu2BodyBBDTDecision_TIS, &b_Bplus_Hlt2TopoMu2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2TopoMu2BodyBBDTDecision_TOS", &Bplus_Hlt2TopoMu2BodyBBDTDecision_TOS, &b_Bplus_Hlt2TopoMu2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2TopoMu3BodyBBDTDecision_Dec", &Bplus_Hlt2TopoMu3BodyBBDTDecision_Dec, &b_Bplus_Hlt2TopoMu3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2TopoMu3BodyBBDTDecision_TIS", &Bplus_Hlt2TopoMu3BodyBBDTDecision_TIS, &b_Bplus_Hlt2TopoMu3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2TopoMu3BodyBBDTDecision_TOS", &Bplus_Hlt2TopoMu3BodyBBDTDecision_TOS, &b_Bplus_Hlt2TopoMu3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2TopoMu4BodyBBDTDecision_Dec", &Bplus_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_Bplus_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2TopoMu4BodyBBDTDecision_TIS", &Bplus_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_Bplus_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2TopoMu4BodyBBDTDecision_TOS", &Bplus_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_Bplus_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2TopoE2BodyBBDTDecision_Dec", &Bplus_Hlt2TopoE2BodyBBDTDecision_Dec, &b_Bplus_Hlt2TopoE2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2TopoE2BodyBBDTDecision_TIS", &Bplus_Hlt2TopoE2BodyBBDTDecision_TIS, &b_Bplus_Hlt2TopoE2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2TopoE2BodyBBDTDecision_TOS", &Bplus_Hlt2TopoE2BodyBBDTDecision_TOS, &b_Bplus_Hlt2TopoE2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2TopoE3BodyBBDTDecision_Dec", &Bplus_Hlt2TopoE3BodyBBDTDecision_Dec, &b_Bplus_Hlt2TopoE3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2TopoE3BodyBBDTDecision_TIS", &Bplus_Hlt2TopoE3BodyBBDTDecision_TIS, &b_Bplus_Hlt2TopoE3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2TopoE3BodyBBDTDecision_TOS", &Bplus_Hlt2TopoE3BodyBBDTDecision_TOS, &b_Bplus_Hlt2TopoE3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2TopoE4BodyBBDTDecision_Dec", &Bplus_Hlt2TopoE4BodyBBDTDecision_Dec, &b_Bplus_Hlt2TopoE4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2TopoE4BodyBBDTDecision_TIS", &Bplus_Hlt2TopoE4BodyBBDTDecision_TIS, &b_Bplus_Hlt2TopoE4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2TopoE4BodyBBDTDecision_TOS", &Bplus_Hlt2TopoE4BodyBBDTDecision_TOS, &b_Bplus_Hlt2TopoE4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2MuonFromHLT1Decision_Dec", &Bplus_Hlt2MuonFromHLT1Decision_Dec, &b_Bplus_Hlt2MuonFromHLT1Decision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2MuonFromHLT1Decision_TIS", &Bplus_Hlt2MuonFromHLT1Decision_TIS, &b_Bplus_Hlt2MuonFromHLT1Decision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2MuonFromHLT1Decision_TOS", &Bplus_Hlt2MuonFromHLT1Decision_TOS, &b_Bplus_Hlt2MuonFromHLT1Decision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonDecision_Dec", &Bplus_Hlt2DiMuonDecision_Dec, &b_Bplus_Hlt2DiMuonDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonDecision_TIS", &Bplus_Hlt2DiMuonDecision_TIS, &b_Bplus_Hlt2DiMuonDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonDecision_TOS", &Bplus_Hlt2DiMuonDecision_TOS, &b_Bplus_Hlt2DiMuonDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonLowMassDecision_Dec", &Bplus_Hlt2DiMuonLowMassDecision_Dec, &b_Bplus_Hlt2DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonLowMassDecision_TIS", &Bplus_Hlt2DiMuonLowMassDecision_TIS, &b_Bplus_Hlt2DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonLowMassDecision_TOS", &Bplus_Hlt2DiMuonLowMassDecision_TOS, &b_Bplus_Hlt2DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonJPsiDecision_Dec", &Bplus_Hlt2DiMuonJPsiDecision_Dec, &b_Bplus_Hlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonJPsiDecision_TIS", &Bplus_Hlt2DiMuonJPsiDecision_TIS, &b_Bplus_Hlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonJPsiDecision_TOS", &Bplus_Hlt2DiMuonJPsiDecision_TOS, &b_Bplus_Hlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonJPsiHighPTDecision_Dec", &Bplus_Hlt2DiMuonJPsiHighPTDecision_Dec, &b_Bplus_Hlt2DiMuonJPsiHighPTDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonJPsiHighPTDecision_TIS", &Bplus_Hlt2DiMuonJPsiHighPTDecision_TIS, &b_Bplus_Hlt2DiMuonJPsiHighPTDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonJPsiHighPTDecision_TOS", &Bplus_Hlt2DiMuonJPsiHighPTDecision_TOS, &b_Bplus_Hlt2DiMuonJPsiHighPTDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonPsi2SDecision_Dec", &Bplus_Hlt2DiMuonPsi2SDecision_Dec, &b_Bplus_Hlt2DiMuonPsi2SDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonPsi2SDecision_TIS", &Bplus_Hlt2DiMuonPsi2SDecision_TIS, &b_Bplus_Hlt2DiMuonPsi2SDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonPsi2SDecision_TOS", &Bplus_Hlt2DiMuonPsi2SDecision_TOS, &b_Bplus_Hlt2DiMuonPsi2SDecision_TOS);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonBDecision_Dec", &Bplus_Hlt2DiMuonBDecision_Dec, &b_Bplus_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonBDecision_TIS", &Bplus_Hlt2DiMuonBDecision_TIS, &b_Bplus_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("Bplus_Hlt2DiMuonBDecision_TOS", &Bplus_Hlt2DiMuonBDecision_TOS, &b_Bplus_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("Jpsi_IPCHI2_OWNPV", &Jpsi_IPCHI2_OWNPV, &b_Jpsi_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Jpsi_IP_OWNPV", &Jpsi_IP_OWNPV, &b_Jpsi_IP_OWNPV);
   fChain->SetBranchAddress("Jpsi_MINIP", &Jpsi_MINIP, &b_Jpsi_MINIP);
   fChain->SetBranchAddress("Jpsi_MINIPCHI2", &Jpsi_MINIPCHI2, &b_Jpsi_MINIPCHI2);
   fChain->SetBranchAddress("Jpsi_P", &Jpsi_P, &b_Jpsi_P);
   fChain->SetBranchAddress("Jpsi_PT", &Jpsi_PT, &b_Jpsi_PT);
   fChain->SetBranchAddress("Jpsi_PE", &Jpsi_PE, &b_Jpsi_PE);
   fChain->SetBranchAddress("Jpsi_PX", &Jpsi_PX, &b_Jpsi_PX);
   fChain->SetBranchAddress("Jpsi_PY", &Jpsi_PY, &b_Jpsi_PY);
   fChain->SetBranchAddress("Jpsi_PZ", &Jpsi_PZ, &b_Jpsi_PZ);
   fChain->SetBranchAddress("Jpsi_MM", &Jpsi_MM, &b_Jpsi_MM);
   fChain->SetBranchAddress("Jpsi_MMERR", &Jpsi_MMERR, &b_Jpsi_MMERR);
   fChain->SetBranchAddress("Jpsi_M", &Jpsi_M, &b_Jpsi_M);
   fChain->SetBranchAddress("Jpsi_L0Global_Dec", &Jpsi_L0Global_Dec, &b_Jpsi_L0Global_Dec);
   fChain->SetBranchAddress("Jpsi_L0Global_TIS", &Jpsi_L0Global_TIS, &b_Jpsi_L0Global_TIS);
   fChain->SetBranchAddress("Jpsi_L0Global_TOS", &Jpsi_L0Global_TOS, &b_Jpsi_L0Global_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt1Global_Dec", &Jpsi_Hlt1Global_Dec, &b_Jpsi_Hlt1Global_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt1Global_TIS", &Jpsi_Hlt1Global_TIS, &b_Jpsi_Hlt1Global_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt1Global_TOS", &Jpsi_Hlt1Global_TOS, &b_Jpsi_Hlt1Global_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt1Phys_Dec", &Jpsi_Hlt1Phys_Dec, &b_Jpsi_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt1Phys_TIS", &Jpsi_Hlt1Phys_TIS, &b_Jpsi_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt1Phys_TOS", &Jpsi_Hlt1Phys_TOS, &b_Jpsi_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2Global_Dec", &Jpsi_Hlt2Global_Dec, &b_Jpsi_Hlt2Global_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2Global_TIS", &Jpsi_Hlt2Global_TIS, &b_Jpsi_Hlt2Global_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2Global_TOS", &Jpsi_Hlt2Global_TOS, &b_Jpsi_Hlt2Global_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2Phys_Dec", &Jpsi_Hlt2Phys_Dec, &b_Jpsi_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2Phys_TIS", &Jpsi_Hlt2Phys_TIS, &b_Jpsi_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2Phys_TOS", &Jpsi_Hlt2Phys_TOS, &b_Jpsi_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Jpsi_L0PhysicsDecision_Dec", &Jpsi_L0PhysicsDecision_Dec, &b_Jpsi_L0PhysicsDecision_Dec);
   fChain->SetBranchAddress("Jpsi_L0PhysicsDecision_TIS", &Jpsi_L0PhysicsDecision_TIS, &b_Jpsi_L0PhysicsDecision_TIS);
   fChain->SetBranchAddress("Jpsi_L0PhysicsDecision_TOS", &Jpsi_L0PhysicsDecision_TOS, &b_Jpsi_L0PhysicsDecision_TOS);
   fChain->SetBranchAddress("Jpsi_L0MuonDecision_Dec", &Jpsi_L0MuonDecision_Dec, &b_Jpsi_L0MuonDecision_Dec);
   fChain->SetBranchAddress("Jpsi_L0MuonDecision_TIS", &Jpsi_L0MuonDecision_TIS, &b_Jpsi_L0MuonDecision_TIS);
   fChain->SetBranchAddress("Jpsi_L0MuonDecision_TOS", &Jpsi_L0MuonDecision_TOS, &b_Jpsi_L0MuonDecision_TOS);
   fChain->SetBranchAddress("Jpsi_L0DiMuonDecision_Dec", &Jpsi_L0DiMuonDecision_Dec, &b_Jpsi_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("Jpsi_L0DiMuonDecision_TIS", &Jpsi_L0DiMuonDecision_TIS, &b_Jpsi_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("Jpsi_L0DiMuonDecision_TOS", &Jpsi_L0DiMuonDecision_TOS, &b_Jpsi_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("Jpsi_L0MuonHighDecision_Dec", &Jpsi_L0MuonHighDecision_Dec, &b_Jpsi_L0MuonHighDecision_Dec);
   fChain->SetBranchAddress("Jpsi_L0MuonHighDecision_TIS", &Jpsi_L0MuonHighDecision_TIS, &b_Jpsi_L0MuonHighDecision_TIS);
   fChain->SetBranchAddress("Jpsi_L0MuonHighDecision_TOS", &Jpsi_L0MuonHighDecision_TOS, &b_Jpsi_L0MuonHighDecision_TOS);
   fChain->SetBranchAddress("Jpsi_L0HadronDecision_Dec", &Jpsi_L0HadronDecision_Dec, &b_Jpsi_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Jpsi_L0HadronDecision_TIS", &Jpsi_L0HadronDecision_TIS, &b_Jpsi_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Jpsi_L0HadronDecision_TOS", &Jpsi_L0HadronDecision_TOS, &b_Jpsi_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Jpsi_L0ElectronDecision_Dec", &Jpsi_L0ElectronDecision_Dec, &b_Jpsi_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("Jpsi_L0ElectronDecision_TIS", &Jpsi_L0ElectronDecision_TIS, &b_Jpsi_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("Jpsi_L0ElectronDecision_TOS", &Jpsi_L0ElectronDecision_TOS, &b_Jpsi_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("Jpsi_L0PhotonDecision_Dec", &Jpsi_L0PhotonDecision_Dec, &b_Jpsi_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("Jpsi_L0PhotonDecision_TIS", &Jpsi_L0PhotonDecision_TIS, &b_Jpsi_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("Jpsi_L0PhotonDecision_TOS", &Jpsi_L0PhotonDecision_TOS, &b_Jpsi_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt1DiMuonHighMassDecision_Dec", &Jpsi_Hlt1DiMuonHighMassDecision_Dec, &b_Jpsi_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt1DiMuonHighMassDecision_TIS", &Jpsi_Hlt1DiMuonHighMassDecision_TIS, &b_Jpsi_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt1DiMuonHighMassDecision_TOS", &Jpsi_Hlt1DiMuonHighMassDecision_TOS, &b_Jpsi_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt1DiMuonLowMassDecision_Dec", &Jpsi_Hlt1DiMuonLowMassDecision_Dec, &b_Jpsi_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt1DiMuonLowMassDecision_TIS", &Jpsi_Hlt1DiMuonLowMassDecision_TIS, &b_Jpsi_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt1DiMuonLowMassDecision_TOS", &Jpsi_Hlt1DiMuonLowMassDecision_TOS, &b_Jpsi_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt1SingleMuonNoIPDecision_Dec", &Jpsi_Hlt1SingleMuonNoIPDecision_Dec, &b_Jpsi_Hlt1SingleMuonNoIPDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt1SingleMuonNoIPDecision_TIS", &Jpsi_Hlt1SingleMuonNoIPDecision_TIS, &b_Jpsi_Hlt1SingleMuonNoIPDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt1SingleMuonNoIPDecision_TOS", &Jpsi_Hlt1SingleMuonNoIPDecision_TOS, &b_Jpsi_Hlt1SingleMuonNoIPDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt1SingleMuonHighPTDecision_Dec", &Jpsi_Hlt1SingleMuonHighPTDecision_Dec, &b_Jpsi_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt1SingleMuonHighPTDecision_TIS", &Jpsi_Hlt1SingleMuonHighPTDecision_TIS, &b_Jpsi_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt1SingleMuonHighPTDecision_TOS", &Jpsi_Hlt1SingleMuonHighPTDecision_TOS, &b_Jpsi_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt1TrackAllL0Decision_Dec", &Jpsi_Hlt1TrackAllL0Decision_Dec, &b_Jpsi_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt1TrackAllL0Decision_TIS", &Jpsi_Hlt1TrackAllL0Decision_TIS, &b_Jpsi_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt1TrackAllL0Decision_TOS", &Jpsi_Hlt1TrackAllL0Decision_TOS, &b_Jpsi_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt1TrackMuonDecision_Dec", &Jpsi_Hlt1TrackMuonDecision_Dec, &b_Jpsi_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt1TrackMuonDecision_TIS", &Jpsi_Hlt1TrackMuonDecision_TIS, &b_Jpsi_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt1TrackMuonDecision_TOS", &Jpsi_Hlt1TrackMuonDecision_TOS, &b_Jpsi_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt1TrackPhotonDecision_Dec", &Jpsi_Hlt1TrackPhotonDecision_Dec, &b_Jpsi_Hlt1TrackPhotonDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt1TrackPhotonDecision_TIS", &Jpsi_Hlt1TrackPhotonDecision_TIS, &b_Jpsi_Hlt1TrackPhotonDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt1TrackPhotonDecision_TOS", &Jpsi_Hlt1TrackPhotonDecision_TOS, &b_Jpsi_Hlt1TrackPhotonDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt1L0AnyDecision_Dec", &Jpsi_Hlt1L0AnyDecision_Dec, &b_Jpsi_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt1L0AnyDecision_TIS", &Jpsi_Hlt1L0AnyDecision_TIS, &b_Jpsi_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt1L0AnyDecision_TOS", &Jpsi_Hlt1L0AnyDecision_TOS, &b_Jpsi_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2SingleElectronTFLowPtDecision_Dec", &Jpsi_Hlt2SingleElectronTFLowPtDecision_Dec, &b_Jpsi_Hlt2SingleElectronTFLowPtDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2SingleElectronTFLowPtDecision_TIS", &Jpsi_Hlt2SingleElectronTFLowPtDecision_TIS, &b_Jpsi_Hlt2SingleElectronTFLowPtDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2SingleElectronTFLowPtDecision_TOS", &Jpsi_Hlt2SingleElectronTFLowPtDecision_TOS, &b_Jpsi_Hlt2SingleElectronTFLowPtDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2SingleElectronTFHighPtDecision_Dec", &Jpsi_Hlt2SingleElectronTFHighPtDecision_Dec, &b_Jpsi_Hlt2SingleElectronTFHighPtDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2SingleElectronTFHighPtDecision_TIS", &Jpsi_Hlt2SingleElectronTFHighPtDecision_TIS, &b_Jpsi_Hlt2SingleElectronTFHighPtDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2SingleElectronTFHighPtDecision_TOS", &Jpsi_Hlt2SingleElectronTFHighPtDecision_TOS, &b_Jpsi_Hlt2SingleElectronTFHighPtDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiElectronHighMassDecision_Dec", &Jpsi_Hlt2DiElectronHighMassDecision_Dec, &b_Jpsi_Hlt2DiElectronHighMassDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2DiElectronHighMassDecision_TIS", &Jpsi_Hlt2DiElectronHighMassDecision_TIS, &b_Jpsi_Hlt2DiElectronHighMassDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiElectronHighMassDecision_TOS", &Jpsi_Hlt2DiElectronHighMassDecision_TOS, &b_Jpsi_Hlt2DiElectronHighMassDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiElectronBDecision_Dec", &Jpsi_Hlt2DiElectronBDecision_Dec, &b_Jpsi_Hlt2DiElectronBDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2DiElectronBDecision_TIS", &Jpsi_Hlt2DiElectronBDecision_TIS, &b_Jpsi_Hlt2DiElectronBDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiElectronBDecision_TOS", &Jpsi_Hlt2DiElectronBDecision_TOS, &b_Jpsi_Hlt2DiElectronBDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2B2HHLTUnbiasedDecision_Dec", &Jpsi_Hlt2B2HHLTUnbiasedDecision_Dec, &b_Jpsi_Hlt2B2HHLTUnbiasedDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2B2HHLTUnbiasedDecision_TIS", &Jpsi_Hlt2B2HHLTUnbiasedDecision_TIS, &b_Jpsi_Hlt2B2HHLTUnbiasedDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2B2HHLTUnbiasedDecision_TOS", &Jpsi_Hlt2B2HHLTUnbiasedDecision_TOS, &b_Jpsi_Hlt2B2HHLTUnbiasedDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo2BodySimpleDecision_Dec", &Jpsi_Hlt2Topo2BodySimpleDecision_Dec, &b_Jpsi_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo2BodySimpleDecision_TIS", &Jpsi_Hlt2Topo2BodySimpleDecision_TIS, &b_Jpsi_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo2BodySimpleDecision_TOS", &Jpsi_Hlt2Topo2BodySimpleDecision_TOS, &b_Jpsi_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo3BodySimpleDecision_Dec", &Jpsi_Hlt2Topo3BodySimpleDecision_Dec, &b_Jpsi_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo3BodySimpleDecision_TIS", &Jpsi_Hlt2Topo3BodySimpleDecision_TIS, &b_Jpsi_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo3BodySimpleDecision_TOS", &Jpsi_Hlt2Topo3BodySimpleDecision_TOS, &b_Jpsi_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo4BodySimpleDecision_Dec", &Jpsi_Hlt2Topo4BodySimpleDecision_Dec, &b_Jpsi_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo4BodySimpleDecision_TIS", &Jpsi_Hlt2Topo4BodySimpleDecision_TIS, &b_Jpsi_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo4BodySimpleDecision_TOS", &Jpsi_Hlt2Topo4BodySimpleDecision_TOS, &b_Jpsi_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo2BodyBBDTDecision_Dec", &Jpsi_Hlt2Topo2BodyBBDTDecision_Dec, &b_Jpsi_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo2BodyBBDTDecision_TIS", &Jpsi_Hlt2Topo2BodyBBDTDecision_TIS, &b_Jpsi_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo2BodyBBDTDecision_TOS", &Jpsi_Hlt2Topo2BodyBBDTDecision_TOS, &b_Jpsi_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo3BodyBBDTDecision_Dec", &Jpsi_Hlt2Topo3BodyBBDTDecision_Dec, &b_Jpsi_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo3BodyBBDTDecision_TIS", &Jpsi_Hlt2Topo3BodyBBDTDecision_TIS, &b_Jpsi_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo3BodyBBDTDecision_TOS", &Jpsi_Hlt2Topo3BodyBBDTDecision_TOS, &b_Jpsi_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo4BodyBBDTDecision_Dec", &Jpsi_Hlt2Topo4BodyBBDTDecision_Dec, &b_Jpsi_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo4BodyBBDTDecision_TIS", &Jpsi_Hlt2Topo4BodyBBDTDecision_TIS, &b_Jpsi_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2Topo4BodyBBDTDecision_TOS", &Jpsi_Hlt2Topo4BodyBBDTDecision_TOS, &b_Jpsi_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoMu2BodyBBDTDecision_Dec", &Jpsi_Hlt2TopoMu2BodyBBDTDecision_Dec, &b_Jpsi_Hlt2TopoMu2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoMu2BodyBBDTDecision_TIS", &Jpsi_Hlt2TopoMu2BodyBBDTDecision_TIS, &b_Jpsi_Hlt2TopoMu2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoMu2BodyBBDTDecision_TOS", &Jpsi_Hlt2TopoMu2BodyBBDTDecision_TOS, &b_Jpsi_Hlt2TopoMu2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoMu3BodyBBDTDecision_Dec", &Jpsi_Hlt2TopoMu3BodyBBDTDecision_Dec, &b_Jpsi_Hlt2TopoMu3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoMu3BodyBBDTDecision_TIS", &Jpsi_Hlt2TopoMu3BodyBBDTDecision_TIS, &b_Jpsi_Hlt2TopoMu3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoMu3BodyBBDTDecision_TOS", &Jpsi_Hlt2TopoMu3BodyBBDTDecision_TOS, &b_Jpsi_Hlt2TopoMu3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoMu4BodyBBDTDecision_Dec", &Jpsi_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_Jpsi_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoMu4BodyBBDTDecision_TIS", &Jpsi_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_Jpsi_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoMu4BodyBBDTDecision_TOS", &Jpsi_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_Jpsi_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoE2BodyBBDTDecision_Dec", &Jpsi_Hlt2TopoE2BodyBBDTDecision_Dec, &b_Jpsi_Hlt2TopoE2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoE2BodyBBDTDecision_TIS", &Jpsi_Hlt2TopoE2BodyBBDTDecision_TIS, &b_Jpsi_Hlt2TopoE2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoE2BodyBBDTDecision_TOS", &Jpsi_Hlt2TopoE2BodyBBDTDecision_TOS, &b_Jpsi_Hlt2TopoE2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoE3BodyBBDTDecision_Dec", &Jpsi_Hlt2TopoE3BodyBBDTDecision_Dec, &b_Jpsi_Hlt2TopoE3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoE3BodyBBDTDecision_TIS", &Jpsi_Hlt2TopoE3BodyBBDTDecision_TIS, &b_Jpsi_Hlt2TopoE3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoE3BodyBBDTDecision_TOS", &Jpsi_Hlt2TopoE3BodyBBDTDecision_TOS, &b_Jpsi_Hlt2TopoE3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoE4BodyBBDTDecision_Dec", &Jpsi_Hlt2TopoE4BodyBBDTDecision_Dec, &b_Jpsi_Hlt2TopoE4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoE4BodyBBDTDecision_TIS", &Jpsi_Hlt2TopoE4BodyBBDTDecision_TIS, &b_Jpsi_Hlt2TopoE4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2TopoE4BodyBBDTDecision_TOS", &Jpsi_Hlt2TopoE4BodyBBDTDecision_TOS, &b_Jpsi_Hlt2TopoE4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2MuonFromHLT1Decision_Dec", &Jpsi_Hlt2MuonFromHLT1Decision_Dec, &b_Jpsi_Hlt2MuonFromHLT1Decision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2MuonFromHLT1Decision_TIS", &Jpsi_Hlt2MuonFromHLT1Decision_TIS, &b_Jpsi_Hlt2MuonFromHLT1Decision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2MuonFromHLT1Decision_TOS", &Jpsi_Hlt2MuonFromHLT1Decision_TOS, &b_Jpsi_Hlt2MuonFromHLT1Decision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonDecision_Dec", &Jpsi_Hlt2DiMuonDecision_Dec, &b_Jpsi_Hlt2DiMuonDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonDecision_TIS", &Jpsi_Hlt2DiMuonDecision_TIS, &b_Jpsi_Hlt2DiMuonDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonDecision_TOS", &Jpsi_Hlt2DiMuonDecision_TOS, &b_Jpsi_Hlt2DiMuonDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonLowMassDecision_Dec", &Jpsi_Hlt2DiMuonLowMassDecision_Dec, &b_Jpsi_Hlt2DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonLowMassDecision_TIS", &Jpsi_Hlt2DiMuonLowMassDecision_TIS, &b_Jpsi_Hlt2DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonLowMassDecision_TOS", &Jpsi_Hlt2DiMuonLowMassDecision_TOS, &b_Jpsi_Hlt2DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonJPsiDecision_Dec", &Jpsi_Hlt2DiMuonJPsiDecision_Dec, &b_Jpsi_Hlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonJPsiDecision_TIS", &Jpsi_Hlt2DiMuonJPsiDecision_TIS, &b_Jpsi_Hlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonJPsiDecision_TOS", &Jpsi_Hlt2DiMuonJPsiDecision_TOS, &b_Jpsi_Hlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonJPsiHighPTDecision_Dec", &Jpsi_Hlt2DiMuonJPsiHighPTDecision_Dec, &b_Jpsi_Hlt2DiMuonJPsiHighPTDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonJPsiHighPTDecision_TIS", &Jpsi_Hlt2DiMuonJPsiHighPTDecision_TIS, &b_Jpsi_Hlt2DiMuonJPsiHighPTDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonJPsiHighPTDecision_TOS", &Jpsi_Hlt2DiMuonJPsiHighPTDecision_TOS, &b_Jpsi_Hlt2DiMuonJPsiHighPTDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonPsi2SDecision_Dec", &Jpsi_Hlt2DiMuonPsi2SDecision_Dec, &b_Jpsi_Hlt2DiMuonPsi2SDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonPsi2SDecision_TIS", &Jpsi_Hlt2DiMuonPsi2SDecision_TIS, &b_Jpsi_Hlt2DiMuonPsi2SDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonPsi2SDecision_TOS", &Jpsi_Hlt2DiMuonPsi2SDecision_TOS, &b_Jpsi_Hlt2DiMuonPsi2SDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonBDecision_Dec", &Jpsi_Hlt2DiMuonBDecision_Dec, &b_Jpsi_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonBDecision_TIS", &Jpsi_Hlt2DiMuonBDecision_TIS, &b_Jpsi_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2DiMuonBDecision_TOS", &Jpsi_Hlt2DiMuonBDecision_TOS, &b_Jpsi_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("muplus_IPCHI2_OWNPV", &muplus_IPCHI2_OWNPV, &b_muplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("muplus_IP_OWNPV", &muplus_IP_OWNPV, &b_muplus_IP_OWNPV);
   fChain->SetBranchAddress("muplus_MINIP", &muplus_MINIP, &b_muplus_MINIP);
   fChain->SetBranchAddress("muplus_MINIPCHI2", &muplus_MINIPCHI2, &b_muplus_MINIPCHI2);
   fChain->SetBranchAddress("muplus_P", &muplus_P, &b_muplus_P);
   fChain->SetBranchAddress("muplus_PT", &muplus_PT, &b_muplus_PT);
   fChain->SetBranchAddress("muplus_PE", &muplus_PE, &b_muplus_PE);
   fChain->SetBranchAddress("muplus_PX", &muplus_PX, &b_muplus_PX);
   fChain->SetBranchAddress("muplus_PY", &muplus_PY, &b_muplus_PY);
   fChain->SetBranchAddress("muplus_PZ", &muplus_PZ, &b_muplus_PZ);
   fChain->SetBranchAddress("muplus_M", &muplus_M, &b_muplus_M);
   fChain->SetBranchAddress("muplus_NNK", &muplus_NNK, &b_muplus_NNK);
   fChain->SetBranchAddress("muplus_NNmu", &muplus_NNmu, &b_muplus_NNmu);
   fChain->SetBranchAddress("muplus_NNpi", &muplus_NNpi, &b_muplus_NNpi);
   fChain->SetBranchAddress("muplus_PIDmu", &muplus_PIDmu, &b_muplus_PIDmu);
   fChain->SetBranchAddress("muplus_TRACK_CHI2", &muplus_TRACK_CHI2, &b_muplus_TRACK_CHI2);
   fChain->SetBranchAddress("muplus_ghost", &muplus_ghost, &b_muplus_ghost);
   fChain->SetBranchAddress("muplus_L0Global_Dec", &muplus_L0Global_Dec, &b_muplus_L0Global_Dec);
   fChain->SetBranchAddress("muplus_L0Global_TIS", &muplus_L0Global_TIS, &b_muplus_L0Global_TIS);
   fChain->SetBranchAddress("muplus_L0Global_TOS", &muplus_L0Global_TOS, &b_muplus_L0Global_TOS);
   fChain->SetBranchAddress("muplus_Hlt1Global_Dec", &muplus_Hlt1Global_Dec, &b_muplus_Hlt1Global_Dec);
   fChain->SetBranchAddress("muplus_Hlt1Global_TIS", &muplus_Hlt1Global_TIS, &b_muplus_Hlt1Global_TIS);
   fChain->SetBranchAddress("muplus_Hlt1Global_TOS", &muplus_Hlt1Global_TOS, &b_muplus_Hlt1Global_TOS);
   fChain->SetBranchAddress("muplus_Hlt1Phys_Dec", &muplus_Hlt1Phys_Dec, &b_muplus_Hlt1Phys_Dec);
   fChain->SetBranchAddress("muplus_Hlt1Phys_TIS", &muplus_Hlt1Phys_TIS, &b_muplus_Hlt1Phys_TIS);
   fChain->SetBranchAddress("muplus_Hlt1Phys_TOS", &muplus_Hlt1Phys_TOS, &b_muplus_Hlt1Phys_TOS);
   fChain->SetBranchAddress("muplus_Hlt2Global_Dec", &muplus_Hlt2Global_Dec, &b_muplus_Hlt2Global_Dec);
   fChain->SetBranchAddress("muplus_Hlt2Global_TIS", &muplus_Hlt2Global_TIS, &b_muplus_Hlt2Global_TIS);
   fChain->SetBranchAddress("muplus_Hlt2Global_TOS", &muplus_Hlt2Global_TOS, &b_muplus_Hlt2Global_TOS);
   fChain->SetBranchAddress("muplus_Hlt2Phys_Dec", &muplus_Hlt2Phys_Dec, &b_muplus_Hlt2Phys_Dec);
   fChain->SetBranchAddress("muplus_Hlt2Phys_TIS", &muplus_Hlt2Phys_TIS, &b_muplus_Hlt2Phys_TIS);
   fChain->SetBranchAddress("muplus_Hlt2Phys_TOS", &muplus_Hlt2Phys_TOS, &b_muplus_Hlt2Phys_TOS);
   fChain->SetBranchAddress("muplus_L0PhysicsDecision_Dec", &muplus_L0PhysicsDecision_Dec, &b_muplus_L0PhysicsDecision_Dec);
   fChain->SetBranchAddress("muplus_L0PhysicsDecision_TIS", &muplus_L0PhysicsDecision_TIS, &b_muplus_L0PhysicsDecision_TIS);
   fChain->SetBranchAddress("muplus_L0PhysicsDecision_TOS", &muplus_L0PhysicsDecision_TOS, &b_muplus_L0PhysicsDecision_TOS);
   fChain->SetBranchAddress("muplus_L0MuonDecision_Dec", &muplus_L0MuonDecision_Dec, &b_muplus_L0MuonDecision_Dec);
   fChain->SetBranchAddress("muplus_L0MuonDecision_TIS", &muplus_L0MuonDecision_TIS, &b_muplus_L0MuonDecision_TIS);
   fChain->SetBranchAddress("muplus_L0MuonDecision_TOS", &muplus_L0MuonDecision_TOS, &b_muplus_L0MuonDecision_TOS);
   fChain->SetBranchAddress("muplus_L0DiMuonDecision_Dec", &muplus_L0DiMuonDecision_Dec, &b_muplus_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("muplus_L0DiMuonDecision_TIS", &muplus_L0DiMuonDecision_TIS, &b_muplus_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("muplus_L0DiMuonDecision_TOS", &muplus_L0DiMuonDecision_TOS, &b_muplus_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("muplus_L0MuonHighDecision_Dec", &muplus_L0MuonHighDecision_Dec, &b_muplus_L0MuonHighDecision_Dec);
   fChain->SetBranchAddress("muplus_L0MuonHighDecision_TIS", &muplus_L0MuonHighDecision_TIS, &b_muplus_L0MuonHighDecision_TIS);
   fChain->SetBranchAddress("muplus_L0MuonHighDecision_TOS", &muplus_L0MuonHighDecision_TOS, &b_muplus_L0MuonHighDecision_TOS);
   fChain->SetBranchAddress("muplus_L0HadronDecision_Dec", &muplus_L0HadronDecision_Dec, &b_muplus_L0HadronDecision_Dec);
   fChain->SetBranchAddress("muplus_L0HadronDecision_TIS", &muplus_L0HadronDecision_TIS, &b_muplus_L0HadronDecision_TIS);
   fChain->SetBranchAddress("muplus_L0HadronDecision_TOS", &muplus_L0HadronDecision_TOS, &b_muplus_L0HadronDecision_TOS);
   fChain->SetBranchAddress("muplus_L0ElectronDecision_Dec", &muplus_L0ElectronDecision_Dec, &b_muplus_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("muplus_L0ElectronDecision_TIS", &muplus_L0ElectronDecision_TIS, &b_muplus_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("muplus_L0ElectronDecision_TOS", &muplus_L0ElectronDecision_TOS, &b_muplus_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("muplus_L0PhotonDecision_Dec", &muplus_L0PhotonDecision_Dec, &b_muplus_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("muplus_L0PhotonDecision_TIS", &muplus_L0PhotonDecision_TIS, &b_muplus_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("muplus_L0PhotonDecision_TOS", &muplus_L0PhotonDecision_TOS, &b_muplus_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt1DiMuonHighMassDecision_Dec", &muplus_Hlt1DiMuonHighMassDecision_Dec, &b_muplus_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt1DiMuonHighMassDecision_TIS", &muplus_Hlt1DiMuonHighMassDecision_TIS, &b_muplus_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt1DiMuonHighMassDecision_TOS", &muplus_Hlt1DiMuonHighMassDecision_TOS, &b_muplus_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt1DiMuonLowMassDecision_Dec", &muplus_Hlt1DiMuonLowMassDecision_Dec, &b_muplus_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt1DiMuonLowMassDecision_TIS", &muplus_Hlt1DiMuonLowMassDecision_TIS, &b_muplus_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt1DiMuonLowMassDecision_TOS", &muplus_Hlt1DiMuonLowMassDecision_TOS, &b_muplus_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt1SingleMuonNoIPDecision_Dec", &muplus_Hlt1SingleMuonNoIPDecision_Dec, &b_muplus_Hlt1SingleMuonNoIPDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt1SingleMuonNoIPDecision_TIS", &muplus_Hlt1SingleMuonNoIPDecision_TIS, &b_muplus_Hlt1SingleMuonNoIPDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt1SingleMuonNoIPDecision_TOS", &muplus_Hlt1SingleMuonNoIPDecision_TOS, &b_muplus_Hlt1SingleMuonNoIPDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt1SingleMuonHighPTDecision_Dec", &muplus_Hlt1SingleMuonHighPTDecision_Dec, &b_muplus_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt1SingleMuonHighPTDecision_TIS", &muplus_Hlt1SingleMuonHighPTDecision_TIS, &b_muplus_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt1SingleMuonHighPTDecision_TOS", &muplus_Hlt1SingleMuonHighPTDecision_TOS, &b_muplus_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt1TrackAllL0Decision_Dec", &muplus_Hlt1TrackAllL0Decision_Dec, &b_muplus_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("muplus_Hlt1TrackAllL0Decision_TIS", &muplus_Hlt1TrackAllL0Decision_TIS, &b_muplus_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("muplus_Hlt1TrackAllL0Decision_TOS", &muplus_Hlt1TrackAllL0Decision_TOS, &b_muplus_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("muplus_Hlt1TrackMuonDecision_Dec", &muplus_Hlt1TrackMuonDecision_Dec, &b_muplus_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt1TrackMuonDecision_TIS", &muplus_Hlt1TrackMuonDecision_TIS, &b_muplus_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt1TrackMuonDecision_TOS", &muplus_Hlt1TrackMuonDecision_TOS, &b_muplus_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt1TrackPhotonDecision_Dec", &muplus_Hlt1TrackPhotonDecision_Dec, &b_muplus_Hlt1TrackPhotonDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt1TrackPhotonDecision_TIS", &muplus_Hlt1TrackPhotonDecision_TIS, &b_muplus_Hlt1TrackPhotonDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt1TrackPhotonDecision_TOS", &muplus_Hlt1TrackPhotonDecision_TOS, &b_muplus_Hlt1TrackPhotonDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt1L0AnyDecision_Dec", &muplus_Hlt1L0AnyDecision_Dec, &b_muplus_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt1L0AnyDecision_TIS", &muplus_Hlt1L0AnyDecision_TIS, &b_muplus_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt1L0AnyDecision_TOS", &muplus_Hlt1L0AnyDecision_TOS, &b_muplus_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2SingleElectronTFLowPtDecision_Dec", &muplus_Hlt2SingleElectronTFLowPtDecision_Dec, &b_muplus_Hlt2SingleElectronTFLowPtDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2SingleElectronTFLowPtDecision_TIS", &muplus_Hlt2SingleElectronTFLowPtDecision_TIS, &b_muplus_Hlt2SingleElectronTFLowPtDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2SingleElectronTFLowPtDecision_TOS", &muplus_Hlt2SingleElectronTFLowPtDecision_TOS, &b_muplus_Hlt2SingleElectronTFLowPtDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2SingleElectronTFHighPtDecision_Dec", &muplus_Hlt2SingleElectronTFHighPtDecision_Dec, &b_muplus_Hlt2SingleElectronTFHighPtDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2SingleElectronTFHighPtDecision_TIS", &muplus_Hlt2SingleElectronTFHighPtDecision_TIS, &b_muplus_Hlt2SingleElectronTFHighPtDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2SingleElectronTFHighPtDecision_TOS", &muplus_Hlt2SingleElectronTFHighPtDecision_TOS, &b_muplus_Hlt2SingleElectronTFHighPtDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiElectronHighMassDecision_Dec", &muplus_Hlt2DiElectronHighMassDecision_Dec, &b_muplus_Hlt2DiElectronHighMassDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiElectronHighMassDecision_TIS", &muplus_Hlt2DiElectronHighMassDecision_TIS, &b_muplus_Hlt2DiElectronHighMassDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiElectronHighMassDecision_TOS", &muplus_Hlt2DiElectronHighMassDecision_TOS, &b_muplus_Hlt2DiElectronHighMassDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiElectronBDecision_Dec", &muplus_Hlt2DiElectronBDecision_Dec, &b_muplus_Hlt2DiElectronBDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiElectronBDecision_TIS", &muplus_Hlt2DiElectronBDecision_TIS, &b_muplus_Hlt2DiElectronBDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiElectronBDecision_TOS", &muplus_Hlt2DiElectronBDecision_TOS, &b_muplus_Hlt2DiElectronBDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2B2HHLTUnbiasedDecision_Dec", &muplus_Hlt2B2HHLTUnbiasedDecision_Dec, &b_muplus_Hlt2B2HHLTUnbiasedDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2B2HHLTUnbiasedDecision_TIS", &muplus_Hlt2B2HHLTUnbiasedDecision_TIS, &b_muplus_Hlt2B2HHLTUnbiasedDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2B2HHLTUnbiasedDecision_TOS", &muplus_Hlt2B2HHLTUnbiasedDecision_TOS, &b_muplus_Hlt2B2HHLTUnbiasedDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2Topo2BodySimpleDecision_Dec", &muplus_Hlt2Topo2BodySimpleDecision_Dec, &b_muplus_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2Topo2BodySimpleDecision_TIS", &muplus_Hlt2Topo2BodySimpleDecision_TIS, &b_muplus_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2Topo2BodySimpleDecision_TOS", &muplus_Hlt2Topo2BodySimpleDecision_TOS, &b_muplus_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2Topo3BodySimpleDecision_Dec", &muplus_Hlt2Topo3BodySimpleDecision_Dec, &b_muplus_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2Topo3BodySimpleDecision_TIS", &muplus_Hlt2Topo3BodySimpleDecision_TIS, &b_muplus_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2Topo3BodySimpleDecision_TOS", &muplus_Hlt2Topo3BodySimpleDecision_TOS, &b_muplus_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2Topo4BodySimpleDecision_Dec", &muplus_Hlt2Topo4BodySimpleDecision_Dec, &b_muplus_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2Topo4BodySimpleDecision_TIS", &muplus_Hlt2Topo4BodySimpleDecision_TIS, &b_muplus_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2Topo4BodySimpleDecision_TOS", &muplus_Hlt2Topo4BodySimpleDecision_TOS, &b_muplus_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2Topo2BodyBBDTDecision_Dec", &muplus_Hlt2Topo2BodyBBDTDecision_Dec, &b_muplus_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2Topo2BodyBBDTDecision_TIS", &muplus_Hlt2Topo2BodyBBDTDecision_TIS, &b_muplus_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2Topo2BodyBBDTDecision_TOS", &muplus_Hlt2Topo2BodyBBDTDecision_TOS, &b_muplus_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2Topo3BodyBBDTDecision_Dec", &muplus_Hlt2Topo3BodyBBDTDecision_Dec, &b_muplus_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2Topo3BodyBBDTDecision_TIS", &muplus_Hlt2Topo3BodyBBDTDecision_TIS, &b_muplus_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2Topo3BodyBBDTDecision_TOS", &muplus_Hlt2Topo3BodyBBDTDecision_TOS, &b_muplus_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2Topo4BodyBBDTDecision_Dec", &muplus_Hlt2Topo4BodyBBDTDecision_Dec, &b_muplus_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2Topo4BodyBBDTDecision_TIS", &muplus_Hlt2Topo4BodyBBDTDecision_TIS, &b_muplus_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2Topo4BodyBBDTDecision_TOS", &muplus_Hlt2Topo4BodyBBDTDecision_TOS, &b_muplus_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2TopoMu2BodyBBDTDecision_Dec", &muplus_Hlt2TopoMu2BodyBBDTDecision_Dec, &b_muplus_Hlt2TopoMu2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2TopoMu2BodyBBDTDecision_TIS", &muplus_Hlt2TopoMu2BodyBBDTDecision_TIS, &b_muplus_Hlt2TopoMu2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2TopoMu2BodyBBDTDecision_TOS", &muplus_Hlt2TopoMu2BodyBBDTDecision_TOS, &b_muplus_Hlt2TopoMu2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2TopoMu3BodyBBDTDecision_Dec", &muplus_Hlt2TopoMu3BodyBBDTDecision_Dec, &b_muplus_Hlt2TopoMu3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2TopoMu3BodyBBDTDecision_TIS", &muplus_Hlt2TopoMu3BodyBBDTDecision_TIS, &b_muplus_Hlt2TopoMu3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2TopoMu3BodyBBDTDecision_TOS", &muplus_Hlt2TopoMu3BodyBBDTDecision_TOS, &b_muplus_Hlt2TopoMu3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2TopoMu4BodyBBDTDecision_Dec", &muplus_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_muplus_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2TopoMu4BodyBBDTDecision_TIS", &muplus_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_muplus_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2TopoMu4BodyBBDTDecision_TOS", &muplus_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_muplus_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2TopoE2BodyBBDTDecision_Dec", &muplus_Hlt2TopoE2BodyBBDTDecision_Dec, &b_muplus_Hlt2TopoE2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2TopoE2BodyBBDTDecision_TIS", &muplus_Hlt2TopoE2BodyBBDTDecision_TIS, &b_muplus_Hlt2TopoE2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2TopoE2BodyBBDTDecision_TOS", &muplus_Hlt2TopoE2BodyBBDTDecision_TOS, &b_muplus_Hlt2TopoE2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2TopoE3BodyBBDTDecision_Dec", &muplus_Hlt2TopoE3BodyBBDTDecision_Dec, &b_muplus_Hlt2TopoE3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2TopoE3BodyBBDTDecision_TIS", &muplus_Hlt2TopoE3BodyBBDTDecision_TIS, &b_muplus_Hlt2TopoE3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2TopoE3BodyBBDTDecision_TOS", &muplus_Hlt2TopoE3BodyBBDTDecision_TOS, &b_muplus_Hlt2TopoE3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2TopoE4BodyBBDTDecision_Dec", &muplus_Hlt2TopoE4BodyBBDTDecision_Dec, &b_muplus_Hlt2TopoE4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2TopoE4BodyBBDTDecision_TIS", &muplus_Hlt2TopoE4BodyBBDTDecision_TIS, &b_muplus_Hlt2TopoE4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2TopoE4BodyBBDTDecision_TOS", &muplus_Hlt2TopoE4BodyBBDTDecision_TOS, &b_muplus_Hlt2TopoE4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2MuonFromHLT1Decision_Dec", &muplus_Hlt2MuonFromHLT1Decision_Dec, &b_muplus_Hlt2MuonFromHLT1Decision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2MuonFromHLT1Decision_TIS", &muplus_Hlt2MuonFromHLT1Decision_TIS, &b_muplus_Hlt2MuonFromHLT1Decision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2MuonFromHLT1Decision_TOS", &muplus_Hlt2MuonFromHLT1Decision_TOS, &b_muplus_Hlt2MuonFromHLT1Decision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDecision_Dec", &muplus_Hlt2DiMuonDecision_Dec, &b_muplus_Hlt2DiMuonDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDecision_TIS", &muplus_Hlt2DiMuonDecision_TIS, &b_muplus_Hlt2DiMuonDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDecision_TOS", &muplus_Hlt2DiMuonDecision_TOS, &b_muplus_Hlt2DiMuonDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonLowMassDecision_Dec", &muplus_Hlt2DiMuonLowMassDecision_Dec, &b_muplus_Hlt2DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonLowMassDecision_TIS", &muplus_Hlt2DiMuonLowMassDecision_TIS, &b_muplus_Hlt2DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonLowMassDecision_TOS", &muplus_Hlt2DiMuonLowMassDecision_TOS, &b_muplus_Hlt2DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonJPsiDecision_Dec", &muplus_Hlt2DiMuonJPsiDecision_Dec, &b_muplus_Hlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonJPsiDecision_TIS", &muplus_Hlt2DiMuonJPsiDecision_TIS, &b_muplus_Hlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonJPsiDecision_TOS", &muplus_Hlt2DiMuonJPsiDecision_TOS, &b_muplus_Hlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonJPsiHighPTDecision_Dec", &muplus_Hlt2DiMuonJPsiHighPTDecision_Dec, &b_muplus_Hlt2DiMuonJPsiHighPTDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonJPsiHighPTDecision_TIS", &muplus_Hlt2DiMuonJPsiHighPTDecision_TIS, &b_muplus_Hlt2DiMuonJPsiHighPTDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonJPsiHighPTDecision_TOS", &muplus_Hlt2DiMuonJPsiHighPTDecision_TOS, &b_muplus_Hlt2DiMuonJPsiHighPTDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonPsi2SDecision_Dec", &muplus_Hlt2DiMuonPsi2SDecision_Dec, &b_muplus_Hlt2DiMuonPsi2SDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonPsi2SDecision_TIS", &muplus_Hlt2DiMuonPsi2SDecision_TIS, &b_muplus_Hlt2DiMuonPsi2SDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonPsi2SDecision_TOS", &muplus_Hlt2DiMuonPsi2SDecision_TOS, &b_muplus_Hlt2DiMuonPsi2SDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonBDecision_Dec", &muplus_Hlt2DiMuonBDecision_Dec, &b_muplus_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonBDecision_TIS", &muplus_Hlt2DiMuonBDecision_TIS, &b_muplus_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonBDecision_TOS", &muplus_Hlt2DiMuonBDecision_TOS, &b_muplus_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("muminus_IPCHI2_OWNPV", &muminus_IPCHI2_OWNPV, &b_muminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("muminus_IP_OWNPV", &muminus_IP_OWNPV, &b_muminus_IP_OWNPV);
   fChain->SetBranchAddress("muminus_MINIP", &muminus_MINIP, &b_muminus_MINIP);
   fChain->SetBranchAddress("muminus_MINIPCHI2", &muminus_MINIPCHI2, &b_muminus_MINIPCHI2);
   fChain->SetBranchAddress("muminus_P", &muminus_P, &b_muminus_P);
   fChain->SetBranchAddress("muminus_PT", &muminus_PT, &b_muminus_PT);
   fChain->SetBranchAddress("muminus_PE", &muminus_PE, &b_muminus_PE);
   fChain->SetBranchAddress("muminus_PX", &muminus_PX, &b_muminus_PX);
   fChain->SetBranchAddress("muminus_PY", &muminus_PY, &b_muminus_PY);
   fChain->SetBranchAddress("muminus_PZ", &muminus_PZ, &b_muminus_PZ);
   fChain->SetBranchAddress("muminus_M", &muminus_M, &b_muminus_M);
   fChain->SetBranchAddress("muminus_NNK", &muminus_NNK, &b_muminus_NNK);
   fChain->SetBranchAddress("muminus_NNmu", &muminus_NNmu, &b_muminus_NNmu);
   fChain->SetBranchAddress("muminus_NNpi", &muminus_NNpi, &b_muminus_NNpi);
   fChain->SetBranchAddress("muminus_PIDmu", &muminus_PIDmu, &b_muminus_PIDmu);
   fChain->SetBranchAddress("muminus_TRACK_CHI2", &muminus_TRACK_CHI2, &b_muminus_TRACK_CHI2);
   fChain->SetBranchAddress("muminus_ghost", &muminus_ghost, &b_muminus_ghost);
   fChain->SetBranchAddress("muminus_L0Global_Dec", &muminus_L0Global_Dec, &b_muminus_L0Global_Dec);
   fChain->SetBranchAddress("muminus_L0Global_TIS", &muminus_L0Global_TIS, &b_muminus_L0Global_TIS);
   fChain->SetBranchAddress("muminus_L0Global_TOS", &muminus_L0Global_TOS, &b_muminus_L0Global_TOS);
   fChain->SetBranchAddress("muminus_Hlt1Global_Dec", &muminus_Hlt1Global_Dec, &b_muminus_Hlt1Global_Dec);
   fChain->SetBranchAddress("muminus_Hlt1Global_TIS", &muminus_Hlt1Global_TIS, &b_muminus_Hlt1Global_TIS);
   fChain->SetBranchAddress("muminus_Hlt1Global_TOS", &muminus_Hlt1Global_TOS, &b_muminus_Hlt1Global_TOS);
   fChain->SetBranchAddress("muminus_Hlt1Phys_Dec", &muminus_Hlt1Phys_Dec, &b_muminus_Hlt1Phys_Dec);
   fChain->SetBranchAddress("muminus_Hlt1Phys_TIS", &muminus_Hlt1Phys_TIS, &b_muminus_Hlt1Phys_TIS);
   fChain->SetBranchAddress("muminus_Hlt1Phys_TOS", &muminus_Hlt1Phys_TOS, &b_muminus_Hlt1Phys_TOS);
   fChain->SetBranchAddress("muminus_Hlt2Global_Dec", &muminus_Hlt2Global_Dec, &b_muminus_Hlt2Global_Dec);
   fChain->SetBranchAddress("muminus_Hlt2Global_TIS", &muminus_Hlt2Global_TIS, &b_muminus_Hlt2Global_TIS);
   fChain->SetBranchAddress("muminus_Hlt2Global_TOS", &muminus_Hlt2Global_TOS, &b_muminus_Hlt2Global_TOS);
   fChain->SetBranchAddress("muminus_Hlt2Phys_Dec", &muminus_Hlt2Phys_Dec, &b_muminus_Hlt2Phys_Dec);
   fChain->SetBranchAddress("muminus_Hlt2Phys_TIS", &muminus_Hlt2Phys_TIS, &b_muminus_Hlt2Phys_TIS);
   fChain->SetBranchAddress("muminus_Hlt2Phys_TOS", &muminus_Hlt2Phys_TOS, &b_muminus_Hlt2Phys_TOS);
   fChain->SetBranchAddress("muminus_L0PhysicsDecision_Dec", &muminus_L0PhysicsDecision_Dec, &b_muminus_L0PhysicsDecision_Dec);
   fChain->SetBranchAddress("muminus_L0PhysicsDecision_TIS", &muminus_L0PhysicsDecision_TIS, &b_muminus_L0PhysicsDecision_TIS);
   fChain->SetBranchAddress("muminus_L0PhysicsDecision_TOS", &muminus_L0PhysicsDecision_TOS, &b_muminus_L0PhysicsDecision_TOS);
   fChain->SetBranchAddress("muminus_L0MuonDecision_Dec", &muminus_L0MuonDecision_Dec, &b_muminus_L0MuonDecision_Dec);
   fChain->SetBranchAddress("muminus_L0MuonDecision_TIS", &muminus_L0MuonDecision_TIS, &b_muminus_L0MuonDecision_TIS);
   fChain->SetBranchAddress("muminus_L0MuonDecision_TOS", &muminus_L0MuonDecision_TOS, &b_muminus_L0MuonDecision_TOS);
   fChain->SetBranchAddress("muminus_L0DiMuonDecision_Dec", &muminus_L0DiMuonDecision_Dec, &b_muminus_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("muminus_L0DiMuonDecision_TIS", &muminus_L0DiMuonDecision_TIS, &b_muminus_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("muminus_L0DiMuonDecision_TOS", &muminus_L0DiMuonDecision_TOS, &b_muminus_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("muminus_L0MuonHighDecision_Dec", &muminus_L0MuonHighDecision_Dec, &b_muminus_L0MuonHighDecision_Dec);
   fChain->SetBranchAddress("muminus_L0MuonHighDecision_TIS", &muminus_L0MuonHighDecision_TIS, &b_muminus_L0MuonHighDecision_TIS);
   fChain->SetBranchAddress("muminus_L0MuonHighDecision_TOS", &muminus_L0MuonHighDecision_TOS, &b_muminus_L0MuonHighDecision_TOS);
   fChain->SetBranchAddress("muminus_L0HadronDecision_Dec", &muminus_L0HadronDecision_Dec, &b_muminus_L0HadronDecision_Dec);
   fChain->SetBranchAddress("muminus_L0HadronDecision_TIS", &muminus_L0HadronDecision_TIS, &b_muminus_L0HadronDecision_TIS);
   fChain->SetBranchAddress("muminus_L0HadronDecision_TOS", &muminus_L0HadronDecision_TOS, &b_muminus_L0HadronDecision_TOS);
   fChain->SetBranchAddress("muminus_L0ElectronDecision_Dec", &muminus_L0ElectronDecision_Dec, &b_muminus_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("muminus_L0ElectronDecision_TIS", &muminus_L0ElectronDecision_TIS, &b_muminus_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("muminus_L0ElectronDecision_TOS", &muminus_L0ElectronDecision_TOS, &b_muminus_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("muminus_L0PhotonDecision_Dec", &muminus_L0PhotonDecision_Dec, &b_muminus_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("muminus_L0PhotonDecision_TIS", &muminus_L0PhotonDecision_TIS, &b_muminus_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("muminus_L0PhotonDecision_TOS", &muminus_L0PhotonDecision_TOS, &b_muminus_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt1DiMuonHighMassDecision_Dec", &muminus_Hlt1DiMuonHighMassDecision_Dec, &b_muminus_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt1DiMuonHighMassDecision_TIS", &muminus_Hlt1DiMuonHighMassDecision_TIS, &b_muminus_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt1DiMuonHighMassDecision_TOS", &muminus_Hlt1DiMuonHighMassDecision_TOS, &b_muminus_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt1DiMuonLowMassDecision_Dec", &muminus_Hlt1DiMuonLowMassDecision_Dec, &b_muminus_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt1DiMuonLowMassDecision_TIS", &muminus_Hlt1DiMuonLowMassDecision_TIS, &b_muminus_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt1DiMuonLowMassDecision_TOS", &muminus_Hlt1DiMuonLowMassDecision_TOS, &b_muminus_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt1SingleMuonNoIPDecision_Dec", &muminus_Hlt1SingleMuonNoIPDecision_Dec, &b_muminus_Hlt1SingleMuonNoIPDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt1SingleMuonNoIPDecision_TIS", &muminus_Hlt1SingleMuonNoIPDecision_TIS, &b_muminus_Hlt1SingleMuonNoIPDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt1SingleMuonNoIPDecision_TOS", &muminus_Hlt1SingleMuonNoIPDecision_TOS, &b_muminus_Hlt1SingleMuonNoIPDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt1SingleMuonHighPTDecision_Dec", &muminus_Hlt1SingleMuonHighPTDecision_Dec, &b_muminus_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt1SingleMuonHighPTDecision_TIS", &muminus_Hlt1SingleMuonHighPTDecision_TIS, &b_muminus_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt1SingleMuonHighPTDecision_TOS", &muminus_Hlt1SingleMuonHighPTDecision_TOS, &b_muminus_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt1TrackAllL0Decision_Dec", &muminus_Hlt1TrackAllL0Decision_Dec, &b_muminus_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("muminus_Hlt1TrackAllL0Decision_TIS", &muminus_Hlt1TrackAllL0Decision_TIS, &b_muminus_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("muminus_Hlt1TrackAllL0Decision_TOS", &muminus_Hlt1TrackAllL0Decision_TOS, &b_muminus_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("muminus_Hlt1TrackMuonDecision_Dec", &muminus_Hlt1TrackMuonDecision_Dec, &b_muminus_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt1TrackMuonDecision_TIS", &muminus_Hlt1TrackMuonDecision_TIS, &b_muminus_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt1TrackMuonDecision_TOS", &muminus_Hlt1TrackMuonDecision_TOS, &b_muminus_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt1TrackPhotonDecision_Dec", &muminus_Hlt1TrackPhotonDecision_Dec, &b_muminus_Hlt1TrackPhotonDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt1TrackPhotonDecision_TIS", &muminus_Hlt1TrackPhotonDecision_TIS, &b_muminus_Hlt1TrackPhotonDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt1TrackPhotonDecision_TOS", &muminus_Hlt1TrackPhotonDecision_TOS, &b_muminus_Hlt1TrackPhotonDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt1L0AnyDecision_Dec", &muminus_Hlt1L0AnyDecision_Dec, &b_muminus_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt1L0AnyDecision_TIS", &muminus_Hlt1L0AnyDecision_TIS, &b_muminus_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt1L0AnyDecision_TOS", &muminus_Hlt1L0AnyDecision_TOS, &b_muminus_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2SingleElectronTFLowPtDecision_Dec", &muminus_Hlt2SingleElectronTFLowPtDecision_Dec, &b_muminus_Hlt2SingleElectronTFLowPtDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2SingleElectronTFLowPtDecision_TIS", &muminus_Hlt2SingleElectronTFLowPtDecision_TIS, &b_muminus_Hlt2SingleElectronTFLowPtDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2SingleElectronTFLowPtDecision_TOS", &muminus_Hlt2SingleElectronTFLowPtDecision_TOS, &b_muminus_Hlt2SingleElectronTFLowPtDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2SingleElectronTFHighPtDecision_Dec", &muminus_Hlt2SingleElectronTFHighPtDecision_Dec, &b_muminus_Hlt2SingleElectronTFHighPtDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2SingleElectronTFHighPtDecision_TIS", &muminus_Hlt2SingleElectronTFHighPtDecision_TIS, &b_muminus_Hlt2SingleElectronTFHighPtDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2SingleElectronTFHighPtDecision_TOS", &muminus_Hlt2SingleElectronTFHighPtDecision_TOS, &b_muminus_Hlt2SingleElectronTFHighPtDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiElectronHighMassDecision_Dec", &muminus_Hlt2DiElectronHighMassDecision_Dec, &b_muminus_Hlt2DiElectronHighMassDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiElectronHighMassDecision_TIS", &muminus_Hlt2DiElectronHighMassDecision_TIS, &b_muminus_Hlt2DiElectronHighMassDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiElectronHighMassDecision_TOS", &muminus_Hlt2DiElectronHighMassDecision_TOS, &b_muminus_Hlt2DiElectronHighMassDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiElectronBDecision_Dec", &muminus_Hlt2DiElectronBDecision_Dec, &b_muminus_Hlt2DiElectronBDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiElectronBDecision_TIS", &muminus_Hlt2DiElectronBDecision_TIS, &b_muminus_Hlt2DiElectronBDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiElectronBDecision_TOS", &muminus_Hlt2DiElectronBDecision_TOS, &b_muminus_Hlt2DiElectronBDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2B2HHLTUnbiasedDecision_Dec", &muminus_Hlt2B2HHLTUnbiasedDecision_Dec, &b_muminus_Hlt2B2HHLTUnbiasedDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2B2HHLTUnbiasedDecision_TIS", &muminus_Hlt2B2HHLTUnbiasedDecision_TIS, &b_muminus_Hlt2B2HHLTUnbiasedDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2B2HHLTUnbiasedDecision_TOS", &muminus_Hlt2B2HHLTUnbiasedDecision_TOS, &b_muminus_Hlt2B2HHLTUnbiasedDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2Topo2BodySimpleDecision_Dec", &muminus_Hlt2Topo2BodySimpleDecision_Dec, &b_muminus_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2Topo2BodySimpleDecision_TIS", &muminus_Hlt2Topo2BodySimpleDecision_TIS, &b_muminus_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2Topo2BodySimpleDecision_TOS", &muminus_Hlt2Topo2BodySimpleDecision_TOS, &b_muminus_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2Topo3BodySimpleDecision_Dec", &muminus_Hlt2Topo3BodySimpleDecision_Dec, &b_muminus_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2Topo3BodySimpleDecision_TIS", &muminus_Hlt2Topo3BodySimpleDecision_TIS, &b_muminus_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2Topo3BodySimpleDecision_TOS", &muminus_Hlt2Topo3BodySimpleDecision_TOS, &b_muminus_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2Topo4BodySimpleDecision_Dec", &muminus_Hlt2Topo4BodySimpleDecision_Dec, &b_muminus_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2Topo4BodySimpleDecision_TIS", &muminus_Hlt2Topo4BodySimpleDecision_TIS, &b_muminus_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2Topo4BodySimpleDecision_TOS", &muminus_Hlt2Topo4BodySimpleDecision_TOS, &b_muminus_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2Topo2BodyBBDTDecision_Dec", &muminus_Hlt2Topo2BodyBBDTDecision_Dec, &b_muminus_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2Topo2BodyBBDTDecision_TIS", &muminus_Hlt2Topo2BodyBBDTDecision_TIS, &b_muminus_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2Topo2BodyBBDTDecision_TOS", &muminus_Hlt2Topo2BodyBBDTDecision_TOS, &b_muminus_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2Topo3BodyBBDTDecision_Dec", &muminus_Hlt2Topo3BodyBBDTDecision_Dec, &b_muminus_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2Topo3BodyBBDTDecision_TIS", &muminus_Hlt2Topo3BodyBBDTDecision_TIS, &b_muminus_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2Topo3BodyBBDTDecision_TOS", &muminus_Hlt2Topo3BodyBBDTDecision_TOS, &b_muminus_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2Topo4BodyBBDTDecision_Dec", &muminus_Hlt2Topo4BodyBBDTDecision_Dec, &b_muminus_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2Topo4BodyBBDTDecision_TIS", &muminus_Hlt2Topo4BodyBBDTDecision_TIS, &b_muminus_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2Topo4BodyBBDTDecision_TOS", &muminus_Hlt2Topo4BodyBBDTDecision_TOS, &b_muminus_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2TopoMu2BodyBBDTDecision_Dec", &muminus_Hlt2TopoMu2BodyBBDTDecision_Dec, &b_muminus_Hlt2TopoMu2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2TopoMu2BodyBBDTDecision_TIS", &muminus_Hlt2TopoMu2BodyBBDTDecision_TIS, &b_muminus_Hlt2TopoMu2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2TopoMu2BodyBBDTDecision_TOS", &muminus_Hlt2TopoMu2BodyBBDTDecision_TOS, &b_muminus_Hlt2TopoMu2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2TopoMu3BodyBBDTDecision_Dec", &muminus_Hlt2TopoMu3BodyBBDTDecision_Dec, &b_muminus_Hlt2TopoMu3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2TopoMu3BodyBBDTDecision_TIS", &muminus_Hlt2TopoMu3BodyBBDTDecision_TIS, &b_muminus_Hlt2TopoMu3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2TopoMu3BodyBBDTDecision_TOS", &muminus_Hlt2TopoMu3BodyBBDTDecision_TOS, &b_muminus_Hlt2TopoMu3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2TopoMu4BodyBBDTDecision_Dec", &muminus_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_muminus_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2TopoMu4BodyBBDTDecision_TIS", &muminus_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_muminus_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2TopoMu4BodyBBDTDecision_TOS", &muminus_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_muminus_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2TopoE2BodyBBDTDecision_Dec", &muminus_Hlt2TopoE2BodyBBDTDecision_Dec, &b_muminus_Hlt2TopoE2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2TopoE2BodyBBDTDecision_TIS", &muminus_Hlt2TopoE2BodyBBDTDecision_TIS, &b_muminus_Hlt2TopoE2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2TopoE2BodyBBDTDecision_TOS", &muminus_Hlt2TopoE2BodyBBDTDecision_TOS, &b_muminus_Hlt2TopoE2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2TopoE3BodyBBDTDecision_Dec", &muminus_Hlt2TopoE3BodyBBDTDecision_Dec, &b_muminus_Hlt2TopoE3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2TopoE3BodyBBDTDecision_TIS", &muminus_Hlt2TopoE3BodyBBDTDecision_TIS, &b_muminus_Hlt2TopoE3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2TopoE3BodyBBDTDecision_TOS", &muminus_Hlt2TopoE3BodyBBDTDecision_TOS, &b_muminus_Hlt2TopoE3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2TopoE4BodyBBDTDecision_Dec", &muminus_Hlt2TopoE4BodyBBDTDecision_Dec, &b_muminus_Hlt2TopoE4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2TopoE4BodyBBDTDecision_TIS", &muminus_Hlt2TopoE4BodyBBDTDecision_TIS, &b_muminus_Hlt2TopoE4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2TopoE4BodyBBDTDecision_TOS", &muminus_Hlt2TopoE4BodyBBDTDecision_TOS, &b_muminus_Hlt2TopoE4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2MuonFromHLT1Decision_Dec", &muminus_Hlt2MuonFromHLT1Decision_Dec, &b_muminus_Hlt2MuonFromHLT1Decision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2MuonFromHLT1Decision_TIS", &muminus_Hlt2MuonFromHLT1Decision_TIS, &b_muminus_Hlt2MuonFromHLT1Decision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2MuonFromHLT1Decision_TOS", &muminus_Hlt2MuonFromHLT1Decision_TOS, &b_muminus_Hlt2MuonFromHLT1Decision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDecision_Dec", &muminus_Hlt2DiMuonDecision_Dec, &b_muminus_Hlt2DiMuonDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDecision_TIS", &muminus_Hlt2DiMuonDecision_TIS, &b_muminus_Hlt2DiMuonDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDecision_TOS", &muminus_Hlt2DiMuonDecision_TOS, &b_muminus_Hlt2DiMuonDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonLowMassDecision_Dec", &muminus_Hlt2DiMuonLowMassDecision_Dec, &b_muminus_Hlt2DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonLowMassDecision_TIS", &muminus_Hlt2DiMuonLowMassDecision_TIS, &b_muminus_Hlt2DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonLowMassDecision_TOS", &muminus_Hlt2DiMuonLowMassDecision_TOS, &b_muminus_Hlt2DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonJPsiDecision_Dec", &muminus_Hlt2DiMuonJPsiDecision_Dec, &b_muminus_Hlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonJPsiDecision_TIS", &muminus_Hlt2DiMuonJPsiDecision_TIS, &b_muminus_Hlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonJPsiDecision_TOS", &muminus_Hlt2DiMuonJPsiDecision_TOS, &b_muminus_Hlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonJPsiHighPTDecision_Dec", &muminus_Hlt2DiMuonJPsiHighPTDecision_Dec, &b_muminus_Hlt2DiMuonJPsiHighPTDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonJPsiHighPTDecision_TIS", &muminus_Hlt2DiMuonJPsiHighPTDecision_TIS, &b_muminus_Hlt2DiMuonJPsiHighPTDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonJPsiHighPTDecision_TOS", &muminus_Hlt2DiMuonJPsiHighPTDecision_TOS, &b_muminus_Hlt2DiMuonJPsiHighPTDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonPsi2SDecision_Dec", &muminus_Hlt2DiMuonPsi2SDecision_Dec, &b_muminus_Hlt2DiMuonPsi2SDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonPsi2SDecision_TIS", &muminus_Hlt2DiMuonPsi2SDecision_TIS, &b_muminus_Hlt2DiMuonPsi2SDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonPsi2SDecision_TOS", &muminus_Hlt2DiMuonPsi2SDecision_TOS, &b_muminus_Hlt2DiMuonPsi2SDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonBDecision_Dec", &muminus_Hlt2DiMuonBDecision_Dec, &b_muminus_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonBDecision_TIS", &muminus_Hlt2DiMuonBDecision_TIS, &b_muminus_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonBDecision_TOS", &muminus_Hlt2DiMuonBDecision_TOS, &b_muminus_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("Kplus_IPCHI2_OWNPV", &Kplus_IPCHI2_OWNPV, &b_Kplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kplus_IP_OWNPV", &Kplus_IP_OWNPV, &b_Kplus_IP_OWNPV);
   fChain->SetBranchAddress("Kplus_MINIP", &Kplus_MINIP, &b_Kplus_MINIP);
   fChain->SetBranchAddress("Kplus_MINIPCHI2", &Kplus_MINIPCHI2, &b_Kplus_MINIPCHI2);
   fChain->SetBranchAddress("Kplus_P", &Kplus_P, &b_Kplus_P);
   fChain->SetBranchAddress("Kplus_PT", &Kplus_PT, &b_Kplus_PT);
   fChain->SetBranchAddress("Kplus_PE", &Kplus_PE, &b_Kplus_PE);
   fChain->SetBranchAddress("Kplus_PX", &Kplus_PX, &b_Kplus_PX);
   fChain->SetBranchAddress("Kplus_PY", &Kplus_PY, &b_Kplus_PY);
   fChain->SetBranchAddress("Kplus_PZ", &Kplus_PZ, &b_Kplus_PZ);
   fChain->SetBranchAddress("Kplus_M", &Kplus_M, &b_Kplus_M);
   fChain->SetBranchAddress("Kplus_NNK", &Kplus_NNK, &b_Kplus_NNK);
   fChain->SetBranchAddress("Kplus_NNKmu", &Kplus_NNKmu, &b_Kplus_NNKmu);
   fChain->SetBranchAddress("Kplus_NNKpi", &Kplus_NNKpi, &b_Kplus_NNKpi);
   fChain->SetBranchAddress("Kplus_NNmu", &Kplus_NNmu, &b_Kplus_NNmu);
   fChain->SetBranchAddress("Kplus_NNpi", &Kplus_NNpi, &b_Kplus_NNpi);
   fChain->SetBranchAddress("Kplus_PIDK", &Kplus_PIDK, &b_Kplus_PIDK);
   fChain->SetBranchAddress("Kplus_PIDmu", &Kplus_PIDmu, &b_Kplus_PIDmu);
   fChain->SetBranchAddress("Kplus_TRACK_CHI2", &Kplus_TRACK_CHI2, &b_Kplus_TRACK_CHI2);
   fChain->SetBranchAddress("Kplus_ghost", &Kplus_ghost, &b_Kplus_ghost);
   fChain->SetBranchAddress("Kplus_inMuon", &Kplus_inMuon, &b_Kplus_inMuon);
   fChain->SetBranchAddress("Kplus_isMuon", &Kplus_isMuon, &b_Kplus_isMuon);
   fChain->SetBranchAddress("Kplus_isMuonLoose", &Kplus_isMuonLoose, &b_Kplus_isMuonLoose);
   fChain->SetBranchAddress("Kplus_nTT", &Kplus_nTT, &b_Kplus_nTT);
   fChain->SetBranchAddress("Kplus_L0Global_Dec", &Kplus_L0Global_Dec, &b_Kplus_L0Global_Dec);
   fChain->SetBranchAddress("Kplus_L0Global_TIS", &Kplus_L0Global_TIS, &b_Kplus_L0Global_TIS);
   fChain->SetBranchAddress("Kplus_L0Global_TOS", &Kplus_L0Global_TOS, &b_Kplus_L0Global_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1Global_Dec", &Kplus_Hlt1Global_Dec, &b_Kplus_Hlt1Global_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1Global_TIS", &Kplus_Hlt1Global_TIS, &b_Kplus_Hlt1Global_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1Global_TOS", &Kplus_Hlt1Global_TOS, &b_Kplus_Hlt1Global_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1Phys_Dec", &Kplus_Hlt1Phys_Dec, &b_Kplus_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1Phys_TIS", &Kplus_Hlt1Phys_TIS, &b_Kplus_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1Phys_TOS", &Kplus_Hlt1Phys_TOS, &b_Kplus_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Global_Dec", &Kplus_Hlt2Global_Dec, &b_Kplus_Hlt2Global_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Global_TIS", &Kplus_Hlt2Global_TIS, &b_Kplus_Hlt2Global_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Global_TOS", &Kplus_Hlt2Global_TOS, &b_Kplus_Hlt2Global_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Phys_Dec", &Kplus_Hlt2Phys_Dec, &b_Kplus_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Phys_TIS", &Kplus_Hlt2Phys_TIS, &b_Kplus_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Phys_TOS", &Kplus_Hlt2Phys_TOS, &b_Kplus_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Kplus_L0PhysicsDecision_Dec", &Kplus_L0PhysicsDecision_Dec, &b_Kplus_L0PhysicsDecision_Dec);
   fChain->SetBranchAddress("Kplus_L0PhysicsDecision_TIS", &Kplus_L0PhysicsDecision_TIS, &b_Kplus_L0PhysicsDecision_TIS);
   fChain->SetBranchAddress("Kplus_L0PhysicsDecision_TOS", &Kplus_L0PhysicsDecision_TOS, &b_Kplus_L0PhysicsDecision_TOS);
   fChain->SetBranchAddress("Kplus_L0MuonDecision_Dec", &Kplus_L0MuonDecision_Dec, &b_Kplus_L0MuonDecision_Dec);
   fChain->SetBranchAddress("Kplus_L0MuonDecision_TIS", &Kplus_L0MuonDecision_TIS, &b_Kplus_L0MuonDecision_TIS);
   fChain->SetBranchAddress("Kplus_L0MuonDecision_TOS", &Kplus_L0MuonDecision_TOS, &b_Kplus_L0MuonDecision_TOS);
   fChain->SetBranchAddress("Kplus_L0DiMuonDecision_Dec", &Kplus_L0DiMuonDecision_Dec, &b_Kplus_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("Kplus_L0DiMuonDecision_TIS", &Kplus_L0DiMuonDecision_TIS, &b_Kplus_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("Kplus_L0DiMuonDecision_TOS", &Kplus_L0DiMuonDecision_TOS, &b_Kplus_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("Kplus_L0MuonHighDecision_Dec", &Kplus_L0MuonHighDecision_Dec, &b_Kplus_L0MuonHighDecision_Dec);
   fChain->SetBranchAddress("Kplus_L0MuonHighDecision_TIS", &Kplus_L0MuonHighDecision_TIS, &b_Kplus_L0MuonHighDecision_TIS);
   fChain->SetBranchAddress("Kplus_L0MuonHighDecision_TOS", &Kplus_L0MuonHighDecision_TOS, &b_Kplus_L0MuonHighDecision_TOS);
   fChain->SetBranchAddress("Kplus_L0HadronDecision_Dec", &Kplus_L0HadronDecision_Dec, &b_Kplus_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Kplus_L0HadronDecision_TIS", &Kplus_L0HadronDecision_TIS, &b_Kplus_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Kplus_L0HadronDecision_TOS", &Kplus_L0HadronDecision_TOS, &b_Kplus_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Kplus_L0ElectronDecision_Dec", &Kplus_L0ElectronDecision_Dec, &b_Kplus_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("Kplus_L0ElectronDecision_TIS", &Kplus_L0ElectronDecision_TIS, &b_Kplus_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("Kplus_L0ElectronDecision_TOS", &Kplus_L0ElectronDecision_TOS, &b_Kplus_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("Kplus_L0PhotonDecision_Dec", &Kplus_L0PhotonDecision_Dec, &b_Kplus_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("Kplus_L0PhotonDecision_TIS", &Kplus_L0PhotonDecision_TIS, &b_Kplus_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("Kplus_L0PhotonDecision_TOS", &Kplus_L0PhotonDecision_TOS, &b_Kplus_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1DiMuonHighMassDecision_Dec", &Kplus_Hlt1DiMuonHighMassDecision_Dec, &b_Kplus_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1DiMuonHighMassDecision_TIS", &Kplus_Hlt1DiMuonHighMassDecision_TIS, &b_Kplus_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1DiMuonHighMassDecision_TOS", &Kplus_Hlt1DiMuonHighMassDecision_TOS, &b_Kplus_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1DiMuonLowMassDecision_Dec", &Kplus_Hlt1DiMuonLowMassDecision_Dec, &b_Kplus_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1DiMuonLowMassDecision_TIS", &Kplus_Hlt1DiMuonLowMassDecision_TIS, &b_Kplus_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1DiMuonLowMassDecision_TOS", &Kplus_Hlt1DiMuonLowMassDecision_TOS, &b_Kplus_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1SingleMuonNoIPDecision_Dec", &Kplus_Hlt1SingleMuonNoIPDecision_Dec, &b_Kplus_Hlt1SingleMuonNoIPDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1SingleMuonNoIPDecision_TIS", &Kplus_Hlt1SingleMuonNoIPDecision_TIS, &b_Kplus_Hlt1SingleMuonNoIPDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1SingleMuonNoIPDecision_TOS", &Kplus_Hlt1SingleMuonNoIPDecision_TOS, &b_Kplus_Hlt1SingleMuonNoIPDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1SingleMuonHighPTDecision_Dec", &Kplus_Hlt1SingleMuonHighPTDecision_Dec, &b_Kplus_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1SingleMuonHighPTDecision_TIS", &Kplus_Hlt1SingleMuonHighPTDecision_TIS, &b_Kplus_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1SingleMuonHighPTDecision_TOS", &Kplus_Hlt1SingleMuonHighPTDecision_TOS, &b_Kplus_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1TrackAllL0Decision_Dec", &Kplus_Hlt1TrackAllL0Decision_Dec, &b_Kplus_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1TrackAllL0Decision_TIS", &Kplus_Hlt1TrackAllL0Decision_TIS, &b_Kplus_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1TrackAllL0Decision_TOS", &Kplus_Hlt1TrackAllL0Decision_TOS, &b_Kplus_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1TrackMuonDecision_Dec", &Kplus_Hlt1TrackMuonDecision_Dec, &b_Kplus_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1TrackMuonDecision_TIS", &Kplus_Hlt1TrackMuonDecision_TIS, &b_Kplus_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1TrackMuonDecision_TOS", &Kplus_Hlt1TrackMuonDecision_TOS, &b_Kplus_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1TrackPhotonDecision_Dec", &Kplus_Hlt1TrackPhotonDecision_Dec, &b_Kplus_Hlt1TrackPhotonDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1TrackPhotonDecision_TIS", &Kplus_Hlt1TrackPhotonDecision_TIS, &b_Kplus_Hlt1TrackPhotonDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1TrackPhotonDecision_TOS", &Kplus_Hlt1TrackPhotonDecision_TOS, &b_Kplus_Hlt1TrackPhotonDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1L0AnyDecision_Dec", &Kplus_Hlt1L0AnyDecision_Dec, &b_Kplus_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1L0AnyDecision_TIS", &Kplus_Hlt1L0AnyDecision_TIS, &b_Kplus_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1L0AnyDecision_TOS", &Kplus_Hlt1L0AnyDecision_TOS, &b_Kplus_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2SingleElectronTFLowPtDecision_Dec", &Kplus_Hlt2SingleElectronTFLowPtDecision_Dec, &b_Kplus_Hlt2SingleElectronTFLowPtDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2SingleElectronTFLowPtDecision_TIS", &Kplus_Hlt2SingleElectronTFLowPtDecision_TIS, &b_Kplus_Hlt2SingleElectronTFLowPtDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2SingleElectronTFLowPtDecision_TOS", &Kplus_Hlt2SingleElectronTFLowPtDecision_TOS, &b_Kplus_Hlt2SingleElectronTFLowPtDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2SingleElectronTFHighPtDecision_Dec", &Kplus_Hlt2SingleElectronTFHighPtDecision_Dec, &b_Kplus_Hlt2SingleElectronTFHighPtDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2SingleElectronTFHighPtDecision_TIS", &Kplus_Hlt2SingleElectronTFHighPtDecision_TIS, &b_Kplus_Hlt2SingleElectronTFHighPtDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2SingleElectronTFHighPtDecision_TOS", &Kplus_Hlt2SingleElectronTFHighPtDecision_TOS, &b_Kplus_Hlt2SingleElectronTFHighPtDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2DiElectronHighMassDecision_Dec", &Kplus_Hlt2DiElectronHighMassDecision_Dec, &b_Kplus_Hlt2DiElectronHighMassDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2DiElectronHighMassDecision_TIS", &Kplus_Hlt2DiElectronHighMassDecision_TIS, &b_Kplus_Hlt2DiElectronHighMassDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2DiElectronHighMassDecision_TOS", &Kplus_Hlt2DiElectronHighMassDecision_TOS, &b_Kplus_Hlt2DiElectronHighMassDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2DiElectronBDecision_Dec", &Kplus_Hlt2DiElectronBDecision_Dec, &b_Kplus_Hlt2DiElectronBDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2DiElectronBDecision_TIS", &Kplus_Hlt2DiElectronBDecision_TIS, &b_Kplus_Hlt2DiElectronBDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2DiElectronBDecision_TOS", &Kplus_Hlt2DiElectronBDecision_TOS, &b_Kplus_Hlt2DiElectronBDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2B2HHLTUnbiasedDecision_Dec", &Kplus_Hlt2B2HHLTUnbiasedDecision_Dec, &b_Kplus_Hlt2B2HHLTUnbiasedDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2B2HHLTUnbiasedDecision_TIS", &Kplus_Hlt2B2HHLTUnbiasedDecision_TIS, &b_Kplus_Hlt2B2HHLTUnbiasedDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2B2HHLTUnbiasedDecision_TOS", &Kplus_Hlt2B2HHLTUnbiasedDecision_TOS, &b_Kplus_Hlt2B2HHLTUnbiasedDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo2BodySimpleDecision_Dec", &Kplus_Hlt2Topo2BodySimpleDecision_Dec, &b_Kplus_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Topo2BodySimpleDecision_TIS", &Kplus_Hlt2Topo2BodySimpleDecision_TIS, &b_Kplus_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo2BodySimpleDecision_TOS", &Kplus_Hlt2Topo2BodySimpleDecision_TOS, &b_Kplus_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo3BodySimpleDecision_Dec", &Kplus_Hlt2Topo3BodySimpleDecision_Dec, &b_Kplus_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Topo3BodySimpleDecision_TIS", &Kplus_Hlt2Topo3BodySimpleDecision_TIS, &b_Kplus_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo3BodySimpleDecision_TOS", &Kplus_Hlt2Topo3BodySimpleDecision_TOS, &b_Kplus_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo4BodySimpleDecision_Dec", &Kplus_Hlt2Topo4BodySimpleDecision_Dec, &b_Kplus_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Topo4BodySimpleDecision_TIS", &Kplus_Hlt2Topo4BodySimpleDecision_TIS, &b_Kplus_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo4BodySimpleDecision_TOS", &Kplus_Hlt2Topo4BodySimpleDecision_TOS, &b_Kplus_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo2BodyBBDTDecision_Dec", &Kplus_Hlt2Topo2BodyBBDTDecision_Dec, &b_Kplus_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Topo2BodyBBDTDecision_TIS", &Kplus_Hlt2Topo2BodyBBDTDecision_TIS, &b_Kplus_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo2BodyBBDTDecision_TOS", &Kplus_Hlt2Topo2BodyBBDTDecision_TOS, &b_Kplus_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo3BodyBBDTDecision_Dec", &Kplus_Hlt2Topo3BodyBBDTDecision_Dec, &b_Kplus_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Topo3BodyBBDTDecision_TIS", &Kplus_Hlt2Topo3BodyBBDTDecision_TIS, &b_Kplus_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo3BodyBBDTDecision_TOS", &Kplus_Hlt2Topo3BodyBBDTDecision_TOS, &b_Kplus_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo4BodyBBDTDecision_Dec", &Kplus_Hlt2Topo4BodyBBDTDecision_Dec, &b_Kplus_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Topo4BodyBBDTDecision_TIS", &Kplus_Hlt2Topo4BodyBBDTDecision_TIS, &b_Kplus_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo4BodyBBDTDecision_TOS", &Kplus_Hlt2Topo4BodyBBDTDecision_TOS, &b_Kplus_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoMu2BodyBBDTDecision_Dec", &Kplus_Hlt2TopoMu2BodyBBDTDecision_Dec, &b_Kplus_Hlt2TopoMu2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2TopoMu2BodyBBDTDecision_TIS", &Kplus_Hlt2TopoMu2BodyBBDTDecision_TIS, &b_Kplus_Hlt2TopoMu2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoMu2BodyBBDTDecision_TOS", &Kplus_Hlt2TopoMu2BodyBBDTDecision_TOS, &b_Kplus_Hlt2TopoMu2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoMu3BodyBBDTDecision_Dec", &Kplus_Hlt2TopoMu3BodyBBDTDecision_Dec, &b_Kplus_Hlt2TopoMu3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2TopoMu3BodyBBDTDecision_TIS", &Kplus_Hlt2TopoMu3BodyBBDTDecision_TIS, &b_Kplus_Hlt2TopoMu3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoMu3BodyBBDTDecision_TOS", &Kplus_Hlt2TopoMu3BodyBBDTDecision_TOS, &b_Kplus_Hlt2TopoMu3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoMu4BodyBBDTDecision_Dec", &Kplus_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_Kplus_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2TopoMu4BodyBBDTDecision_TIS", &Kplus_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_Kplus_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoMu4BodyBBDTDecision_TOS", &Kplus_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_Kplus_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoE2BodyBBDTDecision_Dec", &Kplus_Hlt2TopoE2BodyBBDTDecision_Dec, &b_Kplus_Hlt2TopoE2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2TopoE2BodyBBDTDecision_TIS", &Kplus_Hlt2TopoE2BodyBBDTDecision_TIS, &b_Kplus_Hlt2TopoE2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoE2BodyBBDTDecision_TOS", &Kplus_Hlt2TopoE2BodyBBDTDecision_TOS, &b_Kplus_Hlt2TopoE2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoE3BodyBBDTDecision_Dec", &Kplus_Hlt2TopoE3BodyBBDTDecision_Dec, &b_Kplus_Hlt2TopoE3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2TopoE3BodyBBDTDecision_TIS", &Kplus_Hlt2TopoE3BodyBBDTDecision_TIS, &b_Kplus_Hlt2TopoE3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoE3BodyBBDTDecision_TOS", &Kplus_Hlt2TopoE3BodyBBDTDecision_TOS, &b_Kplus_Hlt2TopoE3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoE4BodyBBDTDecision_Dec", &Kplus_Hlt2TopoE4BodyBBDTDecision_Dec, &b_Kplus_Hlt2TopoE4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2TopoE4BodyBBDTDecision_TIS", &Kplus_Hlt2TopoE4BodyBBDTDecision_TIS, &b_Kplus_Hlt2TopoE4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoE4BodyBBDTDecision_TOS", &Kplus_Hlt2TopoE4BodyBBDTDecision_TOS, &b_Kplus_Hlt2TopoE4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2MuonFromHLT1Decision_Dec", &Kplus_Hlt2MuonFromHLT1Decision_Dec, &b_Kplus_Hlt2MuonFromHLT1Decision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2MuonFromHLT1Decision_TIS", &Kplus_Hlt2MuonFromHLT1Decision_TIS, &b_Kplus_Hlt2MuonFromHLT1Decision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2MuonFromHLT1Decision_TOS", &Kplus_Hlt2MuonFromHLT1Decision_TOS, &b_Kplus_Hlt2MuonFromHLT1Decision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonDecision_Dec", &Kplus_Hlt2DiMuonDecision_Dec, &b_Kplus_Hlt2DiMuonDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonDecision_TIS", &Kplus_Hlt2DiMuonDecision_TIS, &b_Kplus_Hlt2DiMuonDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonDecision_TOS", &Kplus_Hlt2DiMuonDecision_TOS, &b_Kplus_Hlt2DiMuonDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonLowMassDecision_Dec", &Kplus_Hlt2DiMuonLowMassDecision_Dec, &b_Kplus_Hlt2DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonLowMassDecision_TIS", &Kplus_Hlt2DiMuonLowMassDecision_TIS, &b_Kplus_Hlt2DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonLowMassDecision_TOS", &Kplus_Hlt2DiMuonLowMassDecision_TOS, &b_Kplus_Hlt2DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonJPsiDecision_Dec", &Kplus_Hlt2DiMuonJPsiDecision_Dec, &b_Kplus_Hlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonJPsiDecision_TIS", &Kplus_Hlt2DiMuonJPsiDecision_TIS, &b_Kplus_Hlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonJPsiDecision_TOS", &Kplus_Hlt2DiMuonJPsiDecision_TOS, &b_Kplus_Hlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonJPsiHighPTDecision_Dec", &Kplus_Hlt2DiMuonJPsiHighPTDecision_Dec, &b_Kplus_Hlt2DiMuonJPsiHighPTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonJPsiHighPTDecision_TIS", &Kplus_Hlt2DiMuonJPsiHighPTDecision_TIS, &b_Kplus_Hlt2DiMuonJPsiHighPTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonJPsiHighPTDecision_TOS", &Kplus_Hlt2DiMuonJPsiHighPTDecision_TOS, &b_Kplus_Hlt2DiMuonJPsiHighPTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonPsi2SDecision_Dec", &Kplus_Hlt2DiMuonPsi2SDecision_Dec, &b_Kplus_Hlt2DiMuonPsi2SDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonPsi2SDecision_TIS", &Kplus_Hlt2DiMuonPsi2SDecision_TIS, &b_Kplus_Hlt2DiMuonPsi2SDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonPsi2SDecision_TOS", &Kplus_Hlt2DiMuonPsi2SDecision_TOS, &b_Kplus_Hlt2DiMuonPsi2SDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonBDecision_Dec", &Kplus_Hlt2DiMuonBDecision_Dec, &b_Kplus_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonBDecision_TIS", &Kplus_Hlt2DiMuonBDecision_TIS, &b_Kplus_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2DiMuonBDecision_TOS", &Kplus_Hlt2DiMuonBDecision_TOS, &b_Kplus_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("BCID", &BCID, &b_BCID);
   fChain->SetBranchAddress("BCType", &BCType, &b_BCType);
   fChain->SetBranchAddress("OdinTCK", &OdinTCK, &b_OdinTCK);
   fChain->SetBranchAddress("L0DUTCK", &L0DUTCK, &b_L0DUTCK);
   fChain->SetBranchAddress("HLT1TCK", &HLT1TCK, &b_HLT1TCK);
   fChain->SetBranchAddress("HLT2TCK", &HLT2TCK, &b_HLT2TCK);
   fChain->SetBranchAddress("GpsTime", &GpsTime, &b_GpsTime);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
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

Bool_t apply_BDT_weights::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void apply_BDT_weights::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t apply_BDT_weights::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef apply_BDT_weights_cxx
