{
    gROOT->ProcessLine(".x /Users/gcowan/lhcb/lhcbStyle.C");
    TFile * f = TFile::Open("mass_and_ipz_sweigted.root");
    TTree * t = (TTree*)f->Get("dataNTuple");

    TH1D * mu1 = new TH1D("mu1","mu1",60, 0., 6.);
    TH1D * mu2 = new TH1D("mu2","mu1",60, 0., 6.);
    TH1D * kaon = new TH1D("kaon","mu1",60, 0., 6.);
    TH1D * pion = new TH1D("pion","mu1",60, 0., 6.);
    mu1->SetLineColor(kRed);
    mu2->SetLineColor(kBlack);
    kaon->SetLineColor(kBlue);
    pion->SetLineColor(kGreen+2);
    mu1->SetLineWidth(3);
    mu2->SetLineWidth(3);
    kaon->SetLineWidth(3);
    pion->SetLineWidth(3);
    mu2->SetLineStyle(2);
    kaon->SetLineStyle(5);
    pion->SetLineStyle(7);

    TCanvas * c = new TCanvas();
    gPad->SetLogy(1);
    gStyle->SetOptStat(0);
    t->Draw("mu1_ipz>>mu1","signal_sw");
    t->Draw("mu2_ipz>>mu2","signal_sw", "same");
    t->Draw("kaon_ipz>>kaon","signal_sw","same");
    t->Draw("pion_ipz>>pion","signal_sw","same");
    mu1->GetXaxis()->SetTitle("IP_{z} [mm]");
    mu1->GetYaxis()->SetTitle("Candidates / (0.1 mm)");
    
    TPaveText * lhcbName = new TPaveText(gStyle->GetPadLeftMargin() + 0.55,
                        0.82 - gStyle->GetPadTopMargin(),
                        gStyle->GetPadLeftMargin() + 0.70,
                        0.9 - gStyle->GetPadTopMargin(),
                        "BRNDC");
    lhcbName->AddText("LHCb");
    lhcbName->SetFillColor(0);
    lhcbName->SetTextAlign(12);
    lhcbName->SetBorderSize(0);
    lhcbName->Draw("same");

    c->SaveAs("Bd2JpsiKst_IPz.pdf");
    c->SaveAs("Bd2JpsiKst_IPz.png");
    c->SaveAs("Bd2JpsiKst_IPz.C");
}
