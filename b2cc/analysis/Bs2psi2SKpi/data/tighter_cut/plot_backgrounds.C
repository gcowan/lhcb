{
    gStyle->SetOptStat(0);
    TFile * f = TFile::Open("selected_candidates_with_correct_angles.root");
    TFile * b = TFile::Open("selected_candidates_with_correct_angles_same_sign.root");
    TTree * t = (TTree*)f->Get("tuple");
    TTree * s = (TTree*)b->Get("tuple");

    TH1D * mKpi = new TH1D ("mKpi", "psipi", 20, 0.64, 1.68);
    TH1D * cosTheta1  = new TH1D ("cosTheta1", "psik", 10, -1, 1);
    TH1D * cosTheta2  = new TH1D ("cosTheta2", "psik", 10, -1, 1);
    TH1D * phi        = new TH1D ("phi", "psik", 10, -TMath::Pi(), TMath::Pi());
    mKpi->Sumw2();
    cosTheta1->Sumw2();
    cosTheta2->Sumw2();
    phi->Sumw2();

    TH1D * mKpi_ss = new TH1D ("mKpi_ss", "psipi", 20, 0.64, 1.68);
    TH1D * cosTheta1_ss  = new TH1D ("cosTheta1_ss", "psik", 10, -1, 1);
    TH1D * cosTheta2_ss  = new TH1D ("cosTheta2_ss", "psik", 10, -1, 1);
    TH1D * phi_ss        = new TH1D ("phi_ss", "psik", 10, -TMath::Pi(), TMath::Pi());
    mKpi_ss->Sumw2();
    cosTheta1_ss->Sumw2();
    cosTheta2_ss->Sumw2();
    phi_ss->Sumw2();
    mKpi_ss->SetLineColor(kRed);
    cosTheta1_ss->SetLineColor(kRed);
    cosTheta2_ss->SetLineColor(kRed);
    phi_ss->SetLineColor(kRed);
    mKpi_ss->SetMarkerColor(kRed);
    cosTheta1_ss->SetMarkerColor(kRed);
    cosTheta2_ss->SetMarkerColor(kRed);
    phi_ss->SetMarkerColor(kRed);

    t->Draw("m23/1e3>>mKpi", "B_s0_Mass_JpsiConstr>5390");
    t->Draw("cosTheta1>>cosTheta1", "B_s0_Mass_JpsiConstr>5390");
    t->Draw("cosTheta2>>cosTheta2", "B_s0_Mass_JpsiConstr>5390");
    t->Draw("phi>>phi", "B_s0_Mass_JpsiConstr>5390");
    s->Draw("m23/1e3>>mKpi_ss", "B_s0_Mass_JpsiConstr>5.390");
    s->Draw("cosTheta1>>cosTheta1_ss", "B_s0_Mass_JpsiConstr>5.390");
    s->Draw("cosTheta2>>cosTheta2_ss", "B_s0_Mass_JpsiConstr>5.390");
    s->Draw("phi>>phi_ss", "B_s0_Mass_JpsiConstr>5.390");

    double data = t->GetEntries("B_s0_Mass_JpsiConstr>5390");
    double ss   = s->GetEntries("B_s0_Mass_JpsiConstr>5.390");
    mKpi_ss->Scale(data/ss);
    cosTheta1_ss->Scale(data/ss);
    cosTheta2_ss->Scale(data/ss);
    phi_ss->Scale(data/ss);

    TCanvas * c = new TCanvas();
    c->Divide(2,2);
    c->cd(4);
    mKpi->Draw();
    mKpi_ss->Draw("same");
    mKpi->SetMinimum(0);
    mKpi->GetXaxis()->SetTitle("m(K^{+}#pi^{+}) [GeV/#it{c}^{2}]");
    mKpi->GetYaxis()->SetTitle("Candidates");

    c->cd(1);
    cosTheta1->Draw();
    cosTheta1_ss->Draw("same");
    cosTheta1->SetMinimum(0);
    cosTheta1->GetXaxis()->SetTitle("cos#theta_{#mu}");
    cosTheta1->GetYaxis()->SetTitle("Candidates");
    c->cd(3);
    cosTheta2->Draw();
    cosTheta2_ss->Draw("same");
    cosTheta2->SetMinimum(0);
    cosTheta2->GetXaxis()->SetTitle("cos#theta_{K}");
    cosTheta2->GetYaxis()->SetTitle("Candidates");
    c->cd(2);
    phi->Draw();
    phi_ss->Draw("same");
    phi->SetMinimum(0);
    phi->GetXaxis()->SetTitle("#phi [rad]");
    phi->GetYaxis()->SetTitle("Candidates");

    c->SaveAs("background.pdf");
}
