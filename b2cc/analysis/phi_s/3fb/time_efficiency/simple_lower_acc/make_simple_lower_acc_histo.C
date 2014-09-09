{
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_Bs2JpsiPhi_DG0_minimal_truth_with_IPz_weights.root");
	TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_sim08e_Bs2JpsiPhi_minimal_truth_with_IPz_weights_v2.root");
	TTree * ft = (TTree*)f->Get("DecayTree");
	//TFile * g = TFile::Open("../../fits/4D/XMLFOLDER/new/DG0/test.root");
	TFile * g = TFile::Open("../../fits/4D/XMLFOLDER/new/sim08e/test_DG_neq_0.root");
	TTree * gt = (TTree*)g->Get("dataNTuple");

	const int nbins = 40;
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

	//TH1D * fh = new TH1D("time_detached","time_detached", nbins, t_min, t_max);
	//TH1D * gh = new TH1D("time_unbiased","time_unbiased", nbins, t_min, t_max);
	//TH1D * rh = new TH1D("time_acc", "time_acc", nbins, t_min, t_max);
	TH1D * fh = new TH1D("time_detached","time_detached", nbins, bins);
	TH1D * gh = new TH1D("time_unbiased","time_unbiased", nbins, bins);
	TH1D * rh = new TH1D("time_acc", "time_acc", nbins, bins);
	fh->Sumw2();
	gh->Sumw2();
	rh->Sumw2();

	//TString detached = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS==1)  && (B_s0_Hlt2DiMuonJPsiDecision_TOS==1)&&(B_s0_TRUETAU*1000.>0.3)&&(B_s0_TRUETAU*1000.<14.0)";

	//TString biased = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1TrackMuonDecision_TOS==1||B_s0_Hlt1TrackAllL0Decision_TOS==1) && (B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS==1)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==0)&&(B_s0_TRUETAU*1000.>0.3)&&(B_s0_TRUETAU*1000.<14.0)";

	//TString unbiased = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonJPsiDecision_TOS==1)&&(B_s0_TRUETAU*1000.>0.3)&&(B_s0_TRUETAU*1000.<14.0)";
	
	TString detached = "B_velo_eff_weight_with_trigger*((30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS==1)  && (B_s0_Hlt2DiMuonJPsiDecision_TOS==1)&&(B_s0_LOKI_DTF_CTAU/0.299792458>0.3)&&(B_s0_LOKI_DTF_CTAU/0.299792458<14.0))";

	TString biased = "B_velo_eff_weight_with_track_trigger*((30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1TrackMuonDecision_TOS==1||B_s0_Hlt1TrackAllL0Decision_TOS==1) && (B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS==1)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==0)&&(B_s0_LOKI_DTF_CTAU/0.299792458>0.3)&&(B_s0_LOKI_DTF_CTAU/0.299792458<14.0))";

	TString unbiased = "B_velo_eff_weight_with_trigger*((30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonJPsiDecision_TOS==1)&&(B_s0_LOKI_DTF_CTAU/0.299792458>0.3)&&(B_s0_LOKI_DTF_CTAU/0.299792458<14.0))";

	//ft->Draw("B_s0_TRUETAU*1000.>>time_detached", detached, "goff");
	//ft->Draw("B_s0_TRUETAU*1000.>>time_detached", biased, "goff");
	//ft->Draw("B_s0_TRUETAU*1000.>>time_unbiased", unbiased, "goff");
	ft->Draw("B_s0_LOKI_DTF_CTAU/0.299792458>>time_detached", detached, "goff");
	//ft->Draw("B_s0_LOKI_DTF_CTAU/0.299792458>>time_detached", biased, "goff");
	ft->Draw("B_s0_LOKI_DTF_CTAU/0.299792458>>time_unbiased", unbiased, "goff");
	//gt->Draw("time>>time_unbiased", "", "goff");
	rh->Divide(fh, gh, 1, 1, "b");

	TFile * s = TFile::Open("sevda_eff_histo.root","READ");
	TH1D * sh = (TH1D*)s->Get("t_data");	
	sh->SetMarkerColor(kRed);
	sh->SetLineColor(kRed);
	TCanvas * d3 = new TCanvas();
	d3->SetLogx();
	rh->Draw();	
       	//rh->GetXaxis()->SetTitle("(reconstructed) t [ps]");
       	rh->GetXaxis()->SetTitle("(true) t [ps]");
        rh->GetYaxis()->SetTitle("Efficiency");
        rh->SetMinimum(0.5);
	rh->Fit("pol0");
	//sh->Scale(0.3);
	//sh->Draw("same");
	d3->SaveAs("trigger_time_efficiency.pdf");

	TFile * output = TFile::Open("trigger_time_efficiency.root","RECREATE");
	rh->Write();
	output->Close();
}


