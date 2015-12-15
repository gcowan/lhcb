
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

 
void PhaseC( std::string filename = "bsdsstarrho.root", int nToGen = 3.19*1e7 ) {


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
        RooRealVar m2("m2","m2",0.280, 1.2); 
        RooGounarisSakurai* gs = rooGS(m2);

        // generate two datasets
        RooDataSet *phidata = bw->generate(RooArgSet(m1),100000) ;
        RooDataSet *rhodata = gs->generate(RooArgSet(m2),100000) ;

	Double_t masses[2] = {mDstar,mrho};
        Double_t masses2[2] = {mDs,0};
        Double_t masses3[2] = {mrho,mphi};
        Double_t masses4[2] = {mpi,mpi0};
        Double_t masses5[2] = {mK,mK};
	double min(5.2);
	double max(5.5);
     
	TH1F *h1 = new TH1F("h1","h1", 100, 5150, 5550);
        h1->Sumw2();

        TH1F *dh1 = new TH1F("dh1","dh1", 100, 0., 5000);
        dh1->Sumw2();

        TH1F *dh2 = new TH1F("dh2","dh2", 100, 1000., 2000.);
        dh2->Sumw2();


        TH1F *dh3 = new TH1F("pi","pi", 100, 2000., 4000.);
        dh3->Sumw2();

        TH1F *dh4 = new TH1F("phi","phi", 100, 750, 1250.);
        dh4->Sumw2();


        TRandom ran;

	for (Int_t n=0;n<nToGen;n++) {
	  //	   Double_t weight = event.Generate();
          TLorentzVector Bs = genB(ran,ptHisto,etaHisto, mBs);
          TGenPhaseSpace event;
          masses[1] = pick(rhodata,ran,std::string("m2")); 
   	  int isokb =  event.SetDecay(Bs, 2, masses);
          if (!isokb) continue;
           
	   // Generate the Bs	 
           int ntoGen = 0; bool accept = false;
           while (ntoGen < 1000 && accept == false){
              Double_t weight = event.Generate();
              accept = weight > ran.Uniform();
              ++ntoGen;
           }
           if (accept == false) continue; 

           TLorentzVector pHadron1 = *event.GetDecay(0); // dsstar
	   TLorentzVector pHadron2 = *event.GetDecay(1); //pi 

           // decay the rho
           //rho decays to pi+ pi0 
           TGenPhaseSpace subevent3;  
   	   subevent3.SetDecay (pHadron2, 2, masses3);
	   // double w3 = subevent1.Generate(); 
           ntoGen = 0; accept = false;
           while (ntoGen < 1000 && accept == false){
              Double_t weight = subevent3.Generate();
              accept = weight > ran.Uniform();
              ++ntoGen;
           }
           if (accept == false) continue; 
           TLorentzVector ss3pHadron1 = *subevent3.GetDecay(0);
	   TLorentzVector ss3pHadron2 = *subevent3.GetDecay(1); 

           // generate the D* decay
           TGenPhaseSpace dsevent; 
           if (ran.Uniform() > 0.058) {
             masses2[1] = 0;
	   } 
           else {
             masses2[1] = mpi0 ;
	   }
           dsevent.SetDecay ( pHadron1, 2, masses2); 
           accept = false;
           while (ntoGen < 1000 && accept == false){
              Double_t weight = dsevent.Generate();
              accept = weight > ran.Uniform();
              ++ntoGen;
           }
           if (accept == false) continue; 

           TLorentzVector ds = *dsevent.GetDecay(0); // ds	 

           // generate the Ds decay
           TGenPhaseSpace subevent;  
           masses3[1] = pick(phidata,ran,std::string("m1"));
           masses3[0] = pick(rhodata,ran,std::string("m2"));
	   //std::cout << masses2[1] << std::endl;
   	   bool okphi =  subevent.SetDecay (ds, 2, masses3);
	   if (!okphi) continue;
	   //  double w2 = subevent.Generate(); 
           ntoGen = 0; accept = false;
           while (ntoGen < 1000 && accept == false){
              Double_t weight = subevent.Generate();
              accept = weight > ran.Uniform();
              ++ntoGen;
           }
           if (accept == false) continue; 
           TLorentzVector spHadron1 = *subevent.GetDecay(0);
	   TLorentzVector spHadron2 = *subevent.GetDecay(1);

           //rho decays to pi+ pi0 
           TGenPhaseSpace subevent1;  
   	   subevent1.SetDecay (spHadron1, 2, masses4);
	   // double w3 = subevent1.Generate(); 
           ntoGen = 0; accept = false;
           while (ntoGen < 1000 && accept == false){
              Double_t weight = subevent1.Generate();
              accept = weight > ran.Uniform();
              ++ntoGen;
           }
           if (accept == false) continue; 
           TLorentzVector sspHadron1 = *subevent1.GetDecay(0);
	   TLorentzVector sspHadron2 = *subevent1.GetDecay(1);

           // phi decays to kk
           TGenPhaseSpace subevent2;  
	   //  std::cout << spHadron2->M() <<  " "<< masses4[0] << " " << masses4[1] << std::endl;
   	   subevent2.SetDecay (spHadron2, 2, masses5);
	   // double w3 = subevent1.Generate(); 
           ntoGen = 0; accept = false;
           while (ntoGen < 1000 && accept == false){
              Double_t weight = subevent2.Generate();
              accept = weight > ran.Uniform();
              ++ntoGen;
           }
           if (accept == false) continue; 
           TLorentzVector ss2pHadron1 = *subevent2.GetDecay(0);
	   TLorentzVector ss2pHadron2 = *subevent2.GetDecay(1);


	   //                        pi+          pi0           phi         pi+
	   // TLorentzVector sum = *sspHadron1 + *sspHadron2 + *spHadron2 + *pHadron2;
	   /*	   TLorentzVector dsum = *sspHadron1 + *spHadron2;
           TLorentzVector pipi = *sspHadron1 + *pHadron2;
           TLorentzVector dsum2 = *pHadron2 + *spHadron2;
           TLorentzVector sum = *sspHadron1 + *spHadron2 + *pHadron2;*/

	   // smear the vectors
	   TLorentzVector pi1 = smearedVec(ss3pHadron1,sgraph,ran);
	   TLorentzVector pi2 = smearedVec(sspHadron1,sgraph,ran);
	   TLorentzVector k1 =  smearedVec(ss2pHadron1,sgraph,ran);
           TLorentzVector k2 =  smearedVec(ss2pHadron2,sgraph,ran);


	   /*          TLorentzVector pi1 = pHadron2;
           TLorentzVector pi2 = sspHadron1;
           TLorentzVector k1 =  ss2pHadron1;
           TLorentzVector k2 = ss2pHadron2;
	   */

           TLorentzVector sum = pi1 + pi2 + k1 +k2;
           TLorentzVector pipi = pi1 + pi2 ;
           TLorentzVector phi = k1+k2 ;
           TLorentzVector dsum = pi1 + k1 + k2 ;
           TLorentzVector dsum2 = pi2 + k1 + k2 ;
 
           if (n%10000 == 0) {
	     std::cout << "Generated " << n << std::endl;
	   }
 

           if ( select(pi1,pi2,k1,k2,ran)) {
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
