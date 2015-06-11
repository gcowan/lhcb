{
	TFile * f_data = TFile::Open("/Disk/speyside8/lhcb/gcowan1/Z4430/B_s0/data/tighter_cut/selected_candidates_with_correct_angles.root");
	TTree * t_data = (TTree*)f_data->Get("tuple");
	
	TFile * f_toy = TFile::Open("toy.root");
	TTree * t_toy = (TTree*)f_toy->Get("dataNTuple");
	
	TCanvas * c = new TCanvas("c","c",1000, 1000);
	c->Divide(2,2);

	const double min_m23(1.3);
	const double max_m23(1.68);
	//const double min_m23(0.8);
	//const double max_m23(1.0);
	//const double min_m23(0.64);
	//const double max_m23(1.68);
	const int bins_data_m23(10);
	const int bins_toy_m23(20);
	const int bins_data_cosTheta1(15);
	const int bins_toy_cosTheta1(20);
	const int bins_data_cosTheta2(10);
	const int bins_data_phi(10);


	TH1D * h_data_m23 = new TH1D("h_data_m23", "h_data_m23", bins_data_m23, min_m23, max_m23); 
	TH1D * h_toy_m23  = new TH1D("h_toy_m23", "h_toy_m23", bins_toy_m23, min_m23, max_m23); 
	TH1D * h_data_cosTheta1 = new TH1D("h_data_cosTheta1", "h_data_cosTheta1", bins_data_cosTheta1, -1, 1); 
	TH1D * h_toy_cosTheta1  = new TH1D("h_toy_cosTheta1", "h_toy_cosTheta1", bins_toy_cosTheta1, -1, 1); 
	TH1D * h_data_cosTheta2 = new TH1D("h_data_cosTheta2", "h_data_cosTheta2", bins_data_cosTheta2, -1, 1); 
	TH1D * h_toy_cosTheta2  = new TH1D("h_toy_cosTheta2", "h_toy_cosTheta2", bins_toy_m23, -1, 1); 
	TH1D * h_data_phi = new TH1D("h_data_phi", "h_data_phi", bins_data_phi, -TMath::Pi(), TMath::Pi()); 
	TH1D * h_toy_phi  = new TH1D("h_toy_phi", "h_toy_phi", bins_toy_m23, -TMath::Pi(), TMath::Pi()); 

	h_data_m23->Sumw2();
	h_data_cosTheta1->Sumw2();
	h_data_cosTheta2->Sumw2();
	h_data_phi->Sumw2();

	h_toy_m23->SetLineWidth(2);
	h_toy_cosTheta1->SetLineWidth(2);
	h_toy_cosTheta2->SetLineWidth(2);
	h_toy_phi->SetLineWidth(2);

	gStyle->SetOptStat(0);

	char dataCut[200];
	char toyCut[200];
	sprintf(dataCut, "B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr&&!(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))&&m23/1000.>%f&&m23/1000.<%f", min_m23, max_m23);
	sprintf(toyCut,  "m23>%f&&m23<%f", min_m23, max_m23);

	c->cd(1);
	t_data->Draw("m23/1000.>>h_data_m23", dataCut);
	t_toy->Draw("m23>>h_toy_m23",toyCut, "sameC");
	
	const int nEntries_data = h_data_m23->GetEntries();
	const int nEntries_toy  = h_toy_m23 ->GetEntries();
	const double scale = nEntries_data/double(nEntries_toy);
	
	cout << nEntries_data << " " << nEntries_toy << " " << scale << endl;
	h_toy_m23->Scale(scale*bins_toy_m23/bins_data_m23);
	h_data_m23->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/c^{2}]");
	c->cd(2);
	t_data->Draw("cosTheta1>>h_data_cosTheta1", dataCut);
	t_toy->Draw("cosTheta1>>h_toy_cosTheta1",toyCut, "sameC");
	h_toy_cosTheta1->Scale(scale*bins_toy_m23/bins_data_cosTheta1);
	h_data_cosTheta1->GetXaxis()->SetTitle("cos#theta_{#mu}");
	h_data_cosTheta1->SetMinimum(0);
	c->cd(3);
	t_data->Draw("phi>>h_data_phi", dataCut);
	t_toy->Draw("phi>>h_toy_phi",toyCut, "sameC");
	h_toy_phi->Scale(scale*bins_toy_m23/bins_data_phi);
	h_data_phi->GetXaxis()->SetTitle("#phi [rad]");
	h_data_phi->SetMinimum(0);
	c->cd(4);
	t_data->Draw("cosTheta2>>h_data_cosTheta2", dataCut);
	t_toy->Draw("cosTheta2>>h_toy_cosTheta2",toyCut, "sameC");
	h_toy_cosTheta2->Scale(scale*bins_toy_m23/bins_data_cosTheta2);
	h_data_cosTheta2->GetXaxis()->SetTitle("cos#theta_{K}");
	h_data_cosTheta2->SetMinimum(0);
	c->Modified();
	c->Update();
	c->SaveAs("nominal_fit_projections_Kst892_range.pdf");

	TH1D * h_pull_m23 = new TH1D("h_pull_m23", "h_pull_m23", bins_data_m23, min_m23, max_m23); 
	TH1D * h_pull_cosTheta1 = new TH1D("h_pull_cosTheta1", "h_pull_cosTheta1", bins_data_cosTheta1, -1, 1); 
	TH1D * h_pull_cosTheta2 = new TH1D("h_pull_cosTheta2", "h_pull_cosTheta2", bins_data_cosTheta2, -1, 1); 
	TH1D * h_pull_phi = new TH1D("h_pull_phi", "h_pull_phi", bins_data_phi, -TMath::Pi(), TMath::Pi()); 

	h_pull_m23->Sumw2();
	h_pull_cosTheta1->Sumw2();
	h_pull_cosTheta2->Sumw2();
	h_pull_phi->Sumw2();

	h_toy_m23->Rebin(5);
	h_toy_m23->Scale(1./5);
	h_toy_cosTheta1->Rebin(3);
	h_toy_cosTheta1->Scale(1./3);
	h_toy_phi->Rebin(5);
	h_toy_phi->Scale(1./5);
	h_toy_cosTheta2->Rebin(5);
	h_toy_cosTheta2->Scale(1./5);

	createPull(h_pull_m23, h_data_m23, h_toy_m23);
	createPull(h_pull_cosTheta1, h_data_cosTheta1, h_toy_cosTheta1);
	createPull(h_pull_cosTheta2, h_data_cosTheta2, h_toy_cosTheta2);
	createPull(h_pull_phi, h_data_phi, h_toy_phi);
	
	TF1 * l1 = new TF1("l1", "+2", -10, 10);
	TF1 * l2 = new TF1("l2", "-2", -10, 10);

	gStyle->SetTextSize(0.3);
	TCanvas * d = new TCanvas("d", "d", 1000, 600);
	d->Divide(2,2);
	d->cd(1);
	h_pull_m23->Draw();
	h_pull_m23->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/c^{2}]");
	h_pull_m23->GetYaxis()->SetTitle("Pull");
	h_pull_m23->SetMaximum(5);
	l1->Draw("same");
	l2->Draw("same");
	d->cd(2);
	h_pull_cosTheta1->Draw();
	h_pull_cosTheta1->GetXaxis()->SetTitle("cos#theta_{#mu}");
	h_pull_cosTheta1->GetYaxis()->SetTitle("Pull");
	h_pull_cosTheta1->SetMinimum(-5);
	h_pull_cosTheta1->SetMaximum(5);
	l1->Draw("same");
	l2->Draw("same");
	d->cd(3);
	h_pull_phi->Draw();
	h_pull_phi->GetXaxis()->SetTitle("#phi");
	h_pull_phi->GetYaxis()->SetTitle("Pull");
	h_pull_phi->SetMinimum(-5);
	h_pull_phi->SetMaximum(5);
	l1->Draw("same");
	l2->Draw("same");
	d->cd(4);
	h_pull_cosTheta2->Draw();
	h_pull_cosTheta2->GetXaxis()->SetTitle("cos#theta_{K}");
	h_pull_cosTheta2->GetYaxis()->SetTitle("Pull");
	h_pull_cosTheta2->SetMinimum(-5);
	h_pull_cosTheta2->SetMaximum(5);
	l1->Draw("same");
	l2->Draw("same");
	d->SaveAs("d.pdf");
}

void createPull(TH1D * h_pull_m23, TH1D* h_data_m23, TH1D * h_toy_m23)
{
	for ( int i = 0; i <= h_toy_m23->GetXaxis()->GetNbins(); i++)
	{
		double v = (h_data_m23->GetBinContent(i) - h_toy_m23->GetBinContent(i))/h_data_m23->GetBinError(i);
		h_pull_m23->SetBinContent(i, v);
		h_pull_m23->SetBinError(i, 1.);
	}	
}
