{
	TFile * f = TFile::Open("result.root","READ");
	//TFile * g = TFile::Open("smeared.root","READ");
	TTree * t = (TTree*)f->Get("RapidFitResult");
	//TTree * s = (TTree*)g->Get("RapidFitResult");

	//t->AddFriend(s,"smeared");

	const int n(9);
	TCanvas * c = new TCanvas();
	c->Divide(n,n);
	double gen[n]   = {0.6654, 0.09165, 0.2490, 0.5213, 3.30, 3.07, 0.07, 1., 17.8};
	const char * names[n] = {"gamma_value", "deltaGamma_value", "Aperp_sq_value", "Azero_sq_value", "delta_para_value", "delta_perp_value", "Phi_s_value", "lambda_value", "deltaM_value"};
	const char * errors[n] = {"gamma_error", "deltaGamma_error", "Aperp_sq_error", "Azero_sq_error", "delta_para_error", "delta_perp_error", "Phi_s_error", "lambda_error", "deltaM_error"};
	char buf[100];
	int ind(1);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c->cd(ind);
			ind++;
			//std::sprintf(buf, "%s-smeared.%s:%s-smeared.%s>>h", names[i], names[i], names[j], names[j]);
			std::sprintf(buf, "%s-%f:%s-%f>>h", names[i], gen[i], names[j], gen[j]);
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

	TCanvas * d = new TCanvas();
	d->Divide(3,3);
	for (int i = 0; i < n; i++)
	{
		d->cd(i+1);
		std::sprintf(buf, "(%s-%f)/%s", names[i], gen[i], errors[i]);
		t->Draw(buf,"","");
		d->Modified();
		d->Update();
	}
	d->SaveAs("diffs.eps");
}

