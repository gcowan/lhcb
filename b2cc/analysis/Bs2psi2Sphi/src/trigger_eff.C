{
    TFile * f = TFile::Open("../data/Bs2psi2Sphi.root");
    TTree * DecayTree = (TTree*)f->Get("psi_Tuple/DecayTree");
    //TFile * f = TFile::Open("../data/ferguson/MC2012_psi2s_corrv2.root");
    //TTree * DecayTree = (TTree*)f->Get("DecayTree");
    //TFile * f = TFile::Open("../data/ferguson/MC2012_psi2s.root");
    //TTree * DecayTree = (TTree*)f->Get("DecayTree");
    
    TFile * f1 = TFile::Open("../data/ferguson/Bs2Psi2SPhi_gen_2.root");
    TTree * toy_data = (TTree*)f1->Get("dataNTuple");

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

    TH1F * num = new TH1F("num","num", nbins, bins); 
    TH1F * den = new TH1F("den","den", nbins, bins); 
    TH1F * rat = new TH1F("rat","rat", nbins, bins); 
    num->Sumw2();
    den->Sumw2();
    rat->Sumw2();
    
    TH1F * toy_den = new TH1F("toy_den","toy_den", nbins, bins); 
    TH1F * toy_rat = new TH1F("toy_rat","toy_rat", nbins, bins); 
    toy_den->Sumw2();
    toy_rat->Sumw2();

    
    const std::string cuts = "(30. > TMath::Abs(phi_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS==1) && B_s0_BKGCAT<70 && B_s0_LOKI_DTF_CTAU/0.2997>0.3 && B_s0_LOKI_DTF_CTAU/0.2997<14.&&B_s0_BKGCAT==0";

    const std::string cuts_control = "(30. > TMath::Abs(phi_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonPsi2SDecision_TOS==1) && B_s0_BKGCAT<70 && B_s0_LOKI_DTF_CTAU/0.2997>0.3 && B_s0_LOKI_DTF_CTAU/0.2997<14.&&B_s0_BKGCAT==0";
    
    /*
    const std::string cuts = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS==1) && B_s0_BKGCAT<70 && B_s0_LOKI_DTF_CTAU/0.2997>0.3 && B_s0_LOKI_DTF_CTAU/0.2997<14.";

    const std::string cuts_control = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonPsi2SDecision_TOS==1) && B_s0_BKGCAT<70 && B_s0_LOKI_DTF_CTAU/0.2997>0.3 && B_s0_LOKI_DTF_CTAU/0.2997<14.";
    */
    //const std::string cuts = "(triggerDecisionUnbiased==1 && triggerDecisionUnbiasedPrescaled==1)";
    //const std::string cuts_control = "triggerDecisionUnbiasedPrescaled==1";
    DecayTree->Draw("B_s0_LOKI_DTF_CTAU/0.2997>>num",(cuts + "&&" + cuts_control).c_str());
    DecayTree->Draw("B_s0_LOKI_DTF_CTAU/0.2997>>den", cuts_control.c_str() );
    //DecayTree->Draw("time>>num",(cuts + "&&" + cuts_control).c_str());
    //DecayTree->Draw("time>>den", cuts_control.c_str() );
    toy_data->Draw("time>>toy_den");

    rat->Divide(num, den, 1, 1, "b");
    toy_rat->Divide(num, toy_den, 1, 1, "b");

    TH1F * rat2 = new TH1F(*rat);
    TH1F * rat3 = new TH1F(*toy_rat);

    gStyle->SetOptStat(0);
    TCanvas * c = new TCanvas("c","c",1200, 1000);
    c->Divide(2,2);
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
    c->cd(3);
    gPad->SetLogx();
    toy_rat->Draw();
    toy_rat->GetXaxis()->SetTitle("t [ps]");
    toy_rat->GetYaxis()->SetTitle("Efficiency");
    gPad->Modified();
    gPad->Update();
    c->Update();
    c->cd(4);
    gPad->SetLogx();
    rat3->Draw();
    rat3->SetMinimum(0.0);
    rat3->SetMaximum(1.2);

    c->SaveAs("MC2012_Hlt2DiMuonDetachedPsi2S_efficiency.pdf");
    c->SaveAs("MC2012_Hlt2DiMuonDetachedPsi2S_efficiency.png");


    for (int i = 0; i < nbins; ++i)
    {
        cout << bins[i] << " " << bins[i+1] << " " << rat->GetBinContent(i+1) << endl;
    }


    TFile * f2 = TFile::Open("../data/Bd2psi2SKpi_time_efficiency.root");
    TH1F * Bd_eff = (TH1F*)f2->Get("time__time");
   
    toy_rat->Divide(Bd_eff);

    TCanvas * e = new TCanvas("e","e",500,600);
    toy_rat->Draw();
    e->SaveAs("ratio_of_efficiencies.png");

}
