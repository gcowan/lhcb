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
    const std::string filename = "/Home/gcowan1/lhcb/lhcb/b2cc/analysis/Bs2psi2Sphi/data/Bs2psi2Sphi_MC2012_subsample.root";
    const std::string treename("psi_Tuple/DecayTree");
    const std::string cuts = "(30. > TMath::Abs(phi_M - 1020.)) && (0.12 > B_s0_LOKI_DTF_CTAUERR/0.299792458) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (5. > B_s0_LOKI_DTF_CHI2NDOF) && (25. > B_s0_IPCHI2_OWNPV) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.)&&(B_s0_Hlt1DiMuonHighMassDecision_TOS==1) && (B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS==1)";
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
    tree->SetBranchStatus("Kplus_PIDK",1);
    tree->SetBranchStatus("Kminus_PIDK",1);
    tree->SetBranchStatus("B_s0_Hlt1DiMuonHighMassDecision_TOS",1);
    tree->SetBranchStatus("B_s0_Hlt2DiMuonDetachedPsi2SDecision_TOS",1);
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
    double helphi, helcosthetaK, helcosthetaL; 
    double Kplus_PX, Kplus_PY, Kplus_PZ, Kplus_PE;
    double Kminus_PX, Kminus_PY, Kminus_PZ, Kminus_PE;
    double muplus_PX, muplus_PY, muplus_PZ, muplus_PE;
    double muminus_PX, muminus_PY, muminus_PZ, muminus_PE;

    rTree1->SetBranchAddress("B_s0_LOKI_DTF_CTAU", &B_s0_LOKI_DTF_CTAU);
    rTree1->SetBranchAddress("B_s0_LOKI_DTF_CTAUERR", &B_s0_LOKI_DTF_CTAUERR);
    rTree1->SetBranchAddress("B_s0_TRUEID", &B_s0_TRUEID);
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

    TFile* rFile = new TFile( outFilename.c_str() ,"RECREATE");
    TTree* rTree2 = new TTree();
    rTree2->SetName("dataNTuple");
    rTree2->Branch("B_s0_LOKI_DTF_CTAU", &B_s0_LOKI_DTF_CTAU, "B_s0_LOKI_DTF_CTAU/D");
    rTree2->Branch("B_s0_LOKI_DTF_CTAUERR", &B_s0_LOKI_DTF_CTAUERR, "B_s0_LOKI_DTF_CTAUERR/D");
    rTree2->Branch("B_s0_TRUEID", &B_s0_TRUEID, "B_s0_TRUEID/D");
    rTree2->Branch("helcosthetaK", &helcosthetaK, "helcosthetaK/D");
    rTree2->Branch("helcosthetaL", &helcosthetaL, "helcosthetaL/D");
    rTree2->Branch("helphi", &helphi, "helphi/D");

    int percentCounter = 1;

    for(int i = 0; i < rTree1->GetEntries(); ++i){

        const int percent = (int)(rTree1->GetEntries()/100.0);

        if( i == percent*percentCounter ){
            std::cout << percentCounter << " %" << std::endl;
            percentCounter++;
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
            , helcosthetaK
            , helcosthetaL
            , helphi);

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
