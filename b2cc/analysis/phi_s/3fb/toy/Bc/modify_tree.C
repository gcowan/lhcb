{
	TFile * f = TFile::Open("pulls_Bc.root", "READ");
	TTree * t = (TTree*)f->Get("RapidFitResult");
	double gammas_gen;
	double Aperp_sq_gen;
	double Azero_sq_gen;
	double delta_para_gen;
	double gammas;
	double Aperp_sq;
	double Azero_sq;
	double delta_para;
	double gammas_err;
	double Aperp_sq_err;
	double Azero_sq_err;
	double delta_para_err;
	double gammas_pull;
	double Aperp_sq_pull;
	double Azero_sq_pull;
	double delta_para_pull;
	t->SetBranchAddress("gamma_gen", &gammas_gen);
	t->SetBranchAddress("Aperp_sq_gen", &Aperp_sq_gen);
	t->SetBranchAddress("Azero_sq_gen", &Azero_sq_gen);
	t->SetBranchAddress("delta_para_gen", &delta_para_gen);
	t->SetBranchAddress("gamma_value", &gammas);
	t->SetBranchAddress("Aperp_sq_value", &Aperp_sq);
	t->SetBranchAddress("Azero_sq_value", &Azero_sq);
	t->SetBranchAddress("delta_para_value", &delta_para);
	t->SetBranchAddress("gamma_error", &gammas_err);
	t->SetBranchAddress("Aperp_sq_error", &Aperp_sq_err);
	t->SetBranchAddress("Azero_sq_error", &Azero_sq_err);
	t->SetBranchAddress("delta_para_error", &delta_para_err);
	t->SetBranchAddress("gamma_pull", &gammas_pull);
	t->SetBranchAddress("Aperp_sq_pull", &Aperp_sq_pull);
	t->SetBranchAddress("Azero_sq_pull", &Azero_sq_pull);
	t->SetBranchAddress("delta_para_pull", &delta_para_pull);
	
	TFile * g = TFile::Open("pulls_Bc_modified.root","RECREATE");
	TTree * new_t = t->CloneTree(0);
	for (int i = 0; i < t->GetEntries(); i++)
	{
		t->GetEntry(i);
		gammas_gen = 0.6653; 
		Aperp_sq_gen = 0.16; 
		Azero_sq_gen = 0.601; 
		delta_para_gen = 2.5; 
		gammas_pull     = (gammas - gammas_gen)/gammas_err;
		Aperp_sq_pull   = (Aperp_sq - Aperp_sq_gen)/Aperp_sq_err;
		Azero_sq_pull   = (Azero_sq - Azero_sq_gen)/Azero_sq_err;
		delta_para_pull = (delta_para - delta_para_gen)/delta_para_err;
		std::cout << gammas_pull << std::endl;
		new_t->Fill();
	}
	new_t->AutoSave();
	delete f;
	delete g;
}
