{
    // Run this at the command line by doing
    // root -l plot_distributions.C

    gROOT->ProcessLine("../../../../lhcbStyle.C");

    // You will need to change the file names here
    TFile * f1 = TFile::Open("data.root");
    TTree * t1 = (TTree*)f1->Get("tuple");
    TFile * f2 = TFile::Open("mc.root");
    TTree * t2 = (TTree*)f2->Get("tuple");

    // Define a histogram that you want to draw
    TH1D * h_pt_b = new TH1D ("h_pt_b", "pt_b",100, 0., 500.0);
    pt_b->Sumw2();

    // Draw the histogram for the data and the MC 
    t1->Draw("pt_b>>h_pt_b");
    t2->Draw("pt_b>>h_pt_b","same");

    // Now do some formatting and plotting
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
    c->Divide(2,2);
    c->cd(1);
    mpsipi->Draw();
    mpsipi->GetXaxis()->SetTitle("Lb pT [GeV/#it{c}]");
    mpsipi->GetYaxis()->SetTitle("Candidates");
    lhcbName->Draw();

    c->SaveAs("plots.pdf");
    c->SaveAs("plots.png");
}
