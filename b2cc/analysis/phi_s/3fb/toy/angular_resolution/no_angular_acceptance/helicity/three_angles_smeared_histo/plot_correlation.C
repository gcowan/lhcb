{
	TFile * f = TFile::Open("nominal.root","READ");
	TFile * g = TFile::Open("smeared.root","READ");
	TTree * t = (TTree*)f->Get("RapidFitResult");
	TTree * s = (TTree*)g->Get("RapidFitResult");
	
	t->AddFriend(s,"smeared");

	const int n(9);
	TCanvas * c = new TCanvas();
	c->Divide(n,n);
	char * names[n] = {"gamma_value", "deltaGamma_value", "Aperp_sq_value", "Azero_sq_value", "delta_para_value", "delta_perp_value", "Phi_s_value", "lambda_value", "deltaM_value"};
	char buf[100];
	int ind(1);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c->cd(ind);
			ind++;
			std::sprintf(buf, "%s-smeared.%s:%s-smeared.%s>>h", names[i], names[i], names[j], names[j]);
			t->Draw(buf,"","");
			TH2F * h = (TH2F*)gDirectory->FindObject("h");
			std::sprintf(buf, "%+0.5f ", h->GetCorrelationFactor());		
			std::cout << buf;
			c->Modified();
			c->Update();
			delete h;
		}
 	std::cout << std::endl;
	}
	c->SaveAs("corrs.eps");
}

