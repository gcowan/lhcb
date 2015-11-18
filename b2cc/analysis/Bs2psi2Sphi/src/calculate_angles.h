#define write_out_angles_cxx
#include <TLorentzVector.h>

void calculate_angles(const  TLorentzVector & _pMuPlus,
           const  TLorentzVector & _pMuMinus,
           const  TLorentzVector & _pPi,
           const  TLorentzVector & _pK,
           double & cosK,
           double & cosL,
           double & phi
           )
{
  // inputs can be in any reference frame

  TLorentzVector pB=_pMuPlus+_pMuMinus+_pPi+_pK;

  TLorentzVector pMuPlus(_pMuPlus);
  TLorentzVector pMuMinus(_pMuMinus);
  TLorentzVector pPi(_pPi);
  TLorentzVector pK(_pK);

  // ============== B0 rest frame ========================

  if ( pB.BoostVector().Mag() != 0 )
  {
    pMuPlus.Boost(-pB.BoostVector());
    pMuMinus.Boost(-pB.BoostVector());
    pPi.Boost(-pB.BoostVector());
    pK.Boost(-pB.BoostVector());
  }
  TLorentzVector pKPi=pK+pPi;
  TLorentzVector pPsi=pMuPlus+pMuMinus;
  TLorentzVector pZ = pPsi + pPi;

  //
  TVector3 p3KPi = pKPi.Vect();
  TVector3 p3K = pK.Vect();
  TVector3 p3Psi = pPsi.Vect();
  TVector3 p3MuPlus = pMuPlus.Vect();

  TVector3 aK = p3K - p3KPi * (p3K.Dot(p3KPi)/p3KPi.Mag2());
  TVector3 aMuPlus = p3MuPlus - p3Psi * (p3MuPlus.Dot(p3Psi)/p3Psi.Mag2());

  // angle between K* and Psi decay planes in B0 rest frame
  phi = atan2(
                            (p3Psi.Cross(aK)).Dot(aMuPlus)/(p3Psi.Mag()*aK.Mag()*aMuPlus.Mag()),
                            aK.Dot(aMuPlus)/(aK.Mag()*aMuPlus.Mag())
                            );


  // ============= K* rest frame ============================

  TLorentzVector pK_KPi(pK);
  TLorentzVector pPsi_KPi(pPsi);

  pK_KPi.Boost(-pKPi.BoostVector());
  pPsi_KPi.Boost(-pKPi.BoostVector());

  TVector3 p3K_KPi = pK_KPi.Vect();
  TVector3 p3Psi_KPi = pPsi_KPi.Vect();

  // K* helicity angle
  cosK = - p3Psi_KPi.Dot(p3K_KPi)/(p3Psi_KPi.Mag()*p3K_KPi.Mag());

  // ================ psi rest frame from B (i.e. K* decay chain ) ===================

  TLorentzVector pMuPlus_Psi(pMuPlus);
  TLorentzVector pPi_Psi(pPi);
  TLorentzVector pK_Psi(pK);
  TLorentzVector pKPi_Psi(pKPi);

  pMuPlus_Psi.Boost(-pPsi.BoostVector());
  pPi_Psi.Boost(-pPsi.BoostVector());
  pK_Psi.Boost(-pPsi.BoostVector());
  pKPi_Psi.Boost(-pPsi.BoostVector());

  TVector3 p3MuPlus_Psi = pMuPlus_Psi.Vect();
  TVector3 p3Pi_Psi = pPi_Psi.Vect();
  TVector3 p3K_Psi = pK_Psi.Vect();
  TVector3 p3KPi_Psi = pKPi_Psi.Vect();

  cosL = - p3KPi_Psi.Dot(p3MuPlus_Psi)/(p3KPi_Psi.Mag()*p3MuPlus_Psi.Mag());
}

