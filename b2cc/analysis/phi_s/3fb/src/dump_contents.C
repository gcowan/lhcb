#define dump_contents_cxx
#include "dump_contents.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TNtuple.h>
#include <TFile.h>
#include <TLorentzVector.h>
#include <iostream>


void dump_contents::PRD_trans(const  TLorentzVector & _pMuPlus,
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
	
	phi = acos( (A_para.Unit()).Dot( pPhi_MuMu3.Unit() ) );
    	const TVector3 checknormal = pPhi_MuMu3.Cross( A_para );
      	bool samedirection = ( checknormal.Dot( zaxis ) > 0.0);
      	if (!samedirection) phi = -phi;
}


void dump_contents::PRD(const  TLorentzVector & _pMuPlus,
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

        pKPlus_KK    .Boost(-KK_inB.BoostVector());
        pMuPlus_MuMu .Boost(-mumu_inB.BoostVector());
	
	TVector3 KPlus3_KK    = pKPlus_KK.Vect();
	TVector3 MuPlus3_MuMu = pMuPlus_MuMu.Vect();

	cosThetaK = KPlus3_KK.Dot(e_z_inKK)/KPlus3_KK.Mag();
	cosThetaL = MuPlus3_MuMu.Dot(e_z_inmumu)/MuPlus3_MuMu.Mag();
}

void dump_contents::Loop()
{
    if (fChain == 0) return;

    TFile * file = TFile::Open("angles_MC2012.root","RECREATE");
    TNtuple * tuple = new TNtuple("DecayTree", "tuple",  "true_time:true_helphi:true_helcosthetaK:true_helcosthetaL:true_phi:true_cosPsi:true_cosTheta:true_ID");

    Long64_t nentries = fChain->GetEntriesFast();

    Long64_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
    //if (jentry/1000 % 0) cout << jentry << endl;
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        // if (Cut(ientry) < 0) continue;i

	/*
	double mK = 493.677;
	double mmu = 139.57018;
	double Kplus_PE   = sqrt(mK*mK   + Kplus_PX*Kplus_PX + Kplus_PY*Kplus_PY + Kplus_PZ*Kplus_PZ);
	double Kminus_PE  = sqrt(mK*mK   + Kminus_PX*Kminus_PX + Kminus_PY*Kminus_PY + Kminus_PZ*Kminus_PZ);
	double muplus_PE  = sqrt(mmu*mmu + muplus_PX*muplus_PX + muplus_PY*muplus_PY + muplus_PZ*muplus_PZ);
	double muminus_PE = sqrt(mmu*mmu + muminus_PX*muminus_PX + muminus_PY*muminus_PY + muminus_PZ*muminus_PZ);
	*/

        TLorentzVector pKplus   (Kplus_PX, Kplus_PY, Kplus_PZ, Kplus_PE);
        TLorentzVector pKminus  (Kminus_PX, Kminus_PY, Kminus_PZ, Kminus_PE);
        TLorentzVector pMplus   (muplus_PX, muplus_PY, muplus_PZ, muplus_PE);
        TLorentzVector pMminus  (muminus_PX, muminus_PY, muminus_PZ, muminus_PE);

        double helcosthetaK(0.);
        double helcosthetaL(0.);
        double helphi(0.);
        double trcostheta(0.);
        double trphi(0.);
        double mistag(0.);

	PRD      (pMplus, pMminus, pKplus, pKminus, helcosthetaK, helcosthetaL, helphi);
        PRD_trans(pMplus, pMminus, pKplus, pKminus, trcostheta, trphi);

	//std::cout << "1 " << B_s0_Phi << " " <<  B_s0_ThetaK << " " <<  B_s0_ThetaL << std::endl;
	//std::cout << "2 " << helphi  << " " <<  helcosthetaK << " " <<  helcosthetaL<< " " << B_s0_TRUEID <<std::endl; 

	if ( B_s0_BKGCAT < 60 )	tuple->Fill(B_s0_TRUETAU, helphi, helcosthetaK, helcosthetaL, trphi, helcosthetaK, trcostheta, B_s0_TRUEID);
    }
    tuple->Write();
    file->Close();
}

int main(){
    dump_contents t;
    t.Loop();
    return 1;
}
