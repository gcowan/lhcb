void plot(TTree * tree, char * name){
	TCanvas * c = new TCanvas("c","c",800, 1800);
	c->Divide(2,5);
	for (int i = 0; i < 10; i++)
	{
		c->cd(i+1);
		char buf[20];
		sprintf(buf,"fractions[%d]",i);
		tree->Draw(buf);
		c->Update();
		c->Modified();
	}
	c->SaveAs(name);
	delete c;
}    

void plot_fractions()
{
	TFile * f = TFile::Open("fitFractions_without_bkg_nominal.root");
	TFile * g = TFile::Open("fitFractions_with_bkg_nominal.root");
	//TFile * h = TFile::Open("chi2.root");
	TTree * f_tree = (TTree*)f->Get("tree");
	TTree * g_tree = (TTree*)g->Get("tree");
	//TTree * h_tree = (TTree*)h->Get("tuple");
	plot(f_tree, "fitFractions_without_bkg_nominal.pdf");
	plot(g_tree, "fitFractions_with_bkg_nominal.pdf");

	//TCanvas * d = new TCanvas("d","d",800,600);
	//h_tree->Draw("chi2");
	//d->SaveAs("chi2.pdf");
}    

