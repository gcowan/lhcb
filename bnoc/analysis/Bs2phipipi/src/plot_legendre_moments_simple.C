#define plot_legendre_moments_cxx
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TFile.h>
#include <TTree.h>
#include <TNtuple.h>
#include <TMath.h>
#include <TProfile.h>
#include <TLine.h>
#include <TROOT.h>
#include <gsl/gsl_sf_legendre.h>
#include <iostream>

int main()
{
    gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");

    double min(0.64);//0.633);
    double max(1.68);// Bs
    const int nbins(20);

    const int numMoments(6);
    TH1D histos_tot[numMoments];
    TH1D histos_bkg[numMoments];
    TH1D histos_sig[numMoments];

    char buffer[20];
    for (int i = 0; i < numMoments; i++)
    {
        sprintf(buffer, "tot_hprof%d", i);
        histos_tot[i] = TH1D(buffer,"hprof",nbins, min, max);
        histos_tot[i].Sumw2();
        sprintf(buffer, "bkg_hprof%d", i);
        histos_bkg[i] = TH1D(buffer,"hprof",nbins, min, max);
        histos_bkg[i].Sumw2();
        histos_bkg[i].SetMarkerColor(kRed);;
        histos_bkg[i].SetLineColor(kRed);;
        sprintf(buffer, "sig_hprof%d", i);
        histos_sig[i] = TH1D(buffer,"hprof",nbins, min, max);
        histos_sig[i].Sumw2();
    }

    TFile * f_data = TFile::Open("../data/REBsphif0_sweight_1_plane_GeV.root");
    TTree * t_data = (TTree*)f_data->Get("tuple");
    //TFile * f_mc   = TFile::Open("../fits/K892_K1410_sFit_data/K892_K1410_signal_only_no_acc.root");
    //TTree * t_mc   = (TTree*)f_mc  ->Get("dataNTuple");

   Float_t         f0_mass_GeV;
   Float_t         pipi_hel;
   Float_t         Nsig_sw;
   
   TBranch        *b_f0_mass_GeV;   //!
   TBranch        *b_pipi_hel;   //!
   TBranch        *b_Nsig_sw;   //!
   
   t_data->SetBranchAddress("f0_mass_GeV", &f0_mass_GeV, &b_f0_mass_GeV);
   t_data->SetBranchAddress("pipi_hel", &pipi_hel, &b_pipi_hel);
   t_data->SetBranchAddress("Nsig_sw", &Nsig_sw, &b_Nsig_sw);

    /*
    double         m23_mc;
    double         phi_mc;
    double         cosTheta2_mc;
    double         cosTheta1_mc;
    t_mc->SetBranchAddress("m23", &m23_mc, &b_m23);
    t_mc->SetBranchAddress("phi", &phi_mc, &b_phi);
    t_mc->SetBranchAddress("cosTheta2", &cosTheta2_mc, &b_cosTheta2);
    t_mc->SetBranchAddress("cosTheta1", &cosTheta1_mc, &b_cosTheta1);
    */

    int n_data = t_data->GetEntriesFast();
    //int n_mc   = t_mc  ->GetEntriesFast();

    double angularAcc(1.);
    for (int jentry = 0; jentry < n_data; jentry++) {
        t_data->GetEntry(jentry);

        for (int i = 0; i < numMoments; i++)
        {
            double p = gsl_sf_legendre_Pl(i+1, pipi_hel)/angularAcc;
            histos_tot[i].Fill(f0_mass_GeV, p*Nsig_sw);
        }
    }

    /*
    // Now get them for the MC
    for (int jentry = 0; jentry < n_mc; jentry++) {
        t_mc->GetEntry(jentry);
    }
    */

    gStyle->SetOptStat(0);
    TCanvas * can = new TCanvas();
    TLine *l = new TLine(min,0.,max,0.);
    can->Divide(2,3);
    for ( int i = 0; i < numMoments; i++)
    {
        can->cd(i+1);
        sprintf(buffer, "<P_{%d}^{U}>", i+1);
        histos_tot[i].Draw();
        histos_bkg[i].Draw("same");
        histos_tot[i].GetYaxis()->SetTitle(buffer);
        histos_tot[i].GetXaxis()->SetTitle("m(#pi^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
        can->Update();
        l->Draw();
    }
    can->SaveAs("moments_weighted_mpipi.pdf");

    TCanvas * can2 = new TCanvas();
    can2->Divide(2,3);
    for ( int i = 0; i < numMoments; i++)
    {
        can2->cd(i+1);
        sprintf(buffer, "<P_{%d}^{U}>", i+1);
        histos_sig[i].Add(&(histos_tot[i]), &(histos_bkg[i]), 1., -1.);
        histos_sig[i].Draw();
        histos_sig[i].GetYaxis()->SetTitle(buffer);
        histos_sig[i].GetXaxis()->SetTitle("m(#pi^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
        can2->Update();
        l->Draw();
    }
    can2->SaveAs("moments_weighted_mpipi_bkg_sub.pdf");

    return 1.;
}

