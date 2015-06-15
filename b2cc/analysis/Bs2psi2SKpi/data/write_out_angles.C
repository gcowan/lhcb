#define write_out_angles_cxx
#include "write_out_angles.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TNtuple.h>
#include <TFile.h>
#include <TLorentzVector.h>
#include <iostream>

void write_out_angles::Belle(const  TLorentzVector & _pMuPlus,
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
           double & phiZPsiPsi) const
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
  m23 = pKPi.M();
  m13 = pZ.M();

  //
  TVector3 p3KPi = pKPi.Vect();
  TVector3 p3K = pK.Vect();
  TVector3 p3Psi = pPsi.Vect();
  TVector3 p3MuPlus = pMuPlus.Vect();

  TVector3 aK = p3K - p3KPi * (p3K.Dot(p3KPi)/p3KPi.Mag2());
  TVector3 aMuPlus = p3MuPlus - p3Psi * (p3MuPlus.Dot(p3Psi)/p3Psi.Mag2());

  // angle between K* and Psi decay planes in B0 rest frame
  phiKPiPsi = atan2(
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
  cosKPi = - p3Psi_KPi.Dot(p3K_KPi)/(p3Psi_KPi.Mag()*p3K_KPi.Mag());

  // ================== Z rest frame ================================

  TLorentzVector pMuPlus_Z(pMuPlus);
  TLorentzVector pPi_Z(pPi);
  TLorentzVector pK_Z(pK);
  TLorentzVector pPsi_Z(pPsi);
  //

  pMuPlus_Z.Boost(-pZ.BoostVector());
  pPi_Z.Boost(-pZ.BoostVector());
  pK_Z.Boost(-pZ.BoostVector());
  pPsi_Z.Boost(-pZ.BoostVector());

  TVector3 p3K_Z = pK_Z.Vect();
  TVector3 p3Psi_Z = pPsi_Z.Vect();

  // Z helicity angle
  cosZ = - p3K_Z.Dot(p3Psi_Z)/(p3K_Z.Mag()*p3Psi_Z.Mag());

  // ================== psi rest frame from Z ========================

  TLorentzVector pMuPlus_Z_Psi(pMuPlus_Z);
  TLorentzVector pPi_Z_Psi(pPi_Z);
  TLorentzVector pK_Z_Psi(pK_Z);

  pMuPlus_Z_Psi.Boost(-pPsi_Z.BoostVector());
  pPi_Z_Psi.Boost(-pPsi_Z.BoostVector());
  pK_Z_Psi.Boost(-pPsi_Z.BoostVector());

  TVector3 p3MuPlus_Z_Psi = pMuPlus_Z_Psi.Vect();
  TVector3 p3Pi_Z_Psi = pPi_Z_Psi.Vect();
  TVector3 p3K_Z_Psi = pK_Z_Psi.Vect();

  cosPsi_Z = - p3Pi_Z_Psi.Dot(p3MuPlus_Z_Psi)/(p3Pi_Z_Psi.Mag()*p3MuPlus_Z_Psi.Mag());


  TVector3 aK_Z_Psi = p3K_Z_Psi - p3Pi_Z_Psi * (p3K_Z_Psi.Dot(p3Pi_Z_Psi)/p3Pi_Z_Psi.Mag2());
  TVector3 aMuPlus_Z_Psi = p3MuPlus_Z_Psi - p3Pi_Z_Psi * (p3MuPlus_Z_Psi.Dot(p3Pi_Z_Psi)/p3Pi_Z_Psi.Mag2());
  phiPsiZ = atan2(
                          -(p3Pi_Z_Psi.Cross(aK_Z_Psi)).Dot(aMuPlus_Z_Psi)/(p3Pi_Z_Psi.Mag()*aK_Z_Psi.Mag()*aMuPlus_Z_Psi.Mag()),
                          aK_Z_Psi.Dot(aMuPlus_Z_Psi)/(aK_Z_Psi.Mag()*aMuPlus_Z_Psi.Mag())
                          );



  // ================ psi rest frame from B (i.e. K* decay chain ) ===================

  TLorentzVector pMuPlus_Psi(pMuPlus);
  TLorentzVector pPi_Psi(pPi);
  TLorentzVector pK_Psi(pK);
  TLorentzVector pKPi_Psi(pKPi);
  //

  pMuPlus_Psi.Boost(-pPsi.BoostVector());
  pPi_Psi.Boost(-pPsi.BoostVector());
  pK_Psi.Boost(-pPsi.BoostVector());
  pKPi_Psi.Boost(-pPsi.BoostVector());

  TVector3 p3MuPlus_Psi = pMuPlus_Psi.Vect();
  TVector3 p3Pi_Psi = pPi_Psi.Vect();
  TVector3 p3K_Psi = pK_Psi.Vect();
  TVector3 p3KPi_Psi = pKPi_Psi.Vect();

  cosPsi = - p3KPi_Psi.Dot(p3MuPlus_Psi)/(p3KPi_Psi.Mag()*p3MuPlus_Psi.Mag());

  TVector3 aKPi_Psi = p3KPi_Psi - p3MuPlus_Psi * (p3KPi_Psi.Dot(p3MuPlus_Psi)/p3MuPlus_Psi.Mag2());
  TVector3 aPi_Psi = p3Pi_Psi - p3MuPlus_Psi * (p3Pi_Psi.Dot(p3MuPlus_Psi)/p3MuPlus_Psi.Mag2());
  phiZPsiPsi =  atan2(
                              (p3MuPlus_Psi.Cross(aPi_Psi)).Dot(aKPi_Psi)/(p3MuPlus_Psi.Mag()*aPi_Psi.Mag()*aKPi_Psi.Mag()),
                              aPi_Psi.Dot(aKPi_Psi)/(aPi_Psi.Mag()*aKPi_Psi.Mag())
                              );

}

void write_out_angles::Loop()
{
    if (fChain == 0) return;

    TFile * file = TFile::Open("/tmp/mc_Tight_proton_with_correct_angles.root","RECREATE");
    TNtuple * tuple = new TNtuple("tuple", "tuple",  "m23:m13:m12:phi:cosTheta2:cosTheta1:pionID:Bd_sig_sw:Bs_sig_sw:B_s0_Mass_JpsiConstr:Kplus_ProbNNp:mlb:B_PT:K_PT:Pi_PT");

    Long64_t nentries = fChain->GetEntriesFast();

    Long64_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
    //if (jentry/1000 % 0) cout << jentry << endl;
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        // if (Cut(ientry) < 0) continue;i

        TLorentzVector pKplus   (Kplus_PX, Kplus_PY, Kplus_PZ, Kplus_PE);
        TLorentzVector pPiminus (piminus_PX, piminus_PY, piminus_PZ, piminus_PE);
        TLorentzVector pMplus   (muplus_PX, muplus_PY, muplus_PZ, muplus_PE);
        TLorentzVector pMminus  (muminus_PX, muminus_PY, muminus_PZ, muminus_PE);
        TLorentzVector B      = pMplus + pMminus + pKplus + pPiminus;
        TLorentzVector pKstar = pKplus + pPiminus;
        TLorentzVector pPsi   = pMplus + pMminus;
        TLorentzVector pZ     = pPsi + pPiminus;

        double pionID = -piminus_ID;
        double belle_m23(0.);
        double belle_cosKPi(0.);
        double belle_cosPsi(0.);
        double belle_phiKPiPsi(0.);
        double belle_m13(0.);
        double belle_cosZ(0.);
        double belle_cosPsi_Z(0.);
        double belle_phiPsiZ(0.);
        double belle_phiZPsiPsi(0.);

        if (pionID < 0)
        {
            Belle(pMplus, pMminus, pPiminus, pKplus
            , belle_m23
            , belle_cosKPi
            , belle_cosPsi
            , belle_phiKPiPsi
            , belle_m13
            , belle_cosZ
            , belle_cosPsi_Z
            , belle_phiPsiZ
            , belle_phiZPsiPsi
            );
        }
        else
        {
            Belle(pMminus, pMplus, pPiminus, pKplus
            , belle_m23
            , belle_cosKPi
            , belle_cosPsi
            , belle_phiKPiPsi
            , belle_m13
            , belle_cosZ
            , belle_cosPsi_Z
            , belle_phiPsiZ
            , belle_phiZPsiPsi
            );
            belle_phiKPiPsi = - belle_phiKPiPsi;
            belle_phiPsiZ = - belle_phiPsiZ;
            belle_phiZPsiPsi = - belle_phiZPsiPsi;
        }

        TLorentzVector pPsi2 = pMplus+pMminus;
        TLorentzVector pZK = pPsi2 + pKplus;
        double m12 = pZK.M();

        tuple->Fill(belle_m23, belle_m13, m12, belle_phiKPiPsi, belle_cosKPi, belle_cosPsi, pionID, Nsig_sw, Nsig2_sw, B_s0_Mass_JpsiConstr, Kplus_ProbNNp, mlb, B.Pt(), pKplus.Pt(), pPiminus.Pt());
    }
    tuple->Write();
    file->Close();
}

int main(){
    write_out_angles t;
    t.Loop();
    return 1;
}
