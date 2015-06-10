{
	TFile * f = TFile::Open("../data/fitNTuple_peakBkg_2011_2012_Reco14_TOS_20140822_with_IPz_weights_v2.root");
	TTree * t = (TTree*)f->Get("DecayTree");
	TFile * f1 = TFile::Open("nominal_result.root");
	TTree * t1 = (TTree*)f1->Get("dataNTuple");

	const int bins(8);
	const int nbins(8);
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
	TH1D * B_mod_pdf    = new TH1D("B_mod_pdf", "B", nbins, 0., 0.35);
	TH1D * Bbar_mod_pdf = new TH1D("Bbar_mod_pdf", "Bbar", nbins, 0., 0.35);
	TH1D * B_even_pdf    = new TH1D("B_even_pdf", "B", nbins, tmin, tmax);
	TH1D * Bbar_even_pdf = new TH1D("Bbar_even_pdf", "Bbar", nbins, tmin, tmax);
	TH1D * B_mod_even_pdf    = new TH1D("B_mod_even_pdf", "B", nbins, 0., 0.35);
	TH1D * Bbar_mod_even_pdf = new TH1D("Bbar_mod_even_pdf", "Bbar", nbins, 0., 0.35);
	TH1D * B_odd_pdf    = new TH1D("B_odd_pdf", "B", nbins, tmin, tmax);
	TH1D * Bbar_odd_pdf = new TH1D("Bbar_odd_pdf", "Bbar", nbins, tmin, tmax);
	TH1D * B_mod_odd_pdf    = new TH1D("B_mod_odd_pdf", "B", nbins, 0., 0.35);
	TH1D * Bbar_mod_odd_pdf = new TH1D("Bbar_mod_odd_pdf", "Bbar", nbins, 0., 0.35);
	TH1D * asym_even_pdf = new TH1D("asym_even_pdf", "asym", nbins, 0., 0.35);
	TH1D * asym_odd_pdf = new TH1D("asym_odd_pdf", "asym", nbins, 0., 0.35);
	TH1D * asym_pdf = new TH1D("asym_pdf", "asym", nbins, 0., 0.35);
	TH1D * asym_tot_pdf = new TH1D("asym_tot_pdf", "asym", nbins, 0., 0.35);
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

	B_mod->SetMarkerStyle(20);
	Bbar_mod->SetMarkerStyle(20);
	B_even->SetMarkerStyle(20);
	Bbar_even->SetMarkerStyle(20);
	B_mod_even->SetMarkerStyle(20);
	Bbar_mod_even->SetMarkerStyle(20);
	B_odd->SetMarkerStyle(20);
	Bbar_odd->SetMarkerStyle(20);
	B_mod_odd->SetMarkerStyle(20);
	Bbar_mod_odd->SetMarkerStyle(20);
	asym_even->SetMarkerStyle(20);
	asym_odd->SetMarkerStyle(20);
	asym->SetMarkerStyle(20);
	asym_tot->SetMarkerStyle(20);

	B_mod->SetLineWidth(2);
	Bbar_mod->SetLineWidth(2);
	B_even->SetLineWidth(2);
	Bbar_even->SetLineWidth(2);
	B_mod_even->SetLineWidth(2);
	Bbar_mod_even->SetLineWidth(2);
	B_odd->SetLineWidth(2);
	Bbar_odd->SetLineWidth(2);
	B_mod_odd->SetLineWidth(2);
	Bbar_mod_odd->SetLineWidth(2);
	asym_even->SetLineWidth(2);
	asym_odd->SetLineWidth(2);
	asym->SetLineWidth(2);
	asym_tot->SetLineWidth(2);

	B_mod_pdf->SetLineColor(kRed);
	Bbar_mod_pdf->SetLineColor(kRed);
	B_even_pdf->SetLineColor(kRed);
	Bbar_even_pdf->SetLineColor(kRed);
	B_mod_even_pdf->SetLineColor(kRed);
	Bbar_mod_even_pdf->SetLineColor(kRed);
	B_odd_pdf->SetLineColor(kRed);
	Bbar_odd_pdf->SetLineColor(kRed);
	B_mod_odd_pdf->SetLineColor(kRed);
	Bbar_mod_odd_pdf->SetLineColor(kRed);
	asym_even_pdf->SetLineColor(kRed);
	asym_odd_pdf->SetLineColor(kRed);
	asym_pdf->SetLineColor(kRed);
	asym_tot_pdf->SetLineColor(kRed);

	B_mod_pdf->SetLineWidth(2);
	Bbar_mod_pdf->SetLineWidth(2);
	B_even_pdf->SetLineWidth(2);
	Bbar_even_pdf->SetLineWidth(2);
	B_mod_even_pdf->SetLineWidth(2);
	Bbar_mod_even_pdf->SetLineWidth(2);
	B_odd_pdf->SetLineWidth(2);
	Bbar_odd_pdf->SetLineWidth(2);
	B_mod_odd_pdf->SetLineWidth(2);
	Bbar_mod_odd_pdf->SetLineWidth(2);
	asym_even_pdf->SetLineWidth(2);
	asym_odd_pdf->SetLineWidth(2);
	asym_pdf->SetLineWidth(2);
	asym_tot_pdf->SetLineWidth(2);

	double mistagToUse;
	double mistag;
	double mistagss;
	int tagToUse;
	int tag;
	int tagss;
	double Btime;
	double sigmat;
	double cosTheta_sq;
	double helcosthetaL;
	double helphi;
	double sWeights_ipatia;
	double time_dilution(0.);
	double tagging_dilution(0.);
	double weight(0.);
	double weight_even(0.);
	double weight_odd(0.);
	t->SetBranchAddress("tagomega_os_cb", &mistag ) ;
	t->SetBranchAddress("tagomega_ss_nn", &mistagss ) ;
	t->SetBranchAddress("tagdecision_os_cb", &tag ) ;
	t->SetBranchAddress("tagdecision_ss_nn", &tagss ) ;
	t->SetBranchAddress("time", &Btime ) ;
	t->SetBranchAddress("sigmat", &sigmat ) ;
	t->SetBranchAddress("sWeights_ipatia", &sWeights_ipatia ) ;
	t->SetBranchAddress("helcosthetaL", &helcosthetaL ) ;
	t->SetBranchAddress("helphi", &helphi ) ;

	const int nentries = t->GetEntries();
	for (int i = 0; i < nentries; i++)
	{
		t->GetEntry(i);
		if( (tag !=0 ) && (tagss == 0) ) {
			tagToUse = tag;
			mistagToUse = mistag;
		}
		else if( (tag == 0) && (tagss != 0) ) {
			tagToUse = tagss ;
			mistagToUse = mistagss ;
		}
		else if( (tag != 0) && (tag != 0) ) {
			tagToUse = mistag<mistagss ? tag : tagss;
			mistagToUse = mistag<mistagss ? mistag : mistagss;
		}
		else {
			tagToUse = 0;
			mistagToUse = 0.5;
		}
		time_dilution = exp(-17.711*17.711*sigmat*sigmat/2.);
		tagging_dilution = (1-2*mistagToUse);
		cosTheta_sq = (1.-helcosthetaL*helcosthetaL)*sin(helphi)*sin(helphi);
		weight = sWeights_ipatia;//*time_dilution*tagging_dilution;
		weight_even = (5.*cosTheta_sq - 1.0) ; // 1.63 ;   //Even
		weight_odd  = (2.- 5.*cosTheta_sq ) ; // / 1.53 ;     //Odd
	
		if ( tag > 0 ) {
			B_even   ->Fill(Btime, weight*weight_even);
			B_odd    ->Fill(Btime, weight*weight_odd);
			B_mod_even->Fill(fmod(Btime, (2*TMath::Pi()/17.711)), weight*weight_even);
			B_mod_odd ->Fill(fmod(Btime, (2*TMath::Pi()/17.711)), weight*weight_odd);
			B_mod->Fill(fmod(Btime, (2*TMath::Pi()/17.711)), weight);
		}
		if ( tag < 0 ) {
			Bbar_even->Fill(Btime, weight*weight_even);
			Bbar_odd ->Fill(Btime, weight*weight_odd);
			Bbar_mod_even->Fill(fmod(Btime, (2*TMath::Pi()/17.711)), weight*weight_even);
			Bbar_mod_odd ->Fill(fmod(Btime, (2*TMath::Pi()/17.711)), weight*weight_odd);
			Bbar_mod->Fill(fmod(Btime, (2*TMath::Pi()/17.711)), weight);
		}
	}

	double tag_toy;
	t1->SetBranchAddress("time", &Btime ) ;
	t1->SetBranchAddress("tag", &tag_toy ) ;
	t1->SetBranchAddress("helcosthetaL", &helcosthetaL ) ;
	t1->SetBranchAddress("helphi", &helphi ) ;

	const int nentries1 = t1->GetEntries();
	for (int i = 0; i < nentries1; i++)
	{
		t1->GetEntry(i);
		cosTheta_sq = (1.-helcosthetaL*helcosthetaL)*sin(helphi)*sin(helphi);
		weight = 1.;
		weight_even = (5.*cosTheta_sq - 1.0) ; // 1.63 ;   //Even
		weight_odd  = (2.- 5.*cosTheta_sq ) ; // / 1.53 ;     //Odd
	
		if ( tag_toy > 0 ) {
			B_even_pdf    ->Fill(Btime, weight*weight_even);
			B_odd_pdf     ->Fill(Btime, weight*weight_odd);
			B_mod_even_pdf->Fill(fmod(Btime, (2*TMath::Pi()/17.70)), weight*weight_even);
			B_mod_odd_pdf ->Fill(fmod(Btime, (2*TMath::Pi()/17.70)), weight*weight_odd);
			B_mod_pdf     ->Fill(fmod(Btime, (2*TMath::Pi()/17.70)), weight);
		}
		if ( tag_toy < 0 ) {
			Bbar_even_pdf->Fill(Btime, weight*weight_even);
			Bbar_odd_pdf ->Fill(Btime, weight*weight_odd);
			Bbar_mod_even_pdf->Fill(fmod(Btime, (2*TMath::Pi()/17.70)), weight*weight_even);
			Bbar_mod_odd_pdf ->Fill(fmod(Btime, (2*TMath::Pi()/17.70)), weight*weight_odd);
			Bbar_mod_pdf ->Fill(fmod(Btime, (2*TMath::Pi()/17.70)), weight);
		}
	}
	
	gStyle->SetOptStat(0);

	TF1 * 


	TCanvas * c = new TCanvas();
	c->Divide(3,3);
	c->cd(1);
	B_mod->Draw();
	//B_mod_pdf->Draw("same");
	B_mod->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	B_mod->GetYaxis()->SetTitle("N(B_{s}^{0})");
	c->cd(2);
	Bbar_mod->Draw();
	//Bbar_mod_pdf->Draw("same");
	Bbar_mod->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	Bbar_mod->GetYaxis()->SetTitle("N(#bar{B}_{s}^{0})");
	c->cd(3);
	asym = (TH1D*)Bbar_mod->GetAsymmetry(B_mod);
	asym_pdf = (TH1D*)Bbar_mod_pdf->GetAsymmetry(B_mod_pdf);
	asym->Draw();
	//asym_pdf->Draw("same hist c");
	asym->SetMinimum(-0.5);
	asym->SetMaximum(0.5);
	asym->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	asym->GetYaxis()->SetTitle("Asymmetry");
	c->cd(4);
	B_mod_even->Draw();
	//B_mod_even_pdf->Draw("same");
	B_mod_even->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	B_mod_even->GetYaxis()->SetTitle("N(B_{s}^{0})");
	c->cd(5);
	Bbar_mod_even->Draw();
	Bbar_mod_even_pdf->Draw("same");
	Bbar_mod_even->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	Bbar_mod_even->GetYaxis()->SetTitle("N(#bar{B}_{s}^{0})");
	c->cd(6);
	asym_even = (TH1D*)Bbar_mod_even->GetAsymmetry(B_mod_even);
	asym_even_pdf = (TH1D*)Bbar_mod_even_pdf->GetAsymmetry(B_mod_even_pdf);
	asym_even->Draw();
	//asym_even_pdf->Draw("same hist c");
	asym_even->SetMinimum(-0.5);
	asym_even->SetMaximum(0.5);
	asym_even->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	asym_even->GetYaxis()->SetTitle("Asymmetry");
	c->cd(7);
	B_mod_odd->Draw();
	//B_mod_odd_pdf->Draw("same");
	B_mod_odd->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	B_mod_odd->GetYaxis()->SetTitle("N(B_{s}^{0})");
	c->cd(8);
	Bbar_mod_odd->Draw();
	//Bbar_mod_odd_pdf->Draw("same");
	Bbar_mod_odd->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	Bbar_mod_odd->GetYaxis()->SetTitle("N(#bar{B}_{s}^{0})");
	c->cd(9);
	asym_odd = (TH1D*)Bbar_mod_odd->GetAsymmetry(B_mod_odd);
	asym_odd_pdf = (TH1D*)Bbar_mod_odd_pdf->GetAsymmetry(B_mod_odd_pdf);
	asym_odd->Draw();
	//asym_odd_pdf->Draw("same hist c");
	asym_odd->SetMinimum(-0.5);
	asym_odd->SetMaximum(0.5);
	asym_odd->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	asym_odd->GetYaxis()->SetTitle("Asymmetry");
	c->SaveAs("asymmetry.pdf");

	TCanvas * d = new TCanvas();
	asym_tot->Add(asym_even, asym_odd, 1., -1.);
	asym_tot_pdf->Add(asym_even_pdf, asym_odd_pdf, 1., -1.);
	asym_tot->Draw();
	asym_tot_pdf->Draw("same hist c");
	asym_tot->SetMinimum(-0.5);
	asym_tot->SetMaximum(0.5);
	asym_tot->GetXaxis()->SetTitle("Decay time modulo 2#pi/#Deltam_{s} [ps]");
	asym_tot->GetYaxis()->SetTitle("Asymmetry");
	d->SaveAs("asymmetry_tot.pdf");
}
