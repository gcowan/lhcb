{
	//TFile * f = TFile::Open("test.root");
	//TFile * f = TFile::Open("test_small_phi_s.root");
	//TFile * f = TFile::Open("test_large_phi_s_0pt98_lambda.root");
	TFile * f = TFile::Open("test_large_phi_s_0pt98_lambda_helicity.root");
	f->Print();
	TTree * t = (TTree*)f->Get("dataNTuple");
	t->Print();

	const int bins(8);
	const double tmin(0.3);
	const double tmax(14.0);
	const double dms(17.7);
	TH1D * B_mod    = new TH1D("B_mod", "B", bins, 0., 0.35);
	TH1D * Bbar_mod = new TH1D("Bbar_mod", "Bbar", bins, 0., 0.35);
	TH1D * B_even    = new TH1D("B_even", "B", bins, tmin, tmax);
	TH1D * Bbar_even = new TH1D("Bbar_even", "Bbar", bins, tmin, tmax);
	TH1D * B_mod_even    = new TH1D("B_mod_even", "B", bins, 0., 0.35);
	TH1D * Bbar_mod_even = new TH1D("Bbar_mod_even", "Bbar", bins, 0., 0.35);
	TH1D * B_odd    = new TH1D("B_odd", "B", bins, tmin, tmax);
	TH1D * Bbar_odd = new TH1D("Bbar_odd", "Bbar", bins, tmin, tmax);
	TH1D * B_mod_odd    = new TH1D("B_mod_odd", "B", bins, 0., 0.35);
	TH1D * Bbar_mod_odd = new TH1D("Bbar_mod_odd", "Bbar", bins, 0., 0.35);
	TH1D * asym_even = new TH1D("asym_even", "asym", bins, 0., 0.35);
	TH1D * asym_odd = new TH1D("asym_odd", "asym", bins, 0., 0.35);
	TH1D * asym = new TH1D("asym", "asym", bins, 0., 0.35);
	TH1D * asym_tot = new TH1D("asym_tot", "asym", bins, 0., 0.35);
	B_mod->Sumw2();
	Bbar_mod->Sumw2();
	B_even->Sumw2();
	Bbar_even->Sumw2();
	B_mod_even->Sumw2();
	Bbar_mod_even->Sumw2();
	B_odd->Sumw2();
	Bbar_odd->Sumw2();
	B_mod_odd->Sumw2();
	Bbar_mod_odd->Sumw2();
	asym_even->Sumw2();
	asym_odd->Sumw2();
	asym->Sumw2();
	asym_tot->Sumw2();

	B_mod->SetMarkerStyle(2);
	Bbar_mod->SetMarkerStyle(2);
	B_even->SetMarkerStyle(2);
	Bbar_even->SetMarkerStyle(2);
	B_mod_even->SetMarkerStyle(2);
	Bbar_mod_even->SetMarkerStyle(2);
	B_odd->SetMarkerStyle(2);
	Bbar_odd->SetMarkerStyle(2);
	B_mod_odd->SetMarkerStyle(2);
	Bbar_mod_odd->SetMarkerStyle(2);
	asym_even->SetMarkerStyle(2);
	asym_odd->SetMarkerStyle(2);
	asym->SetMarkerStyle(2);
	asym_tot->SetMarkerStyle(2);

	double mistagToUse;
	double mistag;
	double mistagss;
	int tagToUse;
	double tag;
	int tagss;
	double Btime;
	double sigmat;
	double cosTheta;
	double helcosthetaL;
	double helphi;
	double time_dilution(0.);
	double tagging_dilution(0.);
	double weight(0.);
	double weight_even(0.);
	double weight_odd(0.);
	double cosTheta_sq(0.);
	t->SetBranchAddress("mistag", &mistag ) ;
	t->SetBranchAddress("tag", &tag ) ;
	t->SetBranchAddress("time", &Btime ) ;
	t->SetBranchAddress("eventResolution", &sigmat ) ;
	//t->SetBranchAddress("cosTheta", &cosTheta ) ;
	t->SetBranchAddress("helcosthetaL", &helcosthetaL ) ;
	t->SetBranchAddress("helphi", &helphi ) ;

	const int nentries = t->GetEntries();
	for (int i = 0; i < nentries; i++)
	{
		t->GetEntry(i);
		cosTheta_sq = (1.-helcosthetaL*helcosthetaL)*sin(helphi)*sin(helphi);
		tagToUse = tag;
		mistagToUse = mistag;
		time_dilution = exp(-17.70*17.70*sigmat*sigmat/2.);
		tagging_dilution = (1-2*mistagToUse);
		weight = 1.;//*time_dilution*tagging_dilution;
		//weight_even = (5.*cosTheta*cosTheta - 1.0) ; // 1.63 ;   //Even
		//weight_odd  = (2.- 5.*cosTheta*cosTheta ) ; // / 1.53 ;     //Odd
		weight_even = (5.*cosTheta_sq - 1.0) ; // 1.63 ;   //Even
		weight_odd  = (2.- 5.*cosTheta_sq ) ; // / 1.53 ;     //Odd

		if ( tag > 0 ) {
			B_even   ->Fill(Btime, weight*weight_even);
			B_odd    ->Fill(Btime, weight*weight_odd);
			B_mod_even->Fill(fmod(Btime, (2*TMath::Pi()/17.70)), weight*weight_even);
			B_mod_odd ->Fill(fmod(Btime, (2*TMath::Pi()/17.70)), weight*weight_odd);
			B_mod->Fill(fmod(Btime, (2*TMath::Pi()/17.70)), weight);
		}
		if ( tag < 0 ) {
			Bbar_even->Fill(Btime, weight*weight_even);
			Bbar_odd ->Fill(Btime, weight*weight_odd);
			Bbar_mod_even->Fill(fmod(Btime, (2*TMath::Pi()/17.70)), weight*weight_even);
			Bbar_mod_odd ->Fill(fmod(Btime, (2*TMath::Pi()/17.70)), weight*weight_odd);
			Bbar_mod->Fill(fmod(Btime, (2*TMath::Pi()/17.70)), weight);
		}
	}

	TCanvas * c = new TCanvas();
	c->Divide(3,3);
	c->cd(1);
	B_mod->Draw();
	B_mod->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	B_mod->GetYaxis()->SetTitle("N(B_{s}^{0})");
	c->cd(2);
	Bbar_mod->Draw();
	Bbar_mod->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	Bbar_mod->GetYaxis()->SetTitle("N(#bar{B}_{s}^{0})");
	c->cd(3);
	asym = (TH1D*)Bbar_mod->GetAsymmetry(B_mod);
	asym->Draw();
	asym->SetMinimum(-0.5);
	asym->SetMaximum(0.5);
	asym->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	asym->GetYaxis()->SetTitle("Asymmetry");
	c->cd(4);
	B_mod_even->Draw();
	B_mod_even->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	B_mod_even->GetYaxis()->SetTitle("N(B_{s}^{0})");
	c->cd(5);
	Bbar_mod_even->Draw();
	Bbar_mod_even->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	Bbar_mod_even->GetYaxis()->SetTitle("N(#bar{B}_{s}^{0})");
	c->cd(6);
	asym_even = (TH1D*)Bbar_mod_even->GetAsymmetry(B_mod_even);
	asym_even->Draw();
	asym_even->SetMinimum(-0.5);
	asym_even->SetMaximum(0.5);
	asym_even->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	asym_even->GetYaxis()->SetTitle("Asymmetry");
	c->cd(7);
	B_mod_odd->Draw();
	B_mod_odd->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	B_mod_odd->GetYaxis()->SetTitle("N(B_{s}^{0})");
	c->cd(8);
	Bbar_mod_odd->Draw();
	Bbar_mod_odd->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	Bbar_mod_odd->GetYaxis()->SetTitle("N(#bar{B}_{s}^{0})");
	c->cd(9);
	asym_odd = (TH1D*)Bbar_mod_odd->GetAsymmetry(B_mod_odd);
	asym_odd->Draw();
	asym_odd->SetMinimum(-0.5);
	asym_odd->SetMaximum(0.5);
	asym_odd->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	asym_odd->GetYaxis()->SetTitle("Asymmetry");
	c->SaveAs("asymmetry.pdf");

	TCanvas * d = new TCanvas();
	asym_tot = (TH1D*)asym_even->GetAsymmetry(asym_odd);
	asym_tot->Draw();
	asym_tot->SetMinimum(-0.5);
	asym_tot->SetMaximum(0.5);
	asym_tot->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	asym_tot->GetYaxis()->SetTitle("Asymmetry");
	d->SaveAs("asymmetry_tot.pdf");

}
