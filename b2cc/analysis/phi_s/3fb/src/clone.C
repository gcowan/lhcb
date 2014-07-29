#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TChain.h>
#include <TNtuple.h>
#include <TFile.h>
#include <TLorentzVector.h>
#include <iostream>

void clone();

void PRD(const  TLorentzVector & _pMuPlus,
		const  TLorentzVector & _pMuMinus,
		const  TLorentzVector & _pKPlus,
		const  TLorentzVector & _pKMinus,
		double & cosThetaK,
		double & cosThetaL,
		double & phi
		); 
void PRD_trans(const  TLorentzVector & _pMuPlus,
		const  TLorentzVector & _pMuMinus,
		const  TLorentzVector & _pKPlus,
		const  TLorentzVector & _pKMinus,
		double & cosThetaL,
		double & phi
		); 

void clone() {
	//TChain * chain = new TChain("BsPrescaledTuple/DecayTree","");
	TChain * chain = new TChain("BsTuple/DecayTree","");
	//chain->Add("/tmp/MC2011MagUpPythia8_BsJpsiPhi_DTT_20131006.root/BsPrescaledTuple/DecayTree");
	//chain->Add("/tmp/MC2011MagDownPythia8_BsJpsiPhi_DTT_20131006.root/BsPrescaledTuple/DecayTree");
	//chain->Add("/tmp/MC2011MagUpPythia6_BsJpsiPhi_DTT_20131006.root/BsPrescaledTuple/DecayTree");
	//chain->Add("/tmp/MC2011MagDownPythia6_BsJpsiPhi_DTT_20131006.root/BsPrescaledTuple/DecayTree");
	//chain->Add("/tmp/MC2011MagUpPythia8_BsJpsiPhi_DTT_20131006.root/BsTuple/DecayTree");
	//chain->Add("/tmp/MC2011MagDownPythia8_BsJpsiPhi_DTT_20131006.root/BsTuple/DecayTree");
	//chain->Add("/tmp/MC2011MagUpPythia6_BsJpsiPhi_DTT_20131006.root/BsTuple/DecayTree");
	//chain->Add("/tmp/MC2011MagDownPythia6_BsJpsiPhi_DTT_20131006.root/BsTuple/DecayTree");
//	chain->Add("/tmp/Bs2JpsiPhi_MC2011_Sim08a_DTT_20130909_MagUp.root");
//	chain->Add("/tmp/Bs2JpsiPhi_MC2011_Sim08a_DTT_20130909_MagDown.root");
	//chain->Add("/tmp/MC2012_DTT_20130709_MagUp.root");
	//chain->Add("/tmp/MC2012_DTT_20130709_MagDown.root");
	//chain->Add("/tmp/Bs_upMC2012_Sim08e_pythia6_DTT.root");
	//chain->Add("/tmp/Bs_downMC2012_Sim08e_pythia8_DTT.root");
	//chain->Add("/tmp/Bs_upMC2012_Sim08e_pythia6_DTT.root");
	//chain->Add("/tmp/Bs_downMC2012_Sim08e_pythia8_DTT.root");
	chain->Add("/tmp/BsdG0_upMC2012_Sim08e_pythia6_DTT.root");
	chain->Add("/tmp/BsdG0_upMC2012_Sim08e_pythia8_DTT.root");
	chain->Add("/tmp/BsdG0_downMC2012_Sim08e_pythia6_DTT.root");
	chain->Add("/tmp/BsdG0_downMC2012_Sim08e_pythia8_DTT.root");
	
	int B_s0_BKGCAT;
	double B_s0_ENDVERTEX_X;
	double B_s0_ENDVERTEX_Y;
	double muplus_PX;
	double muplus_PY;
	double muplus_PZ;
	double muplus_PE;
	double muminus_PX;
	double muminus_PY;
	double muminus_PZ;
	double muminus_PE;
	double Kplus_PX;
	double Kplus_PY;
	double Kplus_PZ;
	double Kplus_PE;
	double Kminus_PX;
	double Kminus_PY;
	double Kminus_PZ;
	double Kminus_PE;

	double muplus_PT;
	double muminus_PT;
	double Kplus_PT;
	double Kminus_PT;
	double muplus_IPz;
	double muminus_IPz;
	double Kplus_IPz;
	double Kminus_IPz;
	double eff_mp;
	double eff_mm;
	double eff_kp;
	double eff_km;
	double eff;

	double muplus_TRUEP_X;
	double muplus_TRUEP_Y;
	double muplus_TRUEP_Z;
	double muplus_TRUEP_E;
	double muminus_TRUEP_X;
	double muminus_TRUEP_Y;
	double muminus_TRUEP_Z;
	double muminus_TRUEP_E;
	double Kplus_TRUEP_X;
	double Kplus_TRUEP_Y;
	double Kplus_TRUEP_Z;
	double Kplus_TRUEP_E;
	double Kminus_TRUEP_X;
	double Kminus_TRUEP_Y;
	double Kminus_TRUEP_Z;
	double Kminus_TRUEP_E;

	chain->SetBranchAddress("B_s0_BKGCAT", &B_s0_BKGCAT);
	chain->SetBranchAddress("B_s0_ENDVERTEX_X", &B_s0_ENDVERTEX_X);
	chain->SetBranchAddress("B_s0_ENDVERTEX_Y", &B_s0_ENDVERTEX_Y);
	chain->SetBranchAddress("muplus_PX", &muplus_PX);
	chain->SetBranchAddress("muplus_PY", &muplus_PY);
	chain->SetBranchAddress("muplus_PZ", &muplus_PZ);
	chain->SetBranchAddress("muplus_PE", &muplus_PE);
	chain->SetBranchAddress("muplus_PT", &muplus_PT);
	chain->SetBranchAddress("muminus_PX", &muminus_PX);
	chain->SetBranchAddress("muminus_PY", &muminus_PY);
	chain->SetBranchAddress("muminus_PZ", &muminus_PZ);
	chain->SetBranchAddress("muminus_PE", &muminus_PE);
	chain->SetBranchAddress("muminus_PT", &muminus_PT);
	chain->SetBranchAddress("Kplus_PX", &Kplus_PX);
	chain->SetBranchAddress("Kplus_PY", &Kplus_PY);
	chain->SetBranchAddress("Kplus_PZ", &Kplus_PZ);
	chain->SetBranchAddress("Kplus_PE", &Kplus_PE);
	chain->SetBranchAddress("Kplus_PT", &Kplus_PT);
	chain->SetBranchAddress("Kminus_PX", &Kminus_PX);
	chain->SetBranchAddress("Kminus_PY", &Kminus_PY);
	chain->SetBranchAddress("Kminus_PZ", &Kminus_PZ);
	chain->SetBranchAddress("Kminus_PE", &Kminus_PE);
	chain->SetBranchAddress("Kminus_PT", &Kminus_PT);
	chain->SetBranchAddress("muplus_TRUEP_X", &muplus_TRUEP_X);
	chain->SetBranchAddress("muplus_TRUEP_Y", &muplus_TRUEP_Y);
	chain->SetBranchAddress("muplus_TRUEP_Z", &muplus_TRUEP_Z);
	chain->SetBranchAddress("muplus_TRUEP_E", &muplus_TRUEP_E);
	chain->SetBranchAddress("muminus_TRUEP_X", &muminus_TRUEP_X);
	chain->SetBranchAddress("muminus_TRUEP_Y", &muminus_TRUEP_Y);
	chain->SetBranchAddress("muminus_TRUEP_Z", &muminus_TRUEP_Z);
	chain->SetBranchAddress("muminus_TRUEP_E", &muminus_TRUEP_E);
	chain->SetBranchAddress("Kplus_TRUEP_X", &Kplus_TRUEP_X);
	chain->SetBranchAddress("Kplus_TRUEP_Y", &Kplus_TRUEP_Y);
	chain->SetBranchAddress("Kplus_TRUEP_Z", &Kplus_TRUEP_Z);
	chain->SetBranchAddress("Kplus_TRUEP_E", &Kplus_TRUEP_E);
	chain->SetBranchAddress("Kminus_TRUEP_X", &Kminus_TRUEP_X);
	chain->SetBranchAddress("Kminus_TRUEP_Y", &Kminus_TRUEP_Y);
	chain->SetBranchAddress("Kminus_TRUEP_Z", &Kminus_TRUEP_Z);
	chain->SetBranchAddress("Kminus_TRUEP_E", &Kminus_TRUEP_E);

	chain->SetBranchStatus("*",0);
	chain->SetBranchStatus("runNumber",1);
	chain->SetBranchStatus("eventNumber",1);
	chain->SetBranchStatus("B_s0_LOKI_MASS_JpsiConstr",1);
	chain->SetBranchStatus("B_s0_TRUETAU",1);
	chain->SetBranchStatus("B_s0_LOKI_DTF_CTAU",1);
	chain->SetBranchStatus("B_s0_LOKI_DTF_CTAUERR",1);
	chain->SetBranchStatus("B_s0_LOKI_DTF_CHI2NDOF",1);
	chain->SetBranchStatus("B_s0_LOKI_DTF_VCHI2NDOF",1);
	chain->SetBranchStatus("B_s0_ENDVERTEX_CHI2",1);
	chain->SetBranchStatus("B_s0_ENDVERTEX_NDOF",1);
	chain->SetBranchStatus("B_s0_IPCHI2_OWNPV",1);
	chain->SetBranchStatus("B_s0_MINIPCHI2NEXTBEST",1);
	chain->SetBranchStatus("B_s0_BKGCAT",1); 
	chain->SetBranchStatus("B_s0_ThetaL",0); // None of these angular variables are working
	chain->SetBranchStatus("B_s0_ThetaK",0); // so need to calculate them myself
	chain->SetBranchStatus("B_s0_Phi",0);    // for both truth and reconstructed variables
	chain->SetBranchStatus("B_s0_ThetaTr",0);
	chain->SetBranchStatus("B_s0_PhiTr",0); 
	chain->SetBranchStatus("B_s0_ThetaVtr",0); 
	chain->SetBranchStatus("B_s0_TRUEID",1); 
	chain->SetBranchStatus("B_s0_Hlt1DiMuonHighMassDecision_TOS",1); 
	chain->SetBranchStatus("B_s0_Hlt1TrackMuonDecision_TOS", 1);
	chain->SetBranchStatus("B_s0_Hlt1TrackAllL0Decision_TOS", 1);
	chain->SetBranchStatus("B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS",1); 
	chain->SetBranchStatus("B_s0_Hlt2DiMuonJPsiDecision_TOS",1); 
	chain->SetBranchStatus("B_s0_ENDVERTEX_X",1); 
	chain->SetBranchStatus("B_s0_ENDVERTEX_Y",1); 
	chain->SetBranchStatus("B_s0_ENDVERTEX_Z",1); 
	chain->SetBranchStatus("B_s0_OWNPV_X",1); 
	chain->SetBranchStatus("B_s0_OWNPV_Y",1); 
	chain->SetBranchStatus("B_s0_OWNPV_Z",1); 
	chain->SetBranchStatus("PVX",1); 
	chain->SetBranchStatus("PVY",1); 
	chain->SetBranchStatus("PVZ",1); 
	chain->SetBranchStatus("PVNTRACKS",1); 
	chain->SetBranchStatus("PVNDOF",1); 
	chain->SetBranchStatus("nPVs",1); 
	chain->SetBranchStatus("muplus_PT",1); 
	chain->SetBranchStatus("muminus_PT",1); 
	chain->SetBranchStatus("Kplus_PT",1); 
	chain->SetBranchStatus("Kminus_PT",1); 
	chain->SetBranchStatus("muplus_PX",1); 
	chain->SetBranchStatus("muplus_PY",1); 
	chain->SetBranchStatus("muplus_PZ",1); 
	chain->SetBranchStatus("muplus_PE",1); 
	chain->SetBranchStatus("muminus_PX",1); 
	chain->SetBranchStatus("muminus_PY",1); 
	chain->SetBranchStatus("muminus_PZ",1); 
	chain->SetBranchStatus("muminus_PE",1); 
	chain->SetBranchStatus("Kplus_PX",1); 
	chain->SetBranchStatus("Kplus_PY",1); 
	chain->SetBranchStatus("Kplus_PZ",1); 
	chain->SetBranchStatus("Kplus_PE",1); 
	chain->SetBranchStatus("Kminus_PX",1); 
	chain->SetBranchStatus("Kminus_PY",1); 
	chain->SetBranchStatus("Kminus_PZ",1); 
	chain->SetBranchStatus("Kminus_PE",1); 
	chain->SetBranchStatus("muplus_TRUEP_X",1); 
	chain->SetBranchStatus("muplus_TRUEP_Y",1); 
	chain->SetBranchStatus("muplus_TRUEP_Z",1); 
	chain->SetBranchStatus("muplus_TRUEP_E",1); 
	chain->SetBranchStatus("muminus_TRUEP_X",1); 
	chain->SetBranchStatus("muminus_TRUEP_Y",1); 
	chain->SetBranchStatus("muminus_TRUEP_Z",1); 
	chain->SetBranchStatus("muminus_TRUEP_E",1); 
	chain->SetBranchStatus("Kplus_TRUEP_X",1); 
	chain->SetBranchStatus("Kplus_TRUEP_Y",1); 
	chain->SetBranchStatus("Kplus_TRUEP_Z",1); 
	chain->SetBranchStatus("Kplus_TRUEP_E",1); 
	chain->SetBranchStatus("Kminus_TRUEP_X",1); 
	chain->SetBranchStatus("Kminus_TRUEP_Y",1); 
	chain->SetBranchStatus("Kminus_TRUEP_Z",1); 
	chain->SetBranchStatus("Kminus_TRUEP_E",1); 
	chain->SetBranchStatus("muminus_PIDmu",1); 
	chain->SetBranchStatus("muplus_PIDmu",1); 
	chain->SetBranchStatus("Kminus_PIDK",1); 
	chain->SetBranchStatus("Kplus_PIDK",1); 
	chain->SetBranchStatus("J_psi_1S_MM",1); 
	chain->SetBranchStatus("muplus_TRACK_CHI2NDOF",1); 
	chain->SetBranchStatus("muminus_TRACK_CHI2NDOF",1); 
	chain->SetBranchStatus("Kplus_TRACK_CHI2NDOF",1); 
	chain->SetBranchStatus("Kminus_TRACK_CHI2NDOF",1); 
	chain->SetBranchStatus("phi_1020_PT",1); 
	chain->SetBranchStatus("phi_1020_M",1); 
	chain->SetBranchStatus("phi_1020_ENDVERTEX_CHI2",1); 
	chain->SetBranchStatus("J_psi_1S_ENDVERTEX_NDOF",1); 
	chain->SetBranchStatus("J_psi_1S_ENDVERTEX_CHI2",1); 
	chain->SetBranchStatus("phi_1020_ENDVERTEX_NDOF",1); 
	// Create a new file + a clone of old tree in new file
	TFile * newfile = new TFile("/tmp/small.root","recreate");
	TTree * newtree = chain->CloneTree(0);

	double helcosthetaK;
	double helcosthetaL;
	double helphi;
	double trcostheta;
	double trphi;
	double helcosthetaK_true;
	double helcosthetaL_true;
	double helphi_true;
	double trcostheta_true;
	double trphi_true;

	newtree->Branch("cosTheta", &trcostheta);
	newtree->Branch("cosPsi", &helcosthetaK);
	newtree->Branch("phi", &trphi);
	newtree->Branch("helcosthetaL", &helcosthetaL);
	newtree->Branch("helcosthetaK", &helcosthetaK);
	newtree->Branch("helphi", &helphi);
	newtree->Branch("cosTheta_true", &trcostheta_true);
	newtree->Branch("cosPsi_true", &helcosthetaK_true);
	newtree->Branch("phi_true", &trphi_true);
	newtree->Branch("helcosthetaL_true", &helcosthetaL_true);
	newtree->Branch("helcosthetaK_true", &helcosthetaK_true);
	newtree->Branch("helphi_true", &helphi_true);
	newtree->Branch("muminus_IPz",&muminus_IPz); 
	newtree->Branch("muplus_IPz",&muplus_IPz); 
	newtree->Branch("Kminus_IPz",&Kminus_IPz); 
	newtree->Branch("Kplus_IPz",&Kplus_IPz); 
        newtree->Branch("B_velo_eff_weight", &eff);

        double BshiftX(0.626);  //MC2012
        double BshiftY(0.100);  //MC2012

        double c_online(-0.010029);
        double c_offline(-0.00286159);

	Long64_t nentries = chain->GetEntries();
	//nentries = 1000;
	for (Long64_t i=0; i<nentries; i++) {
		if (i % 10000 == 0) std::cout << i << std::endl;
		chain->GetEntry(i);

		TLorentzVector pKplus   (Kplus_PX, Kplus_PY, Kplus_PZ, Kplus_PE);
		TLorentzVector pKminus  (Kminus_PX, Kminus_PY, Kminus_PZ, Kminus_PE);
		TLorentzVector pMplus   (muplus_PX, muplus_PY, muplus_PZ, muplus_PE);
		TLorentzVector pMminus  (muminus_PX, muminus_PY, muminus_PZ, muminus_PE);
		TLorentzVector pKplus_true   (Kplus_TRUEP_X, Kplus_TRUEP_Y, Kplus_TRUEP_Z, Kplus_TRUEP_E);
		TLorentzVector pKminus_true  (Kminus_TRUEP_X, Kminus_TRUEP_Y, Kminus_TRUEP_Z, Kminus_TRUEP_E);
		TLorentzVector pMplus_true   (muplus_TRUEP_X, muplus_TRUEP_Y, muplus_TRUEP_Z, muplus_TRUEP_E);
		TLorentzVector pMminus_true  (muminus_TRUEP_X, muminus_TRUEP_Y, muminus_TRUEP_Z, muminus_TRUEP_E);

                muplus_IPz  = std::abs(1./muplus_PT  *((B_s0_ENDVERTEX_Y-BshiftY)*muplus_PX  - (B_s0_ENDVERTEX_X-BshiftX)*muplus_PY));
                muminus_IPz = std::abs(1./muminus_PT *((B_s0_ENDVERTEX_Y-BshiftY)*muminus_PX - (B_s0_ENDVERTEX_X-BshiftX)*muminus_PY));
                Kplus_IPz   = std::abs(1./Kplus_PT   *((B_s0_ENDVERTEX_Y-BshiftY)*Kplus_PX   - (B_s0_ENDVERTEX_X-BshiftX)*Kplus_PY));
                Kminus_IPz  = std::abs(1./Kminus_PT  *((B_s0_ENDVERTEX_Y-BshiftY)*Kminus_PX  - (B_s0_ENDVERTEX_X-BshiftX)*Kminus_PY));

                // using a quadratic scaling factor
                eff_mp = (1. +  c_online  * muplus_IPz * muplus_IPz)*(1.+( -0.0101141  *muplus_IPz )+(-0.00447283  *muplus_IPz*muplus_IPz));
                eff_mm = (1. +  c_online  * muminus_IPz * muminus_IPz)*(1.+( -0.00196818 *muminus_IPz )+(-0.00412383  *muminus_IPz*muminus_IPz));
                eff_kp = (1. +  c_offline * Kplus_IPz * Kplus_IPz)*(1.+( -0.00135497 *Kplus_IPz )+( 0.000415783 *Kplus_IPz*Kplus_IPz));
                eff_km = (1. +  c_offline * Kminus_IPz * Kminus_IPz)*(1.+( -0.00362193 *Kminus_IPz )+( 0.00149279  *Kminus_IPz*Kminus_IPz));
		eff = 1./(eff_mm*eff_mp*eff_km*eff_kp);

		//pKplus.Print();
		//pKplus_true.Print();

		if (B_s0_BKGCAT < 60) {
			PRD      (pMplus, pMminus, pKplus, pKminus, helcosthetaK, helcosthetaL, helphi);
			PRD_trans(pMplus, pMminus, pKplus, pKminus, trcostheta, trphi);
			PRD      (pMplus_true, pMminus_true, pKplus_true, pKminus_true, helcosthetaK_true, helcosthetaL_true, helphi_true);
			PRD_trans(pMplus_true, pMminus_true, pKplus_true, pKminus_true, trcostheta_true, trphi_true);
			newtree->Fill();
		}
	}
	newtree->Print();
	newtree->AutoSave();
	delete chain;
	delete newfile;
}

void PRD_trans(const  TLorentzVector & _pMuPlus,
		const  TLorentzVector & _pMuMinus,
		const  TLorentzVector & _pKPlus,
		const  TLorentzVector & _pKMinus,
		double & cosTheta,
		double & phi
	      ) 
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


void PRD(const  TLorentzVector & _pMuPlus,
		const  TLorentzVector & _pMuMinus,
		const  TLorentzVector & _pKPlus,
		const  TLorentzVector & _pKMinus,
		double & cosThetaK,
		double & cosThetaL,
		double & phi
	)
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

int main()
{
	clone();
	return 1;
}
