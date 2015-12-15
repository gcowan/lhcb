
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
#include "Cuts.h"
#include "RooRealVar.h"
#include "RooRelBreitWigner.h"
#include "RooGounarisSakurai.h"
#include <string>
 
void PhaseDplusKKpi( std::string filename = "bsdspi.root", int nToGen = 1e7) {


  // gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
	if (!gROOT->GetClass("TGenPhaseSpace")) gSystem->Load("libPhysics");


	// loaf the fonll stuff
        TFile* fonll = new TFile("fonll.root");
        TH1F* ptHisto = (TH1F*) fonll->Get("pthisto"); 
        TH1F* etaHisto = (TH1F*) fonll->Get("etahisto"); 

        // get the graph to smear with
        TFile* smearfile = new TFile("smear12.root");
        TGraphErrors* sgraph = (TGraphErrors*)smearfile->Get("data;1");

	Double_t masses[2] = {mDplus,mpi};
        Double_t masses2[3] = {mK,mpi,mpi};
        
	double min(5.2);
	double max(5.5);
     

	TH1F *h1 = new TH1F("h1","h1", 100, 4850, 5550);
        h1->Sumw2();

        TH1F *dh1 = new TH1F("dh1","dh1", 100, 0., 5000.);
        dh1->Sumw2();

        TH1F *dh2 = new TH1F("dh2","dh2", 100, 1000., 2000.);
        dh2->Sumw2();


        TH1F *dh3 = new TH1F("pi","pi", 100, 2000., 4000.);
        dh3->Sumw2();

        TH1F *dh4 = new TH1F("phi","phi", 100, 750, 1250);
        dh4->Sumw2();

        TRandom ran;

	for (Int_t n=0;n<nToGen; n++) {
	  //	   Double_t weight = event.Generate();
          TLorentzVector Bs = genB(ran,ptHisto,etaHisto, mBd);
          TGenPhaseSpace event;
          if (!generateEvent(Bs,event,masses,ran,1000)) continue;

          TLorentzVector dplus = *event.GetDecay(0); // ds
	  TLorentzVector pi1 = *event.GetDecay(1); //pi 
          
          // generate the Ds
          TGenPhaseSpace subevent; 
 
          if (!generateEvent(dplus,subevent,masses2,ran,1000)) continue;
          TLorentzVector k1 = *subevent.GetDecay(0);
          TLorentzVector pi2 = *subevent.GetDecay(1);
          TLorentzVector pi3 = *subevent.GetDecay(2);

	   // smear the vectors
	  TLorentzVector spi1 = smearedVec(pi1,sgraph,ran);
	  TLorentzVector spi2 = smearedVec(pi2,sgraph,ran);
	  TLorentzVector spi3 =  smearedVec(pi3,sgraph,ran);
          TLorentzVector sk1 =  smearedVec(k1,sgraph,ran);

          TLorentzVector fk2;  TLorentzVector fpi2;
          if (ran.Uniform() > 0.5){
            fk2 = reassignMass(spi2,mK);
	    fpi2 = spi3;
	  }
          else{
            fk2 = reassignMass(spi3,mK);
	    fpi2 = spi2;
	  }


           TLorentzVector sum = spi1 + spi2 + sk1 +fk2;
           TLorentzVector pipi = spi1 + fpi2 ;
           TLorentzVector phi = sk1+fk2 ;
           TLorentzVector dsum = spi1 + sk1 + fk2 ;
           TLorentzVector dsum2 = spi2 + sk1 + fk2 ;
 
	   if ( select(spi1,fpi2,sk1,fk2,ran)) {
              h1->Fill(1000*sum.M());
              dh1->Fill(1000*dsum.M());
              dh2->Fill(1000*dsum2.M());
              dh3->Fill(1000*pipi.M());
              dh4->Fill(1000*phi.M()); 
	   }
	   // std::cout << pipi.P() << std::endl;
	}

        TCanvas* can = new TCanvas("can","can", 800,600); 
        h1->Draw("HISTO");

        TCanvas* can2 = new TCanvas("can2","can2", 800,600); 
	dh1->Draw("HISTO");

        TCanvas* can3 = new TCanvas("can3","can3", 800,600); 
	dh2->Draw("HISTO");


        TCanvas* can4 = new TCanvas("can4","can4", 800,600); 
	dh3->Draw("HISTO");

        TCanvas* can5 = new TCanvas("can5","can5", 800,600); 
	dh4->Draw("HISTO");


        TFile* output = new TFile(filename.c_str(),"RECREATE","output ROOT file");
        dh1->Write(); 
        dh2->Write(); 
        dh3->Write(); 
        dh4->Write(); 
        h1->Write();  
        output->Close();
  
}
