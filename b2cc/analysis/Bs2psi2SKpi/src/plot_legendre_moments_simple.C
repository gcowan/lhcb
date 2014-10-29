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
    const int nbins(40);

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

    TFile * f_data = TFile::Open("../data/tighter_cut/selected_candidates_with_correct_angles.root");
    TTree * t_data = (TTree*)f_data->Get("tuple");
    //TFile * f_mc   = TFile::Open("../fits/K892_K21430_NR_sFit_tight_data/test.root");
    //TFile * f_mc   = TFile::Open("../fits/K892_NR_sFit_tight_data/test.root");
    TFile * f_mc   = TFile::Open("../fits/K892_K01430_NR_sFit_tight_data/test.root");
    TTree * t_mc   = (TTree*)f_mc  ->Get("dataNTuple");

    Float_t         m23;
    Float_t         phi;
    Float_t         cosTheta2;
    Float_t         cosTheta1;
    Float_t         Bs_sig_sw;
    Float_t         Bd_sig_sw;
    Float_t         B_s0_Mass_JpsiConstr;

    TBranch        *b_m23;   //!
    TBranch        *b_phi;   //!
    TBranch        *b_cosTheta2;   //!
    TBranch        *b_cosTheta1;   //!
    TBranch        *b_Bs_sig_sw;   //!
    TBranch        *b_Bd_sig_sw;   //!
    TBranch        *b_B_s0_Mass_JpsiConstr;   //!

    t_data->SetBranchAddress("m23", &m23, &b_m23);
    t_data->SetBranchAddress("phi", &phi, &b_phi);
    t_data->SetBranchAddress("cosTheta2", &cosTheta2, &b_cosTheta2);
    t_data->SetBranchAddress("cosTheta1", &cosTheta1, &b_cosTheta1);
    t_data->SetBranchAddress("Bs_sig_sw", &Bs_sig_sw, &b_Bs_sig_sw);
    t_data->SetBranchAddress("Bd_sig_sw", &Bd_sig_sw, &b_Bd_sig_sw);
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

        for (int i = 0; i < numMoments; i++)
        {
            double p = gsl_sf_legendre_Pl(i, cosTheta2)/angularAcc;
            //if (B_s0_Mass_JpsiConstr > 5300.) histos_tot[i].Fill(m23/1000., p*Bs_sig_sw);
            //if (B_s0_Mass_JpsiConstr > 5320. && B_s0_Mass_JpsiConstr < 5400.) histos_tot[i].Fill(m23/1000., p);
            //if (B_s0_Mass_JpsiConstr > 5250. && B_s0_Mass_JpsiConstr < 5300.) histos_tot[i].Fill(m23/1000., p);
            //else if (B_s0_Mass_JpsiConstr > 5400.) histos_bkg[i].Fill(m23/1000., p);
            histos_tot[i].Fill(m23/1000., p*Bs_sig_sw);
        }
    }

    // Now get them for the MC
    for (int jentry = 0; jentry < n_mc; jentry++) {
        t_mc->GetEntry(jentry);
        for (int i = 0; i < numMoments; i++)
        {
            double p = gsl_sf_legendre_Pl(i, cosTheta2_mc);
            histos_bkg[i].Fill(m23_mc, p);
        }
    }

    histos_bkg->Scale(n_data/float(n_mc));

    gStyle->SetOptStat(0);
    TCanvas * can = new TCanvas();
    TLine *l = new TLine(min,0.,max,0.);
    can->Divide(2,3);
    for ( int i = 0; i < numMoments; i++)
    {
        can->cd(i+1);
        sprintf(buffer, "<P_{%d}^{U}>", i);
        //histos_tot[i].Draw();
        histos_bkg[i].Draw();//"same");
        //histos_tot[i].GetYaxis()->SetTitle(buffer);
        //histos_tot[i].GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
        can->Update();
        l->Draw();
    }
    can->SaveAs("moments_weighted_mKpi.pdf");

    TCanvas * can2 = new TCanvas();
    can2->Divide(2,3);
    for ( int i = 0; i < numMoments; i++)
    {
        can2->cd(i+1);
        sprintf(buffer, "<P_{%d}^{U}>", i);
        //histos_sig[i].Add(&(histos_tot[i]), &(histos_bkg[i]), 1., -1.);
        histos_tot[i].Draw();
        histos_tot[i].GetYaxis()->SetTitle(buffer);
        histos_tot[i].GetXaxis()->SetTitle("m(K^{+}#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
        can2->Update();
        l->Draw();
    }
    can2->SaveAs("moments_weighted_mKpi_bkg_sub.pdf");

    return 1.;
}

