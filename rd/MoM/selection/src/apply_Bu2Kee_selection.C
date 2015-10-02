#define apply_Bu2Kee_selection_cxx
#include "apply_Bu2Kee_selection.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>

double apply_Bu2Kee_selection::computeCosThetaL(const  TLorentzVector & _pMuPlus,
        const  TLorentzVector & _pMuMinus,
        const  TLorentzVector & _pK)
{

    TLorentzVector pB = _pMuPlus+_pMuMinus+_pK;
    TLorentzVector pMuPlus(_pMuPlus);
    TLorentzVector pMuMinus(_pMuMinus);
    TLorentzVector pK(_pK);

    // ============== B0 rest frame ========================
    if ( pB.BoostVector().Mag() != 0 )
    {
        pMuPlus.Boost(-pB.BoostVector());
        pMuMinus.Boost(-pB.BoostVector());
        pK.Boost(-pB.BoostVector());
    }
    TLorentzVector pPsi=pMuPlus+pMuMinus;

    // ================ psi rest frame from B ===================
    TLorentzVector pMuPlus_Psi(pMuPlus);
    TLorentzVector pK_Psi(pK);

    pMuPlus_Psi.Boost(-pPsi.BoostVector());
    pK_Psi.Boost(-pPsi.BoostVector());

    TVector3 p3MuPlus_Psi = pMuPlus_Psi.Vect();
    TVector3 p3K_Psi = pK_Psi.Vect();

    double cosThetaL = - p3K_Psi.Dot(p3MuPlus_Psi)/(p3K_Psi.Mag()*p3MuPlus_Psi.Mag());

    return cosThetaL;
}


void apply_Bu2Kee_selection::Loop()
{
    if (fChain == 0) return;

    Long64_t nentries = fChain->GetEntriesFast();

    TFile * target = new TFile("output.root","RECREATE" );
    TTree * tree = fChain->CloneTree(0);

    Float_t cosThetaL;
    Float_t mKpi1;
    Float_t mKpi2;
    tree->Branch("cosThetaL", &cosThetaL);
    tree->Branch("mKpi1", &mKpi1);
    tree->Branch("mKpi2", &mKpi2);

    Long64_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        if (jentry%10000 == 0) std::cout << "--- ... Processing event: " << jentry <<std::endl;


        if (!(B_M<5700&&B_M>4880&&Kplus_ProbNNk>0.2&&eminus_PIDe>1&&eplus_PIDe>1&&Kplus_ProbNNghost<0.3&&eminus_ProbNNghost<0.3&&eplus_ProbNNghost<0.3&&B_L0ElectronDecision_TOS==1&&B_Hlt1TrackAllL0Decision_TOS==1&&(B_Hlt2TopoE2BodyBBDTDecision_TOS == 1 || B_Hlt2TopoE3BodyBBDTDecision_TOS == 1 || B_Hlt2Topo2BodyBBDTDecision_TOS == 1 || B_Hlt2Topo3BodyBBDTDecision_TOS == 1))) continue;

        // Calculate the helicity angle
        TLorentzVector Kplus(Kplus_PX, Kplus_PY, Kplus_PZ, Kplus_PE);
        TLorentzVector eplus(eplus_PX, eplus_PY, eplus_PZ, eplus_PE);
        TLorentzVector eminus(eminus_PX, eminus_PY, eminus_PZ, eminus_PE);
        cosThetaL = computeCosThetaL(eplus, eminus, Kplus);

        // calculate the m(K(l->pi)) mass to veto partially reconstructed semileptonic  -> DX decays
        TLorentzVector eplusAsPion(eplus_PX, eplus_PY, eplus_PZ, sqrt(eplus.P()*eplus.P() + 140. * 140.));
        TLorentzVector eminusAsPion(eminus_PX, eminus_PY, eminus_PZ, sqrt(eminus.P()*eminus.P() + 140. * 140.));
        TLorentzVector Kpi1 = Kplus + eplusAsPion;
        TLorentzVector Kpi2 = Kplus + eminusAsPion;

        mKpi1 = Kpi1.M();
        mKpi2 = Kpi2.M();

        tree->Fill();
    }
    std::cout << "Total entries in new tree " << tree->GetEntries() << std::endl;
    tree->Write();
    target->Close();
}

int main()
{
    apply_Bu2Kee_selection t;
    t.Loop();
    return 1;
}
