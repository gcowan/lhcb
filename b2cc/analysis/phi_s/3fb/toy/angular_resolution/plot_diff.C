{

	gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");	
	TFile * f_nom;
	TFile * f_sme;
	TTree * t_nom;
	TTree * t_sme;

   	Double_t        gamma_value_nom;
   	Double_t        gamma_value_sme;
   	Double_t        gamma_error_nom;
   	TBranch        *b_gamma_value;   //!
   	TBranch        *b_gamma_error;   //!

	char * names[4]  = {"gamma_value", "deltaGamma_value", "Aperp_sq_value", "Azero_sq_value"};
	char * errors[4] = {"gamma_error", "deltaGamma_error", "Aperp_sq_error", "Azero_sq_error"};
	char * title[4] = {"gamma (nominal-smeared)", "deltaGamma (nominal-smeared)", "Aperp_sq (nominal-smeared)", "Azero_sq (nominal-smeared)"};
	//char * title[4] = {"gamma (nominal-smeared)/error", "deltaGamma (nominal-smeared)/error", "Aperp_sq (nominal-smeared)/error", "Azero_sq (nominal-smeared)/error"};
	char * title[4] = {"gamma (nominal-smeared)/nominal", "deltaGamma (nominal-smeared)/nominal", "Aperp_sq (nominal-smeared)/nominal", "Azero_sq (nominal-smeared)/nominal"};

	TH1D * histos[4];
	for (int j = 0; j < 4; j++)
	{
		//histos[j] = new TH1D(names[j], "gamma", 50, -0.01, 0.01);
		histos[j] = new TH1D(names[j], "gamma", 50, -0.2, 0.2);
		//histos[j] = new TH1D(names[j], "gamma", 50, -1., 1.);
	}
	char buf_nom[20];
	char buf_sme[20];

	for (int i = 2; i < 135; i++)
	{
		sprintf(buf_nom, "pulls_nominal%03d.root", i);
		sprintf(buf_sme, "pulls_smeared%03d.root", i);
		std::cout << buf_nom << " " << buf_sme << std::endl;
		f_nom = TFile::Open(buf_nom);
		f_sme = TFile::Open(buf_sme);
		t_nom = (TTree*)f_nom->Get("RapidFitResult");
		t_sme = (TTree*)f_sme->Get("RapidFitResult");
   	
		for (int j = 0; j < 4; j++)
		{
			t_nom->SetBranchAddress(names[j] , &gamma_value_nom, &b_gamma_value);
			t_nom->SetBranchAddress(errors[j], &gamma_error_nom, &b_gamma_error);
			t_nom->GetEntry(0);
   			t_sme->SetBranchAddress(names[j], &gamma_value_sme, &b_gamma_value);
			t_sme->GetEntry(0);
			std::cout << names[j] << " " << gamma_value_nom << " " << gamma_value_sme << " " << gamma_error_nom << std::endl;
			//histos[j].Fill((gamma_value_nom-gamma_value_sme));
			histos[j].Fill((gamma_value_nom-gamma_value_sme)/gamma_value_nom);
			//histos[j].Fill((gamma_value_nom-gamma_value_sme)/gamma_error_nom);
			histos[j]->Print();
		}
		f_nom->Close();
		f_sme->Close();
	}	

	//gStyle->SetOptFit(1);	
	gStyle->SetOptStat(2220);
	TCanvas * c = new TCanvas();
	c->Divide(2,2);
	for (int j = 0; j < 4; j++)
	{
		c->cd(j+1);
		histos[j].Draw();
		histos[j].Fit("gaus");
		histos[j].GetXaxis()->SetTitle(title[j]);
		//delete histos[j];
	}
	c->SaveAs("fit_differences.pdf");
}
