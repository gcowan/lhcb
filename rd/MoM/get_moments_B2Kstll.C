#define get_moments_B2Kstll_cxx
#include "get_moments_B2Kstll.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TNtuple.h>
#include <TComplex.h>
#include <iostream>

using namespace std;

double D000(double phi, double cosTheta) { return 1.; }
double D001(double phi, double cosTheta) { return cosTheta; }
double D002(double phi, double cosTheta) { return (3. *pow(cosTheta,2) - 1.)/2.; }
double D003(double phi, double cosTheta) { return (5. *pow(cosTheta,3) - 3. *cosTheta)/2.; }
double D004(double phi, double cosTheta) { return (35.*pow(cosTheta,4) - 30.*pow(cosTheta,2) + 3.)/8.; }
double D101(double phi, double cosTheta)
{
    double sinTheta = sqrt(1.-pow(cosTheta,2));
    //return -1./sqrt(2.)*TComplex::Exp(-TComplex::I()*phi)*sinTheta;
    return -1./sqrt(2.)*TComplex::Exp(+TComplex::I()*phi)*sinTheta;
}
double D202(double phi, double cosTheta)
{
    //return sqrt(3./8.)*TComplex::Exp(-2.*TComplex::I()*phi)*(1.-pow(cosTheta,2));
    return sqrt(3./8.)*TComplex::Exp(+2.*TComplex::I()*phi)*(1.-pow(cosTheta,2));
}
double D102(double phi, double cosTheta)
{
    double sinTheta = sqrt(1.-pow(cosTheta,2));
    //return -sqrt(3./8.)*TComplex::Exp(-TComplex::I()*phi)*2.*cosTheta*sinTheta;
    return -sqrt(3./8.)*TComplex::Exp(+TComplex::I()*phi)*2.*cosTheta*sinTheta;
}

double Omega000(double phi, double cosThetaK, double cosThetaL) { return 1.; }
double Omega001(double phi, double cosThetaK, double cosThetaL){ return D000(phi, cosThetaK) * D001(0., cosThetaL); }
double Omega002(double phi, double cosThetaK, double cosThetaL){ return D000(phi, cosThetaK) * D002(0., cosThetaL); }
double Omega020(double phi, double cosThetaK, double cosThetaL){ return D002(phi, cosThetaK) * D000(0., cosThetaL); }
double Omega021(double phi, double cosThetaK, double cosThetaL){ return D002(phi, cosThetaK) * D001(0., cosThetaL); }
double Omega121(double phi, double cosThetaK, double cosThetaL){ return D102(phi, cosThetaK) * D101(0., cosThetaL); }
double Omega022(double phi, double cosThetaK, double cosThetaL){ return D002(phi, cosThetaK) * D002(0., cosThetaL); }
double Omega122(double phi, double cosThetaK, double cosThetaL){ return D102(phi, cosThetaK) * D102(0., cosThetaL); }
double Omega222(double phi, double cosThetaK, double cosThetaL){ return D202(phi, cosThetaK) * D202(0., cosThetaL); }

int delta(int m) {if (m == 0) return 1; else return 0;}
double coeff(int m, int lK, int ll) {return (1 + delta(m))/(2.*(2*lK+1)*(2*ll+1));}

void get_moments_B2Kstll::Loop(char * filename)
{
    if (fChain == 0) return;

    Long64_t nentries = fChain->GetEntriesFast();

    double G000(0.);
    double G001(0.);
    double G002(0.);
    double G020(0.);
    double G021(0.);
    double G121(0.);
    double G022(0.);
    double G122(0.);
    double G222(0.);

    double D000_v(0.);
    double D002_v(0.);
    double D102_v(0.);
    double D202_v(0.);
    double eff(0.);

    TFile * f = TFile::Open(filename, "RECREATE");
    TNtuple * tup = new TNtuple("partial", "coeffs", "cosThetaL:phi:cosThetaK:D000:D002:D102:D202");
    TNtuple * tup_total = new TNtuple("total", "coeffs", "G000:G001:G002:G020:G021:G121:G022:G122:G222");

    Long64_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        eff = 1.;// - cosThetaL*cosThetaL/2.;
        
        //partial moments
        double norm_p = 1./4./TMath::Pi();
        D000_v = D000(phi, cosThetaK)/norm_p;
        D002_v = D002(phi, cosThetaK)/norm_p;
        D102_v = D102(phi, cosThetaK)/norm_p;
        D202_v = D202(phi, cosThetaK)/norm_p;
        tup->Fill(cosThetaL, phi, cosThetaK, D000_v, D002_v, D102_v, D202_v);
    
        //total moments
        double norm_t = 1./8./TMath::Pi();
        G000 += Omega000(phi, cosThetaK, cosThetaL)/norm_t/eff;
        G001 += Omega001(phi, cosThetaK, cosThetaL)/norm_t/eff;
        G002 += Omega002(phi, cosThetaK, cosThetaL)/norm_t/eff;
        G020 += Omega020(phi, cosThetaK, cosThetaL)/norm_t/eff;
        G021 += Omega021(phi, cosThetaK, cosThetaL)/norm_t/eff;
        G121 += Omega121(phi, cosThetaK, cosThetaL)/norm_t/eff;
        G022 += Omega022(phi, cosThetaK, cosThetaL)/norm_t/eff;
        G122 += Omega122(phi, cosThetaK, cosThetaL)/norm_t/eff;
        G222 += Omega222(phi, cosThetaK, cosThetaL)/norm_t/eff;
    }

    cout << "All normalised to G000 " << G000/coeff(0,0,0) << endl;
    cout << "G000 \t " << G000/G000/coeff(0,0,0) << endl;
    cout << "G001 \t " << G001/G000/coeff(0,0,1) << endl;
    cout << "G002 \t " << G002/G000/coeff(0,0,2) << endl;
    cout << "G020 \t " << G020/G000/coeff(0,2,0) << endl;
    cout << "G021 \t " << G021/G000/coeff(0,2,1) << endl;
    cout << "G121 \t " << G121/G000/coeff(1,2,1) << endl;
    cout << "G022 \t " << G022/G000/coeff(0,2,2) << endl;
    cout << "G122 \t " << G122/G000/coeff(1,2,2) << endl;
    cout << "G222 \t " << G222/G000/coeff(2,2,2) << endl;

    tup_total->Fill(G000/G000/coeff(0,0,0), 
                G001/G000/coeff(0,0,1),
                G002/G000/coeff(0,0,2),
                G020/G000/coeff(0,2,0),
                G021/G000/coeff(0,2,1),
                G121/G000/coeff(1,2,1),
                G022/G000/coeff(0,2,2),
                G122/G000/coeff(1,2,2),
                G222/G000/coeff(2,2,2)
                );

    tup->Write();
    tup_total->Write();
    f->Close();
}

int main( int argv, char * argc[] )
{
    gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
    TFile * f = TFile::Open(argc[1]);
    TTree * tree = (TTree*)f->Get("dataNTuple");
    get_moments_B2Kstll t(tree);
    t.Loop(argc[2]);
    return 1;
}

