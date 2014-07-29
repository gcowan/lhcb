{
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_all_BsJpsiPhi_DTT_20130709_minimal_truth_roel.root");
	TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2011_all_BsJpsiPhi_DTT_20131006_minimal_truth_roel.root");
        TTree * ft = (TTree*)f->Get("DecayTree");

	int nbins(100);
	double t_min(0.3);
	double t_max(2.);
	TH1D * fh1 = new TH1D("time_reco1","time_reco", nbins, t_min, t_max);
	TH1D * fh2 = new TH1D("time_reco2","time_reco", nbins, t_min, t_max);
	TH1D * rh1 = new TH1D("time_acc1" ,"time_acc" , nbins, t_min, t_max);
	fh1->Sumw2();
	fh2->Sumw2();
	rh1->Sumw2();

	ft->Draw("B_s0_TRUETAU*1000>>time_reco1",  "(B_s0_LOKI_DTF_CHI2NDOF < 5)&&(0 < B_s0_LOKI_DTF_CHI2NDOF)","goff");
	ft->Draw("B_s0_TRUETAU*1000>>time_reco2",  "(B_s0_LOKI_DTF_CHI2NDOF > 5)&&(0 < B_s0_LOKI_DTF_CHI2NDOF)","goff");
	rh1->Divide(fh1, fh2, 1, 1, "b");

	TF1 * pol = new TF1("pol2", "[0]*(1 + [1]*x + [2]*x*x)", t_min, t_max);
	pol->SetLineColor(kRed);
	pol->SetParName(0, "N");
	pol->SetParName(1, "beta");
	pol->SetParName(2, "gamma");
	pol->FixParameter(1,0);

	TCanvas * c = new TCanvas();
	c->Divide(2,1);
	c->cd(1);
	gPad->SetLogy();
	fh1->Draw();
	fh2->Draw("same");
	fh1->GetXaxis()->SetTitle("t [ps]");
	fh1->GetYaxis()->SetTitle("Events");
	fh1->SetMinimum(1);
	c->cd(2);
	gStyle->SetOptFit(1);
	rh1->Draw();
	rh1->GetXaxis()->SetTitle("t [ps]");
	rh1->GetYaxis()->SetTitle("Efficiency");
	TFitResultPtr s = rh1->Fit(pol,"SR");
	c->SaveAs("time_acc.pdf");
}


