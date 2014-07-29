{
	TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_all_BsJpsiPhi_DTT_20130709_minimal_truth_roel.root");
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2011_all_BsJpsiPhi_DTT_20131006_minimal_truth_roel.root");
        TFile * g = TFile::Open("gen_no_lower_time_cut.root");
        TTree * ft = (TTree*)f->Get("DecayTree");
        TTree * gt = (TTree*)g->Get("dataNTuple");	

	int nbins(100);
	double t_min(0.3);
	double t_max(14.);
	TH1D * fh1 = new TH1D("time_reco1","time_reco", nbins, t_min, t_max);
	TH1D * fh2 = new TH1D("time_reco2","time_reco", nbins, t_min, t_max);
	TH1D * fh3 = new TH1D("time_reco3","time_reco", nbins, t_min, t_max);
	TH1D * gh = new TH1D("time_gen" ,"time_gen" , nbins, t_min, t_max);
	TH1D * rh1 = new TH1D("time_acc1" ,"time_acc" , nbins, t_min, t_max);
	TH1D * rh2 = new TH1D("time_acc2" ,"time_acc" , nbins, t_min, t_max);
	TH1D * rh3 = new TH1D("time_acc3" ,"time_acc" , nbins, t_min, t_max);
	fh1->Sumw2();
	fh2->Sumw2();
	fh3->Sumw2();
	gh->Sumw2();
	rh1->Sumw2();
	rh2->Sumw2();
	rh3->Sumw2();

	TCut nominal = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)";	
	TCut trigger = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.) && ((B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonJPsiDecision_TOS==1))";
	//ft->Draw("B_s0_TRUETAU*1000>>time_reco1",  "(5. > B_s0_LOKI_DTF_CHI2NDOF)&&(0 < B_s0_LOKI_DTF_CHI2NDOF)","goff");
	//ft->Draw("B_s0_TRUETAU*1000>>time_reco2",  "(5. < B_s0_LOKI_DTF_CHI2NDOF)&&(0 < B_s0_LOKI_DTF_CHI2NDOF)","goff");
	//ft->Draw("B_s0_TRUETAU*1000>>time_reco1",  "(B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0)&&(5. > B_s0_LOKI_DTF_CHI2NDOF)", "goff");
	//ft->Draw("B_s0_TRUETAU*1000>>time_reco2",  "(B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0)&&(5. < B_s0_LOKI_DTF_CHI2NDOF)", "goff");
	//ft->Draw("B_s0_TRUETAU*1000>>time_reco3",  trigger, "goff");
	ft->Draw("B_s0_LOKI_DTF_CTAU/0.299792458>>time_reco1",  "(B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0)&&(5. > B_s0_LOKI_DTF_CHI2NDOF)", "goff");
	ft->Draw("B_s0_LOKI_DTF_CTAU/0.299792458>>time_reco2",  "(B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0)&&(5. < B_s0_LOKI_DTF_CHI2NDOF)", "goff");
	ft->Draw("B_s0_LOKI_DTF_CTAU/0.299792458>>time_reco3",  trigger, "goff");
	gt->Draw("time>>time_gen", "", "goff"); 
	rh1->Divide(fh1, gh, 1, 1, "b");
	rh2->Divide(fh2, gh, 1, 1, "b");
	rh3->Divide(fh3, gh, 1, 1, "b");

	TF1 * pol = new TF1("pol2", "[0]*(1 + [1]*x + [2]*x*x)", t_min, t_max);
	//TF1 * pol = new TF1("pol2", "[0]*(1 + [1]*x + [2]*x*x)", 0.3, 14);
	pol->SetLineColor(kRed);
	pol->SetParName(0, "N");
	pol->SetParName(1, "beta");
	pol->SetParName(2, "gamma");
	pol->FixParameter(1,0);

	TCanvas * c = new TCanvas();
	c->Divide(3,2);
	c->cd(1);
	gPad->SetLogy();
	fh1->Draw();
	fh1->GetXaxis()->SetTitle("t [ps]");
	fh1->GetYaxis()->SetTitle("Events");
	c->cd(2);
	gPad->SetLogy();
	fh2->Draw();
	fh2->GetXaxis()->SetTitle("t [ps]");
	fh2->GetYaxis()->SetTitle("Events");
	c->cd(3);
	gPad->SetLogy();
	fh3->Draw();
	fh3->GetXaxis()->SetTitle("t [ps]");
	fh3->GetYaxis()->SetTitle("Events");
	c->cd(4);
	gStyle->SetOptFit(1);
	gPad->SetLogx();
	rh1->Draw();
	rh1->GetXaxis()->SetTitle("t [ps]");
	rh1->GetYaxis()->SetTitle("Efficiency");
	TFitResultPtr s = rh1->Fit(pol,"SR");
	c->cd(5);
	gStyle->SetOptFit(1);
	gPad->SetLogx();
	rh2->Draw();
	rh2->GetXaxis()->SetTitle("t [ps]");
	rh2->GetYaxis()->SetTitle("Efficiency");
	s = rh2->Fit(pol,"SR");
	s->Print("v");
	c->cd(6);
	gStyle->SetOptFit(1);
	gPad->SetLogx();
	rh3->Draw();
	rh3->GetXaxis()->SetTitle("t [ps]");
	rh3->GetYaxis()->SetTitle("Efficiency");
	s = rh3->Fit(pol,"SR");
	s->Print("v");
	c->SaveAs("time_acc.pdf");

        TFile * output = TFile::Open("reco_and_selected_truetime_acceptance.root","RECREATE");
        rh2->Write();
        output->Close();
}


