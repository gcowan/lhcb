#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>

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
#include "RooRelBreitWigner.h"
#include "RooGounarisSakurai.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "TGenPhaseSpace.h"

const double mBs = 5.36677;
const double mBd= 5.27958;
const double mLb= 5.6195;
const double mpi =0.13957;
const double mpi0 =0.1349766;
const double mK =0.493677;
const double mphi = 1.0197;
const double mp = 0.938272;
const double mJpsi= 3.096916;
const double mchic= 3.51066;
const double mchic0= 3.41475;
const double mchic2=3.55620;
const double mPsi = 3.686093;
const double mDs = 1.9683;
const double mDplus = 1.86961;
const double mrho = 0.77511;
const double mmu = 0.1134289267;
const double mDstar = 2.1121;
const double mlc = 2.28646;
const double mKstar = 8.9166;

bool generateEvent(TLorentzVector& head, TGenPhaseSpace& event, double* masses , int np, TRandom& ran, int m_maxgen ){

   /* TLorentzVector head Particle to decay
      TGenPhaseSpace decay generator
      double* masses array of output particles
      int m_maxgen number to try  
    */
 
   // check decay kinematics valid
   bool isok = event.SetDecay(head, np, masses);
   if (!isok) return false;

   // make an event
   int ntoGen = 0; bool accept = false;
   while (ntoGen < m_maxgen && accept == false){
      Double_t weight = event.Generate();
      accept = weight > ran.Uniform();
      ++ntoGen;
   } // while

   return accept;

}


double pick(RooDataSet*  data ,TRandom& ran, std::string var_name){
  int entry = data->numEntries() * ran.Uniform();
  const RooArgSet* row = data->get(entry); 
  double value = row->getRealValue(var_name.c_str()); 
  return value;
}

const double barrierFactor = 3;

std::string varname(std::string header, std::string var){
  return (header + "_" + var);
}

RooGounarisSakurai* rooGS(RooRealVar& m, double mean = 0.77511 , double gamma = 0.1491,
                          double thespin = 1, double m1 = 0.13957,double m2 = 0.1349766 , std::string name = "rhoplus"){ 
   // rho+ -> pi0 pi+ decay
  RooRealVar* m0 = new RooRealVar(varname(name,std::string("m0")).c_str(),varname(name,std::string("m0")).c_str(), mean);
  RooRealVar* g0 = new RooRealVar(varname(name,std::string("g0")).c_str(),varname(name,std::string("g0")).c_str(),gamma);
  RooRealVar* spin = new RooRealVar(varname(name,std::string("spin")).c_str(),varname(name,std::string("spin")).c_str(),thespin);
  RooRealVar* radius = new RooRealVar(varname(name,std::string("radius")).c_str(),varname(name,std::string("radius")).c_str(), barrierFactor); // not used
  RooRealVar* ma = new RooRealVar(varname(name,std::string("ma")).c_str(),varname(name,std::string("ma")).c_str(),m1);
  RooRealVar* mb = new RooRealVar(varname(name,std::string("mb")).c_str(),varname(name,std::string("mb")).c_str(),m2);   

   return new RooGounarisSakurai(name.c_str(),name.c_str(), m,*m0,*g0,*spin, *radius,*ma,*mb);
}


RooRelBreitWigner* rooBW(RooRealVar& m,  double mean = 1.019461 , double gamma = 0.001491,
                        double thespin = 1, double m1 =0.493677,double m2 = 0.493677 , std::string name = "phi"){

   RooRealVar* m0 = new RooRealVar(varname(name,std::string("m0")).c_str(),varname(name,std::string("m0")).c_str(), mean);
   RooRealVar* g0 = new RooRealVar(varname(name,std::string("g0")).c_str(),varname(name,std::string("g0")).c_str(),gamma);
   RooRealVar* spin= new RooRealVar(varname(name,std::string("spin")).c_str(),varname(name,std::string("spin")).c_str(),thespin);
   RooRealVar* radius= new RooRealVar(varname(name,std::string("radius")).c_str(),varname(name,std::string("radius")).c_str(),barrierFactor); // not used
   RooRealVar* ma= new RooRealVar(varname(name,std::string("ma")).c_str(),varname(name,std::string("ma")).c_str(), m1);
   RooRealVar* mb= new RooRealVar(varname(name,std::string("mb")).c_str(),varname(name,std::string("mb")).c_str(), m2);   

   return new RooRelBreitWigner(name.c_str(),name.c_str(), m,*m0,*g0,*radius,*ma,*mb,*spin);
}


RooGounarisSakurai* createRhoPlus(RooRealVar& m, std::string name = "rhoplus"){
  return rooGS(m,0.77511,0.1491,1, 0.13957, 0.1349766 , name);
}

RooRelBreitWigner* createPhiMassPdf(RooRealVar& m, std::string name = "phi"){
  return rooBW(m,mphi ,0.001491,1,mK ,mK ,name ); 
}

RooRelBreitWigner* createKstarMassPdf(RooRealVar& m, std::string name = "kstar"){
  return rooBW(m,0.89166 ,0.0508,1,mK ,mpi ,name ); 
}


RooRelBreitWigner* createChi0MassPdf(RooRealVar& m, std::string name = "chic0"){
  return rooBW(m,mchic0 ,10.5e-3,1,mpi,mpi,name ); 
}

RooRelBreitWigner* createChi1MassPdf(RooRealVar& m, std::string name = "chic1"){
  return rooBW(m,mchic ,0.31e-3,1,mpi,mpi,name ); 
}

RooRelBreitWigner* createChi2MassPdf(RooRealVar& m, std::string name = "chic2"){
  return rooBW(m,mchic2 ,1.93e-3,1,mpi,mpi,name ); 
}

RooRelBreitWigner* createpsi2MassPdf(RooRealVar& m, std::string name = "chic2"){
  return rooBW(m,mPsi ,0.3e-3,1,mpi,mpi,name ); 
}


TLorentzVector genB(TRandom ran, TH1F* ptHisto, TH1F* etaHisto, double m){
  TLorentzVector vec;
  double phi = ran.Uniform(0,2*TMath::Pi());
  vec.SetPtEtaPhiM(ptHisto->GetRandom(),etaHisto->GetRandom(),phi,m);
  return vec;
}

double resSlope(double p) {
  // std::cout << p << std::endl;
  return(sqrt(pow(6.2e-5,2) + pow(2.1e-3/p,2)));  
}

TLorentzVector toFourVector(const TVector3& vec, double m) {
 return TLorentzVector(vec, TMath::Sqrt(m*m + vec.Mag2()));
}

TLorentzVector reassignMass(const TLorentzVector& vec, double mass){
  const TVector3 threevec = vec.Vect();
  return toFourVector(threevec, mass);
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

bool inAcceptance(TLorentzVector& vec){
 
  if (TMath::Abs(vec.Px()/vec.Pz()) > 0.3) return false;
  if (TMath::Abs(vec.Py()/vec.Pz()) > 0.25) return false;  
  if (sqrt(pow(vec.Px()/vec.Pz(),2) + pow(vec.Py()/vec.Pz(),2)) <0.01) return false;

  return true;
}

const double zC = 5.4;
const double ptkick= 1.2;
const double zTracker = 9.5; // end of tracker...
const double xSizeTracker = 9.5*0.3;
const double ySizeTracker = 9.5*0.25;
const double xMinTracker = 9.5*0.001;
const double yMinTracker = 9.5*0.001;


TLorentzVector magnetKick(TLorentzVector& vec, double charge){

  TVector3 threeVec  =  vec.Vect();
 
  // extrapolate to magnet centre  
  
  // kick 
  double p = vec.P();
  double px =  vec.Px() + ptkick*charge ;
  double py = vec.Py();
  double pz = sqrt(p*p - px*px - py*py);

  TVector3 threevec = TVector3(px,py,pz) ;

  return toFourVector(threevec, vec.M()); 

}

bool inDownstream(TLorentzVector& vec, int charge){

  TLorentzVector newvec = magnetKick(vec,charge);
  
  // position at magnet centre
  double xMag = zC*vec.Px()/vec.Pz(); 
  double yMag = zC*vec.Py()/vec.Pz();  

  double xTracker = xMag +  (newvec.Px()*(zTracker - zC)/newvec.Pz()); 
  double yTracker = yMag +  (newvec.Py()*(zTracker - zC)/newvec.Pz());   

  //if (TMath::Abs(xTracker) > xSizeTracker) std::cout << "out of tracker " << std::endl;

  return (TMath::Abs(xTracker) < xSizeTracker && TMath::Abs(xTracker) > xMinTracker 
          &&  TMath::Abs(yTracker) < ySizeTracker) && TMath::Abs(yTracker) > yMinTracker ;  
}

#endif

/// common functions
