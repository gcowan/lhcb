
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

TLorentzVector genB(TRandom ran, TH1F* ptHisto, TH1F* etaHisto, double m){
  TLorentzVector vec;
  double phi = ran.Uniform(0,2*TMath::Pi());
  vec.SetPtEtaPhiM(ptHisto->GetRandom(),etaHisto->GetRandom(),phi,m);
  return vec;
}

bool inAcceptance(TLorentzVector& vec){
 
  if (TMath::Abs(vec.Px()/vec.Pz()) > 0.3) return false;
  if (TMath::Abs(vec.Py()/vec.Pz()) > 0.25) return false;  

  return true;
}

bool mesoncuts(TLorentzVector& phi, TLorentzVector rho) {
  return phi.Pt() > 0.9 && rho.Pt() > 0.9 && TMath::Abs(phi.M - mphi) < 1e-2 ;
}

bool trackCut(TLorentzVector& track){
  //std::cout << "here " << std::endl;
  return inAcceptance(track) && track.Pt() > 0.5;  
}

bool trackcuts(TLorentzVector& track1, TLorentzVector& track2, 
              TLorentzVector& track3, TLorentzVector& track4) {
  // std::cout << "track cuts " << std::endl;
  return trackCut(track1) && trackCut(track2) && trackCut(track3) && trackCut(track4);
}


double resSlope(double p) {
  // std::cout << p << std::endl;
  return(sqrt(pow(6.2e-5,2) + pow(2.1e-3/p,2)));  
}

TLorentzVector toFourVector(TVector3& vec, double m) {
 return TLorentzVector(vec, TMath::Sqrt(m*m + vec.Mag2()));
}

TVector3 smearedVec(double plus_x, double plus_y, double plus_z, TGraphErrors* dGraph, TRandom& ran) {
  double kp, kptx, kpty, norm, smear;
  kp = sqrt(plus_x*plus_x + plus_y*plus_y + plus_z*plus_z );
  kptx = plus_x/plus_z;
  kpty = plus_y/plus_z;
  norm = sqrt(1 + kptx*kptx + kpty*kpty);
  smear = 1.0*ran.Gaus(0,1)*dGraph->Eval(1000*kp)*kp;
  kp += smear;
 
  // smear the slopes
  double slope_smear = resSlope(kp); 
  kptx += slope_smear*ran.Gaus(1,0);
  kpty += slope_smear*ran.Gaus(1,0);
  norm = sqrt(1 + kptx*kptx + kpty*kpty);

  plus_x = kptx*kp/norm;
  plus_y = kpty*kp/norm;
  plus_z = kp/norm;
  return TVector3(plus_x,plus_y, plus_z);
  
}

TLorentzVector smearedVec(TLorentzVector& vec, TGraphErrors* dGraph, TRandom& ran){

  TVector3 threeVec = smearedVec(vec.Px(), vec.Py(), vec.Pz(),dGraph,ran);
  return toFourVector(threeVec, vec.M());
}

 
void PhaseC(  ) {


  // gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
	if (!gROOT->GetClass("TGenPhaseSpace")) gSystem->Load("libPhysics");

        TFile* fonll = new TFile("fonll.root");
        TH1F* ptHisto = (TH1F*) fonll->Get("pthisto"); 
        TH1F* etaHisto = (TH1F*) fonll->Get("etahisto"); 

        // get the graph to smear with
        TFile* smearfile = new TFile("smear12.root");
        TGraphErrors* sgraph = (TGraphErrors*)smearfile->Get("data;1");

	//const double mBs(5.36677);
        const double mBs(5.366);
	const double mBd(5.2794);
	const double mLb(5.6195);
	const double mpi(0.13957);
	const double mpi0(0.1349766);
	const double mK(0.493677);
 	const double mphi(1.1197);
	const double mp(0.938272);
	const double mJpsi(3.096916);
	const double mPsi(3.686093);
        const double mDs(1.9683);
        const double mrho(0.77511);

        
	Double_t masses[2] = {mDs,mpi};
        Double_t masses2[2] = {mrho,mphi};
        Double_t masses3[2] = {mpi,mpi0};
        Double_t masses4[2] = {mK,mK};
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
   	  event.SetDecay(Bs, 2, masses);
 
           
	   // Generate the Bs	 
           int ntoGen = 0; bool accept = false;
           while (ntoGen < 1000 && accept == false){
              Double_t weight = event.Generate();
              accept = weight > ran.Uniform();
              ++ntoGen;
           }
           if (accept == false) continue; 

           TLorentzVector pHadron1 = *event.GetDecay(0); // ds
	   TLorentzVector pHadron2 = *event.GetDecay(1); //pi 

           // generate the Ds
           TGenPhaseSpace subevent;  
   	   subevent.SetDecay (pHadron1, 2, masses2);
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
   	   subevent1.SetDecay (spHadron1, 2, masses3);
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
   	   subevent2.SetDecay (spHadron2, 2, masses4);
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
	   TLorentzVector pi1 = smearedVec(pHadron2,sgraph,ran);
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
 
           if (pipi.M() > 3.25 && pipi.M() < 3.55  && mesoncuts(spHadron2,pipi) && 
	       trackcuts(ss2pHadron1, ss2pHadron2, sspHadron1 , pHadron2) ) {
              h1->Fill(sum.M());
              dh1->Fill(dsum.M());
              dh2->Fill(dsum2.M());
              dh3->Fill(pipi.M());
              dh4->Fill(phi.M()); 
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


        TFile* output = new TFile("toychi0.root","RECREATE","output ROOT file");
        dh1->Write(); 
        dh2->Write(); 
        dh3->Write(); 
        dh4->Write(); 
        h1->Write();  
        output->Close();
  
}
