
Double_t ChiSquareDistr(Double_t *x,Double_t *par) 
	{ 
		// Chisquare density distribution for nrFree degrees of freedom 

		Double_t nrFree = par[0]; 
		Double_t N = par[1]; 
		Double_t chi2 = x[0]; 

		if (chi2 > 0) { 
			Double_t lambda = nrFree/2.; 
			Double_t norm = TMath::Gamma(lambda)*TMath::Power(2.,lambda); 
			return N*TMath::Power(chi2,lambda-1)*TMath::Exp(-0.5*chi2)/norm; 
		} else 
			return 0.0; 
	} 

void plot_CL_chi2_roofit(char * filename, double min, double max, double initial, double ndof_min, double ndof_max, char * plot, char * var = "chi2")
{

	//gStyle->SetOptStat(0);
	//gStyle->SetOptFit(1);
	//gStyle->SetStatFontSize(0.02);
	TFile * _file0 = TFile::Open(filename);
	TTree * t = (TTree*)_file0->Get("tuple");

	RooRealVar * chi2 = new RooRealVar(var, "#chi^{2}", min, max);
	RooRealVar * ndof = new RooRealVar("ndof", "ndof", initial, ndof_min, ndof_max);
	RooChiSquarePdf * pdf = new RooChiSquarePdf("pdf", "pdf", *chi2, *ndof);

	RooDataSet * data = new RooDataSet("data", "data", RooArgSet(*chi2), RooFit::Import(*t));

	pdf->fitTo(*data);

	char formula[30];
	sprintf(formula, "TMath::Prob(%s,ndof)", var);

	RooFormulaVar * CL_ndof_eff_formula = new RooFormulaVar("CL","CL(#chi^{2})",formula, RooArgList(*chi2, *ndof));
	RooRealVar * CL_ndof_eff = (RooRealVar*) data->addColumn(*CL_ndof_eff_formula);
	CL_ndof_eff->setRange(0, 1);
	RooUniform * uniform = new RooUniform("uniform", "uniform", *CL_ndof_eff);
	uniform->fitTo(*data);

	//RooFormulaVar * CL_ndof_min_formula = new RooFormulaVar("CL","CL(#chi^{2})","TMath::Prob(chi2,39)", RooArgList(*chi2));
	//RooRealVar * CL_ndof_min = (RooRealVar*) data->addColumn(*CL_ndof_min_formula);
	//CL_ndof_min->setRange(0, 1);

	RooPlot * frame0 = chi2->frame(RooFit::Bins(25));
	data->plotOn(frame0);
	pdf->plotOn(frame0);
	pdf->paramOn(frame0, RooFit::Format("NELU", RooFit::AutoPrecision(2)), RooFit::Layout(0.6,0.95,0.75)); 
	data->statOn(frame0, RooFit::Format("NELU", RooFit::AutoPrecision(2)), RooFit::Layout(0.6,0.95,0.95));

	RooPlot * frame1 = CL_ndof_eff->frame(RooFit::Bins(10));
	data->plotOn(frame1);
	uniform->plotOn(frame1);	

        TCanvas * c = new TCanvas("c","c",1200, 600);
        c->Divide(2,1);
        c->cd(1);
	frame0->Draw();
        c->cd(2);
	frame1->Draw();

/*
        char buf[30];
        sprintf(buf, "TMath::Prob(chi2,%f)>>h1", f1->GetParameter(0));
        cout << buf << endl;
        c->Modified();
        c->Update();

        c->cd(2);
        t->Draw("TMath::Prob(chi2,ndof-8)>>h0");
        t->Draw(buf);
        h1->Draw();
        h1->Fit("pol0");
        h0->Draw("same");
        h1->GetXaxis()->SetTitle("CL(#chi^{2})");
        h1->GetYaxis()->SetTitle("Number of toys / 0.1");
        h1->SetMinimum(0);
        h1->SetMaximum(2*t->GetEntries()/nbins);
*/
        c->SaveAs(plot);



}


