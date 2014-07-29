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

#include "RooArgSet.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooProdPdf.h"
#include "RooAddPdf.h"
#include "RooGaussian.h"
#include "RooEfficiency.h"
#include "RooUnblindUniform.h"
#include "RooChebychev.h"
#include "RooConstVar.h"
#include "RooExponential.h"
#include "TAxis.h"
#include "RooPlot.h"
#include "RooFitResult.h"
#include "RooStats/SPlot.h"
#include "RooCategory.h"
#include "RooFormulaVar.h"
#include "RooBinning.h"
#include "RooBiApollonios.h"

#include <iostream>
#include <fstream> 
#include <vector>
#include <string>
#include <map>

#include "particleProperties.C"

using namespace std;
using namespace RooFit;

TString prefixoutputfilename("");
//TString prefixoutputfilename("compareTuple_FullDD_Data-MC");
//TString prefixoutputfilename("compareTuple_Standard_Data-MC");
//TString prefixoutputfilename("compareTuple_FullDD-Standard_Data");

struct HistoSet
{
  HistoSet(TString _VariableName1, TString _VariableName2,
           TString _Suffix1, TString _Suffix2, TString _Label,
           Int_t NbBins, Double_t Xmin, Double_t Xmax)
  {
    Label = _Label;
    VariableName1 = _VariableName1;
    VariableName2 = _VariableName2;
    HistoName1 = _VariableName1;
    HistoName2 = _VariableName2;
    HistoName1.ReplaceAll("/","_");
    HistoName2.ReplaceAll("/","_");
    HistoName1.ReplaceAll(".","_");
    HistoName2.ReplaceAll(".","_");
    HistoName1.ReplaceAll(":","_");
    HistoName2.ReplaceAll(":","_");
    HistoName1.ReplaceAll("(","_");
    HistoName2.ReplaceAll("(","_");
    HistoName1.ReplaceAll(")","_");
    HistoName2.ReplaceAll(")","_");
    HistoName1.ReplaceAll("[","_");
    HistoName2.ReplaceAll("[","_");
    HistoName1.ReplaceAll("]","_");
    HistoName2.ReplaceAll("]","_");
    OutputName1 = HistoName1;
    OutputName2 = HistoName2;
    HistoName1 += _Suffix1;
    HistoName2 += _Suffix2;
    Histo1 = new TH1F(HistoName1,VariableName1,NbBins,Xmin,Xmax);
    Histo2 = new TH1F(HistoName2,VariableName2,NbBins,Xmin,Xmax);
    sumWeights1 = 0.;
    sumWeights2 = 0.;
  }
  
  TString Label;
  TString VariableName1;
  TString VariableName2;
  TString OutputName1;
  TString OutputName2;
  TString HistoName1;
  TString HistoName2;
  Double_t sumWeights1;
  Double_t sumWeights2;
  TH1F* Histo1;
  TH1F* Histo2;
};
  
typedef std::map<TString,HistoSet*> HistoMap;
typedef std::vector<HistoMap*> HistoMapVec;
typedef std::map<TString,TH1F*> StatMap;

HistoMap* createHistoMap(TString const& filename,TString const& label,TString const& suffix)
{
  std::ifstream NullCoord(filename.Data());
  string Str("");
  TString TStr("");
  
  TString HistoName1;
  TString HistoName2;
  Int_t NbBins;
  Float_t Xmin;
  Float_t Xmax;
  
  HistoMap* Map = new HistoMap();
  
  while(!NullCoord.eof())
  {
    TStr = "";
    
    getline(NullCoord,Str);
        
    UInt_t i(0);
    for(; i < Str.size() ; ++i){
      if(Str[i] != ' ')
        TStr += Str[i];
      else
        break;
    }
    
    if(TStr == "")
      continue;
    
    HistoName1 = TStr;

    TStr = "";
    
    i++;
    for(; i < Str.size() ; ++i){
      if(Str[i] != ' ')
        TStr += Str[i];
      else
        break;
    }
    
    HistoName2 = TStr;

    TStr = "";

    i++;
    for(; i < Str.size() ; ++i){
      if(Str[i] != ' ')
        TStr += Str[i];
      else
        break;
    }
    
    NbBins = TStr.Atoi();
    
    TStr = "";
    
    i++;
    for(; i < Str.size() ; ++i){
      if(Str[i] != ' ')
        TStr += Str[i];
      else
        break;
    }
   
    Xmin = TStr.Atof();
    
    TStr = "";
    
    i++;
    for(; i < Str.size() ; ++i){
      if(Str[i] != ' ')
        TStr += Str[i];
      else
        break;
    }
 
    Xmax = TStr.Atof();
 
    (*Map)[HistoName1] = new HistoSet(HistoName1,HistoName2,suffix,suffix+"_",label,NbBins,Xmin,Xmax);
  }

  return Map;
}

void AddInfo(TTree* tree)
{
  cout << "Adding CandidateNumber, mass and time" << endl;
  
  Int_t nb;
  Float_t mass_[10];
  Float_t time_[500];
  Float_t mass;
  Float_t time;
  
  tree->SetBranchAddress("b_particle_MassFitConsAll_M", &mass_);
  tree->SetBranchAddress("b_particle_ModifiedPVStandardLifetimeFit_ctau", &time_);
  
  TBranch* branch = tree->Branch("CandidateNumber", &nb, "CandidateNumber/I");
  TBranch* branch_mass = tree->Branch("mass", &mass, "mass/F");
  TBranch* branch_time = tree->Branch("time", &time, "time/F");
  Int_t nentries = tree->GetEntries();
  
  for(Int_t entry(0); entry < nentries; entry++){
    nb = entry;
    tree->GetEntry(entry);
    mass = mass_[0];
    time = time_[0]/0.299792458;
    branch->Fill();
    branch_mass->Fill();
    branch_time->Fill();
  }
  tree->Write();
}

Double_t _frac_M_sig(0.8);
Double_t _rfrac_M_sig(2.);
Double_t _rfrac2_M_sig(1.);
Double_t _afactor(2.);
Double_t _bfactor(2.25);
Double_t _nfactor(2.25);
Double_t _nfactor2(10.);

void AddsWeights(TTree* tree, RooDataSet* data, RooRealVar* M, Bool_t const MC = kFALSE, Bool_t const reference = kFALSE){
  RooRealVar Bmass = RooRealVar("#m_{B}", "Mean B mass", 5280., 5280.-5.,5280.+5., "MeV/c^{2}");
  RooRealVar Bwidth1 = RooRealVar("Bwidth1", "B mass resolution", 6., 3., 12., "MeV/c^{2}");
  RooRealVar frac_M_sig = RooRealVar("frac_M_sig", "frac_M_sig", _frac_M_sig, 0.3, 1.);
  RooRealVar rfrac_M_sig = RooRealVar("rfrac_M_sig", "rfrac_M_sig", _rfrac_M_sig, 1.2, 4.);
  RooRealVar rfrac2_M_sig = RooRealVar("rfrac2_M_sig", "rfrac2_M_sig", 1., 0.5, 1.5);
  RooFormulaVar Bwidth2 = RooFormulaVar("Bwidth2", "B mass resolution", "Bwidth1*rfrac_M_sig",RooArgList(Bwidth1,rfrac_M_sig));
  RooFormulaVar Bwidth3 = RooFormulaVar("Bwidth3", "B mass resolution", "Bwidth1*rfrac2_M_sig",RooArgList(Bwidth1,rfrac2_M_sig));
  RooRealVar afactor = RooRealVar("afactor","afactor",2.,1.0,6.);
  RooRealVar bfactor = RooRealVar("bfactor","bfactor",2.,1.0,6.);
  RooRealVar nfactor = RooRealVar("nfactor","nfactor",2.,1.0,4.);
  RooRealVar nfactor2 = RooRealVar("nfactor2","nfactor2",2.,1.0,15.);

  rfrac2_M_sig.setConstant();
  
  if(!reference){
    frac_M_sig.setConstant();
    rfrac_M_sig.setConstant();
    rfrac2_M_sig.setConstant();
    afactor.setConstant();
    bfactor.setConstant();
    nfactor.setConstant();
    nfactor2.setConstant();
  }
  
  //RooGaussian *    M_sig_1 = new RooGaussian("M_sig_1", "M_sig_1", *M, Bmass, Bwidth1);
  //RooGaussian *    M_sig_2 = new RooGaussian("M_sig_2", "M_sig_2", *M, Bmass, Bwidth2);
  //RooAddPdf *      M_sig  = new RooAddPdf("M_sig", "M_sig", RooArgSet(*M_sig_1, *M_sig_2), frac_M_sig);
  
  RooBiApollonios *   M_sig = new RooBiApollonios("M_sig", "M_sig", *M, Bmass, Bwidth1, Bwidth3, bfactor, bfactor, afactor, afactor, nfactor, nfactor2);
  
  //RooRealVar c0("c_{0}", "coefficient #0", -0.15,-1.,1.);
  RooRealVar c0("c_{0}", "coefficient #0", -0.001,-0.02,0.02);
  
  //RooChebychev *   M_bkg = new RooChebychev("M_bkg", "M_bkg", M, RooArgList(c0));
  RooExponential *   M_bkg = new RooExponential("M_bkg", "M_bkg", *M, c0);
  
  RooRealVar nSig = RooRealVar("N_{sig}", "number of signal", 1000., 0., 50000000.);
  RooRealVar nBkg = RooRealVar("N_{bkg}", "number of background", 50000., 0., 50000000.);
  
  RooAbsPdf* model_M;

  if(MC)
    model_M = M_sig;
  else
    model_M = new RooAddPdf("model_M","model_M",RooArgSet(*M_sig,*M_bkg),RooArgList(nSig, nBkg));
  
  if(MC)
    model_M->fitTo(*data, NumCPU(3));
  else
    model_M->fitTo(*data, NumCPU(3), Extended());
  
  if(reference){
    _frac_M_sig = frac_M_sig.getVal();
    _rfrac_M_sig = rfrac_M_sig.getVal();
    _rfrac2_M_sig = rfrac2_M_sig.getVal();
    _afactor = afactor.getVal();
    _bfactor = bfactor.getVal();
    _nfactor = nfactor.getVal();
    _nfactor2 = nfactor2.getVal();
  }
  
  TCanvas* canvas = new TCanvas("canavas","canvas",800,800);
  RooPlot* frame = M->frame(Title("B^{0}_{s} Mass"));
  data->plotOn(frame);
  model_M->plotOn(frame);
  frame->Draw();
  frame->GetXaxis()->SetTitle("B^{0}_{s} Mass");
  frame->GetYaxis()->SetTitle("");
  frame->SetMinimum(0.3);
  //gPad->SetLogy();
  canvas->SaveAs("test.eps");
  
  c0.setConstant();
  Bmass.setConstant();
  Bwidth1.setConstant();
  frac_M_sig.setConstant();
  rfrac_M_sig.setConstant();
  rfrac2_M_sig.setConstant();
  afactor.setConstant();
  bfactor.setConstant();
  nfactor.setConstant();
  nfactor2.setConstant();
  RooDataSet * datawS = 0;
  RooDataSet * datawB = 0;
  
  if(!MC){
    new RooStats::SPlot("sData","An SPlot", *data, model_M, RooArgList(nSig, nBkg) );
    datawS = new RooDataSet(data->GetName(), data->GetTitle(), data, *data->get(), 0, "N_{sig}_sw");
    datawB = new RooDataSet(data->GetName(), data->GetTitle(), data, *data->get(), 0, "N_{bkg}_sw");
  }
    
  Int_t nentries = tree->GetEntries();
  /*
  Int_t nentrieswS = 0;
  Int_t nentrieswB = 0;
  
  if(!MC){
    nentrieswS = ((TTree*)datawS->tree())->GetEntries();
    nentrieswB = ((TTree*)datawB->tree())->GetEntries();
  }
  */
  Int_t candidateNumber;
  Double_t candidateNumberwS;
  Double_t candidateNumberwB;
  Double_t sWeightwS;
  Double_t bWeightwS;
  Float_t sWeight;
  Float_t bWeight;
  
  tree->SetBranchAddress("CandidateNumber", &candidateNumber);
  if(!MC){
    ((TTree*)datawS->tree())->SetBranchAddress("CandidateNumber", &candidateNumberwS);
    ((TTree*)datawB->tree())->SetBranchAddress("CandidateNumber", &candidateNumberwB);
    ((TTree*)datawS->tree())->SetBranchAddress("N_LsigR_sw", &sWeightwS);
    ((TTree*)datawB->tree())->SetBranchAddress("N_LbkgR_sw", &bWeightwS);
  }
  
  TBranch* branch = tree->Branch("sWeight", &sWeight, "sWeight/F");
  TBranch* branch2 = tree->Branch("bWeight", &bWeight, "bWeight/F");
  TString tmp;
  Int_t entrywS(0);
  Int_t entrywB(0);
  for(Int_t entry(0); entry < nentries; entry++){
    tree->GetEntry(entry);
    if(!MC){
      ((TTree*)datawS->tree())->GetEntry(entrywS);
      if(candidateNumber != candidateNumberwS){
        sWeight = 0.;
        branch->Fill();
      }else{
        sWeight = sWeightwS;
        branch->Fill();
        entrywS++;
      }
    }else{
      sWeight = 1.;
      branch->Fill();
    }
  }
  for(Int_t entry(0); entry < nentries; entry++){
    tree->GetEntry(entry);
    if(!MC){
      ((TTree*)datawB->tree())->GetEntry(entrywB);
      if(candidateNumber != candidateNumberwB){
        bWeight = 0.;
        branch2->Fill();
      }else{
        bWeight = bWeightwS;
        branch2->Fill();
        entrywB++;
      }
    }else{
      bWeight = 0.;
      branch2->Fill();
    }
  }
}

void cleanHisto(TH1F* histo)
{
  for(Int_t i(0); i< histo->GetNbinsX(); i++){
    if(histo->GetBinContent(i+1)<0.){
      histo->SetBinContent(i+1,0.);
      histo->SetBinError(i+1,0.);
    }
  }
}

void createPlot(HistoMap* map, TTree* tuple1, TTree* tuple2,
                TString const& selection1, TString const& selection2,
                TString const& suffix)
{
  HistoSet* set = 0;
  TPaveStats* pstats = 0;
  
  TCanvas* canvas = new TCanvas("canvas","canvas",1200,800);

  TString outputfilename("plotsTuple/");
  outputfilename += prefixoutputfilename;
  outputfilename += "_";
  outputfilename += suffix;
  outputfilename += ".pdf";
  
  canvas->Print(outputfilename+"[");
  for(HistoMap::iterator It = map->begin() ; It != map->end() ; It++){
    set = (*It).second;
    
    set->Histo1->Sumw2();
    set->Histo2->Sumw2();
    
    tuple1->Project(set->HistoName1,set->VariableName1,selection1);
    tuple2->Project(set->HistoName2,set->VariableName2,selection2);
    
    set->sumWeights1 = set->Histo1->GetSumOfWeights();
    set->sumWeights2 = set->Histo2->GetSumOfWeights();
    
    cout << set->VariableName1 << " " << set->Histo1->GetMean() << " +- " << set->Histo1->GetMeanError() << endl;
    cout << set->VariableName2 << " " << set->Histo2->GetMean() << " +- " << set->Histo2->GetMeanError() << endl;
    
    set->Histo1->Scale(1./set->Histo1->GetSumOfWeights());
    set->Histo2->Scale(1./set->Histo2->GetSumOfWeights());
    
    //cleanHisto(set->Histo1);
    //cleanHisto(set->Histo2);

    THStack* stack = new THStack("stack",set->VariableName1);
    stack->Add(set->Histo1,"E0,sames");
    //stack->Add(set->Histo2,"HIST,sames");
    stack->Add(set->Histo2,"E0,sames");
    
    stack->Draw("nostack");
    
    set->Histo1->SetLineColor(kBlue);
    set->Histo2->SetLineColor(kRed);
    canvas->Update();
    pstats = (TPaveStats*)(set->Histo1->GetFunction("stats"));
    pstats->SetTextColor(kBlue);
    pstats->SetLineColor(kBlue);
    pstats->SetY1NDC(0.810);
    pstats->SetY2NDC(0.990);
    canvas->Update();
    pstats = (TPaveStats*)(set->Histo2->GetFunction("stats"));
    pstats->SetTextColor(kRed);
    pstats->SetLineColor(kRed);
    pstats->SetY1NDC(0.620);
    pstats->SetY2NDC(0.800);
    if(stack->GetMinimum()<=0.)
      stack->SetMinimum(1e-6);
    gPad->SetLogy();

    TLegend* legend = new TLegend(0.002,0.002,0.2,0.05);
    legend->SetHeader(set->Label);
    legend->SetFillColor(0);
    legend->SetBorderSize(0);
    legend->Draw();
        
    canvas->Update();
    //canvas->SaveAs("plotsTuple/"+set->HistoName1+".eps");
    canvas->Print(outputfilename,"Title: "+set->VariableName1);
    canvas->Update();
  }
  
  canvas->Print(outputfilename+"]","Title: "+set->VariableName1);
  
  delete canvas;
}

void createEvoluPlot(HistoMapVec* vec)
{
  TString name;
  HistoSet* set;
  TPaveStats* pstats;
  
  TCanvas* canvas = new TCanvas("canvas","canvas",1200,800);

  for(HistoMap::iterator It2 = ((*vec)[0])->begin() ; It2 != ((*vec)[0])->end() ; It2++){
    name = It2->second->OutputName1;
    TString outputfilename("plotsTuple/");
    outputfilename += prefixoutputfilename;
    outputfilename += "_";
    outputfilename += name;
    outputfilename += ".pdf";
    
    canvas->Print(outputfilename+"[");
    for(HistoMapVec::iterator It = vec->begin() ; It != vec->end() ; It++){
      set = (*(*It))[It2->first];
    
      name = set->VariableName1;
      THStack* stack = new THStack("stack",name);
      stack->Add(set->Histo1,"E0,sames");
      //stack->Add(set->Histo2,"HIST,sames");
      stack->Add(set->Histo2,"E0,sames");
      stack->Draw("nostack");
      
      set->Histo1->SetLineColor(kBlue);
      set->Histo2->SetLineColor(kRed);
      canvas->Update();
      pstats = (TPaveStats*)(set->Histo1->GetFunction("stats"));
      pstats->SetTextColor(kBlue);
      pstats->SetLineColor(kBlue);
      pstats->SetY1NDC(0.810);
      pstats->SetY2NDC(0.990);
      canvas->Update();
      pstats = (TPaveStats*)(set->Histo2->GetFunction("stats"));
      pstats->SetTextColor(kRed);
      pstats->SetLineColor(kRed);
      pstats->SetY1NDC(0.620);
      pstats->SetY2NDC(0.800);
      gPad->SetLogy();

      TLegend* legend = new TLegend(0.002,0.002,0.2,0.05);
      legend->SetHeader(set->Label);
      legend->SetFillColor(0);
      legend->SetBorderSize(0);
      legend->Draw();
    
      canvas->Update();
      //canvas->SaveAs("plotsTuple/"+set->HistoName1+".eps");
      canvas->Print(outputfilename,"Title: "+name);
      canvas->Update();
    }
    canvas->Print(outputfilename+"]","Title: "+name);
  }
  
  delete canvas;
}

void createStatPlot(StatMap* map1, StatMap* map2, TString const& suffix)
{
  TString name;
  TH1F* histo1;
  TH1F* histo2;

  TCanvas* canvas = new TCanvas("canvas","canvas",1200,800);

  TString outputfilename("plotsTuple/");
  outputfilename += prefixoutputfilename;
  outputfilename += "_";
  outputfilename += suffix;
  outputfilename += ".pdf";
  
  canvas->Print(outputfilename+"[");
    
  for(StatMap::iterator It1 = map1->begin() ; It1 != map1->end() ; It1++){
    for(StatMap::iterator It2 = map2->begin() ; It2 != map2->end() ; It2++){
      if(It1->first != It2->first)
        continue;
      
      histo1 = It1->second;
      histo2 = It2->second;
      name = histo1->GetTitle();
      
      THStack* stack = new THStack("stack",name);
      stack->Add(histo1,"E0");
      //stack->Add(histo2,"HIST");
      stack->Add(histo2,"E0");
      
      stack->Draw("nostack");
      
      histo1->SetLineColor(kBlue);
      histo2->SetLineColor(kRed);
            
      canvas->Update();
      //canvas->SaveAs("plotsTuple/"+name+".eps");
      canvas->Print(outputfilename,"Title: "+name);
      canvas->Update();
    }
  }
  
  canvas->Print(outputfilename+"]","Title: "+name);
  
  delete canvas;
}

Int_t compareTuplessPlot(TString const& listfilename,
                         TString const& filename1, TString const& filename2,
                         TString const& _prefixoutputfilename = "compareTuples",
                         Bool_t const& recreate = kTRUE)
{
  gStyle->SetOptStat(111110);

  prefixoutputfilename = _prefixoutputfilename;
  
  particleProperties* prop = new particleProperties("Bd2JpsiKS");

  TFile* file1 = new TFile(filename1);
  TFile* file2 = new TFile(filename2);

  Bool_t MC(filename2.Contains("MC")?kTRUE:kFALSE);
  
  TTree* inputtuple1 = (TTree*)file1->Get("DecayTree");
  TTree* inputtuple2 = (TTree*)file2->Get("DecayTree");
  
  TString preselection1(prop->selection);
  TString preselection2(prop->selection);
  preselection1 += "&&";
  preselection1 += prop->selectionstrip;
  //preselection1 += "&&(Polarity>0)";
  //preselection1 += "&&(b_particle_OWNPV_Z>-50)";
  preselection2 += "&&";
  preselection2 += prop->selectionstrip;
  //preselection2 += "&&(Polarity<0)";
  //preselection2 += "&&(b_particle_OWNPV_Z<-50)";

  TString selection1("sWeight");
  TString selection2("sWeight");

  Double_t t_min(prop->t_min);
  Double_t t_max(prop->t_max);
  Double_t tau_PDG(1.525);
  Int_t bins(8);
  
  RooRealVar* mass = new RooRealVar("mass","mass",prop->mass_low,prop->mass_high,"MeV/c^{2}") ;
  RooRealVar* time = new RooRealVar("time","time",prop->t_min,prop->t_max,"ps") ;
  RooRealVar* entry = new RooRealVar("CandidateNumber","CandidateNumber",0.,10000000000000.) ;

  RooArgList list("list");
  list.add(*mass);
  list.add(*time);
  list.add(*entry);
  
  RooBinning* binning = new RooBinning(t_min,t_max);
  
  Double_t A(TMath::Exp(-t_max/tau_PDG));
  Double_t B(TMath::Exp(-t_min/tau_PDG));
  for(Int_t i(1); i< bins; i++){
    binning->addBoundary(-TMath::Log(((Double_t)i*(A-B)/(Double_t)bins+B))*tau_PDG);
  }
  //binning->addBoundary(0.5);
  time->setBinning(*binning);

  TString tmp;
  TString tmp2;
  
  TFile* outputfile = 0;
  TTree* tuple1 = 0;
  TFile* outputfile2 = 0;
  TTree* tuple2 = 0;
  RooDataSet* data1 = 0;
  RooDataSet* data2 = 0;
  
  if(recreate){
    tmp = "/scratch/fdupertu/";
    tmp += prefixoutputfilename;
    tmp += ".root";
    
    outputfile =new TFile(tmp,"RECREATE");
    outputfile->cd();
    cout << "Copying Tuple 1" << endl;
    tuple1 = inputtuple1->CopyTree(preselection1,"fast");
    AddInfo(tuple1);
    
    outputfile->Close();
    
    tmp = "/scratch/fdupertu/";
    tmp += prefixoutputfilename;
    tmp += "2.root";
    
    outputfile2 = new TFile(tmp,"RECREATE");
    outputfile2->cd();
    cout << "Copying Tuple 2" << endl;
    tuple2 = inputtuple2->CopyTree(preselection2,"fast");
    AddInfo(tuple2);
    
    outputfile2->Close();
    
    tmp = "/scratch/fdupertu/";
    tmp += prefixoutputfilename;
    tmp += ".root";
    
    file1 = new TFile(tmp);
    
    tmp = "/scratch/fdupertu/";
    tmp += prefixoutputfilename;
    tmp += "2.root";
    
    file2 = new TFile(tmp);

    inputtuple1 = (TTree*)file1->Get("DecayTree");
    inputtuple2 = (TTree*)file2->Get("DecayTree");
  
    tmp = "/scratch/fdupertu/";
    tmp += prefixoutputfilename;
    tmp += "4.root";
    
    outputfile2 = new TFile(tmp,"RECREATE");
    outputfile2->cd();
    cout << "Copying Tuple 1" << endl;
    tuple2 = inputtuple2->CloneTree(-1,"fast");
    
    data2 = new RooDataSet("data2","data2",tuple2,list);
    cout << "Adding sWeights 1" << endl;
    AddsWeights(tuple2,data2,mass,MC,MC);
    tuple2->Write();
    
    outputfile2->Close();

    tmp = "/scratch/fdupertu/";
    tmp += prefixoutputfilename;
    tmp += "3.root";
    
    outputfile =new TFile(tmp,"RECREATE");
    outputfile->cd();
    cout << "Copying Tuple 2" << endl;
    tuple1 = inputtuple1->CloneTree(-1,"fast");
    
    data1 = new RooDataSet("data1","data1",tuple1,list);
    cout << "Adding sWeights 2" << endl;
    AddsWeights(tuple1,data1,mass);
    tuple1->Write();
    
    outputfile->Close();
  }
  /*
  tmp = "/scratch/fdupertu/";
  tmp += prefixoutputfilename;
  tmp += ".root";
  
  file1 = new TFile(tmp,"UPDATE");

  tmp = "/scratch/fdupertu/";
  tmp += prefixoutputfilename;
  tmp += "2.root";
  
  file2 = new TFile(tmp,"UPDATE");

  file1->cd();
  cout << "Copying Temp Tuple 1" << endl;
  tuple1 = ((TTree*)file1->Get("DecayTree"))->CloneTree(-1,"fast");
  file2->cd();
  cout << "Copying Temp Tuple 2" << endl;
  tuple2 = ((TTree*)file2->Get("DecayTree"))->CloneTree(-1,"fast");

  data2 = new RooDataSet("data2","data2",tuple2,list);
  cout << "Adding sWeights 1" << endl;
  AddsWeights(tuple2,data2,mass,MC,MC);
  data1 = new RooDataSet("data1","data1",tuple1,list);
  cout << "Adding sWeights 2" << endl;
  AddsWeights(tuple1,data1,mass);
  */  
  
  tmp = "/scratch/fdupertu/";
  tmp += prefixoutputfilename;
  tmp += "3.root";
  
  file1 = new TFile(tmp);

  tmp = "/scratch/fdupertu/";
  tmp += prefixoutputfilename;
  tmp += "4.root";
  
  file2 = new TFile(tmp);

  tuple1 = (TTree*)file1->Get("DecayTree");
  tuple2 = (TTree*)file2->Get("DecayTree");
 
  tmp = "All";
  cout << "Creating Variables Map" << endl;
  HistoMap* map = createHistoMap(listfilename,tmp,tmp);

  StatMap* meanmap1 = new StatMap();
  StatMap* meanmap2 = new StatMap();
  StatMap* rmsmap1 = new StatMap();
  StatMap* rmsmap2 = new StatMap();
  
  for(HistoMap::iterator it = map->begin(); it != map->end(); it++){
    (*meanmap1)[it->first] = (TH1F*)time->createHistogram(it->first+"mean","",Binning(*binning));
    (*meanmap1)[it->first]->SetTitle(it->second->VariableName1);
    (*meanmap2)[it->first] = (TH1F*)time->createHistogram(it->first+"mean_","",Binning(*binning));
    (*meanmap2)[it->first]->SetTitle(it->second->VariableName1);
    (*rmsmap1)[it->first] = (TH1F*)time->createHistogram(it->first+"rms","",Binning(*binning));
    (*rmsmap1)[it->first]->SetTitle(it->second->VariableName1);
    (*rmsmap2)[it->first] = (TH1F*)time->createHistogram(it->first+"rms_","",Binning(*binning));
    (*rmsmap2)[it->first]->SetTitle(it->second->VariableName1);
  }
  
  cout << "Creating Plots" << endl;
  createPlot(map,tuple1,tuple2,selection1,selection2,tmp);

  //HKHKGHK
  return 0;
  
  TString label;
  
  HistoMapVec* mapvec = new HistoMapVec();
  
  for(Int_t i(0); i< bins; i++){
    cout << "Time range : " << binning->binLow(i) << " " << binning->binHigh(i) << endl;
    time->setRange(binning->binLow(i),binning->binHigh(i));
    
    tmp = "";
    tmp += i;
    label = "";
    label += (Int_t)(binning->binLow(i)*1000.+0.0005);
    label += " < t < ";
    label += (Int_t)(binning->binHigh(i)*1000.+0.0005);
    label += " fs";
    mapvec->push_back(createHistoMap(listfilename,label,tmp));
    map = mapvec->back();

    tmp2 = "(time>";
    tmp2 += binning->binLow(i);
    tmp2 += ")&&(time<";
    tmp2 += binning->binHigh(i);
    tmp2 += ")";
    
    file1->cd();
    cout << "Copying Temp Tuple 1" << endl;
    tuple1 = ((TTree*)file1->Get("DecayTree"))->CopyTree(tmp2,"fast");
    file2->cd();
    cout << "Copying Temp Tuple 2" << endl;
    tuple2 = ((TTree*)file2->Get("DecayTree"))->CopyTree(tmp2,"fast");
    
    file1->cd();
    data1 = new RooDataSet("data1","data1",tuple1,list);
    file2->cd();
    data2 = new RooDataSet("data2","data2",tuple2,list);
    
    cout << "Adding sWeights 1" << endl;
    AddsWeights(tuple1,data1,mass);
    cout << "Adding sWeights 2" << endl;
    AddsWeights(tuple2,data2,mass,MC);
    
    cout << "Creating Plots" << endl;
    createPlot((*mapvec)[i],tuple1,tuple2,selection1,selection2,tmp);
    
    for(HistoMap::iterator it = map->begin(); it != map->end(); it++){
      (*meanmap1)[it->first]->SetBinContent(i+1,it->second->Histo1->GetMean());
      (*meanmap1)[it->first]->SetBinError(i+1,it->second->Histo1->GetMeanError());
      (*meanmap2)[it->first]->SetBinContent(i+1,it->second->Histo2->GetMean());
      (*meanmap2)[it->first]->SetBinError(i+1,it->second->Histo2->GetMeanError());
      (*rmsmap1)[it->first]->SetBinContent(i+1,it->second->Histo1->GetRMS());
      (*rmsmap1)[it->first]->SetBinError(i+1,it->second->Histo1->GetRMSError());
      (*rmsmap2)[it->first]->SetBinContent(i+1,it->second->Histo2->GetRMS());
      (*rmsmap2)[it->first]->SetBinError(i+1,it->second->Histo2->GetRMSError());
    }

    data1->Delete();
    data2->Delete();
  }

  cout << "Creating Evolu Plots" << endl;
  createEvoluPlot(mapvec);
  cout << "Creating Mean Plots" << endl;
  createStatPlot(meanmap1,meanmap2,"mean");
  cout << "Creating RMS Plots" << endl;
  createStatPlot(rmsmap1,rmsmap2,"rms");
  
  cout << "DONE!" << endl;
  return 0;
}

int main(int argc, char *argv[])
{
  TString listfilename(argv[1]);
  TString filename1(argv[2]);
  TString filename2(argv[3]);
  
  if(argc == 4){
    compareTuplessPlot(listfilename,filename1,filename2);
  }else if(argc == 5){
    TString _prefixoutputfilename(argv[4]);
    compareTuplessPlot(listfilename,filename1,filename2,_prefixoutputfilename);
  }else if(argc == 6){
    TString _prefixoutputfilename(argv[4]);
    TString _recreate(argv[5]);
    compareTuplessPlot(listfilename,filename1,filename2,_prefixoutputfilename,_recreate.Contains("1")?kTRUE:kFALSE);
  }
}
