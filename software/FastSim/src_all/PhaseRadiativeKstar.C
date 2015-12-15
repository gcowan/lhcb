
#include <iostream>
#include <string>
#include <sstream>
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

 
void PhaseRadiativeKstar(int mode =2, int nEvtToGen = 1000000) {

  // mode == which chic

  // gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
	if (!gROOT->GetClass("TGenPhaseSpace")) gSystem->Load("libPhysics");


	// loaf the fonll stuff
        TFile* fonll = new TFile("fonll.root");
        TH1F* ptHisto = (TH1F*) fonll->Get("pthisto"); 
        TH1F* etaHisto = (TH1F*) fonll->Get("etahisto"); 

        // get the graph to smear with
        TFile* smearfile = new TFile("smear12.root");
        TGraphErrors* sgraph = (TGraphErrors*)smearfile->Get("data;1");

	//make pdfs for phi and chi mass shape
        RooRealVar m1("m1","m1",0.6, 1.5);
        RooRealVar m2("m2","m2",3.2, 3.6);
        RooRealVar m3("m3","m3",3.6, 3.8);
        RooRelBreitWigner* bw = createKstarMassPdf(m1);
        RooRelBreitWigner* chibw= 0;
        if (mode ==0) {
          chibw = createChi0MassPdf(m2);      
       	}
        else if (mode == 2){
          chibw = createChi2MassPdf(m2); 
        } 
        else {
          chibw = createChi1MassPdf(m2);
	}
        RooRelBreitWigner* psi2bw = createpsi2MassPdf(m3);

        // generate phi datasets
        RooDataSet *kstardata = bw->generate(RooArgSet(m1),100000) ;
        RooDataSet *chicdata = chibw->generate(RooArgSet(m2),100000) ;
        RooDataSet *psi2sdata = psi2bw->generate(RooArgSet(m3),100000) ;
       


	Double_t masses[2] = {mPsi,mphi};
        Double_t masses2[2] = {0,mchic2};
        Double_t masses3[2] = {mpi,mpi};
        Double_t masses4[2] = {mK,mpi};
	double min(5.2);
	double max(5.5);
     
	TH1F *h1 = new TH1F("h1","h1", 100, 5150, 5550);
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

        int ngenerated = 0; int nselected = 0;
	for (Int_t n=0;n<nEvtToGen;n++) {
	  //	   Double_t weight = event.Generate();
          TLorentzVector Bs = genB(ran,ptHisto,etaHisto, mBd);
          TGenPhaseSpace event;
   	 
	   // Generate the Bs	 
           int ntoGen = 0; 
           masses[1] = pick(kstardata,ran,std::string("m1"));
           masses[0] = pick(psi2sdata ,ran,std::string("m3"));
           if (!generateEvent(Bs,event,masses,ran,1000)) continue;
           TLorentzVector psi = *event.GetDecay(0); // psi
	   TLorentzVector kstar = *event.GetDecay(1); //phi

           // generate the psi decay
           TGenPhaseSpace subevent;
           masses2[1] = pick(chicdata,ran,std::string("m2"));  
           if (!generateEvent(psi,subevent,masses2,ran,1000)) continue;
           TLorentzVector gamma = *subevent.GetDecay(0);
	   TLorentzVector chic = *subevent.GetDecay(1);

           // chic decay to pipi
           TGenPhaseSpace subevent1;  
       	   if (!generateEvent(chic,subevent1,masses3,ran,1000)) continue;
           TLorentzVector pi1 = *subevent1.GetDecay(0);
	   TLorentzVector pi2 = *subevent1.GetDecay(1);

           // phi decays to kk
           TGenPhaseSpace subevent2;  
	   if (!generateEvent(kstar,subevent2,masses4,ran,1000)) continue;

           TLorentzVector k = *subevent2.GetDecay(0);
	   TLorentzVector pi = *subevent2.GetDecay(1);

	   // smear the vectors
	   TLorentzVector spi1 = smearedVec(pi1,sgraph,ran);
	   TLorentzVector spi2 = smearedVec(pi2,sgraph,ran);
	   TLorentzVector sk1 =  smearedVec(k,sgraph,ran);
           TLorentzVector spi =  smearedVec(pi,sgraph,ran);
           TLorentzVector sk2 = reassignMass(spi,mK);


           TLorentzVector sum = spi1 + spi2 + sk1 +sk2;
           TLorentzVector pipi = spi1 + spi2 ;
           TLorentzVector sphi = sk1+sk2 ;
           TLorentzVector dsum = spi1 + sk1 + sk2 ;
           TLorentzVector dsum2 = spi2 + sk1 + sk2 ;
 
	   ++ngenerated;
 
	   if (select(spi1,spi2,sk1,sk2,ran)) {
              h1->Fill(sum.M()*1000);
              dh1->Fill(dsum.M()*1000);
              dh2->Fill(dsum2.M()*1000);
              dh3->Fill(pipi.M()*1000);
              dh4->Fill(sphi.M()*1000); 
              ++nselected;
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

	std::cout << "Generated " << ngenerated << std::endl;
        std::cout << "Selected " << nselected << std::endl;

	std::stringstream outputname; outputname << "radiative_chic" << mode <<".root"; 

        TFile* output = new TFile(outputname.str().c_str(),"RECREATE","output ROOT file");
        dh1->Write(); 
        dh2->Write(); 
        dh3->Write(); 
        dh4->Write(); 
        h1->Write();  
        output->Close();
  
}
