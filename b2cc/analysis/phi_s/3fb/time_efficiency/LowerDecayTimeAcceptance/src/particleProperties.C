#include "TString.h"

struct particleProperties{
  particleProperties(TString const& particle){
    if(particle.Contains("Bs")){
      name = "Bs";
      tupleName = "B_s0";
      plotName = "B^{0}_{s}";
      mass = 5368.;
      mass_low = 5200.;
      mass_high = 5550.;
      mass_low_acc = mass_low;
      mass_high_acc = mass_high;
      t_min = 0.3;
      t_max = 14.;
      tau = 1.472;
      beta = -0.00928693;
      betaerr = 0.000996007;
      frac_M_sig = 8.7351e-01;
      rfrac_M_sig = 2.3838e+00;
      afactor = 2.;
      afactor2 = 2.;
      bfactor = 2.25;
      bfactor2 = 2.25;
      nufactor = 2.;
      nfactor = 3.;
      nfactor2 = 3.;
      selection = "B_s0_LOKI_DTF_CTAU/0.299792458>";
      selection += t_min;
      selection += "&&B_s0_LOKI_DTF_CTAU/0.299792458<";
      selection += t_max;
      selection += "&&B_s0_LOKI_MASS_JpsiConstr>";
      selection += mass_low;
      selection += "&&B_s0_LOKI_MASS_JpsiConstr<";
      selection += mass_high;
      //selection += "&& (B_s0_LOKI_DTF_CTAUERR/0.299792458 < 0.12) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (B_s0_LOKI_DTF_CHI2NDOF < 5.) && (B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF < 10.) && (B_s0_IPCHI2_OWNPV < 25.) && (B_s0_MINIPCHI2NEXTBEST > 50 || B_s0_MINIPCHI2NEXTBEST < 0) && (J_psi_1S_ENDVERTEX_CHI2/J_psi_1S_ENDVERTEX_NDOF < 16.) && (TMath::Abs(J_psi_1S_MM - 3090) < 60) && (muplus_PT > 500.) && (muminus_PT > 500.) && (muplus_PIDmu > 0.) && (muminus_PIDmu > 0.) && (muplus_TRACK_CHI2NDOF < 4) && (muminus_TRACK_CHI2NDOF < 4) && (phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF < 16.) && (TMath::Abs(phi_1020_M - 1020.) < 30.) && (phi_1020_PT > 1000.) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.) && (Kplus_TRACK_CHI2NDOF < 4.) && (Kminus_TRACK_CHI2NDOF < 4.) && (hasBestVtxChi2 == 1)";
      selection += "&& (B_s0_LOKI_DTF_CTAUERR/0.299792458 < 0.12) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (B_s0_LOKI_DTF_CHI2NDOF < 5.) && (B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF < 10.) && (B_s0_IPCHI2_OWNPV < 25.) && (B_s0_MINIPCHI2NEXTBEST > 50 || B_s0_MINIPCHI2NEXTBEST < 0) && (J_psi_1S_ENDVERTEX_CHI2/J_psi_1S_ENDVERTEX_NDOF < 16.) && (TMath::Abs(J_psi_1S_MM - 3090) < 60) && (muplus_PT > 500.) && (muminus_PT > 500.) && (muplus_PIDmu > 0.) && (muminus_PIDmu > 0.) && (muplus_TRACK_CHI2NDOF < 4) && (muminus_TRACK_CHI2NDOF < 4) && (phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF < 16.) && (TMath::Abs(phi_1020_M - 1020.) < 30.) && (phi_1020_PT > 1000.) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.) && (Kplus_TRACK_CHI2NDOF < 4.) && (Kminus_TRACK_CHI2NDOF < 4.) && (B_s0_PT/1000. > 8.1 && B_s0_PT/1000. < 800000.1)";
      selectionstrip = "B_s0_TAU*1000.>0.2";
      selectionstripexcl = "1==1";
      selectionmctruth = "B_s0_BKGCAT==0";
      selectionsidebands = "(B_s0_M>";
      selectionsidebands += mass_low;
      selectionsidebands += ")&&(B_s0_M<";
      selectionsidebands += mass_high;
      selectionsidebands += ")&&TMath::Abs(B_s0_M-";
      selectionsidebands += mass;
      selectionsidebands += ")>50.";
      blindstring = "BsLifetime2013";
      blindscale = 0.1;
    }
  }

  TString GetName(){
    return name;
  }
  
  TString GetTupleName(){
    return tupleName;
  }

  TString GetPlotName(){
    return tupleName;
  }

  Double_t GetMass(){
    return mass;
  }
  
  Double_t GetTau(){
    return tau;
  }

  Double_t GetBeta(){
    return beta;
  }
  
  Double_t GetBetaErr(){
    return betaerr;
  }
    
  TString name;
  TString tupleName;
  TString plotName;
  TString daughtersName;
  Double_t mass;
  Double_t mass_low;
  Double_t mass_high;
  Double_t mass_low_acc;
  Double_t mass_high_acc;
  Double_t t_min;
  Double_t t_max;
  Double_t tau;
  Double_t beta;
  Double_t betaerr;
  Double_t frac_M_sig;
  Double_t rfrac_M_sig;
  Double_t afactor;
  Double_t afactor2;
  Double_t bfactor;
  Double_t bfactor2;
  Double_t nufactor;
  Double_t nfactor;
  Double_t nfactor2;
  TString selection;
  TString selectionstrip;
  TString selectionstripexcl;
  TString selectionmctruth;
  TString selectionmctruth2;
  TString selectionsidebands;
  TString blindstring;
  Double_t blindscale;
};
