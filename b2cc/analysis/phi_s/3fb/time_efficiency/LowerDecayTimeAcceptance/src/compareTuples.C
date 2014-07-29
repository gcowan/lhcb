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
#include <vector>
#include <string>
#include <map>

using namespace std;

TString outputfilename("compareTuple.pdf");

struct HistoSet
{
  HistoSet(TString _HistoName1,TString _HistoName2,TH1F* _Histo1,TH1F* _Histo2)
  {
    VariableName1 = _HistoName1;
    VariableName2 = _HistoName2;
    HistoName1 = _HistoName1;
    HistoName2 = _HistoName2+"_";
    Histo1 = _Histo1;
    Histo2 = _Histo2;
    HistoName1.ReplaceAll("/","_");
    HistoName2.ReplaceAll("/","_");
    HistoName1.ReplaceAll(".","_");
    HistoName2.ReplaceAll(".","_");
    HistoName1.ReplaceAll("[","_");
    HistoName2.ReplaceAll("[","_");
    HistoName1.ReplaceAll("]","_");
    HistoName2.ReplaceAll("]","_");
  }
    
  TString VariableName1;
  TString VariableName2;
  TString HistoName1;
  TString HistoName2;
  TH1F* Histo1;
  TH1F* Histo2;
};
  
typedef std::map<TString,HistoSet*> HistoMap;

HistoMap* createHistoMap(TString const& filename)
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
 
    (*Map)[HistoName1] = new HistoSet(HistoName1,HistoName2,
                                      new TH1F(HistoName1.ReplaceAll("/","_").ReplaceAll(".","_").ReplaceAll("[","_").ReplaceAll("]","_"),HistoName1,NbBins,Xmin,Xmax),
                                      new TH1F(HistoName2.ReplaceAll("/","_").ReplaceAll(".","_").ReplaceAll("[","_").ReplaceAll("]","_")+"_",HistoName2,NbBins,Xmin,Xmax));
  }

  return Map;
}

void createPlot(HistoMap* map, TTree* tuple1, TTree* tuple2,
                TString const& selection1, TString const& selection2)
{
  HistoSet* set = 0;
  TPaveStats* pstats = 0;
  
  TCanvas* canvas = new TCanvas("canvas","canvas",1200,800);

  canvas->Print(outputfilename+"[");
    
  for(HistoMap::iterator It = map->begin() ; It != map->end() ; It++){
    set = (*It).second;
    
    tuple1->Project(set->HistoName1,set->VariableName1,selection1);
    tuple2->Project(set->HistoName2,set->VariableName2,selection2);

    set->Histo1->Sumw2();
    set->Histo2->Sumw2();

    set->Histo1->Scale(1./set->Histo1->GetSumOfWeights());
    set->Histo2->Scale(1./set->Histo2->GetSumOfWeights());
    
    THStack* stack = new THStack("stack",set->HistoName1);
    stack->Add(set->Histo1,"E0,sames");
    stack->Add(set->Histo2,"HIST,sames");
    
    //set->Histo1->Draw();
    //set->Histo2->Draw("SAMES");
    
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
    
    canvas->Update();
    canvas->SaveAs("plotsTuple/"+set->HistoName1+".eps");
    canvas->Print(outputfilename,"Title: "+set->HistoName1);
    canvas->Update();
  }
  
  canvas->Print(outputfilename+"]","Title: "+set->HistoName1);
  
  delete canvas;
}

void compareTuples(TString const& listfilename = "FlatNominalTupleVariables_MC.txt")
{
  gStyle->SetOptStat(111110);
  
  TFile* file1 = new TFile("/panasas/fdupertu/V0/Bd2JpsiKS_FullDD_Data_sWeights.root");
  TFile* file2 = new TFile("/panasas/fdupertu/V0/Bd2JpsiKS_FullDD_MC_sWeights.root");
  //TFile* file2 = new TFile("/panasas/fdupertu/V0/Bd2JpsiKS_Standard_Data_sWeights.root");

  TTree* tuple1 = (TTree*)file1->Get("DecayTree");
  TTree* tuple2 = (TTree*)file2->Get("DecayTree");
  TString selection1("sWeight");
  TString selection2("sWeight");
  
  HistoMap* map = createHistoMap(listfilename);

  createPlot(map,tuple1,tuple2,selection1,selection2);
}

int main(int argc, char *argv[])
{
  TString listfilename(argv[1]);

  if(argc == 2){
    compareTuples(listfilename);
  }
}
