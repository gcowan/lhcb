{
    TFile * f = TFile::Open("../data/Bs2psi2Sphi.root");
    TTree * DecayTree = (TTree*)f->Get("psi_Tuple/DecayTree");
    
    TFile * f1 = TFile::Open("../data/Bs2psi2Sphi_Toy_Sample.root");
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
    
    const std::string cuts = "muplus_IPCHI2_OWNPV>4&&muminus_IPCHI2_OWNPV>4&&Kplus_IPCHI2_OWNPV>4&&Kminus_IPCHI2_OWNPV>4&&(30. > TMath::Abs(phi_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS==1||B_s0_Hlt2DiMuonDetachedHeavyDecision_TOS==1) && B_s0_BKGCAT<70 && B_s0_LOKI_DTF_CTAU/0.2997>0.3 && B_s0_LOKI_DTF_CTAU/0.2997<14.";
    //const std::string cuts = "(30. > TMath::Abs(phi_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS==1||B_s0_Hlt2DiMuonDetachedHeavyDecision_TOS==1) && B_s0_BKGCAT<70 && B_s0_LOKI_DTF_CTAU/0.2997>0.3 && B_s0_LOKI_DTF_CTAU/0.2997<14.";

    DecayTree->Draw("B_s0_LOKI_DTF_CTAU/0.2997>>num",(cuts).c_str(), "goff");
    toy_data->Draw("time>>den", "", "goff");
    den->Scale(DecayTree->GetEntries(cuts.c_str())/float(toy_data->GetEntries()));

    rat->Divide(num, den, 1, 1, "b");

    TFile * f2 = TFile::Open("../data/Bd2psi2SKpi_time_efficiency_MC.root");
    TH1F * Bd_eff1 = (TH1F*)f2->Get("time__time");
 
    TH1F * Bd_eff2 = new TH1F(*Bd_eff1);
    Bd_eff1->Divide(rat);

    gStyle->SetOptStat(0);
    TCanvas * c = new TCanvas("c","c",1200, 1000);
    c->Divide(2,2);
    c->cd(1);
    rat->Draw();
    rat->GetXaxis()->SetTitle("t [ps]");
    rat->GetYaxis()->SetTitle("B_{s}^{0} efficiency");
    gPad->Modified();
    gPad->Update();
    c->Update();
    c->cd(2);
    Bd_eff2->Draw();
    Bd_eff2->GetXaxis()->SetTitle("t [ps]");
    Bd_eff2->GetYaxis()->SetTitle("B^{0} efficiency");
    gPad->Modified();
    gPad->Update();
    c->cd(3);
    Bd_eff1->Draw();
    TF1 * func = new TF1("func", "[0]*(1-[1]*exp(-[2]*x)");
    func->SetLineColor(kRed);
    func->SetLineWidth(2);
    Bd_eff1->Fit(func);
    Bd_eff1->GetXaxis()->SetTitle("t [ps]");
    Bd_eff1->GetYaxis()->SetTitle("B^{0}/B_{s}^{0} efficiency ratio");
    gPad->Modified();
    gPad->Update();
    c->Update();

    c->SaveAs("ratio_of_efficiencies_Bs_with_IPCHI2_cuts.png");

    }
