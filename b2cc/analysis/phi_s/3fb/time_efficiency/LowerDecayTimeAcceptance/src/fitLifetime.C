#include "particleProperties.C"
#include "lhcbStyle.C"

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

//#include "RooGlobalFunc.h"
#include "RooArgSet.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooDataHist.h"
#include "RooHistPdf.h"
#include "RooProdPdf.h"
#include "RooAddPdf.h"
#include "RooGaussian.h"
#include "RooEfficiency.h"
#include "RooEffProd.h"
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
#include "RooEffProd.h"
#include "RooGaussModel.h"
#include "RooTruthModel.h"
#include "RooDecay.h"
#include "RooSimultaneous.h"
#include "RooHist.h"
#include "RooCurve.h"
#include "RooCustomizer.h"
#include "RooGenericPdf.h"
#include "RooCBShape.h"
#include "RooStudentT.h"
#include "RooApollonios.h"
#include "RooPartBiApollonios.h"
#include "RooBiApollonios.h"
#include "RooIpatia.h"
#include "RooLousonna.h"
#include "RooPartBiLousonna.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
using namespace RooFit;

void scaleframes(RooAbsRealLValue &var, RooPlot* frame, RooPlot* frame2, Double_t scale)
{
  frame2->SetMinimum(0.3);
  frame->SetMaximum(4.99);
  frame->SetMinimum(-4.99);
  frame->GetXaxis()->SetTickLength ( 1./scale * frame2->GetXaxis()->GetTickLength() );
  frame->GetXaxis()->SetLabelSize  ( 1./scale * frame2->GetXaxis()->GetLabelSize()  );
  frame->GetXaxis()->SetTitleSize  ( 1./scale * frame2->GetXaxis()->GetTitleSize()  );
  frame->GetXaxis()->SetLabelOffset( 1./scale * frame2->GetXaxis()->GetLabelOffset());
  frame->GetXaxis()->SetTitleOffset( frame2->GetXaxis()->GetTitleOffset() );
  frame->GetYaxis()->SetLabelSize  ( 1./scale * frame2->GetYaxis()->GetLabelSize()  );
  frame->GetYaxis()->SetTitleSize  ( 1./scale * frame2->GetYaxis()->GetTitleSize()  );
  frame->GetYaxis()->SetTitleOffset( scale * frame2->GetYaxis()->GetTitleOffset() + 0.02 );
  frame->GetYaxis()->SetNdivisions ( 506 );
  frame->GetYaxis()->CenterTitle();
  TLine* line = new TLine(frame->GetXaxis()->GetXmin(),0.,frame->GetXaxis()->GetXmax(),0.);
  line->Draw();
  TLine* line2 = new TLine(frame->GetXaxis()->GetXmin(),2.,frame->GetXaxis()->GetXmax(),2.);
  line2->SetLineStyle(3);
  line2->SetLineColor(kRed);
  line2->Draw();
  TLine* line3 = new TLine(frame->GetXaxis()->GetXmin(),-2.,frame->GetXaxis()->GetXmax(),-2.);
  line3->SetLineStyle(3);
  line3->SetLineColor(kRed);
  line3->Draw();
  TString tmp;
  tmp = var.getTitle();
  tmp += " [";
  tmp += var.getUnit();
  tmp += "]";
  frame->SetXTitle(tmp);
  frame->SetYTitle("Pull");
  tmp = "Candidates / ( ";
  char s2[32];
  sprintf(s2, "%.1g", var.getBinWidth(1,"default"));
  tmp += s2;
  tmp += " ";
  tmp += var.getUnit();
  tmp += " )";
  frame2->SetYTitle(tmp);
}

TCanvas* createCanvasWithPull(TString name)
{
  TCanvas* canvas = new TCanvas(name,name, 800, 700);
  canvas->cd();
  TPad* pad1 = new TPad(name+"_pad1",name+"_pad1",0,0.4,1.,1);
  TPad* pad2 = new TPad(name+"_pad2",name+"_pad2",0,0.,1.,0.4);
  pad1->SetBottomMargin(0.00001);
  pad1->SetBorderMode(0);
  pad1->SetNumber(1);
  pad2->SetTopMargin(0.00001);
  pad2->SetBottomMargin(0.35);
  pad2->SetBorderMode(0);
  pad2->SetNumber(2);
  pad1->Draw();
  pad2->Draw();
  
  return canvas;
}

TCanvas* createCanvasTwoWithPull(TString name)
{
  TCanvas* canvas = new TCanvas(name,name, 1600, 700);
  canvas->cd();
  TPad* pad1 = new TPad(name+"_pad1",name+"_pad1",0,0.4,0.5,1);
  TPad* pad2 = new TPad(name+"_pad2",name+"_pad2",0.5,0.4,1.,1);
  TPad* pad3 = new TPad(name+"_pad3",name+"_pad3",0,0.,0.5,0.4);
  TPad* pad4 = new TPad(name+"_pad4",name+"_pad3",0.5,0.,1.,0.4);
  pad1->SetBottomMargin(0.00001);
  pad1->SetBorderMode(0);
  pad1->SetNumber(1);
  pad2->SetBottomMargin(0.00001);
  pad2->SetBorderMode(0);
  pad2->SetNumber(2);
  pad3->SetTopMargin(0.00001);
  pad3->SetBottomMargin(0.35);
  pad3->SetBorderMode(0);
  pad3->SetNumber(3);
  pad4->SetTopMargin(0.00001);
  pad4->SetBottomMargin(0.35);
  pad4->SetBorderMode(0);
  pad4->SetNumber(4);
  pad1->Draw();
  pad2->Draw();
  pad3->Draw();
  pad4->Draw();
  
  return canvas;
}

void fitLifetime(TString const& filename, particleProperties* prop, Int_t const& cFit,
                 Int_t const& trigger, Int_t const& stripping,
                 TString const& triggerfilename, TString const& strippingfilename,
                 TString suffix = "", UInt_t smoothingdegree = 0, Int_t const& toynumber = -1)
{
  uselhcbStyle(0.08,1.5);
  gStyle->SetTitleOffset(0.85,"Y");
  gStyle->SetPadLeftMargin(0.16);
  
  Bool_t reweighted = kTRUE;
  Bool_t blinded = kFALSE;
  Bool_t use3Exp = kTRUE;
  Bool_t useAltMassPDF = kFALSE;
  Bool_t fixsecondgauss = kFALSE;
  Bool_t addBscomponent = kTRUE;
  Int_t  numCPUs = 4;
  if(filename.Contains("MCtruth"))
    fixsecondgauss = kFALSE;

  TPaveText* LHCbLeft = new TPaveText(0.25,0.68,0.45,0.8,"BRNDC");
  LHCbLeft->AddText("LHCb");
  LHCbLeft->SetFillColor(0);
  LHCbLeft->SetTextAlign(12);
  LHCbLeft->SetBorderSize(0);
  
  TPaveText* LHCbRight = new TPaveText(0.65,0.68,0.85,0.8,"BRNDC");
  LHCbRight->AddText("LHCb");
  LHCbRight->SetFillColor(0);
  LHCbRight->SetTextAlign(12);
  LHCbRight->SetBorderSize(0);
  
  TString particle = prop->GetName();
  Double_t mass = prop->GetMass();
  Double_t tau_PDG = prop->GetTau();
  Double_t beta_ = prop->GetBeta();
  //Double_t betaerr = prop->GetBetaErr();

  Double_t Bs_lifetime(1.75);
  //Double_t Bs_lifetime_err(0.14);
  if(particle.Contains("BdJpsiKstar")){
    Bs_lifetime = 1.466;
    //Bs_lifetime_err = 0.031;
  }else if(particle.Contains("Bd2JpsiKS")){
    Bs_lifetime = 1.482;
    //Bs_lifetime_err = 1.;
  }
   
  Double_t Bs_ratio(0.0116);
  //Double_t Bs_ratio_err(0.0008);
  if(particle.Contains("BdJpsiKstar")){
    Bs_ratio = 0.0085;
    //Bs_ratio_err = 0.0012;
  }else if(particle.Contains("Bd2JpsiKS")){
    Bs_ratio = 0.0111;
    //Bs_ratio_err = 1.;
  }else if(particle.Contains("Lambdab0")){
    Bs_ratio = 0.12;
    //Bs_ratio_err = 1.;
  }
  
  //Double_t Mass_diff(87.35);
  //Double_t Mass_diff_err(0.23);
   
  TObjArray* tokens = filename.Tokenize("/");
  TString prefix(((TObjString*)tokens->At(tokens->GetEntriesFast()-1))->GetString());
  prefix.ReplaceAll(".root","");
  prefix.ReplaceAll(".txt","");
  prefix.ReplaceAll("Tuple","");
  prefix += "_TS";
  prefix += trigger;
  prefix += "_S";
  prefix += stripping;
  suffix.ReplaceAll(".","");
  if(suffix != ""){
    prefix += "_";
    prefix += suffix;
  }
  if(cFit != 2){
    if(cFit == 1)
      prefix += "_cFit";
    else
      prefix += "_sFit";
  }
  
  TString outputname;
  outputname = "results/";
  if(filename.Contains("Toy")||toynumber>-1)
    outputname += "toys/";
  outputname += prefix;
  if(toynumber>-1){
    cout << "Using toy number " << toynumber << endl;
    outputname += "_Toy";
    outputname += toynumber;
  }
  outputname += ".txt";
  cout << outputname << endl;
  ofstream outputfile(outputname);
  
  TFile* triggeracceptancefile = 0;
  TH1F* triggeracceptance1 = 0;
  TH1F* triggeracceptance2 = 0;
  if(trigger > 0){
    triggeracceptancefile = new TFile(triggerfilename);

    TIterator* iter = triggeracceptancefile->GetListOfKeys()->MakeIterator();
    TKey* key = (TKey*)iter->Next();
    
    if(trigger == 1 && filename.Contains("TS2"))
      outputname = "Hlt1TrackMuon_Hlt1TrackAllL0_Hlt1DiMuon_Hlt2DiMuonDetached";
    else
      outputname = "Hlt1DiMuon_Hlt2DiMuonDetached";
    if(reweighted && filename.Contains("Data"))
      outputname += "_Reweighted";
    if(triggerfilename.Contains("_Toys")){
      outputname += "_Toy";
      outputname += toynumber;
    }

    while(!(((TString)(key->GetName())).Contains(outputname))){
      key = (TKey*)iter->Next();
    }
        
    triggeracceptance1 = (TH1F*)triggeracceptancefile->Get(key->GetName());
    
    cout << triggeracceptance1->GetName() << endl;

    if(trigger == 2){
      iter = triggeracceptancefile->GetListOfKeys()->MakeIterator();
      
      outputname = "Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached";
      if(triggerfilename.Contains("_Toys")){
        outputname += "_Toy";
        outputname += toynumber;
      }
      
      while(!(((TString)(key->GetName())).Contains(outputname)))
        key = (TKey*)iter->Next();
      
      triggeracceptance2 = (TH1F*)triggeracceptancefile->Get(key->GetName());
      
      cout << triggeracceptance2->GetName() << endl;
    }
    iter->Reset();
  }
  
  TFile* strippingacceptancefile = 0;
  TH1F* strippingacceptance1 = 0;
  TH1F* strippingacceptance2 = 0;
  if(stripping > 0){
    strippingacceptancefile = new TFile(strippingfilename);
    
    TIterator* iter = strippingacceptancefile->GetListOfKeys()->MakeIterator();
    TKey* key = (TKey*)iter->Next();
    
    //outputname = "DetachedJpsi";
    outputname = "Hlt1DiMuon_Hlt2DiMuonDetached";
    if(strippingfilename.Contains("_Toys")){
      outputname += "_Toy";
      outputname += toynumber;
    }
    
    while(!(((TString)(key->GetName())).Contains(outputname))){
      key = (TKey*)iter->Next();
    }
    
    strippingacceptance1 = (TH1F*)strippingacceptancefile->Get(key->GetName());
    
    cout << strippingacceptance1->GetName() << endl;

    if(stripping == 2){
      iter = strippingacceptancefile->GetListOfKeys()->MakeIterator();
      
      outputname = "Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached";
      if(strippingfilename.Contains("_Toys")){
        outputname += "_Toy";
        outputname += toynumber;
      }
      
      while(!(((TString)(key->GetName())).Contains(outputname)))
        key = (TKey*)iter->Next();
      
      strippingacceptance2 = (TH1F*)strippingacceptancefile->Get(key->GetName());
      
      cout << strippingacceptance2->GetName() << endl;
    }
    iter->Reset();
  }

  //Double_t scale_bins_M(5.);
  
  Double_t t_min(prop->t_min);
  Double_t t_max(prop->t_max);
  //Int_t bins((t_max-t_min)*2.);
  Int_t bins((t_max-t_min)*5.);
  Double_t binwidth((Int_t)(((prop->mass_high-prop->mass_low)/60.)));
  Int_t bins_M((Int_t)(((prop->mass_high-prop->mass_low)/binwidth)));

  TString test;
  test = "m(";
  test += prop->daughtersName;
  test += ")";
  // Declare observables
  RooRealVar TAU("TAU","t",t_min,t_max,"ps") ;
  //TAU.setRange("total",t_min,t_max);
  RooRealVar M(prop->tupleName+"_M",test,prop->mass_low,prop->mass_high,"MeV/#it{c}^{2}") ;
  RooRealVar IPzWeight("IPzWeight","IPzWeight",-1000.,1000.,"") ;
  RooRealVar Nsigsw("N_{sig}_sw","N_{sig}_sw",-100000.,10000000.,"") ;
  RooRealVar Nbkgsw("N_{bkg}_sw","N_{bkg}_sw",-100000.,10000000.,"") ;
  RooFormulaVar IPzSWeight("IPzSWeight","N_{sig}_sw*IPzWeight",RooArgList(Nsigsw,IPzWeight));
  RooFormulaVar IPzBWeight("IPzBWeight","N_{bkg}_sw*IPzWeight",RooArgList(Nbkgsw,IPzWeight));
  
  RooCategory Cat("Cat","Cat");
  Cat.defineType("0", 0);
  Cat.defineType("1", 1);
  Cat.defineType("2", 2);
  
  RooArgList list("list");
  list.add(M);
  list.add(TAU);
  list.add(IPzWeight);
  if(filename.Contains("TS2S"))
    list.add(Cat);
  /*
  RooBinning* binning = new RooBinning(t_min,t_max);
  Double_t A(TMath::Exp(-t_max/tau_PDG));
  Double_t B(TMath::Exp(-t_min/tau_PDG));
  for(Int_t i(1); i< bins; i++){
    binning->addBoundary(-TMath::Log(((Double_t)i*(A-B)/(Double_t)bins+B))*tau_PDG);
  }
  */
  
  RooBinning* binning_M = new RooBinning(bins_M,prop->mass_low,prop->mass_high);
  M.setBinning(*binning_M,"default");

  RooBinning* binning = new RooBinning(bins,t_min,t_max);
  TAU.setBinning(*binning,"default");

  cout << "Using smoothing degree: " << smoothingdegree << endl;
  
  RooDataHist* triggeracceptancehisto1 = 0;
  RooHistPdf* triggeracceptancepdf1 = 0;
  RooDataHist* triggeracceptancehisto2 = 0;
  RooHistPdf* triggeracceptancepdf2 = 0;
  if(trigger == 1){
    triggeracceptancehisto1 = new RooDataHist("triggeracceptancehisto1","triggeracceptancehisto1",TAU,Import(*triggeracceptance1,kTRUE));
    triggeracceptancepdf1 = new RooHistPdf("triggeracceptancepdf1","triggeracceptancepdf1",TAU,*triggeracceptancehisto1,smoothingdegree);
  }else if(trigger == 2){
    triggeracceptancehisto1 = new RooDataHist("triggeracceptancehisto1","triggeracceptancehisto1",TAU,Import(*triggeracceptance1,kTRUE));
    triggeracceptancepdf1 = new RooHistPdf("triggeracceptancepdf1","triggeracceptancepdf1",TAU,*triggeracceptancehisto1,smoothingdegree);
    triggeracceptancehisto2 = new RooDataHist("triggeracceptancehisto2","triggeracceptancehisto2",TAU,Import(*triggeracceptance2,kTRUE));
    triggeracceptancepdf2 = new RooHistPdf("triggeracceptancepdf2","triggeracceptancepdf2",TAU,*triggeracceptancehisto2,smoothingdegree);
  }
  
  RooDataHist* strippingacceptancehisto1 = 0;
  RooHistPdf* strippingacceptancepdf1 = 0;
  RooDataHist* strippingacceptancehisto2 = 0;
  RooHistPdf* strippingacceptancepdf2 = 0;
  if(stripping == 1){
    strippingacceptancehisto1 = new RooDataHist("strippingacceptancehisto1","strippingacceptancehisto1",TAU,Import(*strippingacceptance1,kTRUE));
    strippingacceptancepdf1 = new RooHistPdf("strippingacceptancepdf1","strippingacceptancepdf1",TAU,*strippingacceptancehisto1,smoothingdegree);
  }else if(stripping == 2){
    strippingacceptancehisto1 = new RooDataHist("strippingacceptancehisto1","strippingacceptancehisto1",TAU,Import(*strippingacceptance1,kTRUE));
    strippingacceptancepdf1 = new RooHistPdf("strippingacceptancepdf1","strippingacceptancepdf1",TAU,*strippingacceptancehisto1,smoothingdegree);
    strippingacceptancehisto2 = new RooDataHist("strippingacceptancehisto2","strippingacceptancehisto2",TAU,Import(*strippingacceptance2,kTRUE));
    strippingacceptancepdf2 = new RooHistPdf("strippingacceptancepdf2","strippingacceptancepdf2",TAU,*strippingacceptancehisto2,smoothingdegree);    
  }
  cout << prop->frac_M_sig << endl;
  // Mass - Signal
  RooRealVar Bmass = RooRealVar("Bmass", "Mean B mass", mass, mass-5.,mass+5., "MeV/#it{c}^{2}");
  RooRealVar Bmass_diff = RooRealVar("Bmass_diff", "B mass difference", 87.35 ,87.35-5.,87.35+5., "MeV/c^{2}");
  RooFormulaVar Bmass_Bs = RooFormulaVar("Bmass_Bs", "Mean Bs mass", "Bmass+Bmass_diff", RooArgList(Bmass,Bmass_diff));
  RooRealVar Bmass2 = RooRealVar("Bmass2", "Mean B mass2", mass, mass-25.,mass+5., "MeV/#it{c}^{2}");
  RooRealVar frac_M_sig = RooRealVar("frac_M_sig", "frac_M_sig", prop->frac_M_sig, 0.3, 1.);
  RooRealVar rfrac_M_sig = RooRealVar("rfrac_M_sig", "rfrac_M_sig", prop->rfrac_M_sig, 1.2, 4.);
  RooRealVar rfrac2_M_sig = RooRealVar("rfrac2_M_sig", "rfrac2_M_sig", 1., 0.5, 1.5);
  RooRealVar Bwidth1 = RooRealVar("Bwidth1", "B mass resolution", 7., 4., 40., "MeV/#it{c}^{2}");
  RooFormulaVar Bwidth2 = RooFormulaVar("Bwidth2", "B mass resolution", "Bwidth1*rfrac_M_sig",RooArgList(Bwidth1,rfrac_M_sig));
  RooFormulaVar Bwidth3 = RooFormulaVar("Bwidth3", "B mass resolution", "Bwidth1*rfrac2_M_sig",RooArgList(Bwidth1,rfrac2_M_sig));
  RooRealVar afactor = RooRealVar("afactor","afactor",2.,1.,6.);
  RooRealVar afactor2 = RooRealVar("afactor2","afactor2",2.,1.,6.);
  RooRealVar bfactor = RooRealVar("bfactor","bfactor",2.,1.,6.);
  RooRealVar bfactor2 = RooRealVar("bfactor2","bfactor2",2.,1.,6.);
  RooRealVar nufactor = RooRealVar("nufactor","nufactor",2.,1.1,15.);
  RooRealVar nfactor = RooRealVar("nfactor","nfactor",2.,1.1,15.);
  RooRealVar nfactor2 = RooRealVar("nfactor2","nfactor2",2.,1.1,15.);
  RooRealVar lfactor = RooRealVar("lfactor","lfactor",-3.,-6.,0.);
  RooRealVar zfactor = RooRealVar("zfactor","zfactor",0.01,0.,2.);

  if(fixsecondgauss){
    frac_M_sig.setConstant();
    rfrac_M_sig.setConstant();
  }

  if(useAltMassPDF){
    afactor.setVal(prop->afactor);
    afactor2.setVal(prop->afactor2);
    bfactor.setVal(prop->bfactor);
    bfactor2.setVal(prop->bfactor2);
    nfactor.setVal(prop->nfactor);
    nfactor2.setVal(prop->nfactor2);
    nufactor.setVal(prop->nufactor);
    if(!filename.Contains("MCtruth")){
      //afactor.setConstant();
      afactor2.setConstant();
      bfactor.setConstant();
      bfactor2.setConstant();
      //nufactor.setConstant();
      nfactor.setConstant();
      nfactor2.setConstant();
      rfrac2_M_sig.setVal(1.);
      rfrac2_M_sig.setConstant();
    }
  }
  
  RooAbsPdf *    M_sig_1 = 0;
  RooAbsPdf *    M_sig_2 = 0;
  RooAbsPdf *    M_sig = 0;
  
  if(useAltMassPDF){
    M_sig = new RooBiApollonios("M_sig", "M_sig", M, Bmass, Bwidth1, Bwidth1, bfactor, bfactor, afactor, afactor, nfactor, nfactor2);
    //M_sig  = new RooPartBiLousonna("M_sig", "M_sig", M, Bmass, Bwidth1, nufactor, afactor, nfactor, afactor, nfactor2);
  }else{
    M_sig_1 = new RooGaussian("M_sig_1", "M_sig_1", M, Bmass, Bwidth1);
    M_sig_2 = new RooGaussian("M_sig_2", "M_sig_2", M, Bmass, Bwidth2);
    M_sig  = new RooAddPdf("M_sig", "M_sig", RooArgSet(*M_sig_1, *M_sig_2), frac_M_sig);
  }
  
  //RooGaussian *    M_sig_1 = new RooGaussian("M_sig_1", "M_sig_1", M, Bmass, Bwidth1);
  //RooGaussian *    M_sig_2 = new RooGaussian("M_sig_2", "M_sig_2", M, Bmass, Bwidth2);
  //RooCBShape *     M_sig_1 = new RooCBShape("M_sig_1","M_sig_1", M, Bmass, Bwidth1, afactor, nfactor);
  //RooCBShape *     M_sig_2 = new RooCBShape("M_sig_2","M_sig_2", M, Bmass, Bwidth1, afactor2, nfactor2);
  //RooStudentT *    M_sig_1  = new RooStudentT("M_sig_1", "M_sig_1", M, Bmass, Bwidth1, nfactor);
  //RooStudentT *    M_sig_2  = new RooStudentT("M_sig_2", "M_sig_2", M, Bmass, Bwidth2, nfactor2);
  //RooApollonios *   M_sig_1 = new RooApollonios("M_sig_1", "M_sig_1", M, Bmass, Bwidth1, bfactor, afactor, nfactor);
  //RooApollonios *   M_sig_2 = new RooApollonios("M_sig_2", "M_sig_2", M, Bmass, Bwidth2, bfactor2, afactor2, nfactor2);
  //RooAddPdf *      M_sig  = new RooAddPdf("M_sig", "M_sig", RooArgSet(*M_sig_1, *M_sig_2), frac_M_sig);
  
  //RooApollonios *   M_sig = new RooApollonios("M_sig", "M_sig", M, Bmass, Bwidth1, bfactor, afactor, nfactor);
  //RooPartBiApollonios *   M_sig = new RooPartBiApollonios("M_sig", "M_sig", M, Bmass, Bwidth1, bfactor, afactor, afactor2, nfactor, nfactor2);
  //RooBiApollonios *   M_sig = new RooBiApollonios("M_sig", "M_sig", M, Bmass, Bwidth1, Bwidth1, bfactor, bfactor, afactor, afactor, nfactor, nfactor2);
  //RooIpatia *   M_sig = new RooIpatia("M_sig", "M_sig", M, lfactor, zfactor, bfactor, Bwidth1, Bmass, afactor, nfactor);
  //RooCBShape *     M_sig = new RooCBShape("M_sig","M_sig", M, Bmass, Bwidth1, afactor, nfactor);
  //RooStudentT *    M_sig  = new RooStudentT("M_sig", "M_sig", M, Bmass, Bwidth1, nfactor);
  //RooLousonna *    M_sig  = new RooLousonna("M_sig", "M_sig", M, Bmass, Bwidth1, nufactor, afactor, nfactor);
  //RooPartBiLousonna *    M_sig  = new RooPartBiLousonna("M_sig", "M_sig", M, Bmass, Bwidth1, nufactor, afactor, nfactor, afactor2, nfactor2);

  // Mass - Bkg
  RooRealVar c0("c_{0}", "coefficient #0", -0.001,-0.02,0.02);
  RooRealVar c1("c_{1}", "coefficient #1", 9.56066e-01,-1.,1.);
  RooRealVar c2("c_{2}", "coefficient #2", 2.46707e-01,-1.,1.);
  RooRealVar frac_M_bkg = RooRealVar("frac_M_bkg", "frac_M_bkg", 0.8, 0., 1.);
  
  RooExponential * M_bkg = new RooExponential("M_bkg", "M_bkg", M, c0);
  //RooChebychev *    M_bkg = new RooChebychev("M_bkg", "M_bkg", M, RooArgList(c1,c2));
  //RooChebychev *    M_bkg = new RooChebychev("M_bkg", "M_bkg", M, RooArgList(c1));
  //RooChebychev *    M_bkg_1 = new RooChebychev("M_bkg_1", "M_bkg_1", M, c1);
  //RooExponential *  M_bkg_1 = new RooExponential("M_bkg_1", "M_bkg_1", M, c0);
  RooChebychev *    M_bkg_2 = new RooChebychev("M_bkg_2", "M_bkg_2", M, RooArgList(c1,c2));
  //RooAddPdf *       M_bkg = new RooAddPdf("M_bkg","M_bkg",RooArgSet(*M_bkg_1,*M_bkg_2),frac_M_bkg);
  
  if(prop->GetName()=="Bd2JpsiKS"){
    c1.setVal(7.68065e-01);
    c2.setVal(1.49609e-01);
  }else if(prop->GetName()=="Lambdab0"){
    c1.setVal(-9.38691e-01);
    c2.setVal(1.77948e-01);
  }
  
  c1.setConstant();
  c2.setConstant();
  frac_M_bkg.setConstant();

  Double_t time_res;
  if(prop->GetName()=="Lambdab0"||prop->GetName()=="Bd2JpsiKS"){
    time_res = 0.065;
  }else{
    time_res = 0.045;
  }
  cout << "Decay time single resolution of : " << time_res << " ps." << endl;
  
  // Decay Time - Resolution
  RooRealVar m1("m1","m1", 0.);
  RooRealVar s1("s1","s1", time_res);
  RooResolutionModel * res1 = new RooGaussModel("res1","resolution model", TAU, m1, s1, RooFitShortHand::C(1));
  //RooTruthModel * tm = new RooTruthModel("tm","truth model", TAU);
  
  // Decay Time - Signal
  Double_t blindscale(prop->blindscale);
  if(!blinded||filename.Contains("MC"))
    blindscale = 0.;
  else
    cout << "Blinding tau_sig with: " << prop->blindstring << " / " << blindscale << endl;
  RooRealVar tau_sig("tau_sig","tau_sig",tau_PDG-0.02,0.5,2.5) ;
  RooRealVar tau_sig_Bs("tau_sig_Bs","tau_sig_Bs",Bs_lifetime,0.5,2.5) ;
  RooUnblindUniform tau_sig_ub("tau_sig_ub", "tau_sig_ub", prop->blindstring, blindscale, tau_sig);
  RooUnblindUniform tau_sig_ub_Bs("tau_sig_ub_Bs", "tau_sig_ub_Bs", prop->blindstring, 0., tau_sig_Bs);
  RooDecay* t_sig_noacc = new RooDecay("t_sig_noacc","t_sig_noacc", TAU, tau_sig_ub, *res1, RooDecay::SingleSided);
  //RooDecay* t_sig_Bs_noacc = new RooDecay("t_sig_Bs_noacc","t_sig_Bs_noacc", TAU, tau_sig_ub_Bs, *res1, RooDecay::SingleSided);

  RooRealVar nSig = RooRealVar("N_{sig}", "number of signal", 1000., 0., 50000000.);
  RooRealVar nSig_1 = RooRealVar("N_{sig}_1", "number of signal", 1000., 0., 50000000.);
  RooRealVar nSig_2 = RooRealVar("N_{sig}_2", "number of signal", 1000., 0., 50000000.);
  RooRealVar nBkg = RooRealVar("N_{bkg}", "number of background", 1000., 0., 50000000.);
  RooRealVar nBkg_1 = RooRealVar("N_{bkg}_1", "number of background", 1000., 0., 50000000.);
  RooRealVar nBkg_2 = RooRealVar("N_{bkg}_2", "number of background", 1000., 0., 50000000.);

  /*
  c0.setVal(0);
  c0.setConstant();
  nBkg.setVal(0.);
  nBkg.setConstant();
  */

  RooRealVar RationBdBs = RooRealVar("RationBdBs", "ratio Bd Bs", Bs_ratio, 0., 0.1);
  RooFormulaVar nSig_Bs = RooFormulaVar("N_{sig}_Bs", "number of signal", "RationBdBs*N_{sig}",RooArgList(RationBdBs,nSig));
  //RooRealVar nSig_Bs = RooRealVar("N_{sig}_Bs", "number of signal", 1000., 0., 50000000.);
  RooRealVar nSig_Bs_ = RooRealVar("N_{sig}_Bs_", "number of signal", 1000., 0., 50000000.);
  RooFormulaVar nSig_Bs_1 = RooFormulaVar("N_{sig}_Bs_1", "number of signal", "RationBdBs*N_{sig}_1",RooArgList(RationBdBs,nSig_1));
  RooFormulaVar nSig_Bs_2 = RooFormulaVar("N_{sig}_Bs_2", "number of signal", "RationBdBs*N_{sig}_2",RooArgList(RationBdBs,nSig_2));

  //RooGaussian* gauss_tau_sig_Bs = new RooGaussian("gauss_tau_sig_Bs","gauss_tau_sig_Bs",tau_sig_ub_Bs,RooConst(1.519),RooConst(0.007));
  //RooGaussian* gauss_tau_sig_Bs = new RooGaussian("gauss_tau_sig_Bs","gauss_tau_sig_Bs",tau_sig_ub_Bs,RooConst(Bs_lifetime),RooConst(Bs_lifetime_err));
  //RooGaussian* gauss_mass_diff = new RooGaussian("gauss_mass_diff","gauss_mass_diff",Bmass_diff,RooConst(Mass_diff),RooConst(Mass_diff_err));
  //RooGaussian* gauss_RationBdBs = new RooGaussian("gauss_RationBdBs","gauss_RationBdBs",RationBdBs,RooConst(Bs_ratio),RooConst(Bs_ratio_err));
  
  RooCustomizer* cust_M = new RooCustomizer(*M_sig,"cust_M");
  cust_M->replaceArg(Bmass,Bmass_Bs);

  RooAbsPdf* M_sig_Bs = 0;

  if(filename.Contains("Bd2JpsiKS")||filename.Contains("Lambdab0")){
    M_sig_Bs = M_bkg_2;
    RationBdBs.setConstant();
    tau_sig_Bs.setConstant();
  }else{
    M_sig_Bs = (RooAbsPdf*)cust_M->build(kTRUE);
  }
  
  RooProdPdf* t_sig_1 = 0;
  RooProdPdf* t_sig_2 = 0;
  RooAbsPdf* t_sig = 0;
  RooAddPdf* t_sig_ = 0;
  RooAbsPdf* t_sig_Bs_1 = 0;
  RooAbsPdf* t_sig_Bs_2 = 0;
  RooAbsPdf* t_sig_Bs = 0;
  RooAbsPdf* t_sig_Bs_ = 0;
  
  if(trigger == 0 && stripping == 0){
    t_sig = new RooProdPdf("t_sig","t_sig",RooArgList(*t_sig_noacc));
  }else if(trigger == 0 && stripping > 0){
    t_sig = new RooProdPdf("t_sig","t_sig",RooArgList(*t_sig_noacc,*strippingacceptancepdf1));
  }else if(trigger == 1 && stripping == 0){
    t_sig = new RooProdPdf("t_sig","t_sig",RooArgList(*t_sig_noacc,*triggeracceptancepdf1));
  }else if(trigger == 1 && stripping > 0){
    t_sig = new RooProdPdf("t_sig","t_sig",RooArgList(*t_sig_noacc,*triggeracceptancepdf1,*strippingacceptancepdf1));
  }else if(trigger == 2 && stripping == 0){
    t_sig_1 = new RooProdPdf("t_sig_1","t_sig_1",RooArgList(*t_sig_noacc,*triggeracceptancepdf1));
    t_sig_2 = new RooProdPdf("t_sig_2","t_sig_2",RooArgList(*t_sig_noacc,*triggeracceptancepdf2));
    t_sig = new RooSimultaneous("t_sig","t_sig",Cat) ;
    static_cast<RooSimultaneous*>(t_sig)->addPdf(*t_sig_1,"1") ;
    static_cast<RooSimultaneous*>(t_sig)->addPdf(*t_sig_2,"2") ;
    t_sig_ = new RooAddPdf("t_sig_","t_sig_",RooArgSet(*t_sig_1,*t_sig_2),RooArgList(nSig_1, nSig_2));
  }else if(trigger == 2 && stripping > 0){
    t_sig_1 = new RooProdPdf("t_sig_1","t_sig_1",RooArgList(*t_sig_noacc,*triggeracceptancepdf1,*strippingacceptancepdf1));
    t_sig_2 = new RooProdPdf("t_sig_2","t_sig_2",RooArgList(*t_sig_noacc,*triggeracceptancepdf2,*strippingacceptancepdf2));
    t_sig = new RooSimultaneous("t_sig","t_sig",Cat) ;
    static_cast<RooSimultaneous*>(t_sig)->addPdf(*t_sig_1,"1") ;
    static_cast<RooSimultaneous*>(t_sig)->addPdf(*t_sig_2,"2") ;
    t_sig_ = new RooAddPdf("t_sig_","t_sig_",RooArgSet(*t_sig_1,*t_sig_2),RooArgList(nSig_1, nSig_2));
  }

  RooCustomizer* cust_t = new RooCustomizer(*t_sig,"cust_t");
  cust_t->replaceArg(tau_sig_ub,tau_sig_ub_Bs);
  t_sig_Bs = (RooAbsPdf*)cust_t->build(kTRUE);

  if(trigger == 2){
    RooCustomizer* cust_t_1 = new RooCustomizer(*t_sig_1,"cust_t_1");
    RooCustomizer* cust_t_2 = new RooCustomizer(*t_sig_2,"cust_t_2");
    cust_t_1->replaceArg(tau_sig_ub,tau_sig_ub_Bs);
    cust_t_2->replaceArg(tau_sig_ub,tau_sig_ub_Bs);
    t_sig_Bs_1 = (RooAbsPdf*)cust_t_1->build(kTRUE);
    t_sig_Bs_2 = (RooAbsPdf*)cust_t_2->build(kTRUE);
    t_sig_Bs = new RooSimultaneous("t_sig_Bs","t_sig_Bs",Cat) ;
    static_cast<RooSimultaneous*>(t_sig_Bs)->addPdf(*t_sig_Bs_1,"1") ;
    static_cast<RooSimultaneous*>(t_sig_Bs)->addPdf(*t_sig_Bs_2,"2") ;
    t_sig_Bs_ = new RooAddPdf("t_sig_Bs_","t_sig_Bs_",RooArgSet(*t_sig_Bs_1,*t_sig_Bs_2),RooArgList(nSig_Bs_1, nSig_Bs_2));
  }

  // Decay Time - Bkg
  
  RooRealVar tau_bkg_1("tau_bkg_1","tau_bkg_1",0.15,0.01,3.) ;
  //RooRealVar tau_bkg_2("tau_bkg_2","tau_bkg_2",0.5,0.01,3.) ;
  //RooRealVar tau_bkg_3("tau_bkg_3","tau_bkg_3",1.2,0.01,3.) ;
  RooRealVar rtau_bkg_1("rtau_bkg_1","rtau_bkg_1",2.,1.,10.) ;
  RooRealVar rtau_bkg_2("rtau_bkg_2","rtau_bkg_2",4.,1.,10.) ;
  RooFormulaVar tau_bkg_2 = RooFormulaVar("tau_bkg_2", "tau_bkg_2", "tau_bkg_1*rtau_bkg_1",RooArgList(tau_bkg_1,rtau_bkg_1));
  RooFormulaVar tau_bkg_3 = RooFormulaVar("tau_bkg_3", "tau_bkg_3", "tau_bkg_2*rtau_bkg_2",RooArgList(tau_bkg_2,rtau_bkg_2));
  
  RooDecay* t_bkg_1 = new RooDecay("t_bkg_1","t_bkg_1", TAU, tau_bkg_1, *res1, RooDecay::SingleSided);
  RooDecay* t_bkg_2 = new RooDecay("t_bkg_2","t_bkg_2", TAU, tau_bkg_2, *res1, RooDecay::SingleSided);
  RooDecay* t_bkg_3 = new RooDecay("t_bkg_3","t_bkg_3", TAU, tau_bkg_3, *res1, RooDecay::SingleSided);
  RooRealVar frac_t_bkg_1("frac_t_bkg_1","frac_t_bkg_1",0.4,0.,1.);
  RooRealVar frac_t_bkg_2("frac_t_bkg_2","frac_t_bkg_2",0.5,0.,1.);
  RooRealVar frac_t_bkg_3("frac_t_bkg_3","frac_t_bkg_3",0.15,0.,1.);
  RooAddPdf* t_bkg = new RooAddPdf("t_bkg","t_bkg",RooArgList(*t_bkg_1,*t_bkg_2,*t_bkg_3),RooArgList(frac_t_bkg_1,frac_t_bkg_2));
  /*
  RooRealVar a1("a1","a1",prop->t_min-0.02,0.,prop->t_min) ;
  RooRealVar a2("a2","a2",1.,0.01,1000.) ;
  RooGenericPdf* t_bkg = new RooGenericPdf("t_bkg","TMath::Max(1./TMath::Power(TAU+a1,a2),0.)",RooArgList(TAU,a1,a2));
  */
  if(!use3Exp){
    frac_t_bkg_2.setVal(0.);
    frac_t_bkg_2.setConstant();
    rtau_bkg_1.setConstant();
  }
  
  if(filename.Contains("MCtruth")){
    frac_t_bkg_1.setVal(0.);
    frac_t_bkg_1.setConstant();
    frac_t_bkg_2.setVal(0.);
    frac_t_bkg_2.setConstant();
    tau_bkg_1.setConstant();
    rtau_bkg_1.setConstant();
    rtau_bkg_2.setConstant();
    nBkg.setVal(0.);
    nBkg.setConstant();
    nBkg_1.setVal(0.);
    nBkg_1.setConstant();
    nBkg_2.setVal(0.);
    nBkg_2.setConstant();
    c0.setConstant();
  }else if(filename.Contains("MC")){
    frac_t_bkg_1.setVal(1.);
    frac_t_bkg_1.setConstant();
    frac_t_bkg_2.setVal(0.);
    frac_t_bkg_2.setConstant();
    rtau_bkg_1.setConstant();
    rtau_bkg_2.setConstant();
  }
  
  RooProdPdf* model_sig_1 = 0;
  RooProdPdf* model_sig_2 = 0;
  RooAbsPdf* model_sig = 0;
  RooProdPdf* model_sig_ = 0;
  RooAbsPdf* model_sig_Bs_1 = 0;
  RooAbsPdf* model_sig_Bs_2 = 0;
  RooAbsPdf* model_sig_Bs = 0;
  RooAbsPdf* model_sig_Bs_ = 0;
  if(trigger == 2){
    model_sig_1 = new RooProdPdf("model_sig_1","model_sig_1",RooArgList(*M_sig,*t_sig_1));
    model_sig_2 = new RooProdPdf("model_sig_2","model_sig_2",RooArgList(*M_sig,*t_sig_2));
    model_sig = new RooSimultaneous("model_sig","model_sig",Cat) ;
    static_cast<RooSimultaneous*>(model_sig)->addPdf(*model_sig_1,"1") ;
    static_cast<RooSimultaneous*>(model_sig)->addPdf(*model_sig_2,"2") ;
    model_sig_ = new RooProdPdf("model_sig_","model_sig_",RooArgList(*M_sig,*t_sig_));

    model_sig_Bs_1 = new RooProdPdf("model_sig_Bs_1","model_sig_Bs_1",RooArgList(*M_sig_Bs,*t_sig_Bs_1));
    model_sig_Bs_2 = new RooProdPdf("model_sig_Bs_2","model_sig_Bs_2",RooArgList(*M_sig_Bs,*t_sig_Bs_2));
    model_sig_Bs = new RooSimultaneous("model_sig_Bs","model_sig_Bs",Cat) ;
    static_cast<RooSimultaneous*>(model_sig_Bs)->addPdf(*model_sig_Bs_1,"1") ;
    static_cast<RooSimultaneous*>(model_sig_Bs)->addPdf(*model_sig_Bs_2,"2") ;
    model_sig_Bs_ = new RooProdPdf("model_sig_Bs_","model_sig_Bs_",RooArgList(*M_sig_Bs,*t_sig_Bs_));
  }else{
    model_sig = new RooProdPdf("model_sig","model_sig",RooArgList(*M_sig,*t_sig));
    model_sig_Bs = new RooProdPdf("model_sig_Bs","model_sig_Bs",RooArgList(*M_sig_Bs,*t_sig_Bs));
  }
  
  RooProdPdf* model_bkg = new RooProdPdf("model_bkg","model_bkg",RooArgList(*M_bkg,*t_bkg));
  
  RooAddPdf* model_M = new RooAddPdf("model_M","model_M",RooArgSet(*M_sig,*M_bkg),RooArgList(nSig, nBkg));
  RooAddPdf* model_M_ = new RooAddPdf("model_M_","model_M_",RooArgSet(*M_sig,*M_sig_Bs,*M_bkg),RooArgList(nSig, nSig_Bs_, nBkg));

  RooAddPdf* model_t_1 = 0;
  RooAddPdf* model_t_2 = 0;
  RooAbsPdf* model_t = 0;
  RooAddPdf* model_t_ = 0;
  if(trigger == 2){
    model_t_1 = new RooAddPdf("model_t_1","model_t_1",RooArgSet(*t_sig_1,*t_bkg),RooArgList(nSig_1, nBkg_1));
    model_t_2 = new RooAddPdf("model_t_2","model_t_2",RooArgSet(*t_sig_2,*t_bkg),RooArgList(nSig_2, nBkg_2));
    model_t = new RooSimultaneous("model_t","model_t",Cat) ;
    static_cast<RooSimultaneous*>(model_t)->addPdf(*model_t_1,"1") ;
    static_cast<RooSimultaneous*>(model_t)->addPdf(*model_t_2,"2") ;
    model_t_ = new RooAddPdf("model_t_","model_t_",RooArgSet(*t_sig_,*t_bkg),RooArgList(nSig, nBkg));
  }else
    model_t = new RooAddPdf("model_t","model_t",RooArgSet(*t_sig,*t_bkg),RooArgList(nSig, nBkg));
  
  RooAddPdf* model_1 = 0;
  RooAddPdf* model_2 = 0;
  RooAbsPdf* model = 0;
  RooAddPdf* model_ = 0;
  if(trigger == 2){
    model_1 = new RooAddPdf("model_1","model_1",RooArgSet(*model_sig_1,*model_bkg),RooArgList(nSig_1, nBkg_1));
    model_2 = new RooAddPdf("model_2","model_2",RooArgSet(*model_sig_2,*model_bkg),RooArgList(nSig_2, nBkg_2));
    model = new RooSimultaneous("model","model",Cat) ;
    static_cast<RooSimultaneous*>(model)->addPdf(*model_1,"1") ;
    static_cast<RooSimultaneous*>(model)->addPdf(*model_2,"2") ;
    model_ = new RooAddPdf("model_","model_",RooArgSet(*model_sig_,*model_bkg),RooArgList(nSig, nBkg));
  }else
    model = new RooAddPdf("model","model",RooArgSet(*model_sig,*model_bkg),RooArgList(nSig, nBkg));

  if(addBscomponent)
  {
    model_M = new RooAddPdf("model_M","model_M",RooArgSet(*M_sig,*M_sig_Bs,*M_bkg),RooArgList(nSig, nSig_Bs, nBkg));
    model_M_ = new RooAddPdf("model_M_","model_M_",RooArgSet(*M_sig,*M_sig_Bs,*M_bkg),RooArgList(nSig, nSig_Bs_, nBkg));
  
    if(trigger == 2){
      model_t_1 = new RooAddPdf("model_t_1","model_t_1",RooArgSet(*t_sig_1,*t_sig_Bs_1,*t_bkg),RooArgList(nSig_1, nSig_Bs_1, nBkg_1));
      model_t_2 = new RooAddPdf("model_t_2","model_t_2",RooArgSet(*t_sig_2,*t_sig_Bs_2,*t_bkg),RooArgList(nSig_2, nSig_Bs_2, nBkg_2));
      model_t = new RooSimultaneous("model_t","model_t",Cat) ;
      static_cast<RooSimultaneous*>(model_t)->addPdf(*model_t_1,"1") ;
      static_cast<RooSimultaneous*>(model_t)->addPdf(*model_t_2,"2") ;
      model_t_ = new RooAddPdf("model_t_","model_t_",RooArgSet(*t_sig_,*t_sig_Bs_,*t_bkg),RooArgList(nSig, nSig_Bs, nBkg));
    }else
      model_t = new RooAddPdf("model_t","model_t",RooArgSet(*t_sig,*t_sig_Bs,*t_bkg),RooArgList(nSig, nSig_Bs, nBkg));
    
    if(trigger == 2){
      model_1 = new RooAddPdf("model_1","model_1",RooArgSet(*model_sig_1,*model_sig_Bs_1,*model_bkg),RooArgList(nSig_1, nSig_Bs_1, nBkg_1));
      model_2 = new RooAddPdf("model_2","model_2",RooArgSet(*model_sig_2,*model_sig_Bs_2,*model_bkg),RooArgList(nSig_2, nSig_Bs_2, nBkg_2));
      model = new RooSimultaneous("model","model",Cat) ;
      static_cast<RooSimultaneous*>(model)->addPdf(*model_1,"1") ;
      static_cast<RooSimultaneous*>(model)->addPdf(*model_2,"2") ;
      model_ = new RooAddPdf("model_","model_",RooArgSet(*model_sig_,*model_sig_Bs_,*model_bkg),RooArgList(nSig, nSig_Bs, nBkg));
    }else
      model = new RooAddPdf("model","model",RooArgSet(*model_sig,*model_sig_Bs,*model_bkg),RooArgList(nSig, nSig_Bs, nBkg));
  }
  
  RooDataSet* data = 0;
  RooDataSet* datawIPz = 0;
  RooDataSet* datawIPz_sides = 0;
  RooDataSet* datawIPz_sides_low = 0;
  RooDataSet* datawIPz_sides_high = 0;
  //RooDataSet* datawS = 0;
  RooDataSet* datawIPzwS_ = 0;
  RooDataSet* datawIPzwS = 0;
  
  data = RooDataSet::read(filename, list);
  datawIPz = new RooDataSet("datawIPz", "datawIPz", data, *data->get(), 0, "IPzWeight");
  
  TString tmp;
  datawIPz_sides = (RooDataSet*)datawIPz->reduce(prop->selectionsidebands);
  tmp = prop->tupleName;
  tmp += "_M < ";
  tmp += prop->mass;
  datawIPz_sides_low = (RooDataSet*)datawIPz_sides->reduce(tmp);
  tmp = prop->tupleName;
  tmp += "_M > ";
  tmp += prop->mass;
  datawIPz_sides_high = (RooDataSet*)datawIPz_sides->reduce(tmp);
  
  RooFitResult* fitresults = 0;
  RooFitResult* fitresults_M = 0;
  
  if(cFit == 2){
    //datawS = datawIPz;
    datawIPzwS = datawIPz;
    
    fitresults = t_sig->fitTo(*datawIPzwS, NumCPU(numCPUs), RooFit::SumW2Error(kTRUE), RooFit::Save(kTRUE), RooFit::Optimize(kFALSE), RooFit::Strategy(2));
    fitresults->Print();
  }else if(cFit == 1){
    fitresults_M = model_M->fitTo(*data, Extended(), NumCPU(numCPUs), RooFit::Save(kTRUE), RooFit::Optimize(kFALSE), RooFit::Strategy(2));

    if(!filename.Contains("MC"))
      t_bkg->fitTo(*datawIPz_sides, NumCPU(numCPUs), RooFit::SumW2Error(kTRUE), Optimize(kFALSE), RooFit::Strategy(2));
    
    fitresults = model->fitTo(*datawIPz, Extended(), NumCPU(numCPUs), RooFit::SumW2Error(kTRUE), RooFit::Save(kTRUE), RooFit::Optimize(kFALSE), RooFit::Strategy(2));
    fitresults->Print();

    c0.setConstant();
    c1.setConstant();
    c2.setConstant();
    Bmass.setConstant();
    Bwidth1.setConstant();
    frac_M_sig.setConstant();
    rfrac_M_sig.setConstant();
    rfrac2_M_sig.setConstant();
    frac_M_bkg.setConstant();
    afactor.setConstant();
    afactor2.setConstant();
    bfactor.setConstant();
    bfactor2.setConstant();
    nufactor.setConstant();
    nfactor.setConstant();
    nfactor2.setConstant();
    lfactor.setConstant();
    zfactor.setConstant();
    RationBdBs.setConstant();
    Bmass_diff.setConstant();
    nSig_Bs_.setConstant();
    
    new RooStats::SPlot("sData","An SPlot", *data, model_M, RooArgList(nSig, nBkg) );
    new RooDataSet("datawS", "datawS", data, *data->get(), 0, "N_{bkg}_sw");
    datawIPzwS_ = data;
    datawIPzwS_->addColumn(IPzBWeight);
    datawIPzwS = new RooDataSet("datawIPzwS", "datawIPzwS", datawIPzwS_, *datawIPzwS_->get(), 0, "IPzBWeight");
    
    if(!filename.Contains("MC")){
      TCanvas* canvasbkg = createCanvasWithPull("canvasbkg");
      RooPlot* framebkg = TAU.frame();
      datawIPz_sides->plotOn(framebkg, Name("Data"), Binning("default"));
      t_bkg->plotOn(framebkg, Name("Total"));
      RooHist* bkg_pull = framebkg->pullHist("Data","Total",kTRUE);
      RooPlot* framebkg_pull = TAU.frame();
      framebkg_pull->addPlotable(bkg_pull,"P") ;
      canvasbkg->cd(1);
      framebkg->Draw();
      framebkg->SetMinimum(0.3);
      gPad->SetLogy();
      LHCbRight->Draw();
      canvasbkg->cd(2);
      framebkg_pull->Draw();
      scaleframes(TAU,framebkg_pull,framebkg,0.68);
      canvasbkg->SaveAs("plots/"+prefix+"_sidebands.pdf");

      TCanvas* canvasbkg2 = new TCanvas("canvasbkg2","canvasbkg2", 1000, 700);
      RooPlot* framebkg2 = TAU.frame();
      datawIPz_sides_low->plotOn(framebkg2, Binning("default"));
      datawIPz_sides_high->plotOn(framebkg2, Binning("default"), RooFit::Rescale(datawIPz_sides_low->sumEntries()/datawIPz_sides_high->sumEntries()), MarkerSize(1.0), MarkerColor(kRed), LineColor(kRed));
      framebkg2->Draw();
      framebkg2->SetMinimum(0.3);
      gPad->SetLogy();
      canvasbkg2->SaveAs("plots/"+prefix+"_lowhighsidebands.pdf");
      
      TCanvas* canvasbkg21 = createCanvasWithPull("canvasbkg21");
      RooPlot* framebkg21 = TAU.frame();
      datawIPz_sides_low->plotOn(framebkg21, Name("Data"), Binning("default"));
      t_bkg->plotOn(framebkg21,Name("Total"), Precision(1e-7));
      RooHist* bkg21_pull = framebkg21->pullHist("Data","Total",kTRUE);
      RooPlot* framebkg21_pull = TAU.frame();
      framebkg21_pull->addPlotable(bkg21_pull,"P") ;
      canvasbkg21->cd(1);
      framebkg21->Draw();
      framebkg21->SetMinimum(0.3);
      gPad->SetLogy();
      LHCbRight->Draw();
      canvasbkg21->cd(2);
      framebkg21_pull->Draw();
      scaleframes(TAU,framebkg21_pull,framebkg21,0.68);
      canvasbkg21->SaveAs("plots/"+prefix+"_lowsidebands.pdf");
      
      TCanvas* canvasbkg22 = createCanvasWithPull("canvasbkg22");
      RooPlot* framebkg22 = TAU.frame();
      datawIPz_sides_high->plotOn(framebkg22, Name("Data"), Binning("default"));
      t_bkg->plotOn(framebkg22,Name("Total"), Precision(1e-7));
      RooHist* bkg22_pull = framebkg22->pullHist("Data","Total",kTRUE);
      RooPlot* framebkg22_pull = TAU.frame();
      framebkg22_pull->addPlotable(bkg22_pull,"P") ;
      canvasbkg22->cd(1);
      framebkg22->Draw();
      framebkg22->SetMinimum(0.3);
      gPad->SetLogy();
      LHCbRight->Draw();
      canvasbkg22->cd(2);
      framebkg22_pull->Draw();
      scaleframes(TAU,framebkg22_pull,framebkg22,0.68);
      canvasbkg22->SaveAs("plots/"+prefix+"_highsidebands.pdf");
      
      TCanvas* canvasbkg3 = new TCanvas("canvasbkg3","canvasbkg3", 1000, 700);
      RooPlot* framebkg3 = TAU.frame();
      datawIPz_sides->plotOn(framebkg3, Binning("default"));
      datawIPzwS->plotOn(framebkg3, Binning("default"), RooFit::Rescale(datawIPz_sides->sumEntries()/datawIPzwS->sumEntries()), MarkerSize(1.0), MarkerColor(kRed), LineColor(kRed));
      framebkg3->Draw();
      framebkg3->SetMinimum(0.3);
      gPad->SetLogy();
      canvasbkg3->SaveAs("plots/"+prefix+"_sidebands_bweighted.pdf");
    }

    cout << "KS test probability (mass): " << datawIPz->createHistogram("h_mass_data",M,Binning(*binning_M))->KolmogorovTest(model->createHistogram("h_mass_funct",M,Binning(*binning_M))) << endl;
    cout << "KS test probability (time): " << datawIPz->createHistogram("h_time_data",TAU,Binning(*binning))->KolmogorovTest(model->createHistogram("h_time_funct",TAU,Binning(*binning))) << endl;

    //datawS = datawIPz;
    datawIPzwS = datawIPz;
  }else{
    fitresults_M = model_M->fitTo(*data, Extended(), NumCPU(numCPUs), RooFit::Save(kTRUE), RooFit::Optimize(kFALSE), RooFit::Strategy(2));

    c0.setConstant();
    c1.setConstant();
    c2.setConstant();
    Bmass.setConstant();
    Bwidth1.setConstant();
    frac_M_sig.setConstant();
    rfrac_M_sig.setConstant();
    rfrac2_M_sig.setConstant();
    frac_M_bkg.setConstant();
    afactor.setConstant();
    afactor2.setConstant();
    bfactor.setConstant();
    bfactor2.setConstant();
    nufactor.setConstant();
    nfactor.setConstant();
    nfactor2.setConstant();
    lfactor.setConstant();
    zfactor.setConstant();
    RationBdBs.setConstant();
    Bmass_diff.setConstant();
    nSig_Bs_.setConstant();
        
    new RooStats::SPlot("sData","An SPlot", *data, model_M, RooArgList(nSig, nBkg) );
    if(addBscomponent)
      new RooStats::SPlot("sData","An SPlot", *data, model_M_, RooArgList(nSig, nSig_Bs_, nBkg) );
      
    new RooDataSet("datawS", "datawS", data, *data->get(), 0, "N_{sig}_sw");
    datawIPzwS_ = data;
    datawIPzwS_->addColumn(IPzSWeight);
    datawIPzwS = new RooDataSet("datawIPzwS", "datawIPzwS", datawIPzwS_, *datawIPzwS_->get(), 0, "IPzSWeight");
    
    fitresults = t_sig->fitTo(*datawIPzwS, NumCPU(numCPUs), RooFit::SumW2Error(kTRUE), RooFit::Save(kTRUE), RooFit::Optimize(kFALSE), RooFit::Strategy(2));
    fitresults->Print();

    cout << "KS test probability (mass): " << data->createHistogram("h_mass_data",M,Binning(*binning_M))->KolmogorovTest(model_M->createHistogram("h_mass_funct",M,Binning(*binning_M))) << endl;
    cout << "KS test probability (time): " << datawIPzwS->createHistogram("h_time_data",TAU,Binning(*binning))->KolmogorovTest(t_sig->createHistogram("h_time_funct",TAU,Binning(*binning))) << endl;
  }

  //Double_t nsig(nSig.getVal());
  //Double_t nbkg(nBkg.getVal());

  if(trigger == 2){
    t_sig = t_sig_;
    model_sig = model_sig_;
    model_t = model_t_;
    model = model_;
    if(addBscomponent){
      t_sig_Bs = t_sig_Bs_;
      model_sig_Bs = model_sig_Bs_;
    }
    if(cFit == 1){
      nSig.setVal(nSig_1.getVal()+nSig_2.getVal());
      nBkg.setVal(nBkg_1.getVal()+nBkg_2.getVal());
    }
  }

  TCanvas* cdata;
  if(cFit == 2)
    cdata = createCanvasWithPull("canvas");
  else
    cdata = createCanvasTwoWithPull("canvas");
  
  RooPlot* frame = 0;
  
  if(cFit != 2){
    cdata->cd(1);
    outputname = particle;
    outputname += " Mass";
    frame = M.frame(Title(outputname));
    if(cFit != 0)
      datawIPz->plotOn(frame, Binning("default"), Name("Data"), MarkerSize(1.0));
    else
      data->plotOn(frame, Binning("default"), Name("Data"), MarkerSize(1.0));
    model_M->plotOn(frame, LineWidth(2), LineColor(kBlack), Name("Total"), Precision(1e-7));
    model_M->plotOn(frame, Components(*M_sig), Name("Signal"), LineWidth(2), LineColor(kRed), LineStyle(kDashed), Precision(1e-7));
    if(addBscomponent)
      model_M->plotOn(frame, Components(*M_sig_Bs), Name("BsSignal"), LineWidth(2), LineColor(kGreen), LineStyle(5), Precision(1e-7));
    model_M->plotOn(frame, Components(*M_bkg), Name("Bkg"), LineWidth(2), LineColor(kBlue), LineStyle(kDotted), Precision(1e-7));
    
    frame->Draw();
    if(filename.Contains("MCtruth"))
      gPad->SetLogy();
    frame->SetMinimum(0.3);                                                                                                                                                                                            
    TLegend* legend = new TLegend(0.20,0.55,0.45,0.85);
    legend->SetFillColor(kWhite);
    legend->AddEntry((RooHist*)frame->findObject("Data"),"Data","lep");
    legend->AddEntry((RooHist*)frame->findObject("Total"),"Total","l");
    legend->AddEntry((RooHist*)frame->findObject("Signal"),"Signal "+prop->plotName,"l");
    legend->AddEntry((RooHist*)frame->findObject("Bkg"),"Comb. bkg","l");
    legend->SetTextFont(132);
    //legend->Draw();
    
    LHCbLeft->Draw();
  }

  if(cFit == 2)
    cdata->cd(1);
  else
    cdata->cd(2);
  outputname = "sWeighted ";
  outputname += particle;
  outputname += " Propertime";
  RooPlot* frame2 = TAU.frame(Title(outputname));
  datawIPzwS->plotOn(frame2, Binning("default"), Name("Data"), MarkerSize(1.0), MarkerColor(kBlack), DataError(RooAbsData::SumW2));

  TLegend* legend2 = new TLegend(0.65,(cFit==1?0.55:0.66),0.9,0.85);
  legend2->SetFillColor(kWhite);
  legend2->SetTextFont(132);
  if(cFit == 1){
    model_t->plotOn(frame2, LineWidth(2), LineColor(kBlack), Name("Total"), Precision(1e-7));
    model_t->plotOn(frame2, Components(*t_sig), Name("Signal"), LineWidth(2), LineColor(kRed), LineStyle(kDashed), Precision(1e-7));
    model_t->plotOn(frame2, Components(*t_sig_Bs), Name("BsSignal"), LineWidth(2), LineColor(kGreen), LineStyle(5), Precision(1e-7));
    model_t->plotOn(frame2, Components(*t_bkg), Name("Bkg"), LineWidth(2), LineColor(kBlue), LineStyle(kDotted), Precision(1e-7));
    
    legend2->AddEntry((RooHist*)frame2->findObject("Data"),"Data","lep");
    legend2->AddEntry((RooHist*)frame2->findObject("Total"),"Total","l");
    legend2->AddEntry((RooHist*)frame2->findObject("Signal"),"Signal "+prop->plotName,"l");
    legend2->AddEntry((RooHist*)frame2->findObject("Bkg"),"Comb. bkg","l");
  }else{
    t_sig->plotOn(frame2, LineWidth(2), LineColor(kBlack), Name("Total"), Precision(1e-7));
    legend2->AddEntry((RooHist*)frame2->findObject("Data"),"Data","lep");
    legend2->AddEntry((RooHist*)frame2->findObject("Total"),"Total","l");
  }
  frame2->Draw();
  frame2->SetMinimum(0.3);
  //gPad->SetLogx();
  gPad->SetLogy();
  //legend2->Draw();

  LHCbRight->Draw();
  
  RooHist* pull_M = 0;
  if(cFit != 2)
    pull_M = frame->pullHist("Data","Total",kTRUE);
  RooHist* pull_t = frame2->pullHist("Data","Total",kTRUE);

  if(cFit != 2){
    cdata->cd(3);
    outputname = "Pull";
    RooPlot* frame3 = M.frame(Title(outputname));
    frame3->addPlotable(pull_M,"P") ;
    frame3->Draw();
    scaleframes(M,frame3,frame,0.68);
  }
  
  if(cFit == 2)
    cdata->cd(2);
  else
    cdata->cd(4);
  outputname = "Pull";
  RooPlot* frame4 = TAU.frame(Title(outputname));
  frame4->addPlotable(pull_t,"P") ;
  frame4->Draw();
  //gPad->SetLogx();
  scaleframes(TAU,frame4,frame2,0.68);
  
  cdata->Update();

  if(toynumber<0)
    cdata->SaveAs("plots/"+prefix+".pdf");
  
  if(cFit == 1){
    cout << "Chi2/nDoF (mass): " << frame->chiSquare("Total","Data",fitresults->floatParsFinal().getSize()) << endl;
    cout << "Chi2/nDoF (time): " << frame2->chiSquare("Total","Data",fitresults->floatParsFinal().getSize()) << endl;
  }else if(cFit == 0){
    cout << "Chi2/nDoF (mass): " << frame->chiSquare("Total","Data",fitresults_M->floatParsFinal().getSize()) << endl;
    cout << "Chi2/nDoF (time): " << frame2->chiSquare("Total","Data",fitresults->floatParsFinal().getSize()) << endl;
  }
  
  if(cFit == 2 || filename.Contains("MCToys")){
    if(fitresults->statusCodeHistory(0) == 0 && fitresults->statusCodeHistory(1) == 0) {
      cout << "Tau = " << tau_sig.getVal() << " " << tau_sig.getError() << endl;
      cout << "Tau (beta corrected) = " << tau_sig.getVal()/(1.+beta_*tau_sig.getVal()) << endl;
      outputfile << tau_sig.getVal() << " " << tau_sig.getError() << endl;
    }else{
      cout << "Fit Status not OK: " << fitresults->status() << endl;
    }
  }else{
    if(fitresults->statusCodeHistory(0) == 0 && fitresults->statusCodeHistory(1) == 0 && fitresults->statusCodeHistory(2) == 0) {
      cout << "Tau = " << tau_sig.getVal() << " " << tau_sig.getError() << endl;
      cout << "Tau (beta corrected) = " << tau_sig.getVal()/(1.+beta_*tau_sig.getVal()) << endl;
      outputfile << tau_sig.getVal() << " " << tau_sig.getError() << endl;
    }else{
      cout << "Fit Status not OK: " << fitresults->status() << endl;
    }
  }

  outputfile.close();
  if(trigger > 0)
    triggeracceptancefile->Close();
  if(stripping > 0)
    strippingacceptancefile->Close();
}

int main(int argc, char *argv[])
{
  if(argc < 5)
    return 0;
  
  TString filename(argv[1]);
  TString trigger_(argv[2]);
  TString stripping_(argv[3]);
  TString cFit_(argv[4]);
  
  Int_t trigger(trigger_.Atoi());
  Int_t stripping(stripping_.Atoi());
  Int_t cFit(cFit_.Atoi());
  
  cout << trigger << " " << stripping << " " << cFit << endl;
  
  particleProperties* prop = new particleProperties(filename);

  if(argc == 10){
    TString triggerfilename(argv[5]);
    TString strippingfilename(argv[6]);
    TString suffix(argv[7]);
    if(suffix==".")
      suffix = "";
    TString smoothingdegree_(argv[8]);
    UInt_t smoothingdegree(smoothingdegree_.Atoi());
    TString toynumber_(argv[9]);
    Int_t toynumber(toynumber_.Atoi());
    fitLifetime(filename,prop,cFit,trigger,stripping,triggerfilename,strippingfilename,suffix,smoothingdegree,toynumber);
  }else if(argc == 9){
    TString triggerfilename(argv[5]);
    TString strippingfilename(argv[6]);
    TString suffix(argv[7]);
    if(suffix==".")
      suffix = "";
    TString smoothingdegree_(argv[8]);
    UInt_t smoothingdegree(smoothingdegree_.Atoi());
    fitLifetime(filename,prop,cFit,trigger,stripping,triggerfilename,strippingfilename,suffix,smoothingdegree);
  }else if(argc == 8){
    TString triggerfilename(argv[5]);
    TString strippingfilename(argv[6]);
    TString suffix(argv[7]);
    if(suffix==".")
      suffix = "";
    fitLifetime(filename,prop,cFit,trigger,stripping,triggerfilename,strippingfilename,suffix);
  }else if(trigger == 0 && stripping == 0){
    fitLifetime(filename,prop,cFit,trigger,stripping,"","");
  }else if(trigger > 0 && stripping == 0){
    TString triggerfilename(argv[5]);
    fitLifetime(filename,prop,cFit,trigger,stripping,triggerfilename,"");
  }else if(trigger == 0 && stripping > 0){
    TString strippingfilename(argv[6]);
    fitLifetime(filename,prop,cFit,trigger,stripping,"",strippingfilename);
  }else if(trigger > 0 && stripping > 0){
    TString triggerfilename(argv[5]);
    TString strippingfilename(argv[6]);
    fitLifetime(filename,prop,cFit,trigger,stripping,triggerfilename,strippingfilename);
  }
  return 0;
}
