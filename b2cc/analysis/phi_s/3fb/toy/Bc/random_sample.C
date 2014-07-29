{
	gROOT->SetBatch();
	TFile * f = TFile::Open("/Home/gcowan1/lhcb/lhcb/b2cc/analysis/phi_s/3fb/toy/Bc/MC2012_bc_signal_selsapp.root");
	TTree * fChain = (TTree*)f->Get("DecayTree");

	Double_t        ttime;
	Double_t        helcosthetaK;
	Double_t        helphi;
	Double_t        helcosthetaL;
	Double_t        tag_d;
	Int_t        	tag;
	Double_t        mistag;
	Double_t        mistag_new;
	Double_t        eventResolution;

	// List of branches
	TBranch        *b_time;   //!
	TBranch        *b_helcosthetaK;   //!
	TBranch        *b_helphi;   //!
	TBranch        *b_helcosthetaL;   //!
	TBranch        *b_tag;   //!
	TBranch        *b_mistag;   //!
	TBranch        *b_eventResolution;   //!

	fChain->SetBranchAddress("time", &ttime, &b_time);
	fChain->SetBranchAddress("helcosthetaK", &helcosthetaK, &b_helcosthetaK);
	fChain->SetBranchAddress("helphi", &helphi, &b_helphi);
	fChain->SetBranchAddress("helcosthetaL", &helcosthetaL, &b_helcosthetaL);
	fChain->SetBranchAddress("tagomega_os_cb", &mistag, &b_mistag);
	fChain->SetBranchAddress("tagdecision_os_cb", &tag, &b_tag);

	const int nentries = fChain->GetEntries();

	TFile * f_small = new TFile("Bc_sample.root", "RECREATE");
	TTree * t_small = new TTree("dataNTuple","dataNTuple");
	
	t_small->Branch("time", &ttime);
	t_small->Branch("helcosthetaK", &helcosthetaK);
	t_small->Branch("helphi", &helphi);
	t_small->Branch("helcosthetaL", &helcosthetaL);
	t_small->Branch("tag", &tag_d);
	t_small->Branch("mistag", &mistag_new);
	t_small->Branch("eventResolution", &eventResolution);

	TRandom3 * r = new TRandom3(0);
	
	int i = 0;
	while ( i < 660 )
	{
		Long64_t rand = r->Uniform(nentries);
		if (!(i % 100)) std::cout << i << " " << rand << std::endl;
		fChain->GetEntry(rand);
		//tag = 0;
		//mistag = 0.5;
		mistag_new = tag == 0 ? 0.5 : 0.355;
		tag_d = (double)tag;
		eventResolution = 0.045;
		t_small->Fill();
		i++;
	}
	t_small->Write();
	f_small->Close();
	gApplication->Terminate();
}
