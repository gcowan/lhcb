{
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2011_all_BsJpsiPhi_DTT_20131006_minimal_truth_roel.root", "READ");
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_all_BsJpsiPhi_DTT_20130709_minimal_truth_roel.root", "READ");
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_all_BsJpsiPhi_DTT_20140616_minimal_truth_olivier.root", "READ");
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_Bs2JpsiPhi_minimal_truth.root", "READ");
	TFile * f = TFile::Open("../../data/fitNTuple_peakBkg_2011_2012_Reco14_TOS_20140822.root", "READ");
	TTree * ft = (TTree*)f->Get("DecayTree");
	//TFile * g = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2011_all_BsJpsiPhi_DTT_20131006_minimal_truth_roel_with_IPz_weights.root", "RECREATE");
	//TFile * g = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_all_BsJpsiPhi_DTT_20130709_minimal_truth_roel_with_IPz_weights.root", "RECREATE");
	//TFile * g = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_all_BsJpsiPhi_DTT_20140616_minimal_truth_olivier_with_IPz_weights.root", "RECREATE");
	//TFile * g = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_Bs2JpsiPhi_minimal_truth_with_IPz_weights_v2.root", "RECREATE");
	TFile * g = TFile::Open("../../data/fitNTuple_peakBkg_2011_2012_Reco14_TOS_20140822_with_IPz_weights_v2.root", "RECREATE");
	TTree * newtree = ft->CloneTree(0); // Do no copy the data yet

	double muplus_PX;
	double muplus_PY;
	double muminus_PX;
	double muminus_PY;
	double Kplus_PX;
	double Kplus_PY;
	double Kminus_PX;
	double Kminus_PY;
	double B_s0_ENDVERTEX_X;
	double B_s0_ENDVERTEX_Y;
	double eff;
	double eff_no_trigger;
	double eff_track_trigger;
	int runPeriod;

	ft->SetBranchAddress("muplus_PX", &muplus_PX);
	ft->SetBranchAddress("muplus_PY", &muplus_PY);
	ft->SetBranchAddress("muminus_PX", &muminus_PX);
	ft->SetBranchAddress("muminus_PY", &muminus_PY);
	ft->SetBranchAddress("Kplus_PX", &Kplus_PX);
	ft->SetBranchAddress("Kplus_PY", &Kplus_PY);
	ft->SetBranchAddress("Kminus_PX", &Kminus_PX);
	ft->SetBranchAddress("Kminus_PY", &Kminus_PY);
	ft->SetBranchAddress("B_s0_ENDVERTEX_X", &B_s0_ENDVERTEX_X);
	ft->SetBranchAddress("B_s0_ENDVERTEX_Y", &B_s0_ENDVERTEX_Y);

	bool data(true);
	if (data) ft->SetBranchAddress("runPeriod", &runPeriod);
	else runPeriod = 2012; // 2012

	newtree->Branch("B_velo_eff_weight_with_trigger", &eff);
	newtree->Branch("B_velo_eff_weight_no_trigger", &eff_no_trigger);
	newtree->Branch("B_velo_eff_weight_with_track_trigger", &eff_track_trigger);

	int nentries = ft->GetEntries();
	cout << nentries << endl;

	double IPz_mp1(0.);
	double IPz_mm1(0.);
	double IPz_kp1(0.);
	double IPz_km1(0.);

	double eff_mp(0.);
	double eff_mm(0.);
	double eff_kp(0.);
	double eff_km(0.);
	double eff_mp_off(0.);
	double eff_mm_off(0.);

	double BshiftX(0.);
	double BshiftY(0.);

	double c_online(0.);
	double c_offline(0.);

	double PT;
	double PT_mp1;
	double PT_mm1;

	for( int i = 0; i < nentries; i++){
		ft->GetEntry(i);
		PT = sqrt(muplus_PX*muplus_PX + muplus_PY*muplus_PY);
		PT_mp1 = PT;
		IPz_mp1 = std::abs(1./PT *((B_s0_ENDVERTEX_Y-BshiftY)*muplus_PX  - (B_s0_ENDVERTEX_X-BshiftX)*muplus_PY));
		PT = sqrt(muminus_PX*muminus_PX + muminus_PY*muminus_PY);
		PT_mm1 = PT;
		IPz_mm1 = std::abs(1./PT *((B_s0_ENDVERTEX_Y-BshiftY)*muminus_PX - (B_s0_ENDVERTEX_X-BshiftX)*muminus_PY));
		PT = sqrt(Kplus_PX*Kplus_PX + Kplus_PY*Kplus_PY);
		IPz_kp1 = std::abs(1./PT *((B_s0_ENDVERTEX_Y-BshiftY)*Kplus_PX   - (B_s0_ENDVERTEX_X-BshiftX)*Kplus_PY));
		PT = sqrt(Kminus_PX*Kminus_PX + Kminus_PY*Kminus_PY);
		IPz_km1 = std::abs(1./PT *((B_s0_ENDVERTEX_Y-BshiftY)*Kminus_PX  - (B_s0_ENDVERTEX_X-BshiftX)*Kminus_PY));

		if ( runPeriod == 2011 ){
			if (data) {
				BshiftX =  0.4592; 
				BshiftY = -0.01501;
				c_online  = -0.00964801; //data2011
				c_offline = -0.00208986; //data2011
			}
			else{//MC2011
				BshiftX = 0.459;
				BshiftY = -0.0151;
				c_online  = -0.00803921; //MC2011
				c_offline = -0.00120181; //MC2011
			}
			// using a 3rd order polynominal for the muons
			eff_mp     = (1. +  c_online  * IPz_mp1 * IPz_mp1)*(1.+(-0.0143858 *IPz_mp1)+( 0.00789004*IPz_mp1*IPz_mp1)+(-0.00338056*IPz_mp1*IPz_mp1*IPz_mp1));
			eff_mm     = (1. +  c_online  * IPz_mm1 * IPz_mm1)*(1.+(-0.00310428*IPz_mm1)+( 0.00140996*IPz_mm1*IPz_mm1)+(-0.00176799*IPz_mm1*IPz_mm1*IPz_mm1));
			eff_mp_off = (1. +  c_offline  * IPz_mp1 * IPz_mp1)*(1.+(-0.0143858 *IPz_mp1)+( 0.00789004*IPz_mp1*IPz_mp1)+(-0.00338056*IPz_mp1*IPz_mp1*IPz_mp1));
			eff_mm_off = (1. +  c_offline  * IPz_mm1 * IPz_mm1)*(1.+(-0.00310428*IPz_mm1)+( 0.00140996*IPz_mm1*IPz_mm1)+(-0.00176799*IPz_mm1*IPz_mm1*IPz_mm1));
			eff_kp = (1. +  c_offline * IPz_kp1 * IPz_kp1)*(1.+( 0.00602845*IPz_kp1)+(-0.00510855*IPz_kp1*IPz_kp1));
			eff_km = (1. +  c_offline * IPz_km1 * IPz_km1)*(1.+( 0.00365638*IPz_km1)+(-0.00335481*IPz_km1*IPz_km1));
		}	
		else if ( runPeriod == 2012 ) {
			if (data) {
				BshiftX = 0.6262;
				BshiftY = 0.09732;
				c_online  = -0.01048758; //data2011
				c_offline = -0.00355753; //data2011
			}
			else{//MC2012
				BshiftX = 0.626;
				BshiftY = 0.100;
				c_online  = -0.010029; //MC2012
				c_offline = -0.00286159; //MC2012
			}
			eff_mp     = (1. +  c_online  * IPz_mp1 * IPz_mp1)*((1.+(-0.0316718 *IPz_mp1)+( 0.18437    *IPz_mp1*IPz_mp1)+(-0.0108996 *IPz_mp1*IPz_mp1*IPz_mp1))/(1.+    0.160385*IPz_mp1*IPz_mp1));
			eff_mm     = (1. +  c_online  * IPz_mm1 * IPz_mm1)*(1.+( -0.0145967 *IPz_mm1)+( 0.00984687 *IPz_mm1*IPz_mm1)+(-0.00314559*IPz_mm1*IPz_mm1*IPz_mm1));
			eff_mp_off = (1. +  c_offline * IPz_mp1 * IPz_mp1)*((1.+(-0.0316718 *IPz_mp1)+( 0.18437    *IPz_mp1*IPz_mp1)+(-0.0108996 *IPz_mp1*IPz_mp1*IPz_mp1))/(1.+    0.160385*IPz_mp1*IPz_mp1));
			eff_mm_off = (1. +  c_offline * IPz_mm1 * IPz_mm1)*(1.+( -0.0145967 *IPz_mm1)+( 0.00984687 *IPz_mm1*IPz_mm1)+(-0.00314559*IPz_mm1*IPz_mm1*IPz_mm1));
			eff_kp = (1. +  c_offline * IPz_kp1 * IPz_kp1)*(1.+(-0.00073608 *IPz_kp1)+(-0.000213989*IPz_kp1*IPz_kp1));
			eff_km = (1. +  c_offline * IPz_km1 * IPz_km1)*(1.+(-0.00273339 *IPz_km1)+( 0.00075945 *IPz_km1*IPz_km1));

		}
		else exit(1);
		// using a linear scaling factor
		//eff_mm = (1. +  c_online  * IPz_mp1 * IPz_mp1)*(1.+(-0.0165943  *IPz_mp1));
		//eff_mp = (1. +  c_online  * IPz_mm1 * IPz_mm1)*(1.+(-0.00835378 *IPz_mm1));
		//eff_kp = (1. +  c_offline * IPz_kp1 * IPz_kp1)*(1.+(-0.000581715*IPz_kp1));
		//eff_km = (1. +  c_offline * IPz_km1 * IPz_km1)*(1.+(-0.00106947 *IPz_km1));
		// using a quadratic scaling factor
		//eff_mm = (1. +  c_online  * IPz_mp1 * IPz_mp1)*(1.+( -0.0101141  *IPz_mp1 )+(-0.00447283  *IPz_mp1*IPz_mp1));
		//eff_mp = (1. +  c_online  * IPz_mm1 * IPz_mm1)*(1.+( -0.00196818 *IPz_mm1 )+(-0.00412383  *IPz_mm1*IPz_mm1));
		//eff_kp = (1. +  c_offline * IPz_kp1 * IPz_kp1)*(1.+( -0.00135497 *IPz_kp1 )+( 0.000415783 *IPz_kp1*IPz_kp1));
		//eff_km = (1. +  c_offline * IPz_km1 * IPz_km1)*(1.+( -0.00362193 *IPz_km1 )+( 0.00149279  *IPz_km1*IPz_km1));

		eff = 1./(eff_mm*eff_mp*eff_km*eff_kp);
		eff_no_trigger = 1./(eff_mm_off*eff_mp_off*eff_km*eff_kp);
		if ( PT_mp1 > PT_mm1 ) eff_track_trigger = 1./(eff_mm_off*eff_mp    *eff_km*eff_kp);
		else 		       eff_track_trigger = 1./(eff_mm    *eff_mp_off*eff_km*eff_kp);
		//if( eff < 0. || eff>10. ) eff = 2.

		newtree->Fill();
	}
	g->Write();
}
