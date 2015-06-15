
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

void plot_CL_chi2()
{

	gStyle->SetOptStat(0);
	gStyle->SetOptFit(1);
	gStyle->SetStatFontSize(0.02);
	TFile * _file0 = TFile::Open("results_new_Fit5/chi2.root");
	//TFile * _file0 = TFile::Open("results_new_Fit3/chi2.root");
	//TFile * _file0 = TFile::Open("results_new_Fit1/chi2.root");
	TTree * t = (TTree*)_file0->Get("tuple");

	const int nbins(10);
	TH1D * h0 = new TH1D("h0", "h", nbins, 0, 1);
	TH1D * h1 = new TH1D("h1", "h", nbins, 0, 1);
	TH1D * h2 = new TH1D("h2", "h", 40, 0, 120);
	h1->Sumw2();
	h1->SetLineColor(kRed);
	h1->SetMarkerColor(kRed);
	
	TF1 *f1 = new TF1("chi-square distribution",ChiSquareDistr,30.,200., 2); 
	f1->SetParameter(0,46);
	f1->SetParameter(1,t->GetEntries());
	TF1 *f0 = new TF1("pol0","[0]", 0.,100.); 
	f0->SetLineColor(kRed);	

	TCanvas * c = new TCanvas("c","c",1200, 600);
	c->Divide(2,1);
	c->cd(1);
	t->Draw("chi2>>h2");
	h2->GetXaxis()->SetTitle("#chi^{2}");
	h2->Fit(f1);

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
	c->SaveAs("CL.pdf");
}


