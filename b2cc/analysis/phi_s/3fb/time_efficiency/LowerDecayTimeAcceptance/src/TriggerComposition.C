#include "TString.h"
#include "TCut.h"
#include "TH1F.h"
#include "THStack.h"
#include "TLegend.h"
#include "TF1.h"
#include "TMath.h"
#include "TFile.h"
#include "TTree.h"
#include "TROOT.h"
#include "TSystem.h"
#include "TStyle.h"
#include "TColor.h"
#include "TCanvas.h"
#include "TPad.h"

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

Int_t digits(2);

Double_t Bplus_M(5279.17);
Double_t B0_M(5279.50);
Double_t B_s0_M(5366.3);
Double_t Bplus_M_RMS(10.);
Double_t B0_M_RMS(10.);
Double_t B_s0_M_RMS(10.);
Double_t Bplus_M_RRMS(2.);
Double_t B0_M_RRMS(2.);
Double_t B_s0_M_RRMS(2.);
Double_t Bplus_M_Frac(0.8);
Double_t B0_M_Frac(0.8);
Double_t B_s0_M_Frac(0.8);
Double_t Range(120.);

struct FitResult{
  Double_t Yield;
  Double_t YieldError;
};

struct TriggerLine{
  TString LeafName;
  TString ShortName;
  FitResult Result;
  FitResult Fraction;
  
  TCut GetTCut(){
    TCut cut(LeafName);
    return cut;
  }
  TCut GetTCutbar(){
    TString cut_(LeafName);
    cut_ += " == 0";
    TCut cut(cut_);
    return cut;
  }
};

typedef std::vector<TriggerLine> TriggerLineVector;

void FillShortName(TriggerLineVector & vector, TString const& particle){
  TString name;
  for(Int_t i(0);i<(Int_t)vector.size();i++){
    name = vector[i].LeafName;
    name.ReplaceAll("Decision_","");
    name.ReplaceAll(particle,"");
    name.ReplaceAll("TOS","");
    name.ReplaceAll("TIS","");
    name.ReplaceAll("Dec","");
    vector[i].ShortName = name;
  }
}

TriggerLineVector GetHLT2TriggerLineVectorTOS(TString const& particle){
  TriggerLineVector vector;
  TriggerLine line;
  
  line.LeafName = particle+"Hlt2TopoMu2BodyBBDTDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt2TopoMu3BodyBBDTDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt2TopoMu4BodyBBDTDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt2MuonFromHLT1Decision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt2SingleMuonDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt2SingleMuonHighPTDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt2SingleMuonLowPTDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt2DiMuonDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt2DiMuonLowMassDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt2DiMuonJPsiDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt2DiMuonJPsiHighPTDecision_TOS";
  vector.push_back(line);
  /*
  line.LeafName = particle+"Hlt2DiMuonPsi2SDecision_TOS";
  vector.push_back(line);
  */
  line.LeafName = particle+"Hlt2DiMuonBDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt2DiMuonDetachedJPsiDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt2DiMuonDetachedDecision_TOS";
  vector.push_back(line);
  /*
  line.LeafName = particle+"Hlt2DiMuonDetachedHeavyDecision_TOS";
  vector.push_back(line);
  */
  /*
  line.LeafName = particle+"Hlt2DiMuonUnbiasedJPsiDecision_TOS";
  vector.push_back(line);
  */
  FillShortName(vector,particle);
  return vector;
}

TriggerLineVector GetHLT2TriggerLineVectorTIS(TString const& particle){
  TriggerLineVector vector = GetHLT2TriggerLineVectorTOS(particle);
  
  for(Int_t i(0);i<(Int_t)vector.size();i++){
    vector[i].LeafName.ReplaceAll("TOS","TIS");
  }
  
  return vector;
}

TriggerLineVector GetHLT2TriggerLineVectorDec(TString const& particle){
  TriggerLineVector vector = GetHLT2TriggerLineVectorTOS(particle);
  
  for(Int_t i(0);i<(Int_t)vector.size();i++){
    vector[i].LeafName.ReplaceAll("TOS","Dec");
  }
  
  return vector;
}

TriggerLineVector GetHLT1TriggerLineVectorTOS(TString const& particle){
  TriggerLineVector vector;
  TriggerLine line;
  
  line.LeafName = particle+"Hlt1DiMuonHighMassDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt1DiMuonLowMassDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt1SingleMuonNoIPDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt1SingleMuonHighPTDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt1TrackAllL0Decision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt1TrackMuonDecision_TOS";
  vector.push_back(line);
  /*
  line.LeafName = particle+"Hlt1DiMuonNoIPL0DiDecision_TOS";
  vector.push_back(line);
  line.LeafName = particle+"Hlt1SingleMuonNoIPL0Decision_TOS";
  vector.push_back(line);
  */
  FillShortName(vector,particle);
  return vector;
}

TriggerLineVector GetHLT1TriggerLineVectorTIS(TString const& particle){
  TriggerLineVector vector = GetHLT1TriggerLineVectorTOS(particle);
  
  for(Int_t i(0);i<(Int_t)vector.size();i++){
    vector[i].LeafName.ReplaceAll("TOS","TIS");
  }
  
  return vector;
}

TriggerLineVector GetHLT1TriggerLineVectorDec(TString const& particle){
  TriggerLineVector vector = GetHLT1TriggerLineVectorTOS(particle);
  
  for(Int_t i(0);i<(Int_t)vector.size();i++){
    vector[i].LeafName.ReplaceAll("TOS","Dec");
  }
  
  return vector;
}

TriggerLineVector GetTriggerLineVector( TString const& particle, TString const& triggertype, TString const& decisiontype ){
  if(triggertype == "HLT1"){
    if(decisiontype == "TOS"){
      return GetHLT1TriggerLineVectorTOS( particle );
    }else if(decisiontype == "TIS"){
      return GetHLT1TriggerLineVectorTIS( particle );
    }else{
      return GetHLT1TriggerLineVectorDec( particle );
    }
  }else{
    if(decisiontype == "TOS"){
      return GetHLT2TriggerLineVectorTOS( particle );
    }else if(decisiontype == "TIS"){
      return GetHLT2TriggerLineVectorTIS( particle );
    }else{
      return GetHLT2TriggerLineVectorDec( particle );
    }
  }
}

FitResult GetSignalYieldOneGauss(TString const& particle, TTree* tree, const char* cuts = "", Bool_t const& ref = kFALSE){
  Double_t B_M(0.);
  Double_t B_M_RMS(0.);
  Double_t B_M_RRMS(0.);
  Double_t B_M_Frac(0.);
  if(particle.Contains("Bplus")){
    B_M = Bplus_M;
    B_M_RMS = Bplus_M_RMS;
    B_M_RRMS = Bplus_M_RRMS;
    B_M_Frac = Bplus_M_Frac;
  }else if(particle.Contains("B_s0")){
    B_M = B_s0_M;
    B_M_RMS = B_s0_M_RMS;
    B_M_RRMS = B_s0_M_RRMS;
    B_M_Frac = B_s0_M_Frac;
  }else if(particle.Contains("B_0")){
    B_M = B0_M;
    B_M_RMS = B0_M_RMS;
    B_M_RRMS = B0_M_RRMS;
    B_M_Frac = B0_M_Frac;
  }else{
    B_M = B_s0_M;
    B_M_RMS = B_s0_M_RMS;
    B_M_RRMS = B_s0_M_RRMS;
    B_M_Frac = B_s0_M_Frac;
  }
    
  TH1F* h_Mass_sel = new TH1F("h_Mass_sel","Bs Mass",(Int_t)(Range/2.),B_M-Range,B_M+Range);
  tree->Project("h_Mass_sel",particle+"_M",cuts);

  if(h_Mass_sel->Integral(20,40) == 0){
    FitResult result;
    result.Yield = 0.;
    result.YieldError = 0.;
    delete h_Mass_sel;
    return result;
  }
  /*
  TString funct("4.*gausn(0)+[3]*(x[0]-");
  funct += B_M;
  funct += ")+[4]";
  */
  TString funct("4.*[0]*([4]*TMath::Exp(-TMath::Power((x[0]-[1])/[2],2)/2.)+(1.-[4])*TMath::Exp(-TMath::Power((x[0]-[1])/([3]*[2]),2)/2.))+[5]*(x[0]-");
  funct += B_M;
  funct += ")+[6]";
  /*
  TF1* f_gauss_pol1 = new TF1("f_gauss_pol1",funct,B_M-Range,B_M+Range);
  f_gauss_pol1->SetParameter(0,h_Mass_sel->Integral(20,40));
  f_gauss_pol1->SetParLimits(0,0.,1000000.);
  f_gauss_pol1->SetParameter(1,B_M);
  f_gauss_pol1->SetParLimits(1,B_M-3.,B_M+3.);
  f_gauss_pol1->SetParameter(2,B_M_RMS);
  f_gauss_pol1->SetParLimits(2,5.,30.);
  f_gauss_pol1->SetParameter(3,0.);
  f_gauss_pol1->SetParameter(4,1.);
  */
  TF1* f_gauss_pol1 = new TF1("f_gauss_pol1",funct,B_M-Range,B_M+Range);
  f_gauss_pol1->SetParameter(0,h_Mass_sel->Integral(20,40));
  f_gauss_pol1->SetParLimits(0,0.,1000000.);
  f_gauss_pol1->SetParameter(1,B_M);
  f_gauss_pol1->SetParLimits(1,B_M-3.,B_M+3.);
  f_gauss_pol1->SetParameter(2,B_M_RMS);
  f_gauss_pol1->SetParLimits(2,5.,30.);
  f_gauss_pol1->SetParameter(3,B_M_RRMS);
  f_gauss_pol1->SetParLimits(3,1.5,3.);
  f_gauss_pol1->SetParameter(4,B_M_Frac);
  f_gauss_pol1->SetParLimits(4,0.2,1.);
  f_gauss_pol1->SetParameter(5,0.);
  f_gauss_pol1->SetParameter(6,1.);

  FitResult result;
  
  if(h_Mass_sel->Integral(20,40) < 20){
    result.Yield = h_Mass_sel->Integral(20,40);
    result.YieldError = TMath::Sqrt(h_Mass_sel->Integral(20,40));
    
    delete h_Mass_sel;
    return result;
  }else if(h_Mass_sel->Integral(20,40) < 200){
    f_gauss_pol1->FixParameter(1,B_M);
    f_gauss_pol1->FixParameter(2,B_M_RMS);
    f_gauss_pol1->FixParameter(3,B_M_RRMS);
    f_gauss_pol1->FixParameter(4,B_M_Frac);
    //f_gauss_pol1->FixParameter(5,0.);
    f_gauss_pol1->SetParameter(6,0.);
  }
  if(ref){
    gStyle->SetPadRightMargin(0.08);
    gStyle->SetPadBottomMargin(0.08);
    
    TCanvas* c_Fit = new TCanvas("c_Fit","c_Fit",1600.,1080.);

    c_Fit->cd();
    h_Mass_sel->Fit(f_gauss_pol1,"BRQN0");
    f_gauss_pol1->SetTitle("Bs Mass");
    f_gauss_pol1->Draw("C");
    h_Mass_sel->Draw("E1,SAME");
    
    c_Fit->SaveAs("Mass.eps");
    
    gStyle->SetPadRightMargin(0.17);
    gStyle->SetPadBottomMargin(0.14);
    
    delete c_Fit;
  }else{
    h_Mass_sel->Fit(f_gauss_pol1,"BRQ");
  }
  
  if(ref){
    if(particle.Contains("Bplus")){
      Bplus_M = f_gauss_pol1->GetParameter(1);
      Bplus_M_RMS = f_gauss_pol1->GetParameter(2);
    }else if(particle.Contains("B_s0")){
      B_s0_M = f_gauss_pol1->GetParameter(1);
      B_s0_M_RMS = f_gauss_pol1->GetParameter(2);
    }else if(particle.Contains("B0")){
      B0_M = f_gauss_pol1->GetParameter(1);
      B0_M_RMS = f_gauss_pol1->GetParameter(2);
    }else{
      B_s0_M = f_gauss_pol1->GetParameter(1);
      B_s0_M_RMS = f_gauss_pol1->GetParameter(2);
    }
  }

  result.Yield = f_gauss_pol1->GetParameter(0);
  result.YieldError = f_gauss_pol1->GetParError(0);
  
  delete h_Mass_sel;
  return result;
}

TString outputfileprefix;

void Setoutputfileprefix( TString const& filename ){
  outputfileprefix = filename;
  Int_t pos(0);
  for(Int_t i(0);i<outputfileprefix.Sizeof();i++){
    if(outputfileprefix[i] == '/')
      pos = i;
  }
  outputfileprefix.Remove(0,pos+1);
  outputfileprefix.ReplaceAll(".root","");
}

void PlotResult( FitResult result, FitResult resultbar, Bool_t const& cout_return = kTRUE )
{
  if(result.Yield+resultbar.Yield != 0){
    cout << "(" << 100.*result.Yield/(result.Yield+resultbar.Yield) << " +- ";
    cout << 100.*TMath::Sqrt((TMath::Power(result.Yield,2)/TMath::Power(result.Yield+resultbar.Yield,4))*TMath::Power(result.YieldError,2)+(TMath::Power(resultbar.Yield,2)/TMath::Power(result.Yield+resultbar.Yield,4))*TMath::Power(resultbar.YieldError,2)) << ") %";
    if(cout_return)
      cout << endl;
  }else{
    cout << "(" << 0 << " +- " << 0 << ") %";
    if(cout_return)
      cout << endl;
  }  
}

void PlotResult( TString const& particle, TTree* tree, TCut const& globalcuts, TCut const& triggercuts )
{
  FitResult result = GetSignalYieldOneGauss( particle, tree, globalcuts&&triggercuts );
  FitResult resultbar = GetSignalYieldOneGauss( particle, tree, globalcuts&&(!triggercuts) );
  cout << triggercuts << endl;
  if(result.Yield+resultbar.Yield != 0){
    cout << "(" << 100.*result.Yield/(result.Yield+resultbar.Yield) << " +- ";
    cout << 100.*TMath::Sqrt((TMath::Power(result.Yield,2)/TMath::Power(result.Yield+resultbar.Yield,4))*TMath::Power(result.YieldError,2)+(TMath::Power(resultbar.Yield,2)/TMath::Power(result.Yield+resultbar.Yield,4))*TMath::Power(resultbar.YieldError,2)) << ") %" << endl;
  }else{
    cout << "(" << 0 << " +- " << 0 << ") %" << endl;
  }  
}

void FillPlotTriggerLines( TString const& particle, TString const& triggertype, TTree* tree, TCut const& globalcuts, 
                           TCut const& triggercuts, TCut const& normalizationtriggercuts, 
                           TString const& cutstitle = "", TString const& normalizationtitle = "HLT Global Fitted Yield" ){

  TString plottitle("Number of Fitted ");
  plottitle += particle;
  plottitle += " Events passing given ";
  plottitle += triggertype;
  plottitle += " Trigger";
  if(cutstitle != ""){
    plottitle += " + ";
    plottitle += cutstitle;
  }
  plottitle += " w.r.t. ";
  plottitle += normalizationtitle;

  cout << plottitle << endl;
  
  FitResult n_B_Events_sel;    
  n_B_Events_sel = GetSignalYieldOneGauss( particle, tree, globalcuts&&normalizationtriggercuts, kTRUE );
  
  TriggerLineVector BHLTLinesVectorHLTTOS = GetTriggerLineVector(particle, triggertype, "TOS");
  
  TH1F* B_histoTOS = new TH1F("B_histoTOS",plottitle,
			      BHLTLinesVectorHLTTOS.size(),1.,BHLTLinesVectorHLTTOS.size()+1);

  cout.setf(ios::fixed, ios::floatfield); 
  cout.precision(digits);
  
  for(Int_t i(0);i<(Int_t)BHLTLinesVectorHLTTOS.size();i++){
    BHLTLinesVectorHLTTOS[i].Result = GetSignalYieldOneGauss( particle, tree, globalcuts&&triggercuts&&BHLTLinesVectorHLTTOS[i].GetTCut() );
    B_histoTOS->Fill(i+1,((Double_t)BHLTLinesVectorHLTTOS[i].Result.Yield)/n_B_Events_sel.Yield);
    B_histoTOS->GetXaxis()->SetBinLabel(i+1,BHLTLinesVectorHLTTOS[i].ShortName);
  }
  
  B_histoTOS->SetFillColor(kRed);
  B_histoTOS->SetMinimum(0.);
  B_histoTOS->SetMaximum(1.);

  TriggerLineVector BHLTLinesVectorHLTTIS = GetTriggerLineVector(particle, triggertype, "TIS");
  
  TH1F* B_histoTIS = new TH1F("B_histoTIS",plottitle,
			      BHLTLinesVectorHLTTIS.size(),1.,BHLTLinesVectorHLTTIS.size()+1);
  
  for(Int_t i(0);i<(Int_t)BHLTLinesVectorHLTTIS.size();i++){
    BHLTLinesVectorHLTTIS[i].Result = GetSignalYieldOneGauss( particle, tree, globalcuts&&triggercuts&&BHLTLinesVectorHLTTIS[i].GetTCut() );
    B_histoTIS->Fill(i+1,((Double_t)BHLTLinesVectorHLTTIS[i].Result.Yield)/n_B_Events_sel.Yield);
    B_histoTIS->GetXaxis()->SetBinLabel(i+1,BHLTLinesVectorHLTTIS[i].ShortName);
  }
  
  B_histoTIS->SetFillColor(kGreen);
  B_histoTIS->SetMinimum(0.);
  B_histoTIS->SetMaximum(1.);
  
  TriggerLineVector BHLTLinesVectorDec = GetTriggerLineVector(particle, triggertype, "Dec");

  TH1F* B_histoTOB = new TH1F("B_histoTOB",plottitle,
			      BHLTLinesVectorDec.size(),1.,BHLTLinesVectorDec.size()+1);
  
  for(Int_t i(0);i<(Int_t)BHLTLinesVectorDec.size();i++){
    BHLTLinesVectorDec[i].Result = GetSignalYieldOneGauss( particle, tree, globalcuts&&triggercuts&&BHLTLinesVectorDec[i].GetTCut()&&(!(BHLTLinesVectorHLTTOS[i].GetTCut())&&!(BHLTLinesVectorHLTTIS[i].GetTCut())) );
    B_histoTOB->Fill(i+1,((Double_t)BHLTLinesVectorDec[i].Result.Yield)/n_B_Events_sel.Yield);
    B_histoTOB->GetXaxis()->SetBinLabel(i+1,BHLTLinesVectorDec[i].ShortName);
  }

  for(Int_t i(0);i<(Int_t)BHLTLinesVectorHLTTOS.size();i++){
    cout << BHLTLinesVectorHLTTOS[i].ShortName << " : ";
    PlotResult(BHLTLinesVectorHLTTOS[i].Result,GetSignalYieldOneGauss( particle, tree, globalcuts&&(!(triggercuts&&BHLTLinesVectorHLTTOS[i].GetTCut()))),kFALSE);
    cout << " | ";
    PlotResult(BHLTLinesVectorHLTTIS[i].Result,GetSignalYieldOneGauss( particle, tree, globalcuts&&(!(triggercuts&&BHLTLinesVectorHLTTIS[i].GetTCut()))),kFALSE);
    cout << " | ";
    PlotResult(BHLTLinesVectorDec[i].Result,GetSignalYieldOneGauss( particle, tree, globalcuts&&(!(triggercuts&&BHLTLinesVectorDec[i].GetTCut()&&(!(BHLTLinesVectorHLTTOS[i].GetTCut())&&!(BHLTLinesVectorHLTTIS[i].GetTCut()))))));
  }
    
  B_histoTOB->SetFillColor(kBlue);
  B_histoTOB->SetMinimum(0.);
  B_histoTOB->SetMaximum(1.);
  
  THStack* B_stack = new THStack("B_stack",plottitle);
  B_stack->Add(B_histoTOS);
  B_stack->Add(B_histoTIS);
  B_stack->Add(B_histoTOB);
  B_stack->SetMinimum(0.);
  B_stack->SetMaximum(1.05);

  TLegend* B_legend = new TLegend(0.84,0.75,0.99,0.9); 
  B_legend->AddEntry(B_histoTOB,"TOS or TIS or TOB","f");
  B_legend->AddEntry(B_histoTIS,"TOS or TIS","f");
  B_legend->AddEntry(B_histoTOS,"TOS","f");
  
  TCanvas* c_B = new TCanvas("c_B","c_B",1920.,1080.);
  
  c_B->cd();
  B_stack->Draw();
  B_legend->Draw();

  TString _cutstitle(cutstitle); 
  TString _normalizationtitle(normalizationtitle);
 
  _cutstitle.ReplaceAll(" ","_");
  _cutstitle.ReplaceAll("(","-");
  _cutstitle.ReplaceAll(")","-");
  _normalizationtitle.ReplaceAll(" ","_");
  _normalizationtitle.ReplaceAll("(","-");
  _normalizationtitle.ReplaceAll(")","-");

  TString outputname("plots/");
  outputname += outputfileprefix;
  outputname += "-";
  outputname += particle;
  outputname += "_";
  outputname += triggertype;
  outputname += "_";
  outputname += _cutstitle;
  if(_cutstitle != "")
    outputname += "_";
  outputname += "For_";
  outputname += _normalizationtitle;
  outputname += ".eps";

  c_B->SaveAs(outputname);
  
  delete B_histoTOS;
  delete B_histoTIS;
  delete B_histoTOB;
  delete B_stack;
  delete B_legend;
  delete c_B;
}



void TriggerComposition( TString const& filename ){
  gROOT->SetStyle("Plain"); 
  gStyle->SetOptStat(0);
  gStyle->SetTitleX(0.5);
  gStyle->SetTitleAlign(23); 
  gStyle->SetTitleW(1.);
  gStyle->SetTitleBorderSize(0);
  gStyle->SetPaintTextFormat("5.1f");
  gStyle->SetStatFontSize(0.15);
  gStyle->SetTitleFontSize(0.07);
  gStyle->SetPadTickY(1);
  gStyle->SetPadRightMargin(0.17);
  gStyle->SetPadBottomMargin(0.14);
  
  TFile* file = new TFile(filename.Data());
  
  Setoutputfileprefix( filename );
  
  //TTree* Bplus = (TTree*) file->Get("BuTuple/DecayTree");
  //TTree* B_s0 = (TTree*) file->Get("BsTuple/DecayTree");
  TTree* B_s0 = (TTree*) file->Get("DecayTree");
  //TTree* B = (TTree*) file->Get("Bs_MuMuDet/DecayTree");
  //TCut Bplus_sel_cuts("(Kplus_P > 10000) && (Kplus_PT > 1000 ) && (Bplus_LOKI_DTF_CHI2NDOF < 5 ) && (muminus_PT > 500. && muplus_PT > 500.) && ( Bplus_MINIPCHI2NEXTBEST > 50 || Bplus_MINIPCHI2NEXTBEST < 0 ) && (Bplus_LOKI_DTF_CTAU/0.299792458 > 0.3)");
  //TCut B_s0_sel_cuts("(B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (B_s0_LOKI_DTF_CHI2NDOF < 5.) && (B_s0_LOKI_DTF_CTAU/0.299792458>0.3) && (B_s0_LOKI_DTF_CTAU/0.299792458<14.) && (TMath::Abs(phi_1020_M - 1020.) < 12.) && (TMath::Abs(J_psi_1S_MM - 3090) < 60.) && (muplus_TRACK_CHI2NDOF<4.) && (muminus_TRACK_CHI2NDOF<4.) && (Kplus_TRACK_CHI2NDOF<4.) && (Kminus_TRACK_CHI2NDOF<4.)");
  TCut B_s0_sel_cuts("(B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && ( B_s0_MINIPCHI2NEXTBEST > 50 || B_s0_MINIPCHI2NEXTBEST < 0 ) && (B_s0_LOKI_DTF_CTAU/0.299792458 > 0.3) && (B_s0_LOKI_DTF_CTAU/0.299792458 < 14.) && TMath::Abs(J_psi_1S_MM - 3090) < 60 && klClone == 0 && hasBestVtxChi2 == 1 && TMath::Abs(phi_1020_M - 1020.) < 30. && (muplus_TRACK_CHI2NDOF<4) && (muminus_TRACK_CHI2NDOF<4) && (Kplus_TRACK_CHI2NDOF<4) && (Kminus_TRACK_CHI2NDOF<4)");
  //TCut B_sel_cuts("(B_LifetimeFit_ctau/0.299792458 > 0.3)");
  FillPlotTriggerLines( "B_s0", "HLT2", B_s0, B_s0_sel_cuts, "", "" );
  FillPlotTriggerLines( "B_s0", "HLT1", B_s0, B_s0_sel_cuts, "", "" );
  FillPlotTriggerLines( "B_s0", "HLT2", B_s0, B_s0_sel_cuts&&"(B_s0Hlt1DiMuonHighMassDecision_Dec||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS)", "", "", "Hlt1DiMuonHighMass or Hlt1TrackMuon or Hlt1TrackAllL0", "Hlt1DiMuonHighMass or Hlt1TrackMuon or Hlt1TrackAllL0" );
  FillPlotTriggerLines( "B_s0", "HLT1", B_s0, B_s0_sel_cuts&&"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS)", "", "", "Hlt2DiMuonDetachedJPsi", "Hlt2DiMuonDetachedJPsi" );
  //FillPlotTriggerLines( "B_s0", "HLT2", B_s0, B_s0_sel_cuts&&"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_Dec)", "", "", "Hlt2DiMuonDetachedJPsi and Hlt1DiMuonHighMass", "Hlt2DiMuonDetachedJPsi and Hlt1DiMuonHighMass" );
  //FillPlotTriggerLines( "B_s0", "HLT1", B_s0, B_s0_sel_cuts&&"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_Dec)", "", "", "Hlt2DiMuonDetachedJPsi and Hlt1DiMuonHighMass", "Hlt2DiMuonDetachedJPsi and Hlt1DiMuonHighMass" );
  
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS && B_s0Hlt2DiMuonJPsiDecision_TOS && B_s0Hlt1DiMuonHighMassDecision_Dec)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS && !B_s0Hlt2DiMuonJPsiDecision_TOS && B_s0Hlt1DiMuonHighMassDecision_Dec)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(!B_s0Hlt2DiMuonDetachedJPsiDecision_TOS && B_s0Hlt2DiMuonJPsiDecision_TOS && B_s0Hlt1DiMuonHighMassDecision_Dec)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS && (B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS) && !B_s0Hlt1DiMuonHighMassDecision_Dec)");
  
  /*
  FillPlotTriggerLines( "B_s0", "HLT2", B_s0, B_s0_sel_cuts, "", "" );
  FillPlotTriggerLines( "B_s0", "HLT1", B_s0, B_s0_sel_cuts, "", "" );
  FillPlotTriggerLines( "B_s0", "HLT2", B_s0, B_s0_sel_cuts&&"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS)", "", "", "TS1", "TS1" );
  FillPlotTriggerLines( "B_s0", "HLT1", B_s0, B_s0_sel_cuts&&"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS)", "", "", "TS1", "TS1" );
  FillPlotTriggerLines( "B_s0", "HLT2", B_s0, B_s0_sel_cuts&&"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS)", "", "", "TS2", "TS2" );
  FillPlotTriggerLines( "B_s0", "HLT1", B_s0, B_s0_sel_cuts&&"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS)", "", "", "TS2", "TS2" );
  FillPlotTriggerLines( "B_s0", "HLT2", B_s0, B_s0_sel_cuts&&"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS)", "", "", "TS3", "TS3" );
  FillPlotTriggerLines( "B_s0", "HLT1", B_s0, B_s0_sel_cuts&&"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS)", "", "", "TS3", "TS3" );
  FillPlotTriggerLines( "B_s0", "HLT2", B_s0, B_s0_sel_cuts&&"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2TopoMu2BodyBBDTDecision_TOS||B_s0Hlt2TopoMu3BodyBBDTDecision_TOS||B_s0Hlt2TopoMu4BodyBBDTDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS)", "", "", "TS4", "TS4" );
  FillPlotTriggerLines( "B_s0", "HLT1", B_s0, B_s0_sel_cuts&&"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2TopoMu2BodyBBDTDecision_TOS||B_s0Hlt2TopoMu3BodyBBDTDecision_TOS||B_s0Hlt2TopoMu4BodyBBDTDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS)", "", "", "TS4", "TS4" );
  
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2TopoMu2BodyBBDTDecision_TOS||B_s0Hlt2TopoMu3BodyBBDTDecision_TOS||B_s0Hlt2TopoMu4BodyBBDTDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS)");
  */
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonJPsiDecision_TOS && B_s0Hlt1DiMuonHighMassDecision_Dec)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS && B_s0Hlt1DiMuonHighMassDecision_TOS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS && B_s0Hlt1TrackMuonDecision_TOS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS && B_s0Hlt1TrackAllL0Decision_TOS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS))");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS))");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"((B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS))");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"((B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiHighPTDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS))");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"((B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiHighPTDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS||B_s0Hlt2TopoMu2BodyBBDTDecision_TOS||B_s0Hlt2TopoMu3BodyBBDTDecision_TOS||B_s0Hlt2TopoMu4BodyBBDTDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS))");
    
  /*
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonJPsiDecision_TOS && B_s0Hlt1DiMuonHighMassDecision_TOS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS && B_s0Hlt1DiMuonHighMassDecision_TOS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS))");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS))");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_Dec||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS||B_s0Hlt2TopoMu2BodyBBDTDecision_TOS||B_s0Hlt2TopoMu3BodyBBDTDecision_TOS||B_s0Hlt2TopoMu4BodyBBDTDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS||B_s0Hlt2TopoMu2BodyBBDTDecision_TOS||B_s0Hlt2TopoMu3BodyBBDTDecision_TOS||B_s0Hlt2TopoMu4BodyBBDTDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_Dec||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS||B_s0Hlt2Global_TIS) && (B_s0Hlt1DiMuonHighMassDecision_Dec||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS||B_s0Hlt1Global_TIS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS||B_s0Hlt2TopoMu2BodyBBDTDecision_TOS||B_s0Hlt2TopoMu3BodyBBDTDecision_TOS||B_s0Hlt2TopoMu4BodyBBDTDecision_TOS||B_s0Hlt2Global_TIS) && (B_s0Hlt1DiMuonHighMassDecision_Dec||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS||B_s0Hlt1Global_TIS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiHighPTDecision_TOS||B_s0Hlt2TopoMu2BodyBBDTDecision_TOS||B_s0Hlt2TopoMu3BodyBBDTDecision_TOS||B_s0Hlt2TopoMu4BodyBBDTDecision_TOS||B_s0Hlt2Global_TIS) && (B_s0Hlt1DiMuonHighMassDecision_Dec||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS||B_s0Hlt1Global_TIS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonDetachedDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiHighPTDecision_TOS||B_s0Hlt2TopoMu2BodyBBDTDecision_TOS||B_s0Hlt2TopoMu3BodyBBDTDecision_TOS||B_s0Hlt2TopoMu4BodyBBDTDecision_TOS||B_s0Hlt2Global_TIS) && (B_s0Hlt1DiMuonHighMassDecision_Dec||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS||B_s0Hlt1Global_TIS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonDetachedDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiHighPTDecision_TOS||B_s0Hlt2SingleMuonDecision_TOS||B_s0Hlt2TopoMu2BodyBBDTDecision_TOS||B_s0Hlt2TopoMu3BodyBBDTDecision_TOS||B_s0Hlt2TopoMu4BodyBBDTDecision_TOS||B_s0Hlt2Global_TIS) && (B_s0Hlt1DiMuonHighMassDecision_Dec||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS||B_s0Hlt1Global_TIS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonDetachedDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiHighPTDecision_TOS||B_s0Hlt2SingleMuonDecision_TOS||B_s0Hlt2TopoMu2BodyBBDTDecision_TOS||B_s0Hlt2TopoMu3BodyBBDTDecision_TOS||B_s0Hlt2TopoMu4BodyBBDTDecision_TOS||B_s0Hlt2Global_TIS) && (B_s0Hlt1DiMuonHighMassDecision_Dec||B_s0Hlt1DiMuonLowMassDecision_Dec||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS||B_s0Hlt1Global_TIS)");
  
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS))");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_TOS||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS) && (B_s0Hlt1DiMuonHighMassDecision_Dec||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS||B_s0Hlt2Global_TIS) && (B_s0Hlt1DiMuonHighMassDecision_Dec||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS||B_s0Hlt1Global_TIS)");
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,"(B_s0Hlt2DiMuonDetachedJPsiDecision_TOS||B_s0Hlt2DiMuonJPsiDecision_TOS||B_s0Hlt2TopoMu2BodyBBDTDecision_TOS||B_s0Hlt2TopoMu3BodyBBDTDecision_TOS||B_s0Hlt2TopoMu4BodyBBDTDecision_TOS||B_s0Hlt2Global_TIS) && (B_s0Hlt1DiMuonHighMassDecision_Dec||B_s0Hlt1TrackMuonDecision_TOS||B_s0Hlt1TrackAllL0Decision_TOS||B_s0Hlt1Global_TIS)");
  
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,);
  PlotResult("B_s0", B_s0, B_s0_sel_cuts,);
  */
}

int main(int argc, char *argv[])
{
  if(argc == 2)
    TriggerComposition(argv[1]);
  
}
