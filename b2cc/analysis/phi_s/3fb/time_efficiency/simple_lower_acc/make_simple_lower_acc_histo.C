{
	TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_Bs2JpsiPhi_minimal_truth_with_IPz_weights.root");
	TTree * ft = (TTree*)f->Get("DecayTree");

	const int nbins = 30;
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

	TH1D * fh = new TH1D("time_detached","time_detached", nbins-10, t_min, t_max);
	TH1D * gh = new TH1D("time_unbiased","time_unbiased", nbins-10, t_min, t_max);
	TH1D * rh = new TH1D("time_acc", "time_acc", nbins-10, t_min, t_max);
	fh->Sumw2();
	gh->Sumw2();
	rh->Sumw2();

	TString detached = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS==1)";
	TString unbiased = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonJPsiDecision_TOS==1)";

	ft->Draw("B_s0_TRUETAU*1000.>>time_detached", detached, "goff");
	ft->Draw("B_s0_TRUETAU*1000.>>time_unbiased", unbiased, "goff");
	rh->Divide(fh, gh, 1, 1, "b");

	TCanvas * d3 = new TCanvas();
	rh->Draw();	
       	rh->GetXaxis()->SetTitle("t [ps]");
        rh->GetYaxis()->SetTitle("Efficiency");
        rh->SetMinimum(0.5);
	rh->Fit("pol0");
	d3->SaveAs("trigger_time_efficiency.pdf");

	TFile * output = TFile::Open("trigger_time_efficiency.root","RECREATE");
	rh->Write();
	output->Close();
}


