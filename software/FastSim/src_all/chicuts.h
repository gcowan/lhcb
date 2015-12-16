#ifndef LBCUTS_H
#define LBCUTS_H


#include "TLorentzVector.h"
#include "TMath.h"
#include "functions.h"

bool ptcuts(TLorentzVector& photon, TLorentzVector mu1, 
            TLorentzVector& mu2, TLorentzVector& k1, 
            TLorentzVector& k2){

  return(photon.Pt() > 0.7 && mu1.Pt() > 0.55 && mu2.Pt() > 0.55 && 
         k1.Pt() > 0.2 && k2.Pt() > 0.2 );

}

bool tracksInAcceptance( TLorentzVector mu1, TLorentzVector& mu2, 
                         TLorentzVector& k1, TLorentzVector& k2){
  return inAcceptance(mu1) && inAcceptance(mu2) && inAcceptance(k1) && inAcceptance(k2);
}

bool selcuts(TLorentzVector& photon, TLorentzVector& mu1, 
            TLorentzVector& mu2, TLorentzVector& k1, 
	     TLorentzVector& k2, TLorentzVector& chic){

  TLorentzVector pi1 = reassignMass(k1,mpi);
  TLorentzVector pi2 = reassignMass(k1,mpi);

  TLorentzVector bdmass1 = pi1 + chic;
  TLorentzVector bdmass2 = pi2 + chic;
  TLorentzVector phi = k1+k2;

  TLorentzVector mpipi = mu1+mu2+pi1+pi2;

  return tracksInAcceptance(mu1,mu2,k1,k2) && ptcuts(photon,mu1,mu2,k1,k2)
    && TMath::Abs(phi.M() - 1.01955) < 0.01 && TMath::Abs(bdmass1.M() - 5.279) > 0.025 && TMath::Abs(bdmass2.M() - 5.279) > 0.025 && mpipi.M() < 5.1 ;

}

#endif
