{
    gStyle->SetPalette(1);
    gStyle->SetOptStat(0);
    TFile * f = TFile::Open("sampled_acceptance.root");
    TTree * t = (TTree*)f->Get("tuple");
    TCanvas * c = new TCanvas();

    TH2D * h1 = new TH2D("hist1", "hist", 24, 0.64, 1.59, 40, -1, 1);
    TH2D * h2 = new TH2D("hist2", "hist", 24, 0.64, 1.59, 20, -1, 1);
    TH2D * h3 = new TH2D("hist3", "hist", 24, 0.64, 1.59, 12, -TMath::Pi(), TMath::Pi());
    TH2D * h4 = new TH2D("hist4", "hist", 40, -1, 1, 20, -1, 1);
    TH2D * h5 = new TH2D("hist5", "hist", 40, -1, 1, 12, -TMath::Pi(), TMath::Pi());
    TH2D * h6 = new TH2D("hist6", "hist", 20, -1, 1, 12, -TMath::Pi(), TMath::Pi());

    c->Divide(3,2);
    c->cd(1);
    t->Draw("cosTheta2:mKpi>>hist1","weight","COLZ");
    h1->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    h1->GetYaxis()->SetTitle("cos#theta_{K}");
    c->cd(2);
    t->Draw("cosTheta1:mKpi>>hist2", "weight","COLZ");
    h2->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    h2->GetYaxis()->SetTitle("cos#theta_{#mu}");
    c->cd(3);
    t->Draw("phi:mKpi>>hist3", "weight","COLZ");
    h3->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    h3->GetYaxis()->SetTitle("#phi [rad]");
    c->cd(4);
    t->Draw("cosTheta1:cosTheta2>>hist4", "weight","COLZ");
    h4->GetXaxis()->SetTitle("cos#theta_{K}");
    h4->GetYaxis()->SetTitle("cos#theta_{#mu}");
    c->cd(5);
    t->Draw("phi:cosTheta2>>hist5","weight","COLZ");
    h5->GetXaxis()->SetTitle("cos#theta_{K}");
    h5->GetYaxis()->SetTitle("#phi [rad]");
    c->cd(6);
    t->Draw("phi:cosTheta1>>hist6","weight","COLZ");
    h6->GetXaxis()->SetTitle("cos#theta_{#mu}");
    h6->GetYaxis()->SetTitle("#phi [rad]");
    c->SaveAs("acceptance_2D.pdf");
}
