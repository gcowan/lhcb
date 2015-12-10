{
    TFile * f = TFile::Open("../data/Bs2psi2Sphi.root");
    TTree * DecayTree = (TTree*)f->Get("psi_Tuple/DecayTree");

    const int nbins(40);
    double bins[nbins+1];
    const double t_min(0.3);
    const double t_max(14.);
    const double tau_PDG(1.5);
    double A(TMath::Exp(-t_max/tau_PDG));
    double B(TMath::Exp(-t_min/tau_PDG));
    bins[0] = t_min;
    bins[nbins] = t_max;
    for(int i(1); i < nbins; i++){
        bins[i] = -TMath::Log(((double)i*(A-B)/(double)nbins+B))*tau_PDG;
    }
    for(int i(0); i <= nbins; i++) cout << bins[i] << endl;

    TH1D * num = new TH1D("num","num", nbins, bins); 
    TH1D * den = new TH1D("den","den", nbins, bins); 
    TH1D * rat = new TH1D("rat","rat", nbins, bins); 
    num->Sumw2();
    den->Sumw2();
    rat->Sumw2();

    const std::string cuts = "(30. > TMath::Abs(phi_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1TrackMuonDecision_TOS==1||B_s0_Hlt1TrackAllL0Decision_TOS==1)&&B_s0_Hlt1DiMuonHighMassDecision_TOS==0 && (B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS==1) && B_s0_BKGCAT<70 && B_s0_LOKI_DTF_CTAU/0.2997>0.3 && B_s0_LOKI_DTF_CTAU/0.2997<14.";

    const std::string cuts_control = "(30. > TMath::Abs(phi_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonPsi2SDecision_TOS==1) && B_s0_BKGCAT<70 && B_s0_LOKI_DTF_CTAU/0.2997>0.3 && B_s0_LOKI_DTF_CTAU/0.2997<14.";

    DecayTree->Draw("B_s0_LOKI_DTF_CTAU/0.2997>>num", cuts.c_str());
    DecayTree->Draw("B_s0_LOKI_DTF_CTAU/0.2997>>den", cuts_control.c_str() );

    rat->Divide(num, den, 1, 1, "b");

    TH1D * rat2 = new TH1D(*rat);

    gStyle->SetOptStat(0);
    TCanvas * c = new TCanvas("c","c",1200, 500);
    c->Divide(2,1);
    c->cd(1);
    gPad->SetLogx();
    rat->Draw();
    rat->GetXaxis()->SetTitle("t [ps]");
    rat->GetYaxis()->SetTitle("Efficiency");
    gPad->Modified();
    gPad->Update();
    c->Update();
    c->cd(2);
    gPad->SetLogx();
    rat2->Draw();
    rat2->SetMinimum(0.0);
    rat2->SetMaximum(1.2);

    c->SaveAs("MC2012_biased_trigger_efficiency.pdf");
    c->SaveAs("MC2012_biased_trigger_efficiency.png");


    for (int i = 0; i < nbins; ++i)
    {
        cout << bins[i] << " " << bins[i+1] << " " << rat->GetBinContent(i+1) << endl;
    }

}
