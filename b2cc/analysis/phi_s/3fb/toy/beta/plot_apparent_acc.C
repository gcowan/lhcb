{
	TFile * f = TFile::Open("gen_with_ang_acc.root");
	TTree * ft = (TTree*)f->Get("dataNTuple");
	TFile * g = TFile::Open("gen.root");
	TTree * gt = (TTree*)g->Get("dataNTuple");

	const int nbins = 50;
	double bins[nbins+1];
	const double t_min(0.3);
	const double t_max(14.);
	const double tau_PDG(1.5);
	double A(TMath::Exp(-t_max/tau_PDG));
	double B(TMath::Exp(-t_min/tau_PDG));
	bins[0] = t_min;
	bins[nbins] = t_max;
	for(int i(1); i < nbins; i++){
		bins[i] = -TMath::Log(((double)i*(A-B)/(double)nbins+B))*tau_PDG;
	}

	TH1D * fh = new TH1D("time_reco","time_reco", nbins, t_min, t_max);
	TH1D * gh = new TH1D("time_gen" ,"time_gen" , nbins, t_min, t_max);
	TH1D * rh = new TH1D("time_acc" ,"time_acc" , nbins, t_min, t_max);
	fh->Sumw2();
	gh->Sumw2();
	rh->Sumw2();
	TH1D * fh_k = new TH1D("k_reco","time_reco", nbins, -1, 1); 
	TH1D * gh_k = new TH1D("k_gen" ,"time_gen" , nbins, -1, 1); 
	TH1D * rh_k = new TH1D("k_acc" ,"time_acc" , nbins, -1, 1); 
	fh_k->Sumw2();
	gh_k->Sumw2();
	rh_k->Sumw2();
	TH1D * fh_l = new TH1D("l_reco","time_reco", nbins, -1, 1); 
	TH1D * gh_l = new TH1D("l_gen" ,"time_gen" , nbins, -1, 1); 
	TH1D * rh_l = new TH1D("l_acc" ,"time_acc" , nbins, -1, 1); 
	fh_l->Sumw2();
	gh_l->Sumw2();
	rh_l->Sumw2();
	TH1D * fh_p = new TH1D("p_reco","time_reco", nbins, -TMath::Pi(), TMath::Pi()); 
	TH1D * gh_p = new TH1D("p_gen" ,"time_gen" , nbins, -TMath::Pi(), TMath::Pi()); 
	TH1D * rh_p = new TH1D("p_acc" ,"time_acc" , nbins, -TMath::Pi(), TMath::Pi()); 
	fh_p->Sumw2();
	gh_p->Sumw2();
	rh_p->Sumw2();

	ft->Draw("time>>time_reco", "", "goff");
	gt->Draw("time>>time_gen","","goff");
	rh->Divide(fh,gh, 1, 1, "b");

	TFile * newfile = TFile::Open("time_acc.root","RECREATE");
	rh->Write();
	newfile->Close();

	ft->Draw("helcosthetaK>>k_reco", "","goff");
	gt->Draw("helcosthetaK>>k_gen","","goff");
	rh_k->Divide(fh_k,gh_k, 1, 1, "b");

	ft->Draw("helcosthetaL>>l_reco", "","goff");
	gt->Draw("helcosthetaL>>l_gen","","goff");
	rh_l->Divide(fh_l,gh_l, 1, 1, "b");

	ft->Draw("helphi>>p_reco", "","goff");
	gt->Draw("helphi>>p_gen","","goff");
	rh_p->Divide(fh_p,gh_p, 1, 1, "b");

	TF1 * pol = new TF1("pol2", "[0]*(1 + [1]*x + [2]*x*x)", t_min, t_max);
	//TF1 * pol = new TF1("pol2", "[0]*(1 + [1]*x + [2]*x*x)", 0.3, 14);
	pol->SetLineColor(kRed);
	pol->SetParName(0, "N");
	pol->SetParName(1, "beta");
	pol->SetParName(2, "gamma");
	//pol->FixParameter(2,0);

	TCanvas * c = new TCanvas();
	c->Divide(2,2);
	c->cd(1);
	gPad->SetLogy();
	fh->Draw();
	fh->GetXaxis()->SetTitle("t [ps]");
	fh->GetYaxis()->SetTitle("Events");
	c->cd(2);
	gPad->SetLogy();
	gh->Draw();
	gh->GetXaxis()->SetTitle("t [ps]");
	gh->GetYaxis()->SetTitle("Events");
	c->cd(3);
	gStyle->SetOptFit(1);
	rh->Draw();
	rh->GetXaxis()->SetTitle("t [ps]");
	rh->GetYaxis()->SetTitle("Efficiency");
	TFitResultPtr s = rh->Fit(pol,"SR");
	s->Print("v");
	c->SaveAs("time_app_acc.pdf");

	TCanvas * d = new TCanvas();
	d->Divide(2,2);
	d->cd(1);
	fh_k->Draw();
	fh_k->GetXaxis()->SetTitle("cos#theta_{K}");
	fh_k->GetYaxis()->SetTitle("Events");
	d->cd(2);
	gh_k->Draw();
	gh_k->GetXaxis()->SetTitle("cos#theta_{K}");
	gh_k->GetYaxis()->SetTitle("Events");
	d->cd(3);
	rh_k->Draw();
	rh_k->GetXaxis()->SetTitle("cos#theta_{K}");
	rh_k->GetYaxis()->SetTitle("Efficiency");
	d->SaveAs("cosThetaK_app_acc.pdf");
	
	TCanvas * d1 = new TCanvas();
	d1->Divide(2,2);
	d1->cd(1);
	fh_l->Draw();
	fh_l->GetXaxis()->SetTitle("cos#theta_{L}");
	fh_l->GetYaxis()->SetTitle("Events");
	d1->cd(2);
	gh_l->Draw();
	gh_l->GetXaxis()->SetTitle("cos#theta_{L}");
	gh_l->GetYaxis()->SetTitle("Events");
	d1->cd(3);
	rh_l->Draw();
	rh_l->GetXaxis()->SetTitle("cos#theta_{L}");
	rh_l->GetYaxis()->SetTitle("Efficiency");
	d1->SaveAs("cosThetaL_app_acc.pdf");

	TCanvas * d2 = new TCanvas();
	d2->Divide(2,2);
	d2->cd(1);
	fh_p->Draw();
	fh_p->GetXaxis()->SetTitle("#phi");
	fh_p->GetYaxis()->SetTitle("Events");
	d2->cd(2);
	gh_p->Draw();
	gh_p->GetXaxis()->SetTitle("#phi");
	gh_p->GetYaxis()->SetTitle("Events");
	d2->cd(3);
	rh_p->Draw();
	rh_p->GetXaxis()->SetTitle("#phi");
	rh_p->GetYaxis()->SetTitle("Efficiency");
	d2->SaveAs("phi_app_acc.pdf");
}


