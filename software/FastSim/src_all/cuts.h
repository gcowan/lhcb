#ifndef CUTS_H
#define CUTS_H


#include "TLorentzVector.h"
#include "TMath.h"
#include "functions.h"
#include "TRandom.h"

bool mesoncuts(TLorentzVector& phi, TLorentzVector& rho) {
  //  std::cout << phi.M() << " " << TMath::Abs(phi.M() - 1.0197) << std::endl;
  return phi.Pt() > 0.9 && rho.Pt() > 0.9 &&TMath::Abs(phi.M() - 1.0197) < 10e-3  && phi.P() > 1 && rho.P() > 1 ;
}

bool trackCut(TLorentzVector& track,int charge){
  //std::cout << "here " << std::endl;
  return inDownstream(track,charge) && inAcceptance(track) && track.Pt() > 0.5  && track.P() < 300.;  
}

bool trackcuts(TLorentzVector& track1, TLorentzVector& track2, 
	       TLorentzVector& track3, TLorentzVector& track4, TRandom& ran) {
  // std::cout << "track cuts " << std::endl;

  int charge1 = 1; int charge2 =1; int charge3 =1 ; int charge4 =1;
  if (ran.Uniform() < 0.5){
    charge1 =-1;
    charge3  =-1; 
  }
  else {
    charge2 = -1;
    charge4 = -1; 
  }

  return trackCut(track1,charge1) && trackCut(track2,charge2) && trackCut(track3,charge3) && trackCut(track4,charge4);
}

bool dsVeto(TLorentzVector& pi1, TLorentzVector& pi2, TLorentzVector& phi){

  TLorentzVector phipi1 = pi1+ phi;
  TLorentzVector phipi2 = pi2+ phi;
  return(TMath::Abs(phipi1.M() - mDs) > 25e-3 && TMath::Abs(phipi2.M() - mDs) > 25e-3  
	 && TMath::Abs(phipi1.M() - mDplus) > 25e-3 && TMath::Abs(phipi2.M() - mDplus) > 25e-3); 
}


bool lambdacVeto(TLorentzVector& pi1, TLorentzVector& pi2, 
            TLorentzVector& k1, TLorentzVector& k2){

  TLorentzVector pr1 = reassignMass(k1,mp);
  TLorentzVector pr2 = reassignMass(k2,mp);
 
  TLorentzVector lc1 = pr1 + k2 + pi1;
  TLorentzVector lc2 = pr1 + k2 + pi2;
  double mlc1 = TMath::Min(lc1.M(), lc2.M());
 
  TLorentzVector lc3 = pr2 + k1 + pi1;
  TLorentzVector lc4 = pr2 + k1 + pi2;
  double mlc2 = TMath::Min(lc3.M(), lc4.M());

  return TMath::Abs(mlc1 - mlc) > 25e-3 && TMath::Abs(mlc2 - mlc) > 25e-3 ; 
}

bool select(TLorentzVector& pi1, TLorentzVector& pi2, 
            TLorentzVector& k1, TLorentzVector& k2, TRandom& ran){

  TLorentzVector pipi = pi1 + pi2 ;
  TLorentzVector phi = k1+k2 ;
  TLorentzVector bvec = pi1+ pi2+ k1+k2;

  return (pipi.M() > 3.25 && pipi.M() < 3.650  && mesoncuts(phi,pipi) && 
	  trackcuts(k1,k2,pi1,pi2 ,ran) && dsVeto(pi1,pi2,phi) && lambdacVeto(pi1,pi2, k1,k2) && bvec.M() >4.85  ) ;

}


#endif
