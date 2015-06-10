{
	TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_Bs2JpsiPhi_minimal_truth_with_IPz_weights_v2.root");
	TTree * t = (TTree*)f->Get("DecayTree");

	const int bins(50);
	const double tmin(0.3);
	const double tmax(14.0);
	const double dms(17.7);
	TH1D * B    = new TH1D("B", "B", bins, tmin, tmax);
	TH1D * Bbar = new TH1D("Bbar", "Bbar", bins, tmin, tmax);
	TH1D * B_mod    = new TH1D("B_mod", "B", bins, 0., 0.3);
	TH1D * Bbar_mod = new TH1D("Bbar_mod", "Bbar", bins, 0., 0.3);
	TH1D * asym = new TH1D("asym", "asym", bins, 0., 0.3);
	B->Sumw2();
	Bbar->Sumw2();
	B_mod->Sumw2();
	Bbar_mod->Sumw2();
	asym->Sumw2();
	
	t->Draw("B_s0_LOKI_DTF_CTAU/0.2997>>B","B_s0_TRUEID/531==1");
	t->Draw("B_s0_LOKI_DTF_CTAU/0.2997>>Bbar","B_s0_TRUEID/531==-1");
	t->Draw("fmod(B_s0_LOKI_DTF_CTAU/0.2997, (2*TMath::Pi()/17.70))>>B_mod","B_s0_TRUEID/531==1");
	t->Draw("fmod(B_s0_LOKI_DTF_CTAU/0.2997, (2*TMath::Pi()/17.70))>>Bbar_mod","B_s0_TRUEID/531==-1");

	TCanvas * c = new TCanvas();
	c->Divide(3,2);
	c->cd(1);
	B->Draw();
	c->cd(2);
	Bbar->Draw();
	c->cd(4);
	B_mod->Draw();
	c->cd(5);
	Bbar_mod->Draw();
	c->cd(6);
	asym = (TH1D*)B_mod->GetAsymmetry(Bbar_mod);
	asym->Draw();
}
