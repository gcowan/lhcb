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

void set_values(TH1D * h, TH1D * h_bkg, TH1D * hprof1, TH1D * hprof1_bkg, TH1D * hprof1_sig, double P1[], double P1_sq[], double P1_bkg[], double P1_bkg_sq[], int i)
{
        double nentries = h->GetBinContent(i+1);
        double nentries_bkg = h_bkg->GetBinContent(i+1);
        double error = sqrt(P1_sq[i]/nentries - P1[i]/nentries*P1[i]/nentries);
        double error_bkg = sqrt(P1_bkg_sq[i]/nentries_bkg - P1_bkg[i]/nentries_bkg*P1_bkg[i]/nentries_bkg);
        double total = sqrt((error*error) + (error_bkg*error_bkg));
        //double error_final = sqrt(error*error*nentries*nentries + P1[i]*P1[i]*nentries);
        //double error_final_bkg = sqrt(error_bkg*error_bkg*nentries_bkg*nentries_bkg + P1_bkg[i]*P1_bkg[i]*nentries_bkg);
        //double total_final = sqrt((error_final*error_final) + (error_final_bkg*error_final_bkg));
        //std::cout << nentries << "  "<< nentries_bkg << " " << error <<  " " << error_bkg << " " << total << " " << error_final << " " << error_final_bkg << " " << total_final << std::endl;
        hprof1    ->SetBinContent(i, P1[i]);
        hprof1    ->SetBinError  (i, error);
        hprof1_bkg->SetBinContent(i, P1_bkg[i]);
        hprof1_bkg->SetBinError  (i, error_bkg);
        hprof1_sig->SetBinContent(i, P1[i] - P1_bkg[i]);
        hprof1_sig->SetBinError  (i, total);
}

int main()
{
    gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
    //Set up efficiency
    static const int l_max = 6;
    static const int i_max = 4;
    static const int k_max = 2;
    static const int j_max = 2;
    double c[l_max+1][i_max+1][k_max+1][j_max+1];

    for ( int l = 0; l < l_max + 1; l++ )
    {
        for ( int i = 0; i < i_max + 1; i++ )
        {
            for ( int k = 0; k < k_max + 1; k++ )
            {
                for ( int j = 0; j < j_max + 1; j++ )
                {
                    c[l][i][k][j] = 0.;
                }
            }
        }
    }

    c[0][0][0][0] = 0.070537;// +- 0.000042
    c[0][0][0][2] = 0.003374;// +- 0.000108
    c[0][0][1][2] = -0.000793;// +- 0.000108
    c[0][0][2][2] = 0.004150;// +- 0.000104
    c[0][1][0][0] = -0.009559;// +- 0.000175
    c[0][1][0][2] = -0.001790;// +- 0.000180
    c[0][1][1][2] = 0.001620;// +- 0.000180
    c[0][1][2][2] = 0.000894;// +- 0.000172
    c[0][2][0][0] = -0.014521;// +- 0.000227
    c[0][2][1][2] = 0.001962;// +- 0.000233
    c[0][2][2][2] = -0.002894;// +- 0.000224
    c[0][4][0][0] = -0.002925;// +- 0.000307
    c[1][0][0][0] = 0.014735;// +- 0.000218
    c[1][0][0][2] = -0.004731;// +- 0.000224
    c[1][0][1][2] = 0.001244;// +- 0.000223
    c[1][0][2][2] = 0.004222;// +- 0.000215
    c[1][1][0][0] = 0.013788;// +- 0.000366
    c[1][1][1][2] = 0.008654;// +- 0.000375
    c[1][2][0][0] = 0.013075;// +- 0.000476
    c[1][2][0][2] = 0.008135;// +- 0.000492
    c[1][2][2][2] = -0.003336;// +- 0.000467
    c[1][3][1][2] = -0.004594;// +- 0.000575
    c[2][0][0][0] = 0.002701;// +- 0.000294
    c[2][1][1][2] = 0.004370;// +- 0.000507
    c[2][2][0][0] = 0.008449;// +- 0.000640
    c[2][2][0][2] = 0.006358;// +- 0.000663
    c[2][3][0][0] = -0.004795;// +- 0.000759
    c[2][3][1][2] = -0.004152;// +- 0.000771
    c[3][1][0][0] = -0.007938;// +- 0.000598
    c[3][2][0][0] = -0.006623;// +- 0.000772
    c[4][1][0][0] = 0.004372;// +- 0.000681
    c[4][3][0][0] = 0.006850;// +- 0.001044
    c[5][0][0][0] = -0.003132;// +- 0.000446
    c[6][0][0][0] = 0.004619;// +- 0.000485
    c[6][1][0][0] = -0.005224;// +- 0.000822

    double min(0.64);//0.633);
    double max(1.68);// Bs
    //double max(1.59);// Bd
    const int nbins(20);
    TH1D * hprof1 = new TH1D("hprof1","hprof",nbins, min, max);
    TH1D * hprof2 = new TH1D("hprof2","hprof",nbins, min, max);
    TH1D * hprof3 = new TH1D("hprof3","hprof",nbins, min, max);
    TH1D * hprof4 = new TH1D("hprof4","hprof",nbins, min, max);
    TH1D * hprof5 = new TH1D("hprof5","hprof",nbins, min, max);
    TH1D * hprof6 = new TH1D("hprof6","hprof",nbins, min, max);
    TH1D * hprof1_sig = new TH1D("sig_hprof1","hprof",nbins, min, max);
    TH1D * hprof2_sig = new TH1D("sig_hprof2","hprof",nbins, min, max);
    TH1D * hprof3_sig = new TH1D("sig_hprof3","hprof",nbins, min, max);
    TH1D * hprof4_sig = new TH1D("sig_hprof4","hprof",nbins, min, max);
    TH1D * hprof5_sig = new TH1D("sig_hprof5","hprof",nbins, min, max);
    TH1D * hprof6_sig = new TH1D("sig_hprof6","hprof",nbins, min, max);
    TH1D * h = new TH1D("h","h",nbins, min, max);
    TH1D * h_c = new TH1D("h_c","h",nbins, min, max);
    TH1D * h_w = new TH1D("h_w","h",nbins, min, max);
    h->Sumw2();
    h_c->SetLineColor(kMagenta);
    h_w->SetLineColor(kBlue);

    TH1D * hprof1_mc = new TH1D("mc_hprof1","hprof",nbins, min, max);
    TH1D * hprof2_mc = new TH1D("mc_hprof2","hprof",nbins, min, max);
    TH1D * hprof3_mc = new TH1D("mc_hprof3","hprof",nbins, min, max);
    TH1D * hprof4_mc = new TH1D("mc_hprof4","hprof",nbins, min, max);
    TH1D * hprof5_mc = new TH1D("mc_hprof5","hprof",nbins, min, max);
    TH1D * hprof6_mc = new TH1D("mc_hprof6","hprof",nbins, min, max);
    TH1D * h_mc = new TH1D("h_mc","h",nbins, min, max);
    hprof1_mc->SetLineColor(kRed);
    hprof2_mc->SetLineColor(kRed);
    hprof3_mc->SetLineColor(kRed);
    hprof4_mc->SetLineColor(kRed);
    hprof5_mc->SetLineColor(kRed);
    hprof6_mc->SetLineColor(kRed);
    hprof1_mc->SetMarkerColor(kRed);
    hprof2_mc->SetMarkerColor(kRed);
    hprof3_mc->SetMarkerColor(kRed);
    hprof4_mc->SetMarkerColor(kRed);
    hprof5_mc->SetMarkerColor(kRed);
    hprof6_mc->SetMarkerColor(kRed);
    h_mc->SetLineColor(kRed);

    TH1D * hprof1_bkg = new TH1D("bkg_hprof1","hprof",nbins, min, max);
    TH1D * hprof2_bkg = new TH1D("bkg_hprof2","hprof",nbins, min, max);
    TH1D * hprof3_bkg = new TH1D("bkg_hprof3","hprof",nbins, min, max);
    TH1D * hprof4_bkg = new TH1D("bkg_hprof4","hprof",nbins, min, max);
    TH1D * hprof5_bkg = new TH1D("bkg_hprof5","hprof",nbins, min, max);
    TH1D * hprof6_bkg = new TH1D("bkg_hprof6","hprof",nbins, min, max);
    hprof1_bkg->SetLineColor(kBlue);
    hprof2_bkg->SetLineColor(kBlue);
    hprof3_bkg->SetLineColor(kBlue);
    hprof4_bkg->SetLineColor(kBlue);
    hprof5_bkg->SetLineColor(kBlue);
    hprof6_bkg->SetLineColor(kBlue);
    hprof1_bkg->SetMarkerColor(kBlue);
    hprof2_bkg->SetMarkerColor(kBlue);
    hprof3_bkg->SetMarkerColor(kBlue);
    hprof4_bkg->SetMarkerColor(kBlue);
    hprof5_bkg->SetMarkerColor(kBlue);
    hprof6_bkg->SetMarkerColor(kBlue);
    TH1D * h_bkg = new TH1D("h_bkg","h",nbins, min, max);
    h_bkg->Sumw2();
    h_bkg->SetMarkerColor(kRed);
    h_bkg->SetLineColor(kRed);

    TFile * f_data = TFile::Open("../data/tighter_cut/selected_candidates_with_correct_angles.root");
    TTree * t_data = (TTree*)f_data->Get("tuple");
    TFile * f_mc   = TFile::Open("../fits/K892_K1410_sFit_data/K892_K1410_signal_only_no_acc.root");
    TTree * t_mc   = (TTree*)f_mc  ->Get("dataNTuple");

    double P1[nbins] = {}; // initialise to 0
    double P2[nbins] = {}; // initialise to 0
    double P3[nbins] = {}; // initialise to 0
    double P4[nbins] = {}; // initialise to 0
    double P5[nbins] = {}; // initialise to 0
    double P6[nbins] = {}; // initialise to 0

    double P1_sq[nbins] = {};
    double P2_sq[nbins] = {};
    double P3_sq[nbins] = {};
    double P4_sq[nbins] = {};
    double P5_sq[nbins] = {};
    double P6_sq[nbins] = {};

    double P1_bkg[nbins] = {}; // initialise to 0
    double P2_bkg[nbins] = {}; // initialise to 0
    double P3_bkg[nbins] = {}; // initialise to 0
    double P4_bkg[nbins] = {}; // initialise to 0
    double P5_bkg[nbins] = {}; // initialise to 0
    double P6_bkg[nbins] = {}; // initialise to 0

    double P1_bkg_sq[nbins] = {};
    double P2_bkg_sq[nbins] = {};
    double P3_bkg_sq[nbins] = {};
    double P4_bkg_sq[nbins] = {};
    double P5_bkg_sq[nbins] = {};
    double P6_bkg_sq[nbins] = {};

    double P1_mc[nbins] = {}; // initialise to 0
    double P2_mc[nbins] = {}; // initialise to 0
    double P3_mc[nbins] = {}; // initialise to 0
    double P4_mc[nbins] = {}; // initialise to 0
    double P5_mc[nbins] = {}; // initialise to 0
    double P6_mc[nbins] = {}; // initialise to 0

    Float_t         m23;
    Float_t         phi;
    Float_t         cosTheta2;
    Float_t         cosTheta1;
    Float_t         Bs_sig_sw;
    Float_t         B_s0_Mass_JpsiConstr;

    TBranch        *b_m23;   //!
    TBranch        *b_phi;   //!
    TBranch        *b_cosTheta2;   //!
    TBranch        *b_cosTheta1;   //!
    TBranch        *b_Bs_sig_sw;   //!
    TBranch        *b_B_s0_Mass_JpsiConstr;   //!

    t_data->SetBranchAddress("m23", &m23, &b_m23);
    t_data->SetBranchAddress("phi", &phi, &b_phi);
    t_data->SetBranchAddress("cosTheta2", &cosTheta2, &b_cosTheta2);
    t_data->SetBranchAddress("cosTheta1", &cosTheta1, &b_cosTheta1);
    t_data->SetBranchAddress("Bs_sig_sw", &Bs_sig_sw, &b_Bs_sig_sw);
    t_data->SetBranchAddress("B_s0_Mass_JpsiConstr", &B_s0_Mass_JpsiConstr, &b_B_s0_Mass_JpsiConstr);

    double         m23_mc;
    double         phi_mc;
    double         cosTheta2_mc;
    double         cosTheta1_mc;
    t_mc->SetBranchAddress("m23", &m23_mc, &b_m23);
    t_mc->SetBranchAddress("phi", &phi_mc, &b_phi);
    t_mc->SetBranchAddress("cosTheta2", &cosTheta2_mc, &b_cosTheta2);
    t_mc->SetBranchAddress("cosTheta1", &cosTheta1_mc, &b_cosTheta1);

    int n_data = t_data->GetEntriesFast();
    int n_mc   = t_mc  ->GetEntriesFast();

    for (int jentry = 0; jentry < n_data; jentry++) {
        t_data->GetEntry(jentry);

        h_w->Fill(m23/1000.,Bs_sig_sw);//,1./angularAcc*Bs_sig_sw);
        if (B_s0_Mass_JpsiConstr < 5320.) continue;
        h_c->Fill(m23/1000.,Bs_sig_sw);//,1./angularAcc*Bs_sig_sw);
        if (m23/1000. < min || m23/1000. > max) continue;

        double m23_mapped = (m23/1000. - min)/(max - min)*2. + (-1); // should really do this in a generic way

        double angularAcc(0.);
        double Q_l(0.);
        double P_i(0.);
        double Y_jk(0.);
        for ( int l = 0; l < l_max+1; l++ )
        {
            for ( int i = 0; i < i_max+1; i++ )
            {
                for ( int k = 0; k < 3; k++ )
                {
                    for ( int j = 0; j < 3; j+=2 ) // limiting the loop here to only look at terms we need
                    {
                        if (j < k) continue; // must have l >= k
                        Q_l  = gsl_sf_legendre_Pl     (l,    m23_mapped);
                        P_i  = gsl_sf_legendre_Pl     (i,    cosTheta2);
                        //std::cout << "Q_l " << Q_l << " " << m23_mapped << std::endl;
                        // only consider case where k >= 0
                        // these are the real valued spherical harmonics
                        if ( k == 0 ) Y_jk =           gsl_sf_legendre_sphPlm (j, k, cosTheta1);
                        else          Y_jk = sqrt(2) * gsl_sf_legendre_sphPlm (j, k, cosTheta1) * cos(k*phi);
                        angularAcc += c[l][i][k][j]*(Q_l * P_i * Y_jk);
                    }
                }
            }
        }

        //unnormalised moments of degree l
        int bin = h->FindBin(m23/1000.) - 1;
        double p1 = gsl_sf_legendre_Pl(1, cosTheta2)/angularAcc;
        double p2 = gsl_sf_legendre_Pl(2, cosTheta2)/angularAcc;
        double p3 = gsl_sf_legendre_Pl(3, cosTheta2)/angularAcc;
        double p4 = gsl_sf_legendre_Pl(4, cosTheta2)/angularAcc;
        double p5 = gsl_sf_legendre_Pl(5, cosTheta2)/angularAcc;
        double p6 = gsl_sf_legendre_Pl(6, cosTheta2)/angularAcc;

        if (B_s0_Mass_JpsiConstr > 5320. && B_s0_Mass_JpsiConstr < 5400.)
        //if (B_s0_Mass_JpsiConstr > 5250. && B_s0_Mass_JpsiConstr < 5300.)
        {
            h->Fill(m23/1000., p1);
            P1[bin] += p1;
            P2[bin] += p2;
            P3[bin] += p3;
            P4[bin] += p4;
            P5[bin] += p5;
            P6[bin] += p6;

            P1_sq[bin] += p1*p1;
            P2_sq[bin] += p2*p2;
            P3_sq[bin] += p3*p3;
            P4_sq[bin] += p4*p4;
            P5_sq[bin] += p5*p5;
            P6_sq[bin] += p6*p6;
        }
        else if (B_s0_Mass_JpsiConstr > 5400.)
        //else if (B_s0_Mass_JpsiConstr > 5300. && B_s0_Mass_JpsiConstr < 5350.)
        {
            h_bkg->Fill(m23/1000., p1);
            P1_bkg[bin] += p1;
            P2_bkg[bin] += p2;
            P3_bkg[bin] += p3;
            P4_bkg[bin] += p4;
            P5_bkg[bin] += p5;
            P6_bkg[bin] += p6;

            P1_bkg_sq[bin] += p1*p1;
            P2_bkg_sq[bin] += p2*p2;
            P3_bkg_sq[bin] += p3*p3;
            P4_bkg_sq[bin] += p4*p4;
            P5_bkg_sq[bin] += p5*p5;
            P6_bkg_sq[bin] += p6*p6;
        }
    }

    // Now get them for the MC
    for (int jentry = 0; jentry < n_mc; jentry++) {
        t_mc->GetEntry(jentry);
        h_mc->Fill(m23_mc);
        int bin = h_mc->FindBin(m23_mc) - 1;
        P1_mc[bin] += gsl_sf_legendre_Pl(1, cosTheta2_mc);
        P2_mc[bin] += gsl_sf_legendre_Pl(2, cosTheta2_mc);
        P3_mc[bin] += gsl_sf_legendre_Pl(3, cosTheta2_mc);
        P4_mc[bin] += gsl_sf_legendre_Pl(4, cosTheta2_mc);
        P5_mc[bin] += gsl_sf_legendre_Pl(5, cosTheta2_mc);
        P6_mc[bin] += gsl_sf_legendre_Pl(6, cosTheta2_mc);
    }
    /*
    for ( int i = 0; i < nbins; i++ ){
        std::cout << "P        " << P1[i] << " " << P2[i] << " " <<P3[i] << " " <<P4[i] << " " <<P5[i] << " " << P6[i] << std::endl;
        std::cout << "P_sq     " << P1_sq[i] << " " << P2_sq[i] << " " <<P3_sq[i] << " " <<P4_sq[i] << " " <<P5_sq[i] << " " << P6_sq[i] << std::endl;
        std::cout << "P_bkg    " << P1_bkg[i] << " " << P2_bkg[i] << " " <<P3_bkg[i] << " " <<P4_bkg[i] << " " <<P5_bkg[i] << " " << P6_bkg[i] << std::endl;
        std::cout << "P_bkg_sq " << P1_bkg_sq[i] << " " << P2_bkg_sq[i] << " " <<P3_bkg_sq[i] << " " <<P4_bkg_sq[i] << " " <<P5_bkg_sq[i] << " " << P6_bkg_sq[i] << std::endl;
    }
    */
    for (int i = 0; i < nbins; i++ )
    {
        set_values(h, h_bkg, hprof1, hprof1_bkg, hprof1_sig, P1, P1_sq, P1_bkg, P1_bkg_sq, i);
        set_values(h, h_bkg, hprof2, hprof2_bkg, hprof2_sig, P2, P2_sq, P2_bkg, P2_bkg_sq, i);
        set_values(h, h_bkg, hprof3, hprof3_bkg, hprof3_sig, P3, P3_sq, P3_bkg, P3_bkg_sq, i);
        set_values(h, h_bkg, hprof4, hprof4_bkg, hprof4_sig, P4, P4_sq, P4_bkg, P4_bkg_sq, i);
        set_values(h, h_bkg, hprof5, hprof5_bkg, hprof5_sig, P5, P5_sq, P5_bkg, P5_bkg_sq, i);
        set_values(h, h_bkg, hprof6, hprof6_bkg, hprof6_sig, P6, P6_sq, P6_bkg, P6_bkg_sq, i);

        hprof1_mc->SetBinContent(i, P1_mc[i]);
        hprof2_mc->SetBinContent(i, P2_mc[i]);
        hprof3_mc->SetBinContent(i, P3_mc[i]);
        hprof4_mc->SetBinContent(i, P4_mc[i]);
        hprof5_mc->SetBinContent(i, P5_mc[i]);
        hprof6_mc->SetBinContent(i, P6_mc[i]);
    }

    gStyle->SetOptStat(0);
    TCanvas * can = new TCanvas();
    h->Draw();
    h_bkg->Draw("same");
    //h_c->Draw("same");
    //h_mc->Draw("same");
    h->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    can->SaveAs("mKpi.pdf");

    TCanvas * ca = new TCanvas();
    ca->Divide(2,3);
    ca->cd(1);
    ca->SetGrid();
    hprof1->Draw();
    hprof1_bkg->Draw("same");
    hprof1->GetYaxis()->SetTitle("<P_{1}^{U}>");
    hprof1->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    ca->Update();
    TLine *l = new TLine(min,0.,max,0.);
    l->Draw();
    ca->cd(2);
    hprof2->Draw();
    hprof2_bkg->Draw("same");
    hprof2->GetYaxis()->SetTitle("<P_{2}^{U}>");
    hprof2->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    ca->Update();
    l->Draw();
    ca->cd(3);
    hprof3->Draw();
    hprof3_bkg->Draw("same");
    hprof3->GetYaxis()->SetTitle("<P_{3}^{U}>");
    hprof3->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    ca->Update();
    l->Draw();
    ca->cd(4);
    hprof4->Draw();
    hprof4_bkg->Draw("same");
    hprof4->GetYaxis()->SetTitle("<P_{4}^{U}>");
    hprof4->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    ca->Update();
    l->Draw();
    ca->cd(5);
    hprof5->Draw();
    hprof5_bkg->Draw("same");
    hprof5->GetYaxis()->SetTitle("<P_{5}^{U}>");
    hprof5->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    ca->Update();
    l->Draw();
    ca->cd(6);
    hprof6->Draw();
    hprof6_bkg->Draw("same");
    hprof6->GetYaxis()->SetTitle("<P_{6}^{U}>");
    hprof6->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    ca->Update();
    l->Draw();
    ca->SaveAs("profiles.pdf");

    TCanvas * cb = new TCanvas();
    cb->Divide(2,3);
    cb->cd(1);
    cb->SetGrid();
    hprof1_sig->Draw();
    hprof1_mc->Draw("same");
    hprof1_sig->GetYaxis()->SetTitle("<P_{1}^{U}>");
    hprof1_sig->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    cb->Update();
    l->Draw();
    cb->cd(2);
    hprof2_sig->Draw();
    hprof2_mc->Draw("same");
    hprof2_sig->GetYaxis()->SetTitle("<P_{2}^{U}>");
    hprof2_sig->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    ca->Update();
    l->Draw();
    cb->cd(3);
    hprof3_sig->Draw();
    hprof3_mc->Draw("same");
    hprof3_sig->GetYaxis()->SetTitle("<P_{3}^{U}>");
    hprof3_sig->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    cb->Update();
    l->Draw();
    cb->cd(4);
    hprof4_sig->Draw();
    hprof4_mc->Draw("same");
    hprof4_sig->GetYaxis()->SetTitle("<P_{4}^{U}>");
    hprof4_sig->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    cb->Update();
    l->Draw();
    cb->cd(5);
    hprof5_sig->Draw();
    hprof5_mc->Draw("same");
    hprof5_sig->GetYaxis()->SetTitle("<P_{5}^{U}>");
    hprof5_sig->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    ca->Update();
    l->Draw();
    cb->cd(6);
    hprof6_sig->Draw();
    hprof6_mc->Draw("same");
    hprof6_sig->GetYaxis()->SetTitle("<P_{6}^{U}>");
    hprof6_sig->GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
    cb->Update();
    l->Draw();
    cb->SaveAs("profiles_bkg_sub.pdf");

    return 1.;
}

