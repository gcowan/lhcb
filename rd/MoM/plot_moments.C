#include "TH1D.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TTree.h"
#include "TNtuple.h"
#include "TROOT.h"
#include "TFitResultPtr.h"
#include "TMinuit.h"
#include <math.h>
#include <iostream>

using namespace std;

Double_t myfunc(Double_t *x, Double_t *par)
{
    Double_t f = -1./sqrt(2.)/5.*(par[0]*sqrt(1.-x[0]*x[0]) + par[1]*sqrt(3./4.)*2.*sqrt(1.-x[0]*x[0])*x[0]); 
    return f;
}

Double_t myfunction1(Double_t *x, Double_t *par)
{
    Double_t cosTheta = x[0];
    Double_t f = ( par[0] + cosTheta*par[1] + (3.*cosTheta*cosTheta - 1.)/2.*par[2] )/5.;
    return f;
}

void plot_moments(char * filename, char * outputfilename)
{
    TFile * f = TFile::Open(filename);
    TTree * t = (TTree*)f->Get("partial");
    //TF1 * f1 = new TF1("f1", myfunction1, -1, 1, 3);
    //TF1 * f2 = new TF1("f2", myfunc, -1, 1, 2);
    TF1 * f1 = new TF1("f1","([0] + x*[1] +(3.*x*x-1.)/2.*[2])/5.", -1, 1);
    TF1 * f2 = new TF1("f2", "-1./sqrt(2.)/5.*([0]*sqrt(1.-x*x) + [1]*sqrt(3./4.)*2.*sqrt(1.-x*x)*x)", -1, 1);
    TF1 * f3 = new TF1("f3","[0]*(1-x*x)/5*sqrt(3./8.)", -1, 1);
    f1->SetParameter(0, 10000*0.1); // G020 = 0.1
    f1->SetParameter(1, 10000*0.2); // G021 = 0.2
    f1->SetParameter(2, 10000*0.1); // G022 = 0.1

    f2->SetParameter(0, 10000*0.5); //G121 = 0.5
    f2->SetParameter(1, 10000*0.2); //G122 = 0.2
   
    f3->SetParameter(0, 10000*0.3); //G222 = 0.3


    f1->SetLineColor(kRed);
    f2->SetLineColor(kRed);
    f3->SetLineColor(kRed);
    f1->SetLineWidth(3);
    f2->SetLineWidth(3);
    f3->SetLineWidth(3);
    
    TFile * outfile = TFile::Open(outputfilename, "RECREATE");
    TNtuple * tup = new TNtuple("coeffs","coeff", "f1_G020:f1_G021:f1_G022:f2_G121:f2_G122:f3_G222:f1_status:f2_status:f3_status");

    TH1D * h1 = new TH1D("h1", "h1", 100, -1., 1.);
    TH1D * h2 = new TH1D("h2", "h1", 100, -1., 1.);
    TH1D * h3 = new TH1D("h3", "h1", 100, -1., 1.);
    h1->Sumw2();
    h2->Sumw2();
    h3->Sumw2();

    TCanvas * c = new TCanvas("c","c",1200, 1000);
    c->Divide(3,2);
    c->cd(1);
    t->Draw("cosThetaL","","goff");
    c->cd(2);
    t->Draw("cosThetaK","","goff");
    c->cd(3);
    t->Draw("phi","","goff");

    c->cd(4);
    cout << "Doing Fit 1" << endl;
    t->Draw("cosThetaL>>h1", "D002","goff");
    TFitResultPtr f1_result = h1->Fit(f1, "RS");
    h1->GetXaxis()->SetTitle("cosThetaL (weighted with D_{0,0}^{2})");
    f1->Draw("samegoff");
    int f1_status = gMinuit->fStatus;

    
    c->cd(5);
    cout << "Doing Fit 2" << endl;
    t->Draw("cosThetaL>>h2", "D102","goff");
    TFitResultPtr f2_result = h2->Fit(f2, "RS");
    h2->GetXaxis()->SetTitle("cosThetaL (weighted with D_{1,0}^{2})");
    f2->Draw("samegoff");
    int f2_status = gMinuit->fStatus;
    
    c->cd(6);
    cout << "Doing Fit 3" << endl;
    t->Draw("cosThetaL>>h3", "D202","goff");
    h3->GetXaxis()->SetTitle("cosThetaL (weighted with D_{2,0}^{2})");
    c->Update();
    TFitResultPtr f3_result = h3->Fit(f3, "RS");
    f3->Draw("samegoff");
    int f3_status = gMinuit->fStatus;

    tup->Fill(f1->GetParameter(0), f1->GetParameter(1), f1->GetParameter(2)
            , f2->GetParameter(0), f2->GetParameter(1)
            , f3->GetParameter(0)
            , f1_status, f2_status, f3_status
            );
    tup->Write();
    outfile->Close();

    //c->SaveAs("B2Kstll_partial_moments_l_2.pdf");
}

int main(int argv, char * argc[])
{
    gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
    plot_moments(argc[1], argc[2]);
}
