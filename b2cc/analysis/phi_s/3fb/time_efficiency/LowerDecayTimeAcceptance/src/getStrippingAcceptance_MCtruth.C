#include "particleProperties.C"

#include "TString.h"
#include "TCut.h"
#include "TH1I.h"
#include "TH2I.h"
#include "TProfile.h"
#include "THStack.h"
#include "TPaveStats.h"
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

//#include "RooGlobalFunc.h"
#include "RooArgSet.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooDataHist.h"
#include "RooProdPdf.h"
#include "RooAddPdf.h"
#include "RooGaussian.h"
#include "RooEfficiency.h"
#include "RooUnblindUniform.h"
#include "RooChebychev.h"
#include "RooConstVar.h"
#include "RooExponential.h"
#include "TCanvas.h"
#include "TAxis.h"
#include "RooPlot.h"
#include "RooFitResult.h"
#include "RooStats/SPlot.h"
#include "RooCategory.h"
#include "RooAbsBinning.h"
#include "RooBinning.h"
#include "RooSimultaneous.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
using namespace RooFit ;

void getHltAcceptance(TString const& filename, particleProperties* prop, Int_t const& bins = 20)
{
  TString particle = prop->GetName();
  Double_t mass = prop->GetMass();
  Double_t tau_PDG = prop->GetTau();
  
  Double_t t_min(prop->t_min);
  Double_t t_max(prop->t_max);
  
  TObjArray* tokens = filename.Tokenize("/");
  TString prefix(((TObjString*)tokens->At(tokens->GetEntriesFast()-1))->GetString());
  prefix.ReplaceAll(".txt","");
  prefix.ReplaceAll("_Stripping","");
  prefix.ReplaceAll("Tuple","_StrippingPropertimeAcceptance");
  
  TString outputname("ROOT/");
  if(filename.Contains("MCToys"))
    outputname += "toys/";
  outputname += prefix;
  outputname += "_";
  outputname += bins;
  outputname += "bins.root";
  TFile* outputfile = new TFile(outputname,"RECREATE");

  cout << outputname << endl;
  
  RooRealVar TAU("B_TAU","#tau",t_min,t_max,"ps") ;
  TAU.setRange("total",t_min,t_max);
  RooRealVar M("B_M","Mass",mass-500.,mass+500.,"MeV/c^{2}") ;
  
  RooRealVar Weight("Weight","Weight",0.,100.,"") ;
  
  RooCategory CatA("CatA","Category A");
  CatA.defineType("CatA0", 0);
  CatA.defineType("CatA1", 1);
  CatA.defineType("CatA2", 2);
  
  RooCategory CatB("CatB","Category B");
  CatB.defineType("CatB0", 0);
  CatB.defineType("CatB1", 1);
  CatB.defineType("CatB2", 2);
  CatB.defineType("CatB3", 3);
  
  RooArgList list("list");
  list.add(M);
  list.add(TAU);
  list.add(CatA);
  list.add(CatB);
  list.add(Weight);  
  
  //RooBinning* binning = new RooBinning(bins,t_min,t_max);
  
  RooBinning* binning = new RooBinning(t_min,t_max);
  Double_t A(TMath::Exp(-t_max/tau_PDG));
  Double_t B(TMath::Exp(-t_min/tau_PDG));
  for(Int_t i(1); i< bins; i++){
    binning->addBoundary(-TMath::Log(((Double_t)i*(A-B)/(Double_t)bins+B))*tau_PDG);
  }
  
  TAU.setBinning(*binning);
  
  RooDataSet* data_ = RooDataSet::read(filename, list);
  RooDataSet* data = new RooDataSet("data", "data", data_, *data_->get(), 0, "Weight");
  
  Double_t n_A_1_S,n_A_2_S,n_B_1_S,n_B_2_S;
  
  Double_t num_Hlt1DiMuon_Hlt2DiMuonDetached,denom_Hlt1DiMuon_Hlt2DiMuonDetached;
  Double_t num_Hlt1DiMuon_notHlt2DiMuonDetached,denom_Hlt1DiMuon_notHlt2DiMuonDetached;
  Double_t num_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached,denom_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached;
  
  Double_t ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S,ratio_Hlt1DiMuon_notHlt2DiMuonDetached_S,ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S;
  
  TH1F* histo_Hlt1DiMuon_Hlt2DiMuonDetached_S = TAU.createHistogram("histo_Hlt1DiMuon_Hlt2DiMuonDetached_S", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1DiMuon_notHlt2DiMuonDetached_S = TAU.createHistogram("histo_Hlt1DiMuon_notHlt2DiMuonDetached_S", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S = TAU.createHistogram("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S", "Hlt Acceptance", *binning);
  
  TString tmp;
  
  tmp = prefix;
  tmp += "_";
  tmp += bins;
  tmp += "bins";
  tmp += "_Hlt1DiMuon_Hlt2DiMuonDetached";
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_S->SetName(tmp);
  tmp = particle;
  tmp += " Hlt1DiMuon_Hlt2DiMuonDetached Acceptance";
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_S->SetTitle(tmp);

  tmp = prefix;
  tmp += "_";
  tmp += bins;
  tmp += "bins";
  tmp += "_Hlt1DiMuon_notHlt2DiMuonDetached";
  histo_Hlt1DiMuon_notHlt2DiMuonDetached_S->SetName(tmp);
  tmp = particle;
  tmp += " Hlt1DiMuon_notHlt2DiMuonDetached Acceptance";
  histo_Hlt1DiMuon_notHlt2DiMuonDetached_S->SetTitle(tmp);
  
  tmp = prefix;
  tmp += "_";
  tmp += bins;
  tmp += "bins";
  tmp += "_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached";
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->SetName(tmp);
  tmp = particle;
  tmp += " Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached Acceptance";
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->SetTitle(tmp);
  
  RooDataSet* data_sub;
  for(Int_t i(0); i< bins; i++){
    tmp = "B_TAU < ";
    tmp += binning->binHigh(i);
    tmp += " && B_TAU > ";
    tmp += binning->binLow(i);
    data_sub = (RooDataSet*)data->reduce(tmp);
    
    TAU.setRange("fit",binning->binLow(i),binning->binHigh(i));
    TAU.setBin(i);
    
    n_A_1_S = ((RooDataSet*)data_sub->reduce("CatA==CatA::CatA1"))->sumEntries();
    n_A_2_S = ((RooDataSet*)data_sub->reduce("CatA==CatA::CatA2"))->sumEntries();
    n_B_1_S = ((RooDataSet*)data_sub->reduce("CatB==CatB::CatB1"))->sumEntries();
    n_B_2_S = ((RooDataSet*)data_sub->reduce("CatB==CatB::CatB2"))->sumEntries();    

    cout << n_A_1_S << " " << n_A_2_S << " " << n_B_1_S << " " << n_B_2_S << endl;
    
    num_Hlt1DiMuon_Hlt2DiMuonDetached = n_A_1_S;
    denom_Hlt1DiMuon_Hlt2DiMuonDetached = n_A_1_S+n_A_2_S;
    num_Hlt1DiMuon_notHlt2DiMuonDetached = n_A_2_S;
    denom_Hlt1DiMuon_notHlt2DiMuonDetached = n_A_1_S+n_A_2_S;
    num_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached = n_B_1_S;
    denom_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached = n_B_2_S;
    
    ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S = (n_A_1_S+n_A_2_S)>0. ?n_A_1_S/(n_A_1_S+n_A_2_S) : 0.;
    ratio_Hlt1DiMuon_notHlt2DiMuonDetached_S = (n_A_1_S+n_A_2_S)>0. ? n_A_2_S/(n_A_1_S+n_A_2_S) : 0.;
    ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S = n_B_2_S>0. ? n_B_1_S/n_B_2_S : 0.;
    
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_S->SetBinContent(i+1,ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S);
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_S->SetBinError(i+1,TMath::Sqrt(TMath::Power((denom_Hlt1DiMuon_Hlt2DiMuonDetached-num_Hlt1DiMuon_Hlt2DiMuonDetached)/(denom_Hlt1DiMuon_Hlt2DiMuonDetached*denom_Hlt1DiMuon_Hlt2DiMuonDetached),2)*n_A_1_S+TMath::Power(num_Hlt1DiMuon_Hlt2DiMuonDetached/(denom_Hlt1DiMuon_Hlt2DiMuonDetached*denom_Hlt1DiMuon_Hlt2DiMuonDetached),2)*n_A_2_S));
    histo_Hlt1DiMuon_notHlt2DiMuonDetached_S->SetBinContent(i+1,ratio_Hlt1DiMuon_notHlt2DiMuonDetached_S);
    histo_Hlt1DiMuon_notHlt2DiMuonDetached_S->SetBinError(i+1,TMath::Sqrt(TMath::Power((denom_Hlt1DiMuon_notHlt2DiMuonDetached-num_Hlt1DiMuon_notHlt2DiMuonDetached)/(denom_Hlt1DiMuon_notHlt2DiMuonDetached*denom_Hlt1DiMuon_notHlt2DiMuonDetached),2)*n_A_1_S+TMath::Power(num_Hlt1DiMuon_notHlt2DiMuonDetached/(denom_Hlt1DiMuon_notHlt2DiMuonDetached*denom_Hlt1DiMuon_notHlt2DiMuonDetached),2)*n_A_2_S));
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->SetBinContent(i+1,ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S);
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->SetBinError(i+1,TMath::Sqrt(TMath::Power(1./denom_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached,2)*n_B_1_S+TMath::Power(num_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached/(denom_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached*denom_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached),2)*n_B_2_S));
  }
    
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_S->Write();
  //histo_Hlt1DiMuon_notHlt2DiMuonDetached_S->Write();
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->Write();
  
  outputfile->Close();
}

int main(int argc, char *argv[])
{
  TString filename(argv[1]);
  
  particleProperties* prop = new particleProperties(filename);
  
  if(argc == 2){
    getHltAcceptance(filename,prop);
  }else if(argc == 3){
    TString bins(argv[2]);
    getHltAcceptance(filename,prop,bins.Atoi());
    
  }
  
  return 1;
}

