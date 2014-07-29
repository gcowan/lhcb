{
	//TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/Bs2JpsiPhi_MC2012_ntupleB_20130904.root");
	TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/MC2012_all_BsJpsiPhi_DTT_20130709_minimal_truth_roel.root");
	TTree * t = (TTree*)f->Get("DecayTree");
	TH1D * h0 = new TH1D("h0","h0", 100, -0.5, 0.5);
	TH1D * h1 = new TH1D("h1","h0", 100, -0.5, 0.5);
	TH1D * h2 = new TH1D("h2","h0", 100, -0.5, 0.5);
	TH1D * h3 = new TH1D("h3","h0", 100, -0.5, 0.5);
	TH1D * h4 = new TH1D("h4","h0", 100, -0.5, 0.5);
	TH1D * h5 = new TH1D("h5","h0", 100, -0.5, 0.5);
	TH1D * h6 = new TH1D("h6","h0", 100, -0.5, 0.5);
	TH1D * h7 = new TH1D("h7","h0", 100, -0.5, 0.5);
	TString cut = "B_s0_LOKI_DTF_CTAU/0.299792458>0.3 && (30. > TMath::Abs(phi_1020_M - 1020.)) && (16. > phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (10. > B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (B_s0_MINIPCHI2NEXTBEST > 50 || 0 > B_s0_MINIPCHI2NEXTBEST) && (60 > TMath::Abs(J_psi_1S_MM - 3090))&& (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS==1)";
	t->Draw("B_s0_LOKI_DTF_CTAU/0.299792458-B_s0_TRUETAU*1000>>h0",cut+"&&B_s0_LOKI_DTF_CTAU/0.299792458<0.5", "goff");
	t->Draw("B_s0_LOKI_DTF_CTAU/0.299792458-B_s0_TRUETAU*1000>>h1",cut+"&&B_s0_LOKI_DTF_CTAU/0.299792458>0.5&&B_s0_LOKI_DTF_CTAU/0.299792458<0.7", "goff");
	t->Draw("B_s0_LOKI_DTF_CTAU/0.299792458-B_s0_TRUETAU*1000>>h2",cut+"&&B_s0_LOKI_DTF_CTAU/0.299792458>0.7 &&B_s0_LOKI_DTF_CTAU/0.299792458<1.0", "goff");
	t->Draw("B_s0_LOKI_DTF_CTAU/0.299792458-B_s0_TRUETAU*1000>>h3",cut+"&&B_s0_LOKI_DTF_CTAU/0.299792458>1.0 &&B_s0_LOKI_DTF_CTAU/0.299792458<1.5", "goff");
	t->Draw("B_s0_LOKI_DTF_CTAU/0.299792458-B_s0_TRUETAU*1000>>h4",cut+"&&B_s0_LOKI_DTF_CTAU/0.299792458>1.5 &&B_s0_LOKI_DTF_CTAU/0.299792458<4.0", "goff");
	t->Draw("B_s0_LOKI_DTF_CTAU/0.299792458-B_s0_TRUETAU*1000>>h5",cut+"&&B_s0_LOKI_DTF_CTAU/0.299792458>4.0 &&B_s0_LOKI_DTF_CTAU/0.299792458<7.0", "goff");
	t->Draw("B_s0_LOKI_DTF_CTAU/0.299792458-B_s0_TRUETAU*1000>>h6",cut+"&&B_s0_LOKI_DTF_CTAU/0.299792458>7.0 &&B_s0_LOKI_DTF_CTAU/0.299792458<10.0", "goff");
	t->Draw("B_s0_LOKI_DTF_CTAU/0.299792458-B_s0_TRUETAU*1000>>h7",cut+"&&B_s0_LOKI_DTF_CTAU/0.299792458>10.0 &&B_s0_LOKI_DTF_CTAU/0.299792458<14.0", "goff");
	
	double x[8] = {0.0075, 0.0175, 0.025, 0.035, 0.045, 0.0575, 0.0725, 0.10};
	double y[8] = {0., 0., 0., 0., 0., 0., 0., 0.};
	double z[8] = {0., 0., 0., 0., 0., 0., 0., 0.};
	double yy[8] = {0., 0., 0., 0., 0., 0., 0., 0.};
	double zz[8] = {0., 0., 0., 0., 0., 0., 0., 0.};
	double ex[8] = {0.0075, 0.0025, 0.005, 0.005, 0.005, 0.0075, 0.0075, 0.02};
	double ey[8] = {0., 0., 0., 0., 0., 0., 0., 0.};
	double ez[8] = {0., 0., 0., 0., 0., 0., 0., 0.};
	double eyy[8] = {0., 0., 0., 0., 0., 0., 0., 0.};
	double ezz[8] = {0., 0., 0., 0., 0., 0., 0., 0.};

	TF1 *f1 = new TF1("f1", "gaus", 1, 3);
   	//TF1 *f1 = new TF1("f1","[0]*exp(-0.5*((x-[1])/[2])**2) + (1-[0])*exp(-0.5*((x-[1])/[3])**2)",1,3);
	//f1->SetParameters(40, 5e-05, 3e-2);

	TCanvas * d = new TCanvas("d","d", 600, 600);
	d->Divide(3,3);
	d->cd(1);
	gPad->SetLogy(1);
	h0->Draw();
	TFitResultPtr r = h0->Fit("f1", "S");
	z[0] = r->Parameter(1);
	ez[0] = r->ParError(1);
	y[0] = r->Parameter(2);
	ey[0] = r->ParError(2);
	zz[0] = r->Parameter(1);
	ezz[0] = r->ParError(1);
	yy[0] = r->Parameter(3);
	eyy[0] = r->ParError(3);
	
	d->cd(2);
	gPad->SetLogy(1);
	h1->Draw();
	r = h1->Fit("f1","S");
	z[1] = r->Parameter(1);
	ez[1] = r->ParError(1);
	y[1] = r->Parameter(2);
	ey[1] = r->ParError(2);
	zz[1] = r->Parameter(1);
	ezz[1] = r->ParError(1);
	yy[1] = r->Parameter(3);
	eyy[1] = r->ParError(3);
	
	d->cd(3);
	gPad->SetLogy(1);
	h2->Draw();
	r = h2->Fit("f1","S");
	z[2] = r->Parameter(1);
	ez[2] = r->ParError(1);
	y[2] = r->Parameter(2);
	ey[2] = r->ParError(2);
	zz[2] = r->Parameter(1);
	ezz[2] = r->ParError(1);
	yy[2] = r->Parameter(3);
	eyy[2] = r->ParError(3);
	
	d->cd(4);
	gPad->SetLogy(1);
	h3->Draw();
	r = h3->Fit("f1","S");
	z[3] = r->Parameter(1);
	ez[3] = r->ParError(1);
	y[3] = r->Parameter(2);
	ey[3] = r->ParError(2);
	zz[3] = r->Parameter(1);
	ezz[3] = r->ParError(1);
	yy[3] = r->Parameter(3);
	eyy[3] = r->ParError(3);

	d->cd(5);
	gPad->SetLogy(1);
	h4->Draw();
	r = h4->Fit("f1","S");
	z[4] = r->Parameter(1);
	ez[4] = r->ParError(1);
	y[4] = r->Parameter(2);
	ey[4] = r->ParError(2);
	zz[4] = r->Parameter(1);
	ezz[4] = r->ParError(1);
	yy[4] = r->Parameter(3);
	eyy[4] = r->ParError(3);
	
	d->cd(6);
	gPad->SetLogy(1);
	h5->Draw();
	r = h5->Fit("f1","S");
	z[5] = r->Parameter(1);
	ez[5] = r->ParError(1);
	y[5] = r->Parameter(2);
	ey[5] = r->ParError(2);
	zz[5] = r->Parameter(1);
	ezz[5] = r->ParError(1);
	yy[5] = r->Parameter(3);
	eyy[5] = r->ParError(3);
	
	d->cd(7);
	gPad->SetLogy(1);
	h6->Draw();
	r = h6->Fit("f1","S");
	z[6] = r->Parameter(1);
	ez[6] = r->ParError(1);
	y[6] = r->Parameter(2);
	ey[6] = r->ParError(2);
	zz[6] = r->Parameter(1);
	ezz[6] = r->ParError(1);
	yy[6] = r->Parameter(3);
	eyy[6] = r->ParError(3);
	
	d->cd(8);
	gPad->SetLogy(1);
	h7->Draw();
	r = h7->Fit("f1","S");
	z[7] = r->Parameter(1);
	ez[7] = r->ParError(1);
	y[7] = r->Parameter(2);
	ey[7] = r->ParError(2);
	zz[7] = r->Parameter(1);
	ezz[7] = r->ParError(1);
	yy[7] = r->Parameter(3);
	eyy[7] = r->ParError(3);
	
	d->SaveAs("res_calib_MC2011_histos.pdf");
	/*
	for (int i = 0; i < 8; i++) std::cout << x[i] << " " << y[i] << " " << ey[i] << " " << z[i] << " " << ez[i] << std::endl;

	gStyle->SetOptFit(1);	
	TF1 * line = new TF1("line","pol1", 0, 1);
	line->SetLineColor(kRed);
	TCanvas * c = new TCanvas("c","c",1200, 600);
	c->Divide(2,1);
	c->cd(1);
	TGraphErrors * graph = new TGraphErrors(8, x, y, ex, ey);
	graph->Draw("AP");
	graph->Fit("line");
	graph->GetXaxis()->SetTitle("#sigma_{t} [ps]");
	graph->GetYaxis()->SetTitle("width [ps]");
	gPad->SetLeftMargin(0.2);
	graph->GetYaxis()->SetTitleOffset(1.15);
	graph->SetMinimum(0.);
	graph->SetMaximum(0.14);

	c->cd(2);	
	TF1 * quad = new TF1("quad","pol2", 0, 1);
	quad->SetLineColor(kBlue);
	//quad->FixParameter(1,0);
	TGraphErrors * graph1 = new TGraphErrors(8, x, z, ex, ez);
	graph1->Draw("AP");
	graph1->Fit("quad");
	graph1->GetXaxis()->SetTitle("#sigma_{t} [ps]");
	graph1->GetYaxis()->SetTitle("mean [ps]");
	gPad->SetLeftMargin(0.2);
	graph1->GetYaxis()->SetTitleOffset(1.15);

	*	
	c->cd(3);
	TGraphErrors * graph3 = new TGraphErrors(8, x, yy, ex, eyy);
	graph3->Draw("AP");
	graph3->Fit("line");
	graph3->GetXaxis()->SetTitle("#sigma_{t} [ps]");
	graph3->GetYaxis()->SetTitle("width [ps]");
	gPad->SetLeftMargin(0.2);
	graph3->GetYaxis()->SetTitleOffset(1.15);
	graph3->SetMinimum(0.);

	c->cd(4);	
	TGraphErrors * graph4 = new TGraphErrors(8, x, zz, ex, ezz);
	graph4->Draw("AP");
	graph4->Fit("quad");
	graph4->GetXaxis()->SetTitle("#sigma_{t} [ps]");
	graph4->GetYaxis()->SetTitle("mean [ps]");
	gPad->SetLeftMargin(0.2);
	graph4->GetYaxis()->SetTitleOffset(1.15);
	//graph1->SetMinimum(0.);
	*/
	//c->SaveAs("res_calib_MC2011.pdf");
}
