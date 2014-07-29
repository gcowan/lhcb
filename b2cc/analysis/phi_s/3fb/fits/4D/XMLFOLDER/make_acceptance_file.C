{
	vector<double> weights;
	/* MC2012 DG=0 from Sevda
	*/
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
	TFile * f = TFile::Open("acc_weights_MC2012_DG0.root", "RECREATE");
	TTree * tree = new TTree("tree","tree");
	tree->Branch("weights", "std::vector<double>", &weights);
	tree->Fill();
	f->Write();
	f->Close();
}
