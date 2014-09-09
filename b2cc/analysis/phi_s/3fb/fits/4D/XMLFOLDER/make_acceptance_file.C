{
	vector<double> weights;
	// MC2012 + MC2011 reweigthed weights (nominal for fit)
  	weights.push_back(+1.);
	weights.push_back(+1.0514);
	weights.push_back(+1.0532);
	weights.push_back(-0.0006);
	weights.push_back(+0.0001);
	weights.push_back(-0.0003);
	weights.push_back(+1.0155);
	weights.push_back(+0.0007);
	weights.push_back(-0.0004);
	weights.push_back(+0.0008);
	/* MC2012 DG=0 from Sevda
  	weights.push_back(+0.977304);
	weights.push_back(+1.02467);
	weights.push_back(+1.02569);
	weights.push_back(+0.000559189);
	weights.push_back(+0.000732633);
	weights.push_back(-0.000186945);
	weights.push_back(+0.991565);
	weights.push_back(+0.000354336);
	weights.push_back(-0.000137018);
	weights.push_back(-0.000592421);
	*/
	/* MC2012
	weights.push_back(+1.);
	weights.push_back(+1.0484);
	weights.push_back(+1.0486);
	weights.push_back(-0.0008);
	weights.push_back(+0.0003);
	weights.push_back(-0.0003);
	weights.push_back(+1.0142);
	weights.push_back(+0.0000);
	weights.push_back(+0.0005);
	weights.push_back(-0.0027);
	*/
	/* MC2011
	weights.push_back(+1.);
	weights.push_back(+1.0462);
	weights.push_back(+1.0491);
	weights.push_back(-0.0008);
	weights.push_back(-0.0006);
	weights.push_back(-0.0002);
	weights.push_back(+1.0118);
	weights.push_back(+0.0014);
	weights.push_back(-0.0008);
	weights.push_back(-0.0014);
	*/
	/* MC2012 with VELO reweighting
	weights.push_back(+0.97634651);
	weights.push_back(+1.0243427);
	weights.push_back(+1.0236514);
	weights.push_back(-0.0012232223);
	weights.push_back(+0.00036670406);
	weights.push_back(-1.8777779e-05);
	weights.push_back(+0.99084265);
	weights.push_back(+0.00091775077);
	weights.push_back(-0.00011787661);
	weights.push_back(-0.0015717352);
	*/
	// MC2012 sim08e with trigger bin1
	/*
	if(false){
	weights.push_back(0.97332);
	weights.push_back(1.02809);
	weights.push_back(1.02942);
	weights.push_back(0.00034);
	weights.push_back(0.00055);
	weights.push_back(0.00143);
	weights.push_back(0.98727);
	weights.push_back(-0.00010);
	weights.push_back(0.00046);
	weights.push_back(-0.00464);
	}
	// MC2012 sim08e with trigger bin1
	if(false){
	weights.push_back(0.97424);
	weights.push_back(1.02786);
	weights.push_back(1.02614);
	weights.push_back(-0.00124);
	weights.push_back(0.00001);
	weights.push_back(-0.00011);
	weights.push_back(0.98946);
	weights.push_back(-0.00002);
	weights.push_back(0.00149);
	weights.push_back(0.00015);
	}
	// MC2012 sim08e with trigger bin1
	if(false){
	weights.push_back(0.97535);
	weights.push_back(1.02498);
	weights.push_back(1.02481);
	weights.push_back(-0.00033);
	weights.push_back(-0.00037);
	weights.push_back(0.00054);
	weights.push_back(0.98967);
	weights.push_back(0.00015);
	weights.push_back(0.00065);
	weights.push_back(-0.00149);
	}
	// MC2012 sim08e with trigger bin1
	if(false){
	weights.push_back(0.97487);
	weights.push_back(1.02490);
	weights.push_back(1.02440);
	weights.push_back(-0.00120);
	weights.push_back(0.00002);
	weights.push_back(-0.00028);
	weights.push_back(0.98882);
	weights.push_back(-0.00092);
	weights.push_back(0.00078);
	weights.push_back(-0.00208);
	}
	// MC2012 sim08e with trigger bin1
	if(true){
	weights.push_back(0.97208);
	weights.push_back(1.02448);
	weights.push_back(1.02335);
	weights.push_back(0.00025);
	weights.push_back(-0.00108);
	weights.push_back(0.00059);
	weights.push_back(0.98715);
	weights.push_back(-0.00221);
	weights.push_back(0.00004);
	weights.push_back(-0.00609);
	}
	*/
	TFile * f = TFile::Open("acceptance_weights_and_histos_MC2012_sim08e_reco_angles_true_time_with_trigger_bin5.root", "RECREATE");
	TTree * tree = new TTree("tree","tree");
	tree->Branch("weights", "std::vector<double>", &weights);
	tree->Fill();
	f->Write();
	f->Close();
}
