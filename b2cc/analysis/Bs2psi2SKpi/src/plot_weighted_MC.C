{
	TFile * f = TFile::Open("Bd2psi2SKpi_MC_weighted_no_bkg_no_acc.root");
	f->ls();	
	TTree * t = (TTree*)f->Get("dataNTuple");
	TFile * g = TFile::Open("RapidFitOutput_20141105_172857/Bs2psi2SKpi_MC_weighted_no_bkg_no_acc.root");
	g->ls();	
	TTree * y = (TTree*)g->Get("dataNTuple");

	t->Print();
	y->Print();
	
	TCanvas * c = new TCanvas("c", "c", 1000, 600);
	c->Divide(2,1);
	c->cd(1);
	gPad->SetLogy(1);
	t->Draw("m23>>h1","RapidFitWeight");
	t->Draw("m23>>h2", "", "same");
	h1->GetXaxis()->SetTitle("(B^{0} MC) m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
	h1->GetXaxis()->SetRangeUser(0.6, 1.7);
	h1->SetMaximum(7000);
	c->Modified();
	c->Update();
	c->cd(2);
	gPad->SetLogy(1);
	y->Draw("m23>>h3", "RapidFitWeight");
	y->Draw("m23>>h4","", "same");
	h3->GetXaxis()->SetTitle("(B_{s}^{0} MC) m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
	h3->GetXaxis()->SetRangeUser(0.6, 1.7);
	h3->SetMaximum(7000);

	c->SaveAs("reweighted_MC.pdf");
}
