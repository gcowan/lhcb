
#include "TH1F.h"
#include "string.h"
#include "stdio.h"
#include "TFile.h"
#include "TTree.h"
#include "TBranch.h"
#include "TChain.h"
#include "TMath.h"
#include "TCanvas.h"
#include "TFile.h"
#include <cmath>
#include "TString.h"
#include <iostream>
#include <TMath.h>
#include "TLorentzVector.h"
#include "TGraphErrors.h"
#include "TRandom.h"
#include "RooPlot.h"
#include "RooRealVar.h"
#include "RooArgSet.h"
#include "RooDataSet.h"
#include "TLorentzVector.h"
#include "TGenPhaseSpace.h"
#include "TSystem.h"
#include "TROOT.h"

// 
// for bd GenPhaseSpace(5279.5, 1073493, "bd-phasespace.root")
// for bs GenPhaseSpace(5366.7, 1020499,"bs-phasepace.root")

double daughterMomentum(double m, double m1, double m2)
{

    return momentum;
}


void GenPhaseSpace(double mBs = 5366.77, int nevent = 10000, std::string outname = "output.root") {

    // gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
    if (!gROOT->GetClass("TGenPhaseSpace")) gSystem->Load("libPhysics");


    const double mpi(139.57);
    const double mK(493.677);
    const double mPsi(3686.093);
    const double mmu(105.6583715);

    TLorentzVector mother(0,0,0,mBs);
    Double_t masses[3] = {mPsi, mK, mpi};
    Double_t masses2[2]= {mmu, mmu};

    TFile* outFile = new TFile(outname.c_str(), "RECREATE");
    TTree*  newtree = new TTree("cand", "recreate");
    double psi2S_px; TBranch* branch_psi2S_px =  newtree->Branch("psi_2S_PX",&psi2S_px, "psi_2S_PX/D");
    double psi2S_py; TBranch* branch_psi2S_py =  newtree->Branch("psi_2S_PY",&psi2S_py, "psi_2S_PY/D");
    double psi2S_pz; TBranch* branch_psi2S_pz =  newtree->Branch("psi_2S_PZ",&psi2S_pz, "psi_2S_PZ/D");    

    double Kplus_px; TBranch* branch_Kplus_px =  newtree->Branch("Kplus_PX",&Kplus_px, "Kplus_PX/D");
    double Kplus_py; TBranch* branch_Kplus_py =  newtree->Branch("Kplus_PY",&Kplus_py, "Kplus_PY/D");
    double Kplus_pz; TBranch* branch_Kplus_pz =  newtree->Branch("Kplus_PZ",&Kplus_pz, "Kplus_PZ/D");    

    double piminus_px; TBranch* branch_piminus_px =  newtree->Branch("piminus_PX",&piminus_px, "piminus_PX/D");
    double piminus_py; TBranch* branch_piminus_py =  newtree->Branch("piminus_PY",&piminus_py, "piminus_PY/D");
    double piminus_pz; TBranch* branch_piminus_pz =  newtree->Branch("piminus_PZ",&piminus_pz, "piminus_PZ/D");    

    double muplus_px; TBranch* branch_muplus_px =  newtree->Branch("muplus_PX",&muplus_px, "muplus_PX/D");
    double muplus_py; TBranch* branch_muplus_py =  newtree->Branch("muplus_PY",&muplus_py, "muplus_PY/D");
    double muplus_pz; TBranch* branch_muplus_pz =  newtree->Branch("muplus_PZ",&muplus_pz, "muplus_PZ/D");    

    double muminus_px; TBranch* branch_muminus_px =  newtree->Branch("muminus_PX",&muminus_px, "muminus_PX/D");
    double muminus_py; TBranch* branch_muminus_py =  newtree->Branch("muminus_PY",&muminus_py, "muminus_PY/D");
    double muminus_pz; TBranch* branch_muminus_pz =  newtree->Branch("muminus_PZ",&muminus_pz, "muminus_PZ/D");    

    double mB; TBranch* branch_mB =  newtree->Branch("mB",&mB, "mB/D");    
    double mPsi2S; TBranch* branch_mPsi2S =  newtree->Branch("mPsi",&mPsi2S, "mPsi/D");    

    TGenPhaseSpace event;
    event.SetDecay(mother, 3, masses);

    TRandom ran;

    for (Int_t n=0;n<nevent;n++) {

        TLorentzVector *pPsi = event.GetDecay(0);
        TLorentzVector *pHadron1 = event.GetDecay(1);
        TLorentzVector *pHadron2 = event.GetDecay(2);

        int ntoGen = 0; bool accept = false;
        while (ntoGen < 1000 && accept == false){
            Double_t weight = event.Generate();
            accept = weight > ran.Uniform();

            ++ntoGen;
        }
        if (accept == false) continue; 

        TGenPhaseSpace event2;
        event2.SetDecay(*pPsi, 2, masses2);
        Double_t weight2 = event2.Generate();
        // Weight is always 1
        //cout << weight2 << endl;


        /* Thought we could also do it this way...
           double momentum = (mPsi*mPsi - 4*mmu*mmu)*(mPsi*mPsi);
           momentum =TMath::Sqrt(momentum);
           momentum /= 2*mPsi;
           TLorentzVector *pMu1 = new TLorentzVector(0., 0.,  momentum, TMath::Sqrt(momentum*momentum + mmu*mmu)); 
           TLorentzVector *pMu2 = new TLorentzVector(0., 0., -momentum, TMath::Sqrt(momentum*momentum + mmu*mmu)); 
           pMu1.Boost(pPsi.BoostVector());
           pMu2.Boost(pPsi.BoostVector());
           */

        TLorentzVector *pMu1 = event2.GetDecay(0);
        TLorentzVector *pMu2 = event2.GetDecay(1);

        TLorentzVector pB     = *pPsi + *pHadron1 + *pHadron2;
        TLorentzVector pPsi2S = *pMu1 + *pMu2;
        mB = pB.M();
        mPsi2S = pPsi2S.M();

        psi2S_px  = pPsi->Px();
        psi2S_py  = pPsi->Py();
        psi2S_pz  = pPsi->Pz();

        Kplus_px  = pHadron1->Px();
        Kplus_py  = pHadron1->Py();
        Kplus_pz  = pHadron1->Pz();

        piminus_px  = pHadron2->Px();
        piminus_py  = pHadron2->Py();
        piminus_pz  = pHadron2->Pz();

        muminus_px  = pMu1->Px();
        muminus_py  = pMu1->Py();
        muminus_pz  = pMu1->Pz();

        muplus_px  = pMu2->Px();
        muplus_py  = pMu2->Py();
        muplus_pz  = pMu2->Pz();

        //cout << muplus_px << " " << muplus_py << " " << muplus_pz << endl;
        //cout << muminus_px << " " << muminus_py << " " << muminus_pz << endl;
        //cout << mB << " " << mPsi2S << " " << pPsi->M() << endl;

        newtree->Fill();

    }



    newtree->Write();
    outFile->Close();



}
