#define Bd_swaps_cxx
#include "Bd_swaps.h"
#include <TNtuple.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TH1D.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLorentzVector.h>
#include <iostream>
using namespace std;

int Bd_swaps::Loop(TH1D * mKK, TH1D * mpipi, TH1D * mKpi, TH1D * mJpsiKpi, TH1D * mJpsiKpiwrong, TH1D * mJpsipiKwrong)
{
    if (fChain == 0) return 0;

    Long64_t nentries = fChain->GetEntriesFast();
    Long64_t nbytes = 0, nb = 0;

    int num_selected(0);
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
        //for (Long64_t jentry=0; jentry<1000;jentry++) {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;

        double mpi = 139.57018;
        double mK = 493.68;
        double mmu = 105.658;
        double mJpsi = 3690.;
        double mp = 938.27;
        TLorentzVector Kplus(Kplus_PX, Kplus_PY, Kplus_PZ, sqrt(Kplus_PX*Kplus_PX+Kplus_PY*Kplus_PY+Kplus_PZ*Kplus_PZ + mK*mK));
        TLorentzVector piminus(piminus_PX, piminus_PY, piminus_PZ, sqrt(piminus_PX*piminus_PX+piminus_PY*piminus_PY+piminus_PZ*piminus_PZ + mpi*mpi));
        TLorentzVector KplusWrong(Kplus_PX, Kplus_PY, Kplus_PZ, sqrt(Kplus_PX*Kplus_PX+Kplus_PY*Kplus_PY+Kplus_PZ*Kplus_PZ + mpi*mpi));
        TLorentzVector piminusWrong(piminus_PX, piminus_PY, piminus_PZ, sqrt(piminus_PX*piminus_PX+piminus_PY*piminus_PY+piminus_PZ*piminus_PZ + mK*mK));
        TLorentzVector muplus(muplus_PX, muplus_PY, muplus_PZ, sqrt(muplus_P*muplus_P + mmu*mmu));
        TLorentzVector muminus(muminus_PX, muminus_PY, muminus_PZ, sqrt(muminus_P*muminus_P + mmu*mmu));
        TLorentzVector Jpsi = muplus + muminus;
        TLorentzVector Jpsi_constr(muminus_PX+muplus_PX, muminus_PY+muplus_PY, muminus_PZ+muplus_PZ, sqrt(Jpsi.P()*Jpsi.P() + mJpsi*mJpsi));
        TLorentzVector Jpsi_swap1 = muplus  + piminusWrong;
        TLorentzVector Jpsi_swap2 = muminus + KplusWrong;

        TLorentzVector Kpi = Kplus + piminus;
        TLorentzVector Kpiwrong = Kplus + piminusWrong;
        TLorentzVector piKwrong = KplusWrong + piminus;
        TLorentzVector BKpi   = Jpsi_constr + Kpi;
        TLorentzVector BKpiwrong = Jpsi_constr + Kpiwrong;
        TLorentzVector BpiKwrong = Jpsi_constr + piKwrong;
        TLorentzVector Bplus = Jpsi_constr + Kplus;
        TLorentzVector Bminus = Jpsi_constr + piminus;
        //TLorentzVector BpiK = Jpsi_constr + piK;
        
        //if (BKpi.M()/1000. > 5.25) continue; // for lower sideband
        if (BKpi.M()/1000. < 5.31) continue; // for upper sideband
        num_selected++;
        mKpi->Fill(Kpi.M()/1000.);
        mKK->Fill(Kpiwrong.M()/1000.);
        mpipi->Fill(piKwrong.M()/1000.);
        mJpsiKpi->Fill(BKpi.M()/1000.);
        mJpsiKpiwrong->Fill(BKpiwrong.M()/1000.);
        mJpsipiKwrong->Fill(BpiKwrong.M()/1000.);
    }
    return num_selected;
}

int main(){

        gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
        TH1D * mKpi = new TH1D("mKpi", "mKpi", 100, 0.5, 1.);
        TH1D * mKK  = new TH1D("mKK", "mKK", 100, 0.99, 1.50);
        TH1D * mpipi= new TH1D("mipipi", "mpipi", 100, 0.2, 1.050);
        //TH1D * mKK = new TH1D("mKK", "mKpi", 100, 1.0, 1.7);
        //TH1D * mpipi= new TH1D("mipipi", "mpipi", 100, 1.0, 1.7);
        TH1D * mJpsiKpi  = new TH1D("mJpsiKpi", "mJpsiKpi", 100, 5.1, 5.8);
        TH1D * mJpsiKpiwrong  = new TH1D("mJpsiKpiwrong", "mJpsiKpi", 100, 5.1, 5.8);
        TH1D * mJpsipiKwrong  = new TH1D("mJpsipiKwrong", "mJpsiKpi", 100, 5.1, 5.8);

        TH1D * mKpi_MC = new TH1D("mKpi_MC", "mKpi", 100, 0.5, 1.);
        TH1D * mKK_MC  = new TH1D("mKK_MC", "mKK", 100, 0.99, 1.50);
        TH1D * mpipi_MC= new TH1D("mipipi_MC", "mpipi", 100, 0.2, 1.050);
        //TH1D * mKK_MC = new TH1D("mKK_MC", "mKpi", 100, 1.0, 1.7);
        //TH1D * mpipi_MC= new TH1D("mipipi_MC", "mpipi", 100, 1.0, 1.7);
        TH1D * mJpsiKpi_MC  = new TH1D("mJpsiKpi_MC", "mJpsiKpi", 100, 5.1, 5.8);
        TH1D * mJpsiKpiwrong_MC  = new TH1D("mJpsiKpiwrong_MC", "mJpsiKpi", 100, 5.1, 5.8);
        TH1D * mJpsipiKwrong_MC  = new TH1D("mJpsipiKwrong_MC", "mJpsiKpi", 100, 5.1, 5.8);
        mKK_MC->SetLineColor(kRed);
        mpipi_MC->SetLineColor(kRed);
        mKpi_MC->SetLineColor(kRed);
        mJpsiKpi_MC->SetLineColor(kRed);
        mJpsiKpiwrong_MC->SetLineColor(kRed);
        mJpsipiKwrong_MC->SetLineColor(kRed);

        TFile * f_data = TFile::Open("../data/bd_data_sweighted.root");
        TTree * t_data = (TTree*)f_data->Get("DecayTree");
        TFile * f_MC = TFile::Open("../data/MC_bd_aftercuts.root");
        TTree * t_MC = (TTree*)f_MC->Get("DecayTree");
        Bd_swaps data(t_data);
        Bd_swaps mc(t_MC);
        int Ndata = data.Loop(mKK, mpipi, mKpi, mJpsiKpi, mJpsiKpiwrong, mJpsipiKwrong);
        int Nmc   = mc  .Loop(mKK_MC, mpipi_MC, mKpi_MC, mJpsiKpi_MC, mJpsiKpiwrong_MC, mJpsipiKwrong_MC);
        
        mKK_MC->Scale(Ndata/float(Nmc));
        mpipi_MC->Scale(Ndata/float(Nmc));
        mKpi_MC->Scale(Ndata/float(Nmc));
        mJpsiKpi_MC->Scale(Ndata/float(Nmc));
        mJpsiKpiwrong_MC->Scale(Ndata/float(Nmc));
        mJpsipiKwrong_MC->Scale(Ndata/float(Nmc));

        TCanvas * c = new TCanvas("c","c",2400, 1600);
        c->Divide(3,2);
        c->cd(1);
        mKpi->Draw();
        mKpi_MC->Draw("same");
        mKpi->SetTitle("");
        mKpi->GetXaxis()->SetTitle("m(K^{+}#pi^{-}) [GeV/c^{2}]");
        c->cd(2);
        mKK->Draw();
        mKK_MC->Draw("same");
        mKK->SetTitle("");
        mKK->GetXaxis()->SetTitle("m(K^{+}(#pi^{-}#rightarrow K^{-})) [GeV/c^{2}]");
        //mKK->GetXaxis()->SetTitle("m(K^{+}(#pi^{-}#rightarrow p^{-})) [GeV/c^{2}]");
        c->cd(3);
        mpipi->Draw();
        mpipi_MC->Draw("same");
        mpipi->SetTitle("");
        mpipi->GetXaxis()->SetTitle("m((K^{+}#rightarrow#pi^{+})#pi^{-}) [GeV/c^{2}]");
        //mpipi->GetXaxis()->SetTitle("m((K^{+}#rightarrow p^{+})#pi^{-}) [GeV/c^{2}]");
        c->cd(4);
        mJpsiKpi->Draw();
        mJpsiKpi_MC->Draw("same");
        mJpsiKpi->SetTitle("");
        mJpsiKpi->GetXaxis()->SetTitle("m(#psi(2S)K^{+}#pi^{-}) [GeV/c^{2}]");
        c->cd(5);
        mJpsiKpiwrong->Draw();
        mJpsiKpiwrong_MC->Draw("same");
        mJpsiKpiwrong->SetTitle("");
        mJpsiKpiwrong->GetXaxis()->SetTitle("m(#psi(2S)K^{+}(#pi^{-}#rightarrow K^{-})) [GeV/c^{2}]");
        //mJpsiKpiwrong->GetXaxis()->SetTitle("m(#psi(2S)K^{+}(#pi^{-}#rightarrow p^{-})) [GeV/c^{2}]");
        c->cd(6);
        mJpsipiKwrong->Draw();
        mJpsipiKwrong_MC->Draw("same");
        mJpsipiKwrong->SetTitle("");
        mJpsipiKwrong->GetXaxis()->SetTitle("m(#psi(2S)(K^{+}#rightarrow#pi^{+})#pi^{-}) [GeV/c^{2}]");
        //mJpsipiKwrong->GetXaxis()->SetTitle("m(#psi(2S)(K^{+}#rightarrow p^{+})#pi^{-}) [GeV/c^{2}]");
        c->SaveAs("mass_mKK_Bd_upper_sideband.pdf");
        c->SaveAs("mass_mKK_Bd_upper_sideband.png");
        return 1;
}
