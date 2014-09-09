{
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

	TFile * f = NULL;
	TFile * e = NULL;
	TFile * g = NULL;
	TFile * h = NULL;
	TH2D * h2 = NULL;
	TProfile * hprof = NULL;
	TH1D * htot = NULL;
	TH1D * r1 = NULL;
	TH1D * r2 = NULL;

	if (true){
		f = TFile::Open("all_time_efficiency_50bin_fixed.root", "READ");
		e = TFile::Open("trigger_time_efficiency_50bins.root", "READ");
		g = TFile::Open("all_time_efficiency_50_bins_fixed_DG0.root", "READ");
		h = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_Bs2JpsiPhi_minimal_truth_with_IPz_weights.root");
		h2 = new TH2D("h2", "h2", 50, 0.3, 14, 500, -1, 1);
		hprof = new TProfile("hprof", "hprof", 50, 0.3, 14);
		htot = new TH1D("htot", "htot", 50, 0.3, 14);
		r1 = new TH1D("r1", "htot", 50, 0.3, 14);
		r2 = new TH1D("r2", "htot", 50, 0.3, 14);
	}
	else {
		f = TFile::Open("all_time_efficiency_50bin_variable.root", "READ");
		e = TFile::Open("trigger_time_efficiency_50bins_variable.root", "READ");
		g = TFile::Open("all_time_efficiency_50_bins_variable_DG0.root", "READ");
		h = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_Bs2JpsiPhi_minimal_truth_with_IPz_weights.root");
		h2 = new TH2D("h2", "h2", 50, bins, 500, -1, 1);
		hprof = new TProfile("hprof", "hprof", 50, bins);
		htot = new TH1D("htot", "htot", 50, bins);
		r1 = new TH1D("r1", "htot", 50, bins);
		r2 = new TH1D("r2", "htot", 50, bins);
	}

	TH1D * fh = (TH1D*)f->Get("time_acc");
	TH1D * eh = (TH1D*)e->Get("time_acc");
	eh->SetLineColor(kRed);
	eh->SetMarkerColor(kRed);
	TH1D * gh = (TH1D*)g->Get("time_acc");
	gh->SetLineColor(kOrange);
	gh->SetMarkerColor(kOrange);
	TTree * DecayTree = (TTree*)h->Get("DecayTree");
	printf("Entries in tuple: %lld", DecayTree->GetEntries()); 

	TString detached = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS==1)";	

	DecayTree->Draw("1/B_velo_eff_weight_with_trigger:B_s0_LOKI_DTF_CTAU/0.299792458>>h2", detached, "goff");
	DecayTree->Draw("1/B_velo_eff_weight_with_trigger:B_s0_LOKI_DTF_CTAU/0.299792458>>hprof", detached, "goff");
	hprof->SetLineColor(kBlue);	
	hprof->SetMarkerColor(kBlue);	

	r1->SetLineColor(kMagenta);
	r1->SetMarkerColor(kMagenta);
	r2->SetLineColor(kOrange);
	r2->SetMarkerColor(kOrange);

	htot->Multiply(eh, hprof);
	htot->SetLineColor(kMagenta);
	htot->SetMarkerColor(kMagenta);

	TCanvas c;
	c.SetGrid(1);
	double scale = fh->GetBinContent(1);
	printf("scale %g", scale);
	//eh->Scale(fh->Integral()/eh->Integral());
	//gh->Scale(fh->Integral()/gh->Integral());
	//hprof->Scale(fh->Integral()/hprof->Integral());
	//htot ->Scale(fh->Integral()/htot->Integral());
	eh->Scale(scale/eh->GetBinContent(1));
	gh->Scale(scale/gh->GetBinContent(1));
	hprof->Scale(scale/hprof->GetBinContent(1));
	htot ->Scale(scale/htot->GetBinContent(1));
	fh->Draw();
	gh->Draw("same");
	if (false) {
		eh->Draw("same");
		hprof->Draw("same");
	}
	if (!true) c.SetLogx();
	htot->Draw("same");

	TCanvas d;
	r1->Divide(fh, htot);
	r1->Draw();
	r2->Divide(fh, gh);
	r2->Draw("same");
	r1->GetXaxis()->SetTitle("(true) t [ps]");
	r1->GetYaxis()->SetTitle("Efficiency ratio");
}
