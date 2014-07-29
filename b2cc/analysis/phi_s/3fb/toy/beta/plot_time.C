{
	TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_all_BsJpsiPhi_DTT_20140616_minimal_truth_olivier_with_IPz_weights.root");
	TTree * ft = (TTree*)f->Get("DecayTree");
        TFile * g = TFile::Open("gen_no_lower_time_cut.root");
        TTree * gt = (TTree*)g->Get("dataNTuple");

	const int nbins = 50;
	double bins[nbins+1];
	double t_min = 0.3;
	double t_max = 20.0;
       	const double tau_PDG(1.5);
        double A(TMath::Exp(-t_max/tau_PDG));
        double B(TMath::Exp(-t_min/tau_PDG));
        bins[0] = t_min;
        bins[nbins] = t_max;
        for(int i(1); i < nbins; i++){
                bins[i] = -TMath::Log(((double)i*(A-B)/(double)nbins+B))*tau_PDG;
        }
	
	TH1D * dh = new TH1D("dtf_chi2","dtf_chi2", 100, 0, 200);
	TH1D * ra = new TH1D("time_reco_acc","time_reco_acc", nbins-10, t_min, t_max);
	TH1D * rr = new TH1D("time_reco_rej","time_reco_rej" , nbins-10, t_min, t_max);
	TH1D * ta = new TH1D("time_true_acc","time_true_acc", nbins-10, t_min, t_max);
	TH1D * tr = new TH1D("time_true_rej","time_true_rej" , nbins-10, t_min, t_max);
	TH1D * ra_r = new TH1D("time_reco_acc_r","time_reco_acc", nbins-10, t_min, t_max);
	TH1D * rr_r = new TH1D("time_reco_rej_r","time_reco_rej" , nbins-10, t_min, t_max);
	TH1D * ta_r = new TH1D("time_true_acc_r","time_true_acc", nbins-10, t_min, t_max);
	TH1D * tr_r = new TH1D("time_true_rej_r","time_true_rej" , nbins-10, t_min, t_max);
	TH1D * den = new TH1D("den" ,"den", nbins-10, t_min, t_max);
	
	/*
	TH1D * dh = new TH1D("dtf_chi2","dtf_chi2", 100, 0, 200);
	TH1D * ra = new TH1D("time_reco_acc","time_reco_acc", nbins, bins);
	TH1D * rr = new TH1D("time_reco_rej","time_reco_rej" , nbins, bins);
	TH1D * ta = new TH1D("time_true_acc","time_true_acc", nbins, bins);
	TH1D * tr = new TH1D("time_true_rej","time_true_rej" , nbins, bins);
	TH1D * ra_r = new TH1D("time_reco_acc_r","time_reco_acc", nbins, bins);
	TH1D * rr_r = new TH1D("time_reco_rej_r","time_reco_rej" , nbins, bins);
	TH1D * ta_r = new TH1D("time_true_acc_r","time_true_acc", nbins, bins);
	TH1D * tr_r = new TH1D("time_true_rej_r","time_true_rej" , nbins, bins);
	TH1D * den = new TH1D("den" ,"den", nbins, bins);
	*/
	ra->Sumw2();
	rr->Sumw2();
	ta->Sumw2();
	tr->Sumw2();
	ra_r->Sumw2();
	rr_r->Sumw2();
	ta_r->Sumw2();
	tr_r->Sumw2();
	rr->SetMarkerColor(kRed);
	rr->SetLineColor(kRed);
	tr->SetMarkerColor(kRed);
	tr->SetLineColor(kRed);
	rr_r->SetMarkerColor(kRed);
	rr_r->SetLineColor(kRed);
	tr_r->SetMarkerColor(kRed);
	tr_r->SetLineColor(kRed);

	cout << "here" << endl;

	TCut nominal = "(B_s0_MINIPCHI2NEXTBEST > 50 || B_s0_MINIPCHI2NEXTBEST < 0) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF)";
	TCut nominal_not = "(B_s0_MINIPCHI2NEXTBEST > 50 || B_s0_MINIPCHI2NEXTBEST < 0) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. < B_s0_LOKI_DTF_CHI2NDOF)";
	int acc = ft->Draw("B_s0_LOKI_DTF_CTAU/0.2997>>time_reco_acc", nominal,"goff");
	int rej = ft->Draw("B_s0_LOKI_DTF_CTAU/0.2997>>time_reco_rej", nominal_not,"goff");
	ft->Draw("B_s0_TRUETAU*1000>>time_true_acc", nominal,"goff");
	ft->Draw("B_s0_TRUETAU*1000>>time_true_rej", nominal_not,"goff");
	gt->Draw("time>>den", "", "goff");

	cout << acc << " " << rej << " " << acc/(acc+rej) << endl;

	TCanvas * c = new TCanvas();
	c->Divide(2,2);
	c->cd(1);
	gPad->SetLogy();
	ra->Draw();
	rr->Draw("same");
	ra->GetXaxis()->SetTitle("reconstructed t [ps]");
	ra->GetYaxis()->SetTitle("Events");
	
	c->cd(2);
	gPad->SetLogy();
	ta->Draw();
	tr->Draw("same");
	ta->GetXaxis()->SetTitle("true t [ps]");
	ta->GetYaxis()->SetTitle("Events");
	
	ra_r->Divide(ra, den, 1, 1, "b");
	rr_r->Divide(rr, den, 5, 1, "b");
	ta_r->Divide(ta, den, 1, 1, "b");
	tr_r->Divide(tr, den, 5, 1, "b");
	
	TFile * ratio = TFile::Open("time_acceptance_reco_time_stripped.root","RECREATE");
	ra_r->Write();
	ratio->Close();	

	c->cd(3);
	//gPad->SetLogx();
	ra_r->Draw();
	ra_r->Fit("pol0");
	rr_r->Draw("same");
	//ra_r->SetMinimum(0.1);
	ra_r->GetXaxis()->SetTitle("reconstructed t [ps]");
	ra_r->GetYaxis()->SetTitle("Efficiency [arbitrary units]");
	
	c->cd(4);
	//gPad->SetLogx();
	ta_r->Draw();
	ta_r->Fit("pol0");
	tr_r->Draw("same");
	//ta_r->SetMinimum(0.1);
	ta_r->GetXaxis()->SetTitle("true t [ps]");
	ta_r->GetYaxis()->SetTitle("Efficiency [arbitrary units]");
	
	c->SaveAs("time_reco_true.pdf");

	ft->Draw("B_s0_LOKI_DTF_CHI2NDOF>>dtf_chi2", "", "goff");

	TCanvas * d = new TCanvas();
	gPad->SetLogy();
	dh->Draw();
	dh->GetXaxis()->SetTitle("B_{s}^{0} DTF #chi^{2}/NDOF");
	dh->GetYaxis()->SetTitle("Events");
	d->SaveAs("dtf_chi2.pdf");



}


