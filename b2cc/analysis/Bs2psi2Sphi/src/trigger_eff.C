{
    //TFile * f = TFile::Open("../data/Bs2psi2Sphi.root");
    //TTree * DecayTree = (TTree*)f->Get("psi_Tuple/DecayTree");
    //TFile * f = TFile::Open("../data/ferguson/MC2012_psi2s_corrv2.root");
    //TFile * f = TFile::Open("../data/ferguson/MC2012_psi2s.root");
    //TFile * f = TFile::Open("../data/ferguson/noonecand/MC2012_psi2s_after_presels.root");
    TFile * f = TFile::Open("../data/ferguson/noonecand/output_ntupleB_MC_2012.root");
    TTree * DecayTree = (TTree*)f->Get("DecayTree");
    
    //TFile * f1 = TFile::Open("../data/ferguson/Bs2Psi2SPhi_gen_2.root");
    TFile * f1 = TFile::Open("../data/Bs2psi2Sphi_Toy_Sample.root");
    TTree * toy_data = (TTree*)f1->Get("dataNTuple");

    const int nbins(20);
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

    TH1F * num = new TH1F("num","num", nbins, bins);//0.3, 14.); 
    TH1F * num2= new TH1F("num2","num", nbins, bins);//0.3, 14.); 
    TH1F * den = new TH1F("den","den", nbins, bins);//0.3, 14.); 
    TH1F * eff_overlap = new TH1F("eff_overlap","rat", nbins, bins);//0.3, 14.); 
    TH1F * eff_ratio= new TH1F("eff_ratio","rat", nbins, bins);//0.3, 14.); 
    num->Sumw2();
    num2->Sumw2();
    den->Sumw2();
    eff_overlap->Sumw2();
    eff_ratio->Sumw2();

    TH1F * den_toy = new TH1F("den_toy","toy_den", nbins, bins);//*10, 0.3, 14.); 
    TH1F * eff_toy_unbiased = new TH1F("eff_toy_unbiased","toy_rat", nbins, bins);//*10, 0.3, 14.); 
    TH1F * eff_toy_prescaled = new TH1F("eff_toy_prescaled","toy_rat", nbins, bins);//*10, 0.3, 14.); 
    den_toy->Sumw2();
    eff_toy_unbiased->Sumw2();
    eff_toy_prescaled->Sumw2();


    /*
    const std::string cuts = "(30. > TMath::Abs(phi_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS==1) && B_s0_BKGCAT<70 && B_s0_LOKI_DTF_CTAU/0.2997>0.3 && B_s0_LOKI_DTF_CTAU/0.2997<14.&&B_s0_BKGCAT==0";

    const std::string cuts_control = "(30. > TMath::Abs(phi_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonPsi2SDecision_TOS==1) && B_s0_BKGCAT<70 && B_s0_LOKI_DTF_CTAU/0.2997>0.3 && B_s0_LOKI_DTF_CTAU/0.2997<14.&&B_s0_BKGCAT==0";
    */
    /*
    const std::string cuts = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS==1) && B_s0_BKGCAT<70 && B_s0_LOKI_DTF_CTAU/0.2997>0.3 && B_s0_LOKI_DTF_CTAU/0.2997<14.";

    const std::string cuts_control = "(30. > TMath::Abs(phi_1020_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonPsi2SDecision_TOS==1) && B_s0_BKGCAT<70 && B_s0_LOKI_DTF_CTAU/0.2997>0.3 && B_s0_LOKI_DTF_CTAU/0.2997<14.";
    */
    //const std::string cuts = "(triggerDecisionUnbiased_2012==1) && (bkgcat == 0 || bkgcat == 50) && bdt_score > 0.08";
    //const std::string cuts_control = "triggerDecisionUnbiasedPrescaled==1 && (bkgcat == 0 || bkgcat == 50) && bdt_score > 0.08";
    const std::string cuts = "(triggerDecisionUnbiased_2012==1) && (bkgcat == 0 || bkgcat == 50)";
    const std::string cuts_control = "triggerDecisionUnbiasedPrescaled==1 && (bkgcat == 0 || bkgcat == 50)";
    //DecayTree->Draw("B_s0_LOKI_DTF_CTAU/0.2997>>num",(cuts + "&&" + cuts_control).c_str());
    //DecayTree->Draw("B_s0_LOKI_DTF_CTAU/0.2997>>den", cuts_control.c_str() );
    int o = DecayTree->Draw("time>>num", (cuts + "&&" + cuts_control).c_str(), "goff"); // Using this method, the efficiency we get is only valid for events with psi(2S)_pt > 2GeV. Need method to validate using efficiency below this threshold.
    int l = DecayTree->Draw("time>>num2", cuts.c_str(), "goff" );
    int m = DecayTree->Draw("time>>den" , cuts_control.c_str(), "goff" );
    int j = toy_data ->Draw("time>>den_toy","", "goff");
    den_toy->Scale(float(l)/j);

    cout << "selected num" << o << " den " << m << endl;

    TCanvas * g = new TCanvas("g","g",600,600);
    num2->Draw();
    den_toy->Draw("same");

    eff_overlap->Divide(num,  den, 1, 1, "b");
    eff_ratio  ->Divide(num2, den, 1, 1, "b");
    eff_toy_unbiased ->Divide(num2, den_toy);
    eff_toy_prescaled->Divide(den, den_toy);

    TH1F * eff_overlap2 = new TH1F(*eff_overlap);

    gStyle->SetOptStat(0);
    TCanvas * c = new TCanvas("c","c",1200, 1000);
    c->Divide(2,2);
    c->cd(1);
    //gPad->SetLogx();
    eff_overlap->Draw();
    //rat->SetMinimum(0.95);
    eff_overlap->GetXaxis()->SetTitle("t [ps]");
    eff_overlap->GetYaxis()->SetTitle("Efficiency");
    gPad->Modified();
    gPad->Update();
    c->Update();
    c->cd(2);
    //gPad->SetLogx();
    eff_ratio->Draw();
    eff_ratio->GetXaxis()->SetTitle("t [ps]");
    eff_ratio->GetYaxis()->SetTitle("Efficiency");
    //gPad->SetLogx();
    //eff_overlap2->Draw();
    //eff_overlap2->SetMinimum(0.0);
    //eff_overlap2->SetMaximum(1.2);
    c->cd(3);
    eff_toy_unbiased->Draw();
    //eff_toy->SetMinimum(0.9);
    //eff_toy->SetMaximum(1.1);
    eff_toy_unbiased->GetXaxis()->SetTitle("t [ps]");
    eff_toy_unbiased->GetYaxis()->SetTitle("Efficiency");
    TF1 * func = new TF1("func", "[0]*(1+[1]*x)", 0.3, 14);
    func->SetLineColor(kRed);
    eff_toy_unbiased->Fit(func);
    gPad->Modified();
    gPad->Update();
    c->Update();
    c->cd(4);
    eff_toy_prescaled->Draw();
    //eff_toy->SetMinimum(0.9);
    //eff_toy->SetMaximum(1.1);
    eff_toy_prescaled->GetXaxis()->SetTitle("t [ps]");
    eff_toy_prescaled->GetYaxis()->SetTitle("Efficiency");
    eff_toy_prescaled->Fit(func);
    gPad->Modified();
    gPad->Update();
    c->Update();
 
    c->SaveAs("MC2012_Hlt2DiMuonDetachedPsi2S_efficiency.pdf");
    c->SaveAs("MC2012_Hlt2DiMuonDetachedPsi2S_efficiency.png");


    for (int i = 0; i < nbins; ++i)
    {
        cout << bins[i] << " " << bins[i+1] << " " << eff_overlap->GetBinContent(i+1) << endl;
    }


    TFile * f2 = TFile::Open("../data/Bd2psi2SKpi_time_efficiency.root");
    TH1F * Bd_eff = (TH1F*)f2->Get("time__time");
   
    eff_toy_unbiased->Divide(Bd_eff);

    TCanvas * e = new TCanvas("e","e",500,600);
    eff_toy_unbiased->Draw();
    e->SaveAs("ratio_of_efficiencies.png");

}
