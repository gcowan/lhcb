{

	TFile * f1 = NULL;
	TFile * f2 = NULL;
	TTree * t1 = NULL;
	TTree * t2 = NULL;
	double g1_value;
	double mod_g1_value;
	double g2_value;
	double mod_g2_value;
	TString name1;
	TString name2;

	TH1D * h1 = new TH1D("g1", "g1", 50, -0.6, 0.6);
	TH1D * h2 = new TH1D("g2", "g1", 50, -0.6, 0.6);
	TH1D * h3 = new TH1D("g3", "g1", 50, -0.6, 0.6);
	TH1D * h4 = new TH1D("g4", "g1", 50, -0.6, 0.6);

	for (int i = 0; i < 501; i++)
	{
		name1 = Form("pulls_%03d.root", i);
		name2 = Form("mod_pulls_%03d.root", i);
		f1 = TFile::Open(name1);	
		f2 = TFile::Open(name2);
		t1 = (TTree*)f1->Get("RapidFitResult");	
		t2 = (TTree*)f2->Get("RapidFitResult");	
		t1->SetBranchAddress("g1_value", &g1_value);
		t2->SetBranchAddress("g1_value", &mod_g1_value);
		t1->SetBranchAddress("g2_value", &g2_value);
		t2->SetBranchAddress("g2_value", &mod_g2_value);
		t1->GetEntry();
		t2->GetEntry();
		h1->Fill((g1_value -mod_g1_value)/g1_value);
		h2->Fill((g2_value -mod_g2_value)/g2_value);
		h3->Fill((g1_value -mod_g1_value));
		h4->Fill((g2_value -mod_g2_value));
	}	

	TCanvas * c = new TCanvas("c", "c", 1000, 500);
	c->Divide(2,2);
	c->cd(1);
	h1->Draw();
	h1->GetXaxis()->SetTitle("(G001 - G001')/G001");	
	c->cd(2);
	h2->Draw();
	h2->GetXaxis()->SetTitle("(G002 - G002')/G002");	
	c->cd(3);
	h3->Draw();
	h3->GetXaxis()->SetTitle("(G001 - G001')");	
	c->cd(4);
	h4->Draw();
	h4->GetXaxis()->SetTitle("(G002 - G002')");	
	c->SaveAs("toy_by_toy_diff.pdf");
}
