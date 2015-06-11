{
    TFile * f = TFile::Open("selected_candidates_with_correct_angles.root");
    TTree * t = (TTree*)f->Get("tuple");

    TH2D * dalitz = new TH2D ("dalitz", "dalitz", 20, 0.2, 2.8, 20, 14, 24);
    //t->Draw("m13*m13/1e6:m23*m23/1e6>>dalitz", "Bs_sig_sw");
    t->Draw("m13*m13/1e6:m23*m23/1e6>>dalitz", "B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr&&!(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))&&m23<1200");
    //t->Draw("m13*m13/1e6:m23*m23/1e6>>dalitz", "B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr&&!(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))");
    //t->Draw("m13*m13/1e6:m23*m23/1e6>>dalitz", "B_s0_Mass_JpsiConstr>5390&&!(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))");

    TH1D * mpsipi = new TH1D ("psipi", "psipi", 20, 3.7, 5.0);
    TH1D * mpsik  = new TH1D ("psik", "psik", 20, 4.0, 5.3);
    mpsipi->Sumw2();
    mpsik->Sumw2();
    //t->Draw("m13/1e3>>psipi","Bs_sig_sw");
    //t->Draw("m12/1e3>>psik", "Bs_sig_sw");
    t->Draw("m13/1e3>>psipi","B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr&&!(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))&&m23<1200");
    t->Draw("m12/1e3>>psik", "B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr&&!(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))&&m23<1200");
    //t->Draw("m13/1e3>>psipi","B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr&&!(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))");
    //t->Draw("m12/1e3>>psik", "B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr&&!(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))");
    //t->Draw("m13/1e3>>psipi","B_s0_Mass_JpsiConstr>5390&&!(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))");
    //t->Draw("m12/1e3>>psik", "B_s0_Mass_JpsiConstr>5390&&!(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))");

   lhcbName = new TPaveText(gStyle->GetPadLeftMargin() + 0.03,
                            0.87 - gStyle->GetPadTopMargin(),
                            gStyle->GetPadLeftMargin() + 0.13,
                            0.95 - gStyle->GetPadTopMargin(),
                            "BRNDC");
   lhcbName->AddText("LHCb");
   lhcbName->SetFillColor(0);
   lhcbName->SetTextAlign(12);
   lhcbName->SetBorderSize(0);

    gStyle->SetOptStat(0);
    TCanvas * c = new TCanvas();
    c->Divide(2,1);
    c->cd(1);
    mpsipi->Draw();
    mpsipi->GetXaxis()->SetTitle("m(#psi(2S)#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    mpsipi->GetYaxis()->SetTitle("Candidates");
    lhcbName->Draw();

    c->cd(2);
    mpsik->Draw();
    mpsik->GetXaxis()->SetTitle("m(#psi(2S) K^{+}) [GeV/#it{c}^{2}]");
    mpsik->GetYaxis()->SetTitle("Candidates");
    lhcbName->Draw();
    c->SaveAs("mass_plots.pdf");

    TCanvas * d = new TCanvas();
    dalitz->Draw("");
    dalitz->GetYaxis()->SetTitle("m^{2}(#psi(2S)#pi^{#font[122]{-}}) [GeV^{2}/#it{c}^{4}]");
    dalitz->GetXaxis()->SetTitle("m^{2}(K^{+}#pi^{#font[122]{-}}) [GeV^{2}/#it{c}^{4}]");
    lhcbName->Draw();
    d->SaveAs("mass_plots_dalitz.pdf");

}
