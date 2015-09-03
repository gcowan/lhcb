#define apply_BDT_weights_cxx
#include "apply_BDT_weights.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "TMVA/Tools.h"
#include "TMVA/Reader.h"

void apply_BDT_weights::Loop()
{
    if (fChain == 0) return;

    Long64_t nentries = fChain->GetEntriesFast();

    TFile * target = new TFile("real_data-mva_output.root","RECREATE" );
    TTree * tree = fChain->CloneTree(0);
    TMVA::Tools::Instance();
    TMVA::Reader * reader = new TMVA::Reader( "V:Color:!Silent" ); 

    Float_t var[12];
    reader->AddVariable("Bplus_PT",&var[0]);
    reader->AddVariable("Bplus_P",&var[1]);
    reader->AddVariable("Bplus_FD_CHI2",&var[2]);
    reader->AddVariable("Bplus_ENDVERTEX_CHI2",&var[3]);
    reader->AddVariable("acos_Bplus_DIRA_OWNPV_ := acos(Bplus_DIRA_OWNPV)",&var[4]);
    reader->AddVariable("Bplus_TAU",&var[5]);
    reader->AddVariable("Bplus_IP_OWNPV",&var[6]);
    reader->AddVariable("Kplus_MINIPCHI2",&var[7]);
    reader->AddVariable("Jpsi_MINIPCHI2",&var[8]);
    reader->AddVariable("Kplus_P",&var[9]);
    reader->AddVariable("muplus_MINIPCHI2",&var[10]);
    reader->AddVariable("muminus_MINIPCHI2",&var[11]);
    reader->BookMVA("BDT method", "KMuMu_BDT.weights.xml"); 

    Float_t BDT_response;
    tree->Branch("BDT", &BDT_response);

    Long64_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        if (jentry%100000 == 0) std::cout << "--- ... Processing event: " << jentry <<std::endl;


        if (!((Bplus_M > 5170)&& ((Bplus_KMu_D < 1850) || (Bplus_KMu_D > 1880))&&(Kplus_NNKpi > -0.5)&&(Kplus_NNK > 0.05)&&(muplus_NNmu > 0.25)&&(muminus_NNmu > 0.25))) continue;
        if (!(Bplus_L0MuonDecision_TOS == 1)) continue;
        if (!(Bplus_Hlt1TrackMuonDecision_TOS == 1 || Bplus_Hlt1TrackAllL0Decision_TOS == 1 || Bplus_Hlt1DiMuonLowMassDecision_TOS == 1 || Bplus_Hlt1DiMuonHighMassDecision_TOS == 1)) continue;
        if (!(Bplus_Hlt2TopoMu2BodyBBDTDecision_TOS == 1 || Bplus_Hlt2TopoMu3BodyBBDTDecision_TOS == 1 || Bplus_Hlt2Topo2BodyBBDTDecision_TOS == 1 || Bplus_Hlt2Topo3BodyBBDTDecision_TOS == 1 || Bplus_Hlt2SingleMuonDecision_TOS == 1 || Bplus_Hlt2DiMuonJPsiDecision_TOS == 1 || Bplus_Hlt2DiMuonPsi2SDecision_TOS == 1 || Bplus_Hlt2DiMuonJPsiHighPTDecision_TOS == 1)) continue;
 
        var[0] = Bplus_PT;
        var[1] = Bplus_P;
        var[2] = Bplus_FD_CHI2;
        var[3] = Bplus_ENDVERTEX_CHI2;
        var[4] = acos(Bplus_DIRA_OWNPV);
        var[5] = Bplus_TAU;
        var[6] = Bplus_IP_OWNPV;
        var[7] = Kplus_MINIPCHI2;
        var[8] = Jpsi_MINIPCHI2;
        var[9] = Kplus_P;
        var[10] = muplus_MINIPCHI2;
        var[11] = muminus_MINIPCHI2;

        BDT_response=reader->EvaluateMVA("BDT method");

        if (BDT_response < 0.3) continue;
        tree->Fill();
    }
    std::cout << "Total entries in new tree " << tree->GetEntries() << std::endl;
    tree->Write();
    target->Close();
}

int main()
{
    apply_BDT_weights t;
    t.Loop();
    return 1;
}
