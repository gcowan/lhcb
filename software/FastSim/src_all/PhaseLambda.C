
#include <iostream>
#include "TLorentzVector.h"
#include "TGenPhaseSpace.h"
#include "TH1F.h"
#include "TROOT.h"
#include "TSystem.h"
#include "TStyle.h"
#include "TRandom.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TMath.h"
#include "TGraphErrors.h"
#include "Functions.h"
#include "lbcuts.h"
#include "RooRealVar.h"

void PhaseLambda() {


  // gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
	if (!gROOT->GetClass("TGenPhaseSpace")) gSystem->Load("libPhysics");


	// loaf the fonll stuff
        TFile* fonll = new TFile("fonll.root");
        TH1F* ptHisto = (TH1F*) fonll->Get("pthisto"); 
        TH1F* etaHisto = (TH1F*) fonll->Get("etahisto"); 

        // get the graph to smear with
        TFile* smearfile = new TFile("smear12.root");
        TGraphErrors* sgraph = (TGraphErrors*)smearfile->Get("data;1");


	Double_t masses[3] = {mchic,mp,mK };
        Double_t masses2[2] = {mJpsi,0};
        Double_t masses3[2] = {mmu,mmu};
             
	TH1F *h1 = new TH1F("h1","h1", 100, 4.5, 5.5);
        h1->Sumw2();

        
        TRandom ran;

	for (Int_t n=0;n<10000000;n++) {
	  //	   Double_t weight = event.Generate();
          TLorentzVector lb = genB(ran,ptHisto,etaHisto, mLb);
          TGenPhaseSpace event;
   	  event.SetDecay(lb, 3, masses); 
	  //std::cout << "output " << std::endl;           

	   // Generate the Bs	 
           int ntoGen = 0; bool accept = false;
           while (ntoGen < 1000 && accept == false){
              Double_t weight = event.Generate();
              accept = weight > ran.Uniform();
              ++ntoGen;
           }
           if (accept == false) continue; 

           TLorentzVector chic = *event.GetDecay(0); // chic
	   TLorentzVector proton = *event.GetDecay(1); //proton 
           TLorentzVector kaon = *event.GetDecay(2); //kaon 

	   //std::cout << "decayed the b" << std::endl;
           // generate the chic decay
           TGenPhaseSpace subevent;  
           subevent.SetDecay(chic,2,masses2);
           ntoGen = 0; accept = false;
           while (ntoGen < 1000 && accept == false){
              Double_t weight = subevent.Generate();
              accept = weight > ran.Uniform();
              ++ntoGen;
           }
           if (accept == false) continue; 
           TLorentzVector jpsi = *subevent.GetDecay(0);
	   TLorentzVector gamma = *subevent.GetDecay(1);
	   // std::cout << "decayed the chi" << std::endl;


           // jpsi -> mumu
           TGenPhaseSpace subevent1;  
   	   subevent1.SetDecay (jpsi, 2, masses3);
	   // double w3 = subevent1.Generate(); 
           ntoGen = 0; accept = false;
           while (ntoGen < 1000 && accept == false){
              Double_t weight = subevent1.Generate();
              accept = weight > ran.Uniform();
              ++ntoGen;
           }
           if (accept == false) continue;

 
           TLorentzVector muon1 = *subevent1.GetDecay(0);
	   TLorentzVector muon2 = *subevent1.GetDecay(1);

        
	   // smear the vectors
	   TLorentzVector smuon1 = smearedVec(muon1,sgraph,ran);
	   TLorentzVector smuon2 = smearedVec(muon2,sgraph,ran);
	   TLorentzVector sproton =  smearedVec(proton,sgraph,ran);
           TLorentzVector fakekaon = reassignMass(sproton,mK);
           TLorentzVector skaon =  smearedVec(kaon,sgraph,ran);

           TLorentzVector sum = chic + fakekaon + skaon;
           if (selcuts(gamma, smuon1, smuon2, skaon, fakekaon,chic)) h1->Fill(sum.M());          
	   // std::cout << pipi.P() << std::endl;
	}

        TCanvas* can = new TCanvas("can","can", 800,600); 
        h1->Draw("HISTO");

        
        TFile* output = new TFile("toyl.root","RECREATE","output ROOT file");    
        h1->Write();  
        output->Close();
  
}
