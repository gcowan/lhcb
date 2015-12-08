#include "TCanvas.h"
#include "TAxis.h"
#include "TH1.h"
#include "TTree.h"
#include "TFile.h"
#include "TCut.h"
#include "TF1.h"
#include "TROOT.h"
#include "TStyle.h"
#include "TGraphErrors.h"
#include "TGraphAsymmErrors.h"
#include "calculate_angles.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void reduceTree(){ 

    // -- define tuple file name, tuple name and cuts to apply
    // -- and also the name of the output file
    //const std::string filename = "/Home/gcowan1/lhcb/lhcb/b2cc/analysis/Bs2psi2Sphi/data/Bs2psi2Sphi_MC2012_subsample.root";
    const std::string filename = "/Home/gcowan1/lhcb/lhcb/b2cc/analysis/Bs2psi2Sphi/data/Bs2psi2Sphi.root";
    const std::string treename("psi_Tuple/DecayTree");
    const std::string cuts = "(30. > TMath::Abs(phi_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.) && B_s0_BKGCAT < 70";
    const std::string outFilename("/Home/gcowan1/lhcb/lhcb/b2cc/analysis/Bs2psi2Sphi/data/reducedTree.root");


    TFile* file = TFile::Open( filename.c_str() );
    if( !file ) std::cout << "file " << filename << " does not exist" << std::endl;

    TTree* tree = (TTree*)file->Get( treename.c_str() );
    if( !tree ) std::cout << "tree " << treename << " does not exist" << std::endl;

    // -- activate the branches you need

    tree->SetBranchStatus("*", 0);
    tree->SetBranchStatus("phi_M",1);
    tree->SetBranchStatus("B_s0_LOKI_DTF_CTAU",1);
    tree->SetBranchStatus("B_s0_LOKI_DTF_CTAUERR",1);
    tree->SetBranchStatus("B_s0_LOKI_DTF_CHI2NDOF",1);
    tree->SetBranchStatus("B_s0_LOKI_DTF_VCHI2NDOF",1);
    tree->SetBranchStatus("B_s0_LOKI_DTF_CHI2NDOF",1);
    tree->SetBranchStatus("B_s0_IPCHI2_OWNPV",1);
    tree->SetBranchStatus("B_s0_TRUEID",1);
    tree->SetBranchStatus("B_s0_BKGCAT",1);
    tree->SetBranchStatus("B_s0_ThetaL",1);
    tree->SetBranchStatus("B_s0_ThetaK",1);
    tree->SetBranchStatus("B_s0_Phi",1);
    tree->SetBranchStatus("B_s0_Hlt1DiMuonHighMassDecision_TOS",1);
    tree->SetBranchStatus("B_s0_Hlt1TrackMuonDecision_TOS",1);
    tree->SetBranchStatus("B_s0_Hlt1TrackAllL0Decision_TOS",1);
    tree->SetBranchStatus("B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS",1);
    tree->SetBranchStatus("B_s0_TRUEENDVERTEX_X",1);
    tree->SetBranchStatus("B_s0_TRUEENDVERTEX_Y",1);
    tree->SetBranchStatus("Kplus_PIDK",1);
    tree->SetBranchStatus("Kminus_PIDK",1);
    tree->SetBranchStatus("Kplus_PX",1);
    tree->SetBranchStatus("Kplus_PY",1);
    tree->SetBranchStatus("Kplus_PZ",1);
    tree->SetBranchStatus("Kplus_PE",1);
    tree->SetBranchStatus("Kminus_PX",1);
    tree->SetBranchStatus("Kminus_PY",1);
    tree->SetBranchStatus("Kminus_PZ",1);
    tree->SetBranchStatus("Kminus_PE",1);
    tree->SetBranchStatus("muplus_PX",1);
    tree->SetBranchStatus("muplus_PY",1);
    tree->SetBranchStatus("muplus_PZ",1);
    tree->SetBranchStatus("muplus_PE",1);
    tree->SetBranchStatus("muminus_PX",1);
    tree->SetBranchStatus("muminus_PY",1);
    tree->SetBranchStatus("muminus_PZ",1);
    tree->SetBranchStatus("muminus_PE",1);

    // -- this file is just here to make the 'CopyTree' happy
    TFile* dummyFile = new TFile("/tmp/dummy.root","RECREATE");
    TTree* rTree1 = tree->CopyTree( cuts.c_str() );

    double B_s0_LOKI_DTF_CTAU, B_s0_LOKI_DTF_CTAUERR;
    int B_s0_TRUEID;
    double B_s0_ENDVERTEX_X, B_s0_ENDVERTEX_Y;
    double B_s0_ThetaL, B_s0_ThetaK, B_s0_Phi;
    double helphi, helcosthetaK, helcosthetaL; 
    double Kplus_PX, Kplus_PY, Kplus_PZ, Kplus_PE;
    double Kminus_PX, Kminus_PY, Kminus_PZ, Kminus_PE;
    double muplus_PX, muplus_PY, muplus_PZ, muplus_PE;
    double muminus_PX, muminus_PY, muminus_PZ, muminus_PE;
    double phi, costhetaK, costhetaL;
    bool B_s0_Hlt1DiMuonHighMassDecision_TOS, B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS;
    bool B_s0_Hlt1TrackMuonDecision_TOS, B_s0_Hlt1TrackAllL0Decision_TOS;

    double PT, PT_mp1, PT_mm1;
    double IPz_mp;
    double IPz_mm;
    double IPz_kp;
    double IPz_km;
    double weight, weight_track_trigger;
    double eff_mm, eff_mp, eff_km, eff_kp;
    double eff_mm_off, eff_mp_off;

    rTree1->SetBranchAddress("B_s0_LOKI_DTF_CTAU", &B_s0_LOKI_DTF_CTAU);
    rTree1->SetBranchAddress("B_s0_LOKI_DTF_CTAUERR", &B_s0_LOKI_DTF_CTAUERR);
    rTree1->SetBranchAddress("B_s0_TRUEID", &B_s0_TRUEID);
    rTree1->SetBranchAddress("B_s0_ThetaL", &B_s0_ThetaL);
    rTree1->SetBranchAddress("B_s0_ThetaK", &B_s0_ThetaK);
    rTree1->SetBranchAddress("B_s0_Phi", &B_s0_Phi);
    rTree1->SetBranchAddress("Kplus_PX", &Kplus_PX);
    rTree1->SetBranchAddress("Kplus_PY", &Kplus_PY);
    rTree1->SetBranchAddress("Kplus_PZ", &Kplus_PZ);
    rTree1->SetBranchAddress("Kplus_PE", &Kplus_PE);
    rTree1->SetBranchAddress("Kminus_PX", &Kminus_PX);
    rTree1->SetBranchAddress("Kminus_PY", &Kminus_PY);
    rTree1->SetBranchAddress("Kminus_PZ", &Kminus_PZ);
    rTree1->SetBranchAddress("Kminus_PE", &Kminus_PE);
    rTree1->SetBranchAddress("muplus_PX", &muplus_PX);
    rTree1->SetBranchAddress("muplus_PY", &muplus_PY);
    rTree1->SetBranchAddress("muplus_PZ", &muplus_PZ);
    rTree1->SetBranchAddress("muplus_PE", &muplus_PE);
    rTree1->SetBranchAddress("muminus_PX", &muminus_PX);
    rTree1->SetBranchAddress("muminus_PY", &muminus_PY);
    rTree1->SetBranchAddress("muminus_PZ", &muminus_PZ);
    rTree1->SetBranchAddress("muminus_PE", &muminus_PE);
    rTree1->SetBranchAddress("B_s0_Hlt1DiMuonHighMassDecision_TOS", &B_s0_Hlt1DiMuonHighMassDecision_TOS);
    rTree1->SetBranchAddress("B_s0_Hlt1TrackMuonDecision_TOS",      &B_s0_Hlt1TrackMuonDecision_TOS);
    rTree1->SetBranchAddress("B_s0_Hlt1TrackAllL0Decision_TOS",     &B_s0_Hlt1TrackAllL0Decision_TOS);
    rTree1->SetBranchAddress("B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS", &B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS);
    rTree1->SetBranchAddress("B_s0_TRUEENDVERTEX_X", &B_s0_ENDVERTEX_X);
    rTree1->SetBranchAddress("B_s0_TRUEENDVERTEX_Y", &B_s0_ENDVERTEX_Y);

    TFile* rFile = new TFile( outFilename.c_str() ,"RECREATE");
    TTree* rTree2 = new TTree();
    rTree2->SetName("dataNTuple");
    rTree2->Branch("B_s0_LOKI_DTF_CTAU", &B_s0_LOKI_DTF_CTAU, "B_s0_LOKI_DTF_CTAU/D");
    rTree2->Branch("B_s0_LOKI_DTF_CTAUERR", &B_s0_LOKI_DTF_CTAUERR, "B_s0_LOKI_DTF_CTAUERR/D");
    rTree2->Branch("B_s0_TRUEID", &B_s0_TRUEID, "B_s0_TRUEID/D");
    rTree2->Branch("helcosthetaK", &helcosthetaK, "helcosthetaK/D");
    rTree2->Branch("helcosthetaL", &helcosthetaL, "helcosthetaL/D");
    rTree2->Branch("helphi", &helphi, "helphi/D");
    rTree2->Branch("costhetaK", &costhetaK, "costhetaK/D");
    rTree2->Branch("costhetaL", &costhetaL, "costhetaL/D");
    rTree2->Branch("phi", &phi, "phi/D");
    rTree2->Branch("B_s0_Hlt1DiMuonHighMassDecision_TOS", &B_s0_Hlt1DiMuonHighMassDecision_TOS, "B_s0_Hlt1DiMuonHighMassDecision_TOS/B");
    rTree2->Branch("B_s0_Hlt1TrackMuonDecision_TOS",      &B_s0_Hlt1TrackMuonDecision_TOS, "B_s0_Hlt1TrackMuonDecision_TOS/B");
    rTree2->Branch("B_s0_Hlt1TrackAllL0Decision_TOS",     &B_s0_Hlt1TrackAllL0Decision_TOS, "B_s0_Hlt1TrackAllL0Decision_TOS/B");
    rTree2->Branch("B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS", &B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS, "B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS/B");
    rTree2->Branch("B_s0_TRUEENDVERTEX_X", &B_s0_ENDVERTEX_X, "B_s0_TRUEENDVERTEX_X/D");
    rTree2->Branch("B_s0_TRUEENDVERTEX_Y", &B_s0_ENDVERTEX_Y, "B_s0_TRUEENDVERTEX_Y/D");
    rTree2->Branch("muplus_IPz", &IPz_mp, "muplus_IPz/D");
    rTree2->Branch("muminus_IPz", &IPz_mm, "muminus_IPz/D");
    rTree2->Branch("Kplus_IPz", &IPz_kp, "Kplus_IPz/D");
    rTree2->Branch("Kminus_IPz", &IPz_km, "Kminus_IPz/D");
    rTree2->Branch("weight_dimuon_trigger", &weight, "weight_dimuon_trigger/D");
    rTree2->Branch("weight_track_trigger", &weight_track_trigger, "weight_track_trigger/D");

    int percentCounter = 0;

    int runPeriod(2012);
    bool data(false);

    double BshiftX(0.);
    double BshiftY(0.);
    double c_online(0.);
    double c_offline(0.);
    int factor(0);

    if ( runPeriod == 2011 ){
        if (data) {
            BshiftX =  0.4592; 
            BshiftY = -0.01501;
            c_online  = -0.00964801 + factor*0.000801545; 
            c_offline = -0.00208986 + factor*0.000413113; 
        }
        else{//MC2011
            BshiftX = 0.459;
            BshiftY = -0.0151;
            c_online  = -0.00803921; //MC2011
            c_offline = -0.00120181; //MC2011
        }
    }   
    else if ( runPeriod == 2012 ) {
        if (data) {
            BshiftX = 0.6262;
            BshiftY = 0.09732;
            c_online  = -0.01048758 + factor*0.000587103; 
            c_offline = -0.00355753 + factor*0.000381592; 
        }
        else{//MC2012
            BshiftX = 0.626;
            BshiftY = 0.100;
            c_online  = -0.010029; //MC2012
            c_offline = -0.00286159; //MC2012
        }
    }

    for(int i = 0; i < rTree1->GetEntries(); ++i){

        const int percent = (int)(rTree1->GetEntries()/100.0);

        if( i == percent*percentCounter ){
            std::cout << percentCounter << " %\r" << std::flush;
            percentCounter += 1;
        }

        rTree1->GetEntry(i);

        TLorentzVector pKplus   (Kplus_PX, Kplus_PY, Kplus_PZ, Kplus_PE);
        TLorentzVector pKminus  (Kminus_PX, Kminus_PY, Kminus_PZ, Kminus_PE);
        TLorentzVector pMplus   (muplus_PX, muplus_PY, muplus_PZ, muplus_PE);
        TLorentzVector pMminus  (muminus_PX, muminus_PY, muminus_PZ, muminus_PE);
        TLorentzVector B      = pMplus + pMminus + pKplus + pKminus;
        TLorentzVector pKstar = pKplus + pKminus;
        TLorentzVector pPsi   = pMplus + pMminus;

        calculate_angles(pMplus, pMminus, pKminus, pKplus
                , costhetaK
                , costhetaL
                , phi);

        helphi = B_s0_Phi;
        helcosthetaL = cos(B_s0_ThetaL);
        helcosthetaK = cos(B_s0_ThetaK);

        PT = sqrt(muplus_PX*muplus_PX + muplus_PY*muplus_PY);
        IPz_mp = std::abs(1./PT *((B_s0_ENDVERTEX_Y-BshiftY)*muplus_PX  - (B_s0_ENDVERTEX_X-BshiftX)*muplus_PY));
        PT_mp1 = PT;

        PT = sqrt(muminus_PX*muminus_PX + muminus_PY*muminus_PY);
        IPz_mm = std::abs(1./PT *((B_s0_ENDVERTEX_Y-BshiftY)*muminus_PX - (B_s0_ENDVERTEX_X-BshiftX)*muminus_PY));
        PT_mm1 = PT;

        PT = sqrt(Kplus_PX*Kplus_PX + Kplus_PY*Kplus_PY);
        IPz_kp = std::abs(1./PT *((B_s0_ENDVERTEX_Y-BshiftY)*Kplus_PX   - (B_s0_ENDVERTEX_X-BshiftX)*Kplus_PY));

        PT = sqrt(Kminus_PX*Kminus_PX + Kminus_PY*Kminus_PY);
        IPz_km = std::abs(1./PT *((B_s0_ENDVERTEX_Y-BshiftY)*Kminus_PX  - (B_s0_ENDVERTEX_X-BshiftX)*Kminus_PY));

        if ( runPeriod == 2011 ){
            // using a 3rd order polynominal for the muons
            eff_mp     = (1. +  c_online  * IPz_mp * IPz_mp)*(1.+(-0.0143858 *IPz_mp) +( 0.00789004*IPz_mp*IPz_mp)+(-0.00338056*IPz_mp*IPz_mp*IPz_mp));
            eff_mm     = (1. +  c_online  * IPz_mm * IPz_mm)*(1.+(-0.00310428*IPz_mm) +( 0.00140996*IPz_mm*IPz_mm)+(-0.00176799*IPz_mm*IPz_mm*IPz_mm));
            eff_mp_off = (1. +  c_offline * IPz_mp * IPz_mp)*(1.+(-0.0143858 *IPz_mp) +( 0.00789004*IPz_mp*IPz_mp)+(-0.00338056*IPz_mp*IPz_mp*IPz_mp));
            eff_mm_off = (1. +  c_offline * IPz_mm * IPz_mm)*(1.+(-0.00310428*IPz_mm) +( 0.00140996*IPz_mm*IPz_mm)+(-0.00176799*IPz_mm*IPz_mm*IPz_mm));
            eff_kp     = (1. +  c_offline * IPz_kp * IPz_kp)*(1.+( 0.00602845*IPz_kp) +(-0.00510855*IPz_kp*IPz_kp));
            eff_km     = (1. +  c_offline * IPz_km * IPz_km)*(1.+( 0.00365638*IPz_km) +(-0.00335481*IPz_km*IPz_km));
        }   
        else if ( runPeriod == 2012 ) {
            eff_mp     = (1. +  c_online  * IPz_mp * IPz_mp)*((1.+(-0.0316718  *IPz_mp)+( 0.18437    *IPz_mp*IPz_mp)+(-0.0108996 *IPz_mp*IPz_mp*IPz_mp))/(1.+    0.160385*IPz_mp*IPz_mp));
            eff_mm     = (1. +  c_online  * IPz_mm * IPz_mm)* (1.+(-0.0145967  *IPz_mm)+( 0.00984687 *IPz_mm*IPz_mm)+(-0.00314559*IPz_mm*IPz_mm*IPz_mm));
            eff_mp_off = (1. +  c_offline * IPz_mp * IPz_mp)*((1.+(-0.0316718  *IPz_mp)+( 0.18437    *IPz_mp*IPz_mp)+(-0.0108996 *IPz_mp*IPz_mp*IPz_mp))/(1.+    0.160385*IPz_mp*IPz_mp));
            eff_mm_off = (1. +  c_offline * IPz_mm * IPz_mm)* (1.+(-0.0145967  *IPz_mm)+( 0.00984687 *IPz_mm*IPz_mm)+(-0.00314559*IPz_mm*IPz_mm*IPz_mm));
            eff_kp     = (1. +  c_offline * IPz_kp * IPz_kp)* (1.+(-0.00073608 *IPz_kp)+(-0.000213989*IPz_kp*IPz_kp));
            eff_km     = (1. +  c_offline * IPz_km * IPz_km)* (1.+(-0.00273339 *IPz_km)+( 0.00075945 *IPz_km*IPz_km));
        }
        weight = 1./(eff_mm*eff_mp*eff_kp*eff_km);
        if ( PT_mp1 > PT_mm1 ) weight_track_trigger = 1./(eff_mm_off*eff_mp    *eff_km*eff_kp);
        else                   weight_track_trigger = 1./(eff_mm    *eff_mp_off*eff_km*eff_kp);

        rTree2->Fill();
        //std::cout << mass << std::endl;   
    }
    rTree2->Print();
    rTree2->Write();
    rFile->Save();

}

int main(int argc, const char * argv[])
{
    reduceTree();  
    return 0;
}
