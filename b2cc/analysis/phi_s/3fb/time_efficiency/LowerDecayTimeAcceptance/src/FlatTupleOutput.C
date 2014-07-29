#include "particleProperties.C"
#include "TTreeFormula.h"
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
#include "TKey.h"

#include <iostream>
#include <fstream>

using namespace std;

TString FormatOutput(particleProperties* prop, TString filename, Bool_t MCtruth, TString suffix, TString suffix2 = "", TString suffix3 = "")
{
  TString tmp("data/");
  tmp += prop->name;
  tmp += "FlatTuple_";
  if(filename.Contains("MC")){
    tmp += "MC";
    if(MCtruth)
      tmp += "truth";
  }else
    tmp += "Data";
  if(suffix2 != ""){
    tmp += "_";
    tmp += suffix2;
  }
  if(suffix3 != ""){
    tmp += "_";
    tmp += suffix3;
  }
  tmp += "_";
  tmp += suffix;
  tmp += ".txt";

  return tmp;
}

Bool_t selectorPassed(TTreeFormula* select)
{
  Int_t ndata = select->GetNdata();
  Bool_t keep = kFALSE;
  for(Int_t current = 0; current<ndata && !keep; current++) {
    keep |= (select->EvalInstance(current) != 0);
  }
  return keep;
}

void DumpData(TTree* tree_, TTree* tree_excl, TString const& inputfilename, particleProperties* prop, Bool_t MCtruth = kFALSE, TString suffix = "", Bool_t IPzWeight = kFALSE)
{
  TTree* tree = tree_;
  
  TString tmp("");
  if(IPzWeight)
    tmp = "IPzWeight";
  
  ofstream outfile_NoTSNoStrip(FormatOutput(prop,inputfilename,MCtruth,"NoTSNoStrip",suffix,tmp));
  ofstream outfile_TS0(FormatOutput(prop,inputfilename,MCtruth,"TS0",suffix,tmp));
  ofstream outfile_TS1(FormatOutput(prop,inputfilename,MCtruth,"TS1",suffix,tmp));
  ofstream outfile_TS2(FormatOutput(prop,inputfilename,MCtruth,"TS2",suffix,tmp));
  ofstream outfile_TS2S(FormatOutput(prop,inputfilename,MCtruth,"TS2S",suffix,tmp));
  ofstream outfile_Trigger(FormatOutput(prop,inputfilename,MCtruth,"Trigger",suffix,tmp));
  ofstream outfile_Stripping(FormatOutput(prop,inputfilename,MCtruth,"Stripping",suffix,tmp));
  ofstream outfile_TriggerStripping(FormatOutput(prop,inputfilename,MCtruth,"TriggerStripping",suffix,tmp));
  ofstream outfile_TriggerNoExcl(FormatOutput(prop,inputfilename,MCtruth,"TriggerNoExcl",suffix,tmp));
  ofstream outfile_StrippingNoExcl(FormatOutput(prop,inputfilename,MCtruth,"StrippingNoExcl",suffix,tmp));
  ofstream outfile_TriggerStrippingNoExcl(FormatOutput(prop,inputfilename,MCtruth,"TriggerStrippingNoExcl",suffix,tmp));
  ofstream outfile_TS1TimeEvolution(FormatOutput(prop,inputfilename,MCtruth,"TS1TimeEvolution",suffix,tmp));

  Double_t B_CTAU, B_CTAUERR, B_M, B_IPzWeight;
  Double_t B_Hlt1TrackMuon_TOS,B_Hlt1TrackAllL0_TOS, B_Hlt1DiMuonHighMass_TOS;
  Double_t B_Hlt2DiMuonJPsi_TOS, B_Hlt2DiMuonDetachedJPsi_TOS;

  tree->SetBranchAddress(prop->tupleName+"_M", &B_M);
  tree->SetBranchAddress(prop->tupleName+"_ct", &B_CTAU);
  tree->SetBranchAddress(prop->tupleName+"_ctError", &B_CTAUERR);
  tree->SetBranchAddress(prop->tupleName+"_Hlt1TrackMuon_TOS", &B_Hlt1TrackMuon_TOS);
  tree->SetBranchAddress(prop->tupleName+"_Hlt1TrackAllL0_TOS", &B_Hlt1TrackAllL0_TOS);
  tree->SetBranchAddress(prop->tupleName+"_Hlt1DiMuonHighMass_TOS", &B_Hlt1DiMuonHighMass_TOS);
  tree->SetBranchAddress(prop->tupleName+"_Hlt2DiMuonJPsi_TOS", &B_Hlt2DiMuonJPsi_TOS);
  tree->SetBranchAddress(prop->tupleName+"_Hlt2DiMuonDetachedJPsi_TOS", &B_Hlt2DiMuonDetachedJPsi_TOS);
  if(IPzWeight&&suffix.Contains("4bin")){
    cout << "Using 4bin DOCAz binning" << endl;
    tree->SetBranchAddress(prop->tupleName+"_IPzWeight_Correlation_4bin", &B_IPzWeight);
  }else if(IPzWeight){
    cout << "Using 1bin DOCAz binning" << endl;
    tree->SetBranchAddress(prop->tupleName+"_IPzWeight_Correlation_1bin", &B_IPzWeight);
  }

  Long64_t RunNumber;
  tree->SetBranchAddress("Ev_RunNumber", &RunNumber);
  Int_t MgPolarity;
  tree->SetBranchAddress("Ev_MgPolarity", &MgPolarity);
  
  B_IPzWeight = 1.;
  
  TTreeFormula* select = new TTreeFormula("select",prop->selection,tree);
  TTreeFormula* selectstrip = new TTreeFormula("selectstrip",prop->selectionstrip,tree);
  TTreeFormula* selectstripexcl = new TTreeFormula("selectstripexcl",prop->selectionstripexcl,tree);
  TTreeFormula* selectrunperiod = new TTreeFormula("selectrunperiod","runNumber > 95000 && runNumber < 111000 || runNumber > 119000",tree);
  TTreeFormula* selectmctruth = 0;
  if(MCtruth)
    selectmctruth = new TTreeFormula("selectmctruth",prop->selectionmctruth,tree);

  Long64_t nentries = tree->GetEntriesFast();
  Long64_t nentries_excl = tree_excl->GetEntriesFast();

  cout << nentries << " " << nentries_excl << endl;
  
  Bool_t Strip, StripExcl;
  Bool_t TS0, TS1, TS2, TS2bis;
  Int_t Trig_Cat_A,Trig_Cat_B;
  Int_t Strip_Cat_A,Strip_Cat_B;
  Int_t TrigStrip_Cat_A,TrigStrip_Cat_B;

  Double_t Weight;
  Double_t sumIPzWeights(0.);
  Double_t counter(0.);
  Double_t counterN(0.);
  Double_t counter2(0.);
  
  for (Long64_t ientry=0; ientry<nentries_excl;ientry++) {
    tree->LoadTree(ientry);
    
    if (MCtruth)
      if (!selectorPassed(selectmctruth)) continue;
    
    if (!selectorPassed(select)) continue;
    
    tree->GetEntry(ientry);
    
    TS0 = B_Hlt2DiMuonJPsi_TOS && B_Hlt1DiMuonHighMass_TOS;
    TS1 = B_Hlt2DiMuonDetachedJPsi_TOS && B_Hlt1DiMuonHighMass_TOS;
    Weight = selectorPassed(selectrunperiod)?5.:1.;
    
    if(TS0){
      counter++;
      if(Weight<2.)
        counterN++;
    }
    if(TS1){
      counter2++;
      sumIPzWeights += B_IPzWeight;
    }
  }
  
  counterN /= counter;
  sumIPzWeights /= counter2;
  
  Double_t scale(counterN+5.*(1-counterN));
  Double_t scaleIPzWeight(sumIPzWeights);
  cout << scale << endl;
  cout << scaleIPzWeight << endl;
  
  for (Long64_t ientry=0; ientry<nentries;ientry++) {
    tree->LoadTree(ientry);
    
    if (MCtruth)
      if (!selectorPassed(selectmctruth)) continue;
    
    if (!selectorPassed(select)) continue;
    
    tree->GetEntry(ientry);
    
    Strip = selectorPassed(selectstrip);
    StripExcl = selectorPassed(selectstripexcl);
    TS0 = B_Hlt2DiMuonJPsi_TOS && B_Hlt1DiMuonHighMass_TOS;
    TS1 = B_Hlt2DiMuonDetachedJPsi_TOS && B_Hlt1DiMuonHighMass_TOS;
    TS2 = B_Hlt2DiMuonDetachedJPsi_TOS && (B_Hlt1DiMuonHighMass_TOS||B_Hlt1TrackMuon_TOS||B_Hlt1TrackAllL0_TOS);
    TS2bis = (B_Hlt2DiMuonDetachedJPsi_TOS) && (B_Hlt1TrackAllL0_TOS||B_Hlt1TrackMuon_TOS) && !(B_Hlt1DiMuonHighMass_TOS);

    outfile_NoTSNoStrip << B_M << " " << B_CTAU << " " << (B_IPzWeight/scaleIPzWeight) << endl;
    if(TS0&&Strip)
      outfile_TS0 << B_M << " " << B_CTAU << " " << (B_IPzWeight/scaleIPzWeight) << endl;
    if(TS1&&Strip){
      outfile_TS1 << B_M << " " << B_CTAU << " " << (B_IPzWeight/scaleIPzWeight) << endl;
      outfile_TS1TimeEvolution << B_M << " " << B_CTAU << " " << RunNumber << " " << MgPolarity << endl;
    }if(TS2&&Strip){
      outfile_TS2 << B_M << " " << B_CTAU << " " << (B_IPzWeight/scaleIPzWeight) << endl;
      outfile_TS2S << B_M << " " << B_CTAU << " " << (B_IPzWeight/scaleIPzWeight) << " ";
      if(TS2bis)
        outfile_TS2S << 2 << endl;
      else
        outfile_TS2S << 1 << endl;
    }
  }

  tree = tree_excl;
  
  tree->SetBranchAddress(prop->tupleName+"_M", &B_M);
  tree->SetBranchAddress(prop->tupleName+"_ct", &B_CTAU);
  tree->SetBranchAddress(prop->tupleName+"_ctError", &B_CTAUERR);
  tree->SetBranchAddress(prop->tupleName+"_Hlt1TrackMuon_TOS", &B_Hlt1TrackMuon_TOS);
  tree->SetBranchAddress(prop->tupleName+"_Hlt1TrackAllL0_TOS", &B_Hlt1TrackAllL0_TOS);
  tree->SetBranchAddress(prop->tupleName+"_Hlt1DiMuonHighMass_TOS", &B_Hlt1DiMuonHighMass_TOS);
  tree->SetBranchAddress(prop->tupleName+"_Hlt2DiMuonJPsi_TOS", &B_Hlt2DiMuonJPsi_TOS);
  tree->SetBranchAddress(prop->tupleName+"_Hlt2DiMuonDetachedJPsi_TOS", &B_Hlt2DiMuonDetachedJPsi_TOS);
  if(IPzWeight&&suffix.Contains("4bin")){
    cout << "Using 4bin DOCAz binning" << endl;
    tree->SetBranchAddress(prop->tupleName+"_IPzWeight_Correlation_4bin", &B_IPzWeight);
  }else if(IPzWeight){
    cout << "Using 1bin DOCAz binning" << endl;
    tree->SetBranchAddress(prop->tupleName+"_IPzWeight_Correlation_1bin", &B_IPzWeight);
  }
  
  select = new TTreeFormula("select",prop->selection,tree);
  selectstrip = new TTreeFormula("selectstrip",prop->selectionstrip,tree);
  selectstripexcl = new TTreeFormula("selectstripexcl",prop->selectionstripexcl,tree);
  selectrunperiod = new TTreeFormula("selectrunperiod","runNumber > 95000 && runNumber < 111000 || runNumber > 119000",tree);
  if(MCtruth)
    selectmctruth = new TTreeFormula("selectmctruth",prop->selectionmctruth,tree);
  
  sumIPzWeights = 0.;
  counter = 0.;
  counterN = 0.;
  counter2 = 0.;
  
  for (Long64_t ientry=0; ientry<nentries_excl;ientry++) {
    tree->LoadTree(ientry);
    
    if (MCtruth)
      if (!selectorPassed(selectmctruth)) continue;
    
    if (!selectorPassed(select)) continue;
    
    tree->GetEntry(ientry);
    
    TS0 = B_Hlt2DiMuonJPsi_TOS && B_Hlt1DiMuonHighMass_TOS;
    TS1 = B_Hlt2DiMuonDetachedJPsi_TOS && B_Hlt1DiMuonHighMass_TOS;
    Weight = selectorPassed(selectrunperiod)?5.:1.;
    
    if(TS0){
      counter++;
      if(Weight<2.)
        counterN++;
    }
    if(TS1){
      counter2++;
      sumIPzWeights += B_IPzWeight;
    }
  }
  
  counterN /= counter;
  sumIPzWeights /= counter2;
  
  scale = counterN+5.*(1-counterN);
  scaleIPzWeight = sumIPzWeights;
  cout << scale << endl;
  cout << scaleIPzWeight << endl;
  
  for (Long64_t ientry=0; ientry<nentries_excl;ientry++) {
    tree->LoadTree(ientry);
    
    if (MCtruth)
      if (!selectorPassed(selectmctruth)) continue;
    
    if (!selectorPassed(select)) continue;
    
    tree->GetEntry(ientry);
    
    Strip = selectorPassed(selectstrip);
    StripExcl = selectorPassed(selectstripexcl);
    TS0 = B_Hlt2DiMuonJPsi_TOS && B_Hlt1DiMuonHighMass_TOS;
    TS1 = B_Hlt2DiMuonDetachedJPsi_TOS && B_Hlt1DiMuonHighMass_TOS;
    TS2 = B_Hlt2DiMuonDetachedJPsi_TOS && (B_Hlt1DiMuonHighMass_TOS||B_Hlt1TrackMuon_TOS||B_Hlt1TrackAllL0_TOS);
    TS2bis = (B_Hlt2DiMuonDetachedJPsi_TOS) && (B_Hlt1TrackAllL0_TOS||B_Hlt1TrackMuon_TOS) && !(B_Hlt1DiMuonHighMass_TOS);
    Weight = selectorPassed(selectrunperiod)?5.:1.;

    if(TS1&&TS0&&StripExcl)
      Trig_Cat_A = 1;
    else if(!TS1&&TS0&&StripExcl)
      Trig_Cat_A = 2;
    else 
      Trig_Cat_A = 0;
    
    if(TS2bis&&StripExcl)
      Trig_Cat_B = 1;
    else if(TS0&&StripExcl)
      Trig_Cat_B = 2;
    else if((TS1||TS2bis)&&StripExcl)
      Trig_Cat_B = 3;
    else 
      Trig_Cat_B = 0;
    
    outfile_Trigger << B_M << " " << B_CTAU << " " << Trig_Cat_A << " " << Trig_Cat_B << " " << (B_IPzWeight/scaleIPzWeight) << " " << (B_IPzWeight/scaleIPzWeight)*(Weight/scale) << endl;

    if(TS1&&TS0)
      Trig_Cat_A = 1;
    else if(!TS1&&TS0)
      Trig_Cat_A = 2;
    else 
      Trig_Cat_A = 0;
    
    if(TS2bis)
      Trig_Cat_B = 1;
    else if(TS0)
      Trig_Cat_B = 2;
    else if((TS1||TS2bis))
      Trig_Cat_B = 3;
    else 
      Trig_Cat_B = 0;
    
    outfile_TriggerNoExcl << B_M << " " << B_CTAU << " " << Trig_Cat_A << " " << Trig_Cat_B << " " << (B_IPzWeight/scaleIPzWeight) << " " << (B_IPzWeight/scaleIPzWeight)*(Weight/scale) << endl;
    
    if(Strip&&TS1&&StripExcl)
      Strip_Cat_A = 1;
    else if(!Strip&&TS1&&StripExcl)
      Strip_Cat_A = 2;
    else 
      Strip_Cat_A = 0;

    if(Strip&&TS2bis&&StripExcl)
      Strip_Cat_B = 1;
    else if(!Strip&&TS2bis&&StripExcl)
      Strip_Cat_B = 2;
    else if((TS1||TS2bis)&&StripExcl)
      Strip_Cat_B = 3;
    else 
      Strip_Cat_B = 0;

    outfile_Stripping << B_M << " " << B_CTAU << " " << Strip_Cat_A << " " << Strip_Cat_B << " " << (B_IPzWeight/scaleIPzWeight) << endl;
    
    if(Strip&&TS1)
      Strip_Cat_A = 1;
    else if(!Strip&&TS1)
      Strip_Cat_A = 2;
    else 
      Strip_Cat_A = 0;

    if(Strip&&TS2bis)
      Strip_Cat_B = 1;
    else if(!Strip&&TS2bis)
      Strip_Cat_B = 2;
    else if((TS1||TS2bis))
      Strip_Cat_B = 3;
    else 
      Strip_Cat_B = 0;

    outfile_StrippingNoExcl << B_M << " " << B_CTAU << " " << Strip_Cat_A << " " << Strip_Cat_B << " " << (B_IPzWeight/scaleIPzWeight) << endl;
    
    if(Strip&&TS1&&TS0&&StripExcl)
      TrigStrip_Cat_A = 1;
    else if(!(Strip&&TS1)&&TS0&&StripExcl)
      TrigStrip_Cat_A = 2;
    else 
      TrigStrip_Cat_A = 0;

    if(Strip&&TS2bis&&StripExcl)
      TrigStrip_Cat_B = 1;
    else if(TS0&&StripExcl)
      TrigStrip_Cat_B = 2;
    else 
      TrigStrip_Cat_B = 0;

    outfile_TriggerStripping << B_M << " " << B_CTAU << " " << TrigStrip_Cat_A << " " << TrigStrip_Cat_B << " " << Weight/scale << " " << IPzWeight*Weight/scale << endl;

    if(Strip&&TS1&&TS0)
      TrigStrip_Cat_A = 1;
    else if(!(Strip&&TS1)&&TS0)
      TrigStrip_Cat_A = 2;
    else 
      TrigStrip_Cat_A = 0;

    if(Strip&&TS2bis)
      TrigStrip_Cat_B = 1;
    else if(TS0)
      TrigStrip_Cat_B = 2;
    else 
      TrigStrip_Cat_B = 0;
    
    outfile_TriggerStrippingNoExcl << B_M << " " << B_CTAU << " " << TrigStrip_Cat_A << " " << TrigStrip_Cat_B << " " << Weight/scale << " " << IPzWeight*Weight/scale << endl;
  }
  outfile_NoTSNoStrip.close();
  outfile_TS0.close();
  outfile_TS1.close();
  outfile_TS2.close();
  outfile_TS2S.close();
  outfile_Trigger.close();
  outfile_Stripping.close();
  outfile_TriggerStripping.close();
  outfile_TriggerNoExcl.close();
  outfile_StrippingNoExcl.close();
  outfile_TriggerStrippingNoExcl.close();
  outfile_TS1TimeEvolution.close();
}
   
void TupleOutput(TString inputfilename, TString inputfilename_excl, particleProperties* prop, TString suffix, Bool_t IPzWeight){

  TFile* file = new TFile(inputfilename);
  TIterator* iter = file->GetListOfKeys()->MakeIterator();
  TKey* key = (TKey*)iter->Next();
  TTree* tree = (TTree*)file->Get(key->GetName());

  TFile* file_excl = new TFile(inputfilename_excl);
  TIterator* iter_excl = file_excl->GetListOfKeys()->MakeIterator();
  TKey* key_excl = (TKey*)iter_excl->Next();
  TTree* tree_excl = (TTree*)file_excl->Get(key_excl->GetName());
  
  if(inputfilename.Contains("MC")){
    DumpData(tree,tree_excl,inputfilename,prop,kFALSE,suffix,IPzWeight);
    DumpData(tree,tree_excl,inputfilename,prop,kTRUE,suffix,IPzWeight);
  }else
    DumpData(tree,tree_excl,inputfilename,prop,kFALSE,suffix,IPzWeight);
}

int main(int argc, char *argv[])
{
  if(argc < 2)
    return 0;
  
  TString filename(argv[1]);
  TString filename_excl(argv[2]);
  TString IPzWeight_("");
  if(argc > 3)
    IPzWeight_ += argv[3];
  Bool_t IPzWeight;
  if(IPzWeight_.Contains("1"))
    IPzWeight = kTRUE;
  else
    IPzWeight = kFALSE;
  TString suffix("");
  if(argc > 4)
    suffix += argv[4];
    
  particleProperties* prop = new particleProperties(filename);

  cout << prop->name << endl;
  
  TupleOutput(filename,filename_excl,prop,suffix,IPzWeight);
  
  return 1;
}
