{
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_all_BsJpsiPhi_DTT_20140616_minimal_truth_olivier_with_IPz_weights.root");
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_all_BsJpsiPhi_DTT_20130709_minimal_truth_roel.root");
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2011_all_BsJpsiPhi_DTT_20131006_minimal_truth_roel.root");
	TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_Bs2JpsiPhi_DG0_minimal_truth_with_IPz_weights.root");
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/generation/Bs2JpsiPhi/DVntuple_modified.root");
	//TFile * g = TFile::Open("gen_no_lower_time_cut.root");
	TFile * g = TFile::Open("/Home/gcowan1/lhcb/lhcb/b2cc/analysis/phi_s/3fb/fits/4D/XMLFOLDER/new/DG0/test.root");
	TTree * ft = (TTree*)f->Get("DecayTree");
	TTree * gt = (TTree*)g->Get("dataNTuple");

	const int nbins = 60;
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

	for (int i = 0; i < nbins + 1; i++) cout << bins[i] << endl;

	TH1D * fh = new TH1D("time_reco","time_reco", nbins-10, t_min, t_max);
	TH1D * gh = new TH1D("time_gen" ,"time_gen" , nbins-10, t_min, t_max);
	TH1D * rh = new TH1D("time_acc" ,"time_acc" , nbins-10, t_min, t_max);
	fh->Sumw2();
	gh->Sumw2();
	rh->Sumw2();
	TH1D * fh_k = new TH1D("k_reco","time_reco", nbins-30, -1, 1); 
	TH1D * gh_k = new TH1D("k_gen" ,"time_gen" , nbins-30, -1, 1); 
	TH1D * rh_k = new TH1D("k_acc" ,"time_acc" , nbins-30, -1, 1); 
	fh_k->Sumw2();
	gh_k->Sumw2();
	rh_k->Sumw2();
	TH1D * fh_l = new TH1D("l_reco","time_reco", nbins-30, -1, 1); 
	TH1D * gh_l = new TH1D("l_gen" ,"time_gen" , nbins-30, -1, 1); 
	TH1D * rh_l = new TH1D("l_acc" ,"time_acc" , nbins-30, -1, 1); 
	fh_l->Sumw2();
	gh_l->Sumw2();
	rh_l->Sumw2();
	TH1D * fh_p = new TH1D("p_reco","time_reco", nbins-30, -TMath::Pi(), TMath::Pi()); 
	TH1D * gh_p = new TH1D("p_gen" ,"time_gen" , nbins-30, -TMath::Pi(), TMath::Pi()); 
	TH1D * rh_p = new TH1D("p_acc" ,"time_acc" , nbins-30, -TMath::Pi(), TMath::Pi()); 
	fh_p->Sumw2();
	gh_p->Sumw2();
	rh_p->Sumw2();

	//TString nominal = "";
	//TCut nominal = "Kplus_TRUE_ETA > 2 && Kplus_TRUE_ETA < 5 && Kminus_TRUE_ETA > 2 && Kminus_TRUE_ETA < 5 && muplus_TRUE_ETA > 2 && muplus_TRUE_ETA < 5 && muminus_TRUE_ETA > 2 && muminus_TRUE_ETA < 5 && muplus_TRUEPT > 500 && muminus_TRUEPT > 500 && phi_1020_TRUEPT > 1000 && cos(B_s0_TRUEThetaK) > -0.5";
	//TString nominal = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)";
	//TString nominal = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS==1)";
	//TString reco_time = nominal+"&& abs(B_s0_LOKI_DTF_CTAU/0.2997 - B_s0_TRUETAU*1000.) < 0.4";
	TString nominal = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)";

	ft->Draw("B_s0_TRUETAU*1000.>>time_reco", nominal,"goff");
	//ft->Draw("B_s0_TRUETAU*1000.>>time_gen", nominal,"goff");
	gt->Draw("time>>time_gen","","goff");
	rh->Divide(fh,gh, 1, 1, "b");

	cout << "jhere" << endl;
	//ft->Draw("helcosthetaK_true>>k_reco", nominal,"goff");
	ft->Draw("cos(B_s0_TRUEThetaK)>>k_reco", nominal,"goff");
	gt->Draw("helcosthetaK>>k_gen","","goff");
	gh_k->Print();
	rh_k->Divide(fh_k,gh_k, 1, 1, "b");

	//ft->Draw("helcosthetaL_true>>l_reco", nominal,"goff");
	ft->Draw("cos(B_s0_TRUEThetaL)>>l_reco", nominal,"goff");
	gt->Draw("helcosthetaL>>l_gen","","goff");
	rh_l->Divide(fh_l,gh_l, 1, 1, "b");

	//ft->Draw("helphi_true>>p_reco", nominal,"goff");
	ft->Draw("B_s0_TRUEPhi>>p_reco", nominal,"goff");
	gt->Draw("helphi>>p_gen","","goff");
	rh_p->Divide(fh_p,gh_p, 1, 1, "b");

	TCanvas * d3 = new TCanvas();
	/*d3->Divide(2,2);
	d3->cd(1);
	rh_k->Draw();
	//rh_k->SetMinimum(0.035);
	//rh_k->SetMaximum(0.043);
	d3->cd(2);
	rh_l->Draw();	
	//rh_l->SetMinimum(0.035);
	//rh_l->SetMaximum(0.043);
	d3->cd(3);
	rh_p->Draw();	
	//rh_p->SetMinimum(0.035);
	//rh_p->SetMaximum(0.043);
	*/
	d3->cd(4);
        gStyle->SetOptStat(0);
        d3->SetLogx();
	rh->Draw();	
       	rh->GetXaxis()->SetTitle("t [ps]");
        rh->GetYaxis()->SetTitle("Efficiency");
        rh->SetMinimum(0.0);
	d3->SaveAs("apparent_time_efficiency.pdf");


	gStyle->SetStatX(0.65);
	gStyle->SetStatY(0.45);

	TF1 * pol = new TF1("pol2", "[0]*(1 + [1]*x + [2]*x*x)", t_min, t_max);
	//TF1 * pol = new TF1("pol2", "[0]*(1 + [1]*x + [2]*x*x)", 0.3, 14);
	pol->SetLineColor(kRed);
	pol->SetParName(0, "N");
	pol->SetParName(1, "beta");
	pol->SetParName(2, "gamma");
	pol->FixParameter(1,0);

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
	c->SaveAs("time_acc.pdf");

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
	d->SaveAs("cosThetaK_acc.pdf");
	
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
	d1->SaveAs("cosThetaL_acc.pdf");

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
	d2->SaveAs("phi_acc.pdf");

	TCanvas * can = new TCanvas();
	ft->Draw("(B_s0_LOKI_DTF_CTAU/0.2997 - B_s0_TRUETAU*1000.)", nominal+"&&B_s0_MINIPCHI2NEXTBEST<0");


		TFile * output = TFile::Open("reco_and_stripping_time_acceptance.root","RECREATE");
	rh->Write();
	output->Close();

}


