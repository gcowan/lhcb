#define check_angles_cxx
#include "check_angles.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TNtuple.h>
#include <TFile.h>
#include <TLorentzVector.h>
#include <iostream>

void check_angles::PRD_trans(const  TLorentzVector & _pMuPlus,
           const  TLorentzVector & _pMuMinus,
           const  TLorentzVector & _pKPlus,
           const  TLorentzVector & _pKMinus,
           double & cosTheta,
           double & phi
           ) const
{
	TLorentzVector B   = _pMuPlus + _pMuMinus + _pKPlus + _pKMinus;
	
  	TLorentzVector pMuPlus(_pMuPlus);
  	TLorentzVector pMuMinus(_pMuMinus);
  	TLorentzVector pKPlus(_pKPlus);
  	TLorentzVector pKMinus(_pKMinus);

    	pMuPlus .Boost(-B.BoostVector());
    	pMuMinus.Boost(-B.BoostVector());
    	pKPlus  .Boost(-B.BoostVector());
    	pKMinus .Boost(-B.BoostVector());

        TLorentzVector psi( pMuPlus + pMuMinus);
        TLorentzVector Phi( pKPlus + pKMinus);

        TLorentzVector pMuPlus_MuMu(pMuPlus);
        TLorentzVector pMuMinus_MuMu(pMuMinus);
        TLorentzVector pKPlus_MuMu(pKPlus);
        TLorentzVector pKMinus_MuMu(pKMinus);	
        TLorentzVector pPhi_MuMu(Phi);	

    	pMuPlus_MuMu .Boost(-psi.BoostVector());
    	pMuMinus_MuMu.Boost(-psi.BoostVector());
    	pKPlus_MuMu  .Boost(-psi.BoostVector());
    	pKMinus_MuMu .Boost(-psi.BoostVector());
    	pPhi_MuMu    .Boost(-psi.BoostVector());

	TVector3 pMuPlus_MuMu3 = pMuPlus_MuMu.Vect().Unit();
	TVector3 pKPlus_MuMu3  = pKPlus_MuMu.Vect().Unit();
	TVector3 pKMinus_MuMu3 = pKMinus_MuMu.Vect().Unit();

	TVector3 zaxis = (pKMinus_MuMu3.Cross(pKPlus_MuMu3)).Unit();
	cosTheta = zaxis.Dot(pMuPlus_MuMu3);
	
	TVector3 A_perp = (zaxis * (pMuPlus_MuMu3.Dot(zaxis)));
	TVector3 A_para = (pMuPlus_MuMu3 - A_perp);
	TVector3 pPhi_MuMu3 = pPhi_MuMu.Vect();
	
	phi = acos( (A_para.Unit()).Dot( pPhi_MuMu3.Unit()) );
    	const TVector3 checknormal = pPhi_MuMu3.Cross( A_para );
      	bool samedirection = ( checknormal.Dot( zaxis ) > 0.0);
      	if (!samedirection) phi = -phi;
}


void check_angles::PRD(const  TLorentzVector & _pMuPlus,
           const  TLorentzVector & _pMuMinus,
           const  TLorentzVector & _pKPlus,
           const  TLorentzVector & _pKMinus,
           double & cosThetaK,
           double & cosThetaL,
           double & phi
           ) const
{
	TLorentzVector B   = _pMuPlus + _pMuMinus + _pKPlus + _pKMinus;
	
  	TLorentzVector pMuPlus(_pMuPlus);
  	TLorentzVector pMuMinus(_pMuMinus);
  	TLorentzVector pKPlus(_pKPlus);
  	TLorentzVector pKMinus(_pKMinus);

    	pMuPlus .Boost(-B.BoostVector());
    	pMuMinus.Boost(-B.BoostVector());
    	pKPlus  .Boost(-B.BoostVector());
    	pKMinus .Boost(-B.BoostVector());

	TVector3 psi3 = (pMuPlus + pMuMinus).Vect();
	TVector3 KPlus3 = pKPlus.Vect();
	TVector3 KMinus3 = pKMinus.Vect();
	TVector3 MuPlus3 = pMuPlus.Vect();
	TVector3 MuMinus3 = pMuMinus.Vect();

	TVector3 e_z_inB = psi3*(1./psi3.Mag());
	TVector3 n_KK_inB = (KPlus3.Cross(KMinus3))*(1./((KPlus3.Cross(KMinus3)).Mag()));
	TVector3 n_MuMu_inB = (MuPlus3.Cross(MuMinus3))*(1./((MuPlus3.Cross(MuMinus3)).Mag()));
	
	double cosPhi = n_KK_inB.Dot(n_MuMu_inB);
	double sinPhi = (n_KK_inB.Cross(n_MuMu_inB)).Dot(e_z_inB);

	phi = atan2(sinPhi, cosPhi);	

	TLorentzVector mumu_inB( pMuPlus + pMuMinus);
	TLorentzVector KK_inB(pKPlus + pKMinus);

	TLorentzVector pMuPlus_KK(pMuPlus);
	TLorentzVector pMuMinus_KK(pMuMinus);
	TLorentzVector pKPlus_MuMu(pKPlus);
	TLorentzVector pKMinus_MuMu(pKMinus);
	
	TLorentzVector pMuPlus_MuMu(pMuPlus);
	TLorentzVector pKPlus_KK(pKPlus);

        pMuPlus_KK .Boost(-KK_inB.BoostVector());
        pMuMinus_KK.Boost(-KK_inB.BoostVector());
        pKPlus_MuMu  .Boost(-mumu_inB.BoostVector());
        pKMinus_MuMu .Boost(-mumu_inB.BoostVector());

	TVector3 MuPlus3_KK  = pMuPlus_KK.Vect();
	TVector3 MuMinus3_KK = pMuMinus_KK.Vect();
	TVector3 KPlus3_MuMu   = pKPlus_MuMu.Vect();
	TVector3 KMinus3_MuMu  = pKMinus_MuMu.Vect();

	TVector3 e_z_inKK   = -(MuPlus3_KK + MuMinus3_KK)*(1./((MuPlus3_KK + MuMinus3_KK).Mag()));
	TVector3 e_z_inmumu = -(KPlus3_MuMu + KMinus3_MuMu)*(1./((KPlus3_MuMu + KMinus3_MuMu).Mag()));

	//std::cout << "before " << MuPlus3_a.X() << " " << MuPlus3_a.Y() <<  " " << MuPlus3_a.Z() <<std::endl;

        pKPlus_KK    .Boost(-KK_inB.BoostVector());
        pMuPlus_MuMu .Boost(-mumu_inB.BoostVector());
	
	//std::cout << "after  " << MuPlus3_a.X() << " " << MuPlus3_a.Y() <<  " " << MuPlus3_a.Z() <<std::endl;
	
	TVector3 KPlus3_KK    = pKPlus_KK.Vect();
	TVector3 MuPlus3_MuMu = pMuPlus_MuMu.Vect();

	cosThetaK = KPlus3_KK.Dot(e_z_inKK)/KPlus3_KK.Mag();
	cosThetaL = MuPlus3_MuMu.Dot(e_z_inmumu)/MuPlus3_MuMu.Mag();

}

void check_angles::Belle(const  TLorentzVector & _pMuPlus,
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

void check_angles::Loop()
{
    if (fChain == 0) return;

    TFile * file = TFile::Open("DVtuple_modified.root","RECREATE");
    TNtuple * tuple = new TNtuple("DecayTree", "tuple",  "B_s0_TRUETAU:B_s0_TRUEPhi:B_s0_TRUEThetaK:B_s0_TRUEThetaL:J_psi_1S_MC_MOTHER_ID");

    Long64_t nentries = fChain->GetEntriesFast();

    Long64_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
    //if (jentry/1000 % 0) cout << jentry << endl;
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        // if (Cut(ientry) < 0) continue;i

        TLorentzVector pKplus   (Kplus_TRUEP_X, Kplus_TRUEP_Y, Kplus_TRUEP_Z, Kplus_TRUEP_E);
        TLorentzVector pKminus  (Kminus_TRUEP_X, Kminus_TRUEP_Y, Kminus_TRUEP_Z, Kminus_TRUEP_E);
        TLorentzVector pMplus   (muplus_TRUEP_X, muplus_TRUEP_Y, muplus_TRUEP_Z, muplus_TRUEP_E);
        TLorentzVector pMminus  (muminus_TRUEP_X, muminus_TRUEP_Y, muminus_TRUEP_Z, muminus_TRUEP_E);
        TLorentzVector B      = pMplus + pMminus + pKplus + pKminus;
        TLorentzVector pPhi   = pKplus + pKminus;
        TLorentzVector pPsi   = pMplus + pMminus;

        double belle_m23(0.);
        double belle_cosKPi(0.);
        double belle_cosPsi(0.);
        double belle_phiKPiPsi(0.);
        double belle_m13(0.);
        double belle_cosZ(0.);
        double belle_cosPsi_Z(0.);
        double belle_phiPsiZ(0.);
        double belle_phiZPsiPsi(0.);
        double cosThetaK(0.);
        double cosThetaL(0.);
        double phi(0.);
        double cosTheta_trans(0.);
        double phi_trans(0.);

            Belle(pMplus, pMminus, pKplus, pKminus
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
            
	PRD(pMplus, pMminus, pKplus, pKminus, cosThetaK, cosThetaL, phi);
	PRD_trans(pMplus, pMminus, pKplus, pKminus, cosTheta_trans, phi_trans);

	//std::cout << "2 " << (B_s0_TRUEPhi+TMath::Pi()-(B_s0_TRUEPhi>0.)*(2.*TMath::Pi())) << " " <<  cos(B_s0_TRUEThetaK)<< " " <<  cos(B_s0_TRUEThetaL)<< " " <<J_psi_1S_MC_MOTHER_ID<<std::endl; 
	//std::cout << "1 " << belle_phiKPiPsi << " " <<  belle_cosKPi<< " " <<  belle_cosPsi<< " " <<J_psi_1S_MC_MOTHER_ID<<std::endl; 
	std::cout << "1 " << B_s0_TRUEPhi << " " <<  cos(B_s0_TRUEThetaK)<< " " <<  cos(B_s0_TRUEThetaL)<< " " <<J_psi_1S_MC_MOTHER_ID<<std::endl; 
	std::cout << "2 " << phi << " " <<  cosThetaK<< " " <<  cosThetaL << std::endl;
	std::cout << "3 " << B_s0_TRUEPhiTr << " " <<  cos(B_s0_TRUEThetaK)<< " " <<  cos(B_s0_TRUEThetaTr)<< " " <<J_psi_1S_MC_MOTHER_ID<<std::endl; 
	std::cout << "4 " << phi_trans << " " <<  cosThetaK<< " " <<  cosTheta_trans << std::endl;
	tuple->Fill(B_s0_TRUETAU, phi, acos(cosThetaK), acos(cosThetaL), J_psi_1S_MC_MOTHER_ID);
    }
    tuple->Write();
    file->Close();
}

int main(){
    check_angles t;
    t.Loop();
    return 1;
}
