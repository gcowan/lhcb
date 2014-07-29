{
	gStyle->SetOptStat(0);
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/Bs2JpsiPhi_MC2012_ntupleB_20130904_with_IPz_weights.root");
	TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2011_all_BsJpsiPhi_DTT_20131006_minimal_truth_roel_with_IPz_weights.root");
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_all_BsJpsiPhi_DTT_20130709_minimal_truth_roel_with_IPz_weights.root");
	TTree * DecayTree = (TTree*)f->Get("DecayTree");
	
	TString cut = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS==1)&&B_s0_LOKI_DTF_CTAU/0.2997>0.3";

	//time
	/*	
	TH2D * h2 = new TH2D("h2", "h2", 100, 0.3, 16, 500, -1, 1);
	DecayTree->Draw("1/B_velo_eff_weight:B_s0_LOKI_DTF_CTAU/0.2997>>h2", cut, "goff");
	TProfile * hprof = new TProfile("hprof", "hprof", 100, 0.3, 16, -1, 1);
	DecayTree->Draw("1/B_velo_eff_weight:B_s0_LOKI_DTF_CTAU/0.2997>>hprof", cut, "goff");
	*/
	//cosThetaK
		
	TH2D * h2 = new TH2D("h2", "h2", 100, -1, 1, 100, 0.5, 1);
	DecayTree->Draw("1/B_velo_eff_weight:helcosthetaL>>h2", cut, "goff");
	TProfile * hprof = new TProfile("hprof", "hprof", 100, -1, 1, 0.5, 1);
	DecayTree->Draw("1/B_velo_eff_weight:helcosthetaL>>hprof", cut, "goff");
	
	//phi
	//TH2D * h2 = new TH2D("h2", "h2", 100, -TMath::Pi(), TMath::Pi(), 100, 0.5, 1);
	//DecayTree->Draw("1/B_velo_eff_weight:helphi>>h2","(60>bkgcat)&&(sel==1)&&((hlt1_biased==1||hlt1_unbiased==1)&&hlt2_biased==1)&&(3150>mdau1&&mdau1>3030)&&B_velo_eff_weight<10&&time>0.3", "goff");
	//TProfile * hprof = new TProfile("hprof", "hprof", 100, -TMath::Pi(), TMath::Pi(), 0.5, 1);
	//DecayTree->Draw("1/B_velo_eff_weight:helphi>>hprof","(60>bkgcat)&&(sel==1)&&((hlt1_biased==1||hlt1_unbiased==1)&&hlt2_biased==1)&&(3150>mdau1&&mdau1>3030)&&B_velo_eff_weight<10&&time>0.3", "goff");
	

	//TF1 * pol = new TF1("pol2", "[0]*(1 + [1]*x + [2]*x*x)", -TMath::Pi(), TMath::Pi());
	TF1 * pol = new TF1("pol2", "[0]*(1 + [1]*x + [2]*x*x)", 0.3, 14.);
	pol->SetLineColor(kRed);
	pol->SetParName(0, "N");
	pol->SetParName(1, "beta");
	pol->SetParName(2, "gamma");
	TF1 * pol1 = new TF1("pol1", "[0]*(1 + [1]*x)", 0.3, 14.);
	pol1->SetLineColor(kBlue);
	pol1->SetParName(0, "N");
	pol1->SetParName(1, "beta");

	gStyle->SetPalette(1);
	TCanvas * c = new TCanvas();
	c->Divide(2,1);
	c->cd(1);
	h2->Draw("BOX");	
	h2->GetXaxis()->SetNdivisions(505);
	c->Update();
	//h2->GetXaxis()->SetTitle("t [ps]");
	//h2->GetXaxis()->SetTitle("cos#theta_{L}");
	h2->GetXaxis()->SetTitle("cos#theta_{K}");
	//h2->GetXaxis()->SetTitle("#phi");
	h2->GetYaxis()->SetTitle("1/B_velo_eff_weight");
	//h2->SetMinimum(0.5);

	c->cd(2);
	hprof->Draw();
	//hprof->GetXaxis()->SetTitle("t [ps]");
	//hprof->GetXaxis()->SetTitle("cos#theta_{L}");
	hprof->GetXaxis()->SetTitle("cos#theta_{K}");
	//hprof->GetXaxis()->SetTitle("#phi");
	hprof->GetYaxis()->SetTitle("<1/B_velo_eff_weight>");
	//hprof->SetMinimum(0.4);
	hprof->SetMinimum(0.97);
	hprof->Draw();
	hprof->Fit(pol, "R");
	c->SaveAs("MC2011_efficiency_velo.pdf");
}
