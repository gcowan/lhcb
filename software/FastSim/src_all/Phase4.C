
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

 
void PhaseRadiative(  ) {


  // gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
	if (!gROOT->GetClass("TGenPhaseSpace")) gSystem->Load("libPhysics");


	// loaf the fonll stuff
        TFile* fonll = new TFile("fonll.root");
        TH1F* ptHisto = (TH1F*) fonll->Get("pthisto"); 
        TH1F* etaHisto = (TH1F*) fonll->Get("etahisto"); 

        // get the graph to smear with
        TFile* smearfile = new TFile("smear12.root");
        TGraphErrors* sgraph = (TGraphErrors*)smearfile->Get("data;1");

	//make pdfs for phi and rho mass shape
        RooRealVar m1("m1","m1",0.980, 1.05);
        RooRelBreitWigner* bw = rooBW(m1);
     
        // generate two datasets
        RooDataSet *phidata = bw->generate(RooArgSet(m1),100000) ;
       
	Double_t masses[2] = {mchic,mphi};
        Double_t masses2[4] = {mpi,mpi,mpi,mpi};
        Double_t masses3[3] = {mK,mK};
	double min(5.2);
	double max(5.5);
     
	TH1F *h1 = new TH1F("h1","h1", 100, 4.5, 5.5);
        h1->Sumw2();

        TH1F *dh1 = new TH1F("dh1","dh1", 100, 0., 5.);
        dh1->Sumw2();

        TH1F *dh2 = new TH1F("dh2","dh2", 100, 1., 2.);
        dh2->Sumw2();


        TH1F *dh3 = new TH1F("pi","pi", 100, 2., 4.);
        dh3->Sumw2();

        TH1F *dh4 = new TH1F("phi","phi", 100, 0.75, 1.25);
        dh4->Sumw2();

        TRandom ran;

	for (Int_t n=0;n<1000000;n++) {
	  //	   Double_t weight = event.Generate();
          TLorentzVector Bs = genB(ran,ptHisto,etaHisto, mBs);
          TGenPhaseSpace event;
   	  
 
	   // Generate the Bs	 
           int ntoGen = 0; bool accept = false;
           masses[1] = pick(phidata,ran,std::string("m1"));
           bool isok = event.SetDecay(Bs, 2, masses);
           if (!isok) continue;
           while (ntoGen < 1000 && accept == false){
              Double_t weight = event.Generate();
              accept = weight > ran.Uniform();
              ++ntoGen;
           }
           if (accept == false) continue; 

           TLorentzVector chic = *event.GetDecay(0); // psi
	   TLorentzVector phi = *event.GetDecay(1); //phi

           // generate the Ds
           TGenPhaseSpace subevent;  
	   //std::cout << masses2[1] << std::endl;
   	   subevent.SetDecay (chic, 4, masses2);
	   //  double w2 = subevent.Generate(); 
           ntoGen = 0; accept = false;
           while (ntoGen < 1000 && accept == false){
              Double_t weight = subevent.Generate();
              accept = weight > ran.Uniform();
              ++ntoGen;
           }
           if (accept == false) continue; 

           int ipi1 = 4*ran.Uniform();
           int ipi2 = ipi1;
	   do {
             ipi2=  4*ran.Uniform();
	   }  while(ipi1 == ipi2);

           TLorentzVector pi1 = *subevent.GetDecay(ipi1);
	   TLorentzVector pi2 = *subevent.GetDecay(ipi2);
           
           // phi decays to kk
           TGenPhaseSpace subevent2;  
	   //  std::cout << spHadron2->M() <<  " "<< masses4[0] << " " << masses4[1] << std::endl;
   	   subevent2.SetDecay (phi, 2, masses3);
	   // double w3 = subevent1.Generate(); 
           ntoGen = 0; accept = false;
           while (ntoGen < 1000 && accept == false){
              Double_t weight = subevent2.Generate();
              accept = weight > ran.Uniform();
              ++ntoGen;
           }
           if (accept == false) continue; 
           TLorentzVector k1 = *subevent2.GetDecay(0);
	   TLorentzVector k2 = *subevent2.GetDecay(1);


	   // smear the vectors
	   TLorentzVector spi1 = smearedVec(pi1,sgraph,ran);
	   TLorentzVector spi2 = smearedVec(pi2,sgraph,ran);
	   TLorentzVector sk1 =  smearedVec(k1,sgraph,ran);
           TLorentzVector sk2 =  smearedVec(k2,sgraph,ran);


	   /*          TLorentzVector pi1 = pHadron2;
           TLorentzVector pi2 = sspHadron1;
           TLorentzVector k1 =  ss2pHadron1;
           TLorentzVector k2 = ss2pHadron2;
	   */

           TLorentzVector sum = spi1 + spi2 + sk1 +sk2;
           TLorentzVector pipi = spi1 + spi2 ;
           TLorentzVector sphi = sk1+sk2 ;
           TLorentzVector dsum = spi1 + sk1 + sk2 ;
           TLorentzVector dsum2 = spi2 + sk1 + sk2 ;
 
           if (pipi.M() > 3. && pipi.M() < 3.55  && mesoncuts(phi,pipi) && 
	       trackcuts(k1,k2,pi1,pi2 )) {
              h1->Fill(sum.M());
              dh1->Fill(dsum.M());
              dh2->Fill(dsum2.M());
              dh3->Fill(pipi.M());
              dh4->Fill(sphi.M()); 
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


        TFile* output = new TFile("radiative.root","RECREATE","output ROOT file");
        dh1->Write(); 
        dh2->Write(); 
        dh3->Write(); 
        dh4->Write(); 
        h1->Write();  
        output->Close();
  
}
