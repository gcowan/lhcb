{
	TChain * c = new TChain("RapidFitResult");
	c->Add("RapidFitOutput_20140625_134653/Global_Fit_Result_20140625_134654.root");
	c->Add("RapidFitOutput_20140625_134926/Global_Fit_Result_20140625_134926.root");
	c->Add("RapidFitOutput_20140625_135107/Global_Fit_Result_20140625_135107.root");
	c->Add("RapidFitOutput_20140625_135120/Global_Fit_Result_20140625_135121.root");
	c->Add("RapidFitOutput_20140625_135306/Global_Fit_Result_20140625_135306.root");
	c->Add("RapidFitOutput_20140625_135314/Global_Fit_Result_20140625_135314.root");
	c->Add("RapidFitOutput_20140625_135500/Global_Fit_Result_20140625_135500.root");
	c->Add("RapidFitOutput_20140625_135505/Global_Fit_Result_20140625_135505.root");
	c->Add("RapidFitOutput_20140625_135703/Global_Fit_Result_20140625_135703.root");

	TCanvas * d = new TCanvas();
	d->Divide(2,2);
	d->cd(1);
	c->Draw("gamma_value");
	d->cd(2);
	//TH2D * h = new TH2D("h", "h", 100, 0.075, 0.1, 100, 0.665, 0.675);
	c->Draw("gamma_value:deltaGamma_value>>htemp");
	cout << htemp->GetCorrelationFactor() << endl;
	d->cd(4);
	c->Draw("deltaGamma_value");
	d->SaveAs("G_DG_corr.pdf");
}
