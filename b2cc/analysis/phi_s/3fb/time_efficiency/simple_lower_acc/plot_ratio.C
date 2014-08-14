{
	TFile * f = TFile::Open("all_time_efficiency_50bin_fixed.root", "READ");
	TFile * g = TFile::Open("all_time_efficiency_50_bins_fixed_DG0.root", "READ");
	TH1D * fh = (TH1D*)f->Get("time_acc");
	TH1D * gh = (TH1D*)g->Get("time_acc");
	fh->Divide(gh);
	TFile * fv = TFile::Open("all_time_efficiency_50bin_variable.root", "READ");
	TFile * gv = TFile::Open("all_time_efficiency_50_bins_variable_DG0.root", "READ");
	TH1D * fvh = (TH1D*)fv->Get("time_acc");
	TH1D * gvh = (TH1D*)gv->Get("time_acc");
	fvh->Divide(gvh);
	
	TF1 * pol = new TF1("pol","[0]");
	pol->SetLineColor(kRed);
	pol->SetLineWidth(2.);
	TCanvas c;
	c.Divide(1,2);
	c.cd(1);
	fh->Draw();
	fh->GetYaxis()->SetTitle("Efficiency ratio (arbitrary scale)");
	fh->Fit("pol");
	c.cd(2);
	fvh->Draw();
	fvh->GetYaxis()->SetTitle("Efficiency ratio (arbitrary scale)");
	fvh->GetXaxis()->SetTitle("(true) t [ps]");
	fvh->Fit("pol");
}
