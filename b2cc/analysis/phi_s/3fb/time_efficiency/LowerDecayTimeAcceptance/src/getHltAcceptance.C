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
#include "TLatex.h"
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

void getHltAcceptance(TString const& filename, particleProperties* prop, 
                      Int_t const& bins = 20)
{
  uselhcbStyle(0.08,1.5);
  gStyle->SetTitleOffset(0.85,"Y");
  gStyle->SetPadLeftMargin(0.16);
  
  Double_t t_min(prop->t_min);
  Double_t t_max(prop->t_max);
  Double_t nStart(1000.);
  Int_t bins_M(40);
  
  TString particle = prop->GetName();
  Double_t mass = prop->GetMass();
  Double_t tau_PDG = prop->GetTau();
  
  TObjArray* tokens = filename.Tokenize("/");
  TString prefix(((TObjString*)tokens->At(tokens->GetEntriesFast()-1))->GetString());
  prefix.ReplaceAll(".txt","");
  prefix.ReplaceAll("Tuple","_HltPropertimeAcceptance");
  prefix.ReplaceAll("_Trigger","");
  
  TString outputname("ROOT/");
  outputname += prefix;
  outputname += "_";
  outputname += bins;
  outputname += "bins.root";
  TFile* outputfile = new TFile(outputname,"RECREATE");

  RooRealVar TAU("B_TAU",prop->plotName+" Decay Time #tau",t_min,t_max,"ps") ;
  TAU.setRange("total",t_min,t_max);
  RooRealVar M("B_s0_M","Mass",prop->mass_low_acc,prop->mass_high_acc,"MeV/c^{2}") ;
  RooRealVar Weight("Weight","Weight",-1000.,1000.,"") ;
  RooRealVar Weight2("Weight2","Weight2",-1000.,1000.,"") ;

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
  list.add(Weight2);
  
  //RooBinning* binning = new RooBinning(bins,t_min,t_max);
  
  RooBinning* binning = new RooBinning(t_min,t_max);
  Double_t A(TMath::Exp(-t_max/tau_PDG));
  Double_t B(TMath::Exp(-t_min/tau_PDG));
  for(Int_t i(1); i< bins; i++){
    binning->addBoundary(-TMath::Log(((Double_t)i*(A-B)/(Double_t)bins+B))*tau_PDG);
  }
  
  TAU.setBinning(*binning);
  
  RooDataSet* data_ = RooDataSet::read(filename, list);
  RooDataSet* data = new RooDataSet("data", "data", data_, list, 0, "Weight");
  RooDataSet* dataw = new RooDataSet("dataw", "dataw", data_, list, 0, "Weight2");
      
  Double_t width_boundary;

  if(particle == "Bs" || particle == "Lambdab0")
    width_boundary = 8.;
  else if(particle == "Bd")
    width_boundary = 9.;
  else
    width_boundary = 11.;

  /*
  Double_t width_boundary_high;
  
  if(particle == "Bs" || particle == "BdJPsiKs" || particle == "Lambdab0")
    width_boundary_high = 15.;
  else if(particle == "Bd")
    width_boundary_high = 18.;
  else
    width_boundary_high = 22.;
  */

  RooRealVar c0("c_{0}", "coefficient #0", -0.15,-1.0,1.0);
  RooRealVar Bmass = RooRealVar("#m_{B}", "Mean B mass", mass, mass-5.,mass+5., "MeV/c^{2}");
  RooRealVar Bwidth1 = RooRealVar("Bwidth1", "B mass resolution", 7., 4., width_boundary-0.1, "MeV/c^{2}");
  //RooRealVar Bwidth2 = RooRealVar("Bwidth2", "B mass resolution", 15., width_boundary+0.1, width_boundary_high, "MeV/c^{2}");
  RooRealVar frac = RooRealVar("frac", "frac", prop->frac_M_sig, 0.3, 1.);
  RooRealVar rfrac = RooRealVar("rfrac", "rfrac", prop->rfrac_M_sig, 1.2, 4.);
  RooFormulaVar Bwidth2 = RooFormulaVar("#sigma_{B^{0}_{s,2}}", "B mass resolution", "Bwidth1*rfrac",RooArgList(Bwidth1,rfrac));
  
  RooChebychev *   pdf_J_Bmass = new RooChebychev("Bmass_J_bkg", "background PDF", M, RooArgList(c0));
  RooGaussian *    pdf_S_Bmass1 = new RooGaussian("Bmass_pdf_sig1", "B signal mass pdf", M, Bmass, Bwidth1);
  RooGaussian *    pdf_S_Bmass2 = new RooGaussian("Bmass_pdf_sig2", "B signal mass pdf", M, Bmass, Bwidth2);
  RooAddPdf *      pdf_S_Bmass  = new RooAddPdf("Bmass_pdf_sig", "B signal mass pdf", RooArgSet(*pdf_S_Bmass1, *pdf_S_Bmass2), frac);
  
  RooRealVar ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S = RooRealVar("ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S","ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S",0.9, 0., 1.);
  RooRealVar ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S = RooRealVar("ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S","ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S",0.9, 0., 1.);
  RooRealVar ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S = RooRealVar("ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S","ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S",0.3, 0., 1.);
  //0.0000001
  RooRealVar n_A_1_S = RooRealVar("n_A_1_S","n_A_1_S",nStart, 0., 10000000.);
  RooRealVar n_A_2_S = RooRealVar("n_A_2_S","n_A_2_S",nStart, 0., 10000000.);
  RooRealVar n_A_1_Reweighted_S = RooRealVar("n_A_1_Reweighted_S","n_A_1_Reweighted_S",nStart, 0., 10000000.);
  RooRealVar n_A_2_Reweighted_S = RooRealVar("n_A_2_Reweighted_S","n_A_2_Reweighted_S",nStart, 0., 10000000.);
  RooRealVar n_B_1_S = RooRealVar("n_B_1_S","n_B_1_S",nStart, 0., 10000000.);
  RooRealVar n_B_2_S = RooRealVar("n_B_2_S","n_B_2_S",nStart, 0., 10000000.);  
  
  RooFormulaVar n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_S = RooFormulaVar("n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_S","n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_S","n_A_1_S/ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S-n_A_1_S",RooArgList(ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S,n_A_1_S));
  RooFormulaVar n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S = RooFormulaVar("n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S","n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S","n_A_1_Reweighted_S/ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S-n_A_1_Reweighted_S",RooArgList(ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S,n_A_1_Reweighted_S));
  
  RooFormulaVar n_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S = RooFormulaVar("n_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S","n_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S","ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S*n_B_2_S",RooArgList(ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S,n_B_2_S));
  
  RooRealVar ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B = RooRealVar("ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B","ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B",0.9, -0.5, 1.5);
  RooRealVar ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B = RooRealVar("ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B","ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B",0.9, -0.5, 1.5);
  RooRealVar ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B = RooRealVar("ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B","ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B",0.1, -0.5, 1.5);
  RooRealVar n_A_1_B = RooRealVar("n_A_1_B","n_A_1_B",nStart, 0., 5000000.);
  RooRealVar n_A_2_B = RooRealVar("n_A_2_B","n_A_2_B",nStart, 0., 5000000.);
  RooRealVar n_A_1_Reweighted_B = RooRealVar("n_A_1_Reweighted_B","n_A_1_Reweighted_B",nStart, 0., 5000000.);
  RooRealVar n_A_2_Reweighted_B = RooRealVar("n_A_2_Reweighted_B","n_A_2_Reweighted_B",nStart, 0., 5000000.);
  RooRealVar n_B_1_B = RooRealVar("n_B_1_B","n_B_1_B",nStart, 0., 5000000.);
  RooRealVar n_B_2_B = RooRealVar("n_B_2_B","n_B_2_B",nStart, 0., 5000000.);  
  
  RooFormulaVar n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_B = RooFormulaVar("n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_B","n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_B","n_A_1_B/ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B-n_A_1_B",RooArgList(ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B,n_A_1_B));
  RooFormulaVar n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B = RooFormulaVar("n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B","n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B","n_A_1_Reweighted_B/ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B-n_A_1_Reweighted_B",RooArgList(ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B,n_A_1_Reweighted_B));
  
  RooFormulaVar n_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B = RooFormulaVar("n_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B","n_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B","ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B*n_B_2_B",RooArgList(ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B,n_B_2_B));
  
  RooAddPdf * model_A_1 = new RooAddPdf("model_A_1","model_A_1", RooArgList(*pdf_S_Bmass, *pdf_J_Bmass), RooArgList(n_A_1_S, n_A_1_B));
  RooAddPdf * model_A_2 = new RooAddPdf("model_A_2","model_A_2", RooArgList(*pdf_S_Bmass, *pdf_J_Bmass), RooArgList(n_A_2_S, n_A_2_B));
  RooAddPdf * model_A_1_Reweighted = new RooAddPdf("model_A_1_Reweighted","model_A_1_Reweighted", RooArgList(*pdf_S_Bmass, *pdf_J_Bmass), RooArgList(n_A_1_Reweighted_S, n_A_1_Reweighted_B));
  RooAddPdf * model_A_2_Reweighted = new RooAddPdf("model_A_2_Reweighted","model_A_2_Reweighted", RooArgList(*pdf_S_Bmass, *pdf_J_Bmass), RooArgList(n_A_2_Reweighted_S, n_A_2_Reweighted_B));
  RooAddPdf * model_B_1 = new RooAddPdf("model_B_1","model_B_1", RooArgList(*pdf_S_Bmass, *pdf_J_Bmass), RooArgList(n_B_1_S, n_B_1_B));
  RooAddPdf * model_B_2 = new RooAddPdf("model_B_2","model_B_2", RooArgList(*pdf_S_Bmass, *pdf_J_Bmass), RooArgList(n_B_2_S, n_B_2_B));
  
  RooAddPdf * model_A_2_Hlt1DiMuon_Hlt2DiMuonDetached = new RooAddPdf("model_A_2_Hlt1DiMuon_Hlt2DiMuonDetached","model_A_2_Hlt1DiMuon_Hlt2DiMuonDetached", RooArgList(*pdf_S_Bmass, *pdf_J_Bmass), RooArgList(n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_S, n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_B));
  RooAddPdf * model_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted = new RooAddPdf("model_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted","model_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted", RooArgList(*pdf_S_Bmass, *pdf_J_Bmass), RooArgList(n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S, n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B));
  RooAddPdf * model_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached = new RooAddPdf("model_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached","model_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached", RooArgList(*pdf_S_Bmass, *pdf_J_Bmass), RooArgList(n_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S, n_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B));
  
  RooDataHist * histo_Hlt1DiMuon_Hlt2DiMuonDetached_1_S_ = new RooDataHist("histo_Hlt1DiMuon_Hlt2DiMuonDetached_1_S_","histo_Hlt1DiMuon_Hlt2DiMuonDetached_1_S_",TAU);
  RooDataHist * histo_Hlt1DiMuon_Hlt2DiMuonDetached_2_S_ = new RooDataHist("histo_Hlt1DiMuon_Hlt2DiMuonDetached_2_S_","histo_Hlt1DiMuon_Hlt2DiMuonDetached_2_S_",TAU);  
  RooDataHist * histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S_ = new RooDataHist("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S_","histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S_",TAU);
  RooDataHist * histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S_ = new RooDataHist("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S_","histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S_",TAU);  
  RooDataHist * histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S_ = new RooDataHist("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S_","histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S_",TAU);
  RooDataHist * histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S_ = new RooDataHist("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S_","histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S_",TAU);  
  RooDataHist * histo_Hlt1DiMuon_Hlt2DiMuonDetached_S_ = new RooDataHist("histo_Hlt1DiMuon_Hlt2DiMuonDetached_S_","histo_Hlt1DiMuon_Hlt2DiMuonDetached_S_",TAU);
  RooDataHist * histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S_ = new RooDataHist("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S_","histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S_",TAU);
  RooDataHist * histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S_ = new RooDataHist("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S_","histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S_",TAU);
  RooDataHist * histo_Hlt1DiMuon_Hlt2DiMuonDetached_B_ = new RooDataHist("histo_Hlt1DiMuon_Hlt2DiMuonDetached_B_","histo_Hlt1DiMuon_Hlt2DiMuonDetached_B_",TAU);
  RooDataHist * histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B_ = new RooDataHist("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B_","histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B_",TAU);
  RooDataHist * histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B_ = new RooDataHist("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B_","histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B_",TAU);
  
  RooHist * graph_Hlt1DiMuon_Hlt2DiMuonDetached_1_S = new RooHist();
  RooHist * graph_Hlt1DiMuon_Hlt2DiMuonDetached_2_S = new RooHist();
  RooHist * graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S = new RooHist();
  RooHist * graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S = new RooHist();
  RooHist * graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S = new RooHist();
  RooHist * graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S = new RooHist();
  
  RooHist * graph_Hlt1DiMuon_Hlt2DiMuonDetached_S = new RooHist();
  RooHist * graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S = new RooHist();
  RooHist * graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S = new RooHist();
  RooHist * graph_Hlt1DiMuon_Hlt2DiMuonDetached_B = new RooHist();
  RooHist * graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B = new RooHist();
  RooHist * graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B = new RooHist();
  
  TH1F* histo_Hlt1DiMuon_Hlt2DiMuonDetached_1_S = TAU.createHistogram("histo_Hlt1DiMuon_Hlt2DiMuonDetached_1_S", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1DiMuon_Hlt2DiMuonDetached_2_S = TAU.createHistogram("histo_Hlt1DiMuon_Hlt2DiMuonDetached_2_S", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S = TAU.createHistogram("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S = TAU.createHistogram("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S = TAU.createHistogram("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S = TAU.createHistogram("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S", "Hlt Acceptance", *binning);

  TH1F* histo_Hlt1DiMuon_Hlt2DiMuonDetached_S = TAU.createHistogram("histo_Hlt1DiMuon_Hlt2DiMuonDetached_S", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S = TAU.createHistogram("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S = TAU.createHistogram("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1DiMuon_Hlt2DiMuonDetached_B = TAU.createHistogram("histo_Hlt1DiMuon_Hlt2DiMuonDetached_B", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B = TAU.createHistogram("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B = TAU.createHistogram("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B", "Hlt Acceptance", *binning);
  
  TH1F* histo_Hlt1DiMuon_Hlt2DiMuonDetached_check_S = TAU.createHistogram("histo_Hlt1DiMuon_Hlt2DiMuonDetached_check_S", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_check_S = TAU.createHistogram("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_check_S", "Hlt Acceptance", *binning);
  TH1F* histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_check_S = TAU.createHistogram("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_check_S", "Hlt Acceptance", *binning);

  TString tmp;
  
  tmp = prefix;
  tmp += "_";
  tmp += bins;
  tmp += "bins";
  tmp += "_Hlt1DiMuon_Hlt2DiMuonDetached";
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_S->SetName(tmp);
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_1_S->SetName(tmp+"_SetA");
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_2_S->SetName(tmp+"_SetB");
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_check_S->SetName(tmp+"_check");
  tmp += "_AsymErrors";
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_S->SetName(tmp);
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_1_S->SetName(tmp+"_SetA");
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_2_S->SetName(tmp+"_SetB");
  tmp = particle;
  tmp += " Hlt1DiMuon_Hlt2DiMuonDetached Acceptance";
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_S->SetTitle(tmp);
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_S->SetTitle(tmp);

  tmp = prefix;
  tmp += "_";
  tmp += bins;
  tmp += "bins";
  tmp += "_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted";
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S->SetName(tmp);
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S->SetName(tmp+"_SetA");
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S->SetName(tmp+"_SetB");
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_check_S->SetName(tmp+"_check");
    tmp += "_AsymErrors";
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S->SetName(tmp);
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S->SetName(tmp+"_SetA");
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S->SetName(tmp+"_SetB");
  tmp = particle;
  tmp += " Hlt1DiMuon_Hlt2DiMuonDetached Reweighted Acceptance";
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S->SetTitle(tmp);
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S->SetTitle(tmp);
  
  tmp = prefix;
  tmp += "_";
  tmp += bins;
  tmp += "bins";
  tmp += "_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached";
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->SetName(tmp);
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S->SetName(tmp+"_SetC");
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S->SetName(tmp+"_SetD");
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_check_S->SetName(tmp+"_check");
  tmp += "_AsymErrors";
  graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->SetName(tmp);
  graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S->SetName(tmp+"_SetC");
  graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S->SetName(tmp+"_SetD");
  tmp = particle;
  tmp += " Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached Acceptance";
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->SetTitle(tmp);
  graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->SetTitle(tmp);

  tmp = prefix;
  tmp += "_";
  tmp += bins;
  tmp += "bins";
  tmp += "_Hlt1DiMuon_Hlt2DiMuonDetached_Background";
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_B->SetName(tmp);
  tmp += "_AsymErrors";
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_B->SetName(tmp);
  tmp = particle;
  tmp += " Hlt1DiMuon_Hlt2DiMuonDetached UB Acceptance";
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_B->SetTitle(tmp);
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_B->SetTitle(tmp);
  
  tmp = prefix;
  tmp += "_";
  tmp += bins;
  tmp += "bins";
  tmp += "_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_Background";
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B->SetName(tmp);
  tmp += "_AsymErrors";
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B->SetName(tmp);
  tmp = particle;
  tmp += " Hlt1DiMuon_Hlt2DiMuonDetached Reweighted Acceptance";
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B->SetTitle(tmp);
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B->SetTitle(tmp);
  
  tmp = prefix;
  tmp += "_";
  tmp += bins;
  tmp += "bins";
  tmp += "_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_Background";
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B->SetName(tmp);
  tmp += "_AsymErrors";
  graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B->SetName(tmp);
  tmp = particle;
  tmp += " Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached Acceptance";
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B->SetTitle(tmp);
  graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B->SetTitle(tmp);
  
  RooDataSet* data_sub;
  RooDataSet* dataw_sub;
  RooDataSet* data_sub2;
  RooDataSet* data_sub_A_1;
  RooDataSet* data_sub_A_2;
  RooDataSet* data_sub_B_1;
  RooDataSet* data_sub_B_2;
  RooDataSet* dataw_sub_A_1;
  RooDataSet* dataw_sub_A_2;
  
  data_sub2 = ((RooDataSet*)data->reduce("CatB>0."));
  
  n_A_1_S.setVal(TMath::Max(data_sub2->sumEntries()/2.,100.));
  n_A_1_B.setVal(TMath::Max(data_sub2->sumEntries()/2.,100.));
  
  model_A_1->fitTo(*data_sub2,RooFit::Minos(kFALSE),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
  
  rfrac.setConstant();
  frac.setConstant();
  Bmass.setConstant();
  c0.setConstant();
  Bwidth1.setConstant();
  data_sub2->Delete();
  
  for(Int_t i(0); i< bins; i++){
    tmp = "B_TAU < ";
    tmp += binning->binHigh(i);
    tmp += " && B_TAU > ";
    tmp += binning->binLow(i);
    data_sub = (RooDataSet*)data->reduce(tmp);
    dataw_sub = (RooDataSet*)dataw->reduce(tmp);
    data_sub2 = ((RooDataSet*)data_sub->reduce("CatB>0."));
    data_sub_A_1 = ((RooDataSet*)data_sub->reduce("CatA==CatA::CatA1"));
    data_sub_A_2 = ((RooDataSet*)data_sub->reduce("CatA==CatA::CatA2"));
    data_sub_B_1 = ((RooDataSet*)data_sub->reduce("CatB==CatB::CatB1"));
    data_sub_B_2 = ((RooDataSet*)data_sub->reduce("CatB==CatB::CatB2"));
    dataw_sub_A_1 = ((RooDataSet*)dataw_sub->reduce("CatA==CatA::CatA1"));
    dataw_sub_A_2 = ((RooDataSet*)dataw_sub->reduce("CatA==CatA::CatA2"));
    
    TAU.setRange("fit",binning->binLow(i),binning->binHigh(i));
    TAU.setBin(i);
    
    n_A_1_S.setVal(TMath::Max(data_sub_A_1->sumEntries()/2.,100.));
    n_A_1_B.setVal(TMath::Max(data_sub_A_1->sumEntries()/2.,100.));
    
    c0.setConstant(kFALSE);
    //Bwidth1.setConstant(kFALSE);
    
    //n_A_1_S.setMin(-1000.);
    model_A_1->fitTo(*data_sub2,RooFit::Minos(kFALSE),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    n_A_1_S.setMin(0.);
    
    //c0.setConstant();
    //Bwidth1.setConstant();
    /*
    n_A_1_S.setMin(-1000.);
    n_A_2_S.setMin(-1000.);
    n_A_1_Reweighted_S.setMin(-1000.);
    n_A_2_Reweighted_S.setMin(-1000.);
    n_B_1_S.setMin(-1000.);
    n_B_2_S.setMin(-1000.);
    */
    n_A_1_S.setVal(TMath::Max(data_sub_A_1->sumEntries()*n_A_1_S.getVal()/(n_A_1_S.getVal()+n_A_1_B.getVal()),100.));
    n_A_2_S.setVal(TMath::Max(data_sub_A_2->sumEntries()*n_A_2_S.getVal()/(n_A_2_S.getVal()+n_A_2_B.getVal()),100.));
    n_A_1_Reweighted_S.setVal(TMath::Max(dataw_sub_A_1->sumEntries()*n_A_1_Reweighted_S.getVal()/(n_A_1_Reweighted_S.getVal()+n_A_1_Reweighted_B.getVal()),100.));
    n_A_2_Reweighted_S.setVal(TMath::Max(dataw_sub_A_2->sumEntries()*n_A_2_Reweighted_S.getVal()/(n_A_2_Reweighted_S.getVal()+n_A_2_Reweighted_B.getVal()),100.));
    n_B_1_S.setVal(TMath::Max(data_sub_B_1->sumEntries()*n_B_1_S.getVal()/(n_B_1_S.getVal()+n_B_1_B.getVal()),100.));
    n_B_2_S.setVal(TMath::Max(data_sub_B_2->sumEntries()*n_B_2_S.getVal()/(n_B_2_S.getVal()+n_B_2_B.getVal()),100.));
    
    n_A_1_B.setVal(TMath::Max(data_sub_A_1->sumEntries()*n_A_1_B.getVal()/(n_A_1_B.getVal()+n_A_1_S.getVal()),100.));
    n_A_2_B.setVal(TMath::Max(data_sub_A_2->sumEntries()*n_A_2_B.getVal()/(n_A_2_B.getVal()+n_A_2_S.getVal()),100.));
    n_A_1_Reweighted_B.setVal(TMath::Max(dataw_sub_A_1->sumEntries()*n_A_1_Reweighted_B.getVal()/(n_A_1_Reweighted_B.getVal()+n_A_1_Reweighted_S.getVal()),100.));
    n_A_2_Reweighted_B.setVal(TMath::Max(dataw_sub_A_2->sumEntries()*n_A_2_Reweighted_B.getVal()/(n_A_2_Reweighted_B.getVal()+n_A_2_Reweighted_S.getVal()),100.));
    n_B_1_B.setVal(TMath::Max(data_sub_B_1->sumEntries()*n_B_1_B.getVal()/(n_B_1_B.getVal()+n_B_1_S.getVal()),100.));
    n_B_2_B.setVal(TMath::Max(data_sub_B_2->sumEntries()*n_B_2_B.getVal()/(n_B_2_B.getVal()+n_B_2_S.getVal()),100.));
    
    RooSimultaneous* simmodel_Hlt1DiMuon_Hlt2DiMuonDetached = new RooSimultaneous("simmodel_Hlt1DiMuon_Hlt2DiMuonDetached","simultaneous pdf",CatA) ;
    RooSimultaneous* simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted = new RooSimultaneous("simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted","simultaneous pdf",CatA) ;
    RooSimultaneous* simmodel_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached = new RooSimultaneous("simmodel_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached","simultaneous pdf",CatB) ;
    
    RooSimultaneous* simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_ = new RooSimultaneous("simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_","simultaneous pdf",CatA) ;
    RooSimultaneous* simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_ = new RooSimultaneous("simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_","simultaneous pdf",CatA) ;
    RooSimultaneous* simmodel_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_ = new RooSimultaneous("simmodel_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_","simultaneous pdf",CatB) ;
    
    model_A_1->fitTo(*data_sub_A_1,RooFit::Minos(kFALSE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached->addPdf(*model_A_1,"CatA1") ;
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_->addPdf(*model_A_1,"CatA1") ;
  
    model_A_2->fitTo(*data_sub_A_2,RooFit::Minos(kFALSE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached->addPdf(*model_A_2_Hlt1DiMuon_Hlt2DiMuonDetached,"CatA2") ;
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_->addPdf(*model_A_2,"CatA2") ;

    model_A_1_Reweighted->fitTo(*dataw_sub_A_1,RooFit::Minos(kFALSE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted->addPdf(*model_A_1_Reweighted,"CatA1") ;
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_->addPdf(*model_A_1_Reweighted,"CatA1") ;
    
    model_A_2_Reweighted->fitTo(*dataw_sub_A_2,RooFit::Minos(kFALSE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted->addPdf(*model_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted,"CatA2") ;    
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_->addPdf(*model_A_2_Reweighted,"CatA2") ;    

    model_B_1->fitTo(*data_sub_B_1,RooFit::Minos(kFALSE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached->addPdf(*model_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached,"CatB1") ;
    simmodel_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_->addPdf(*model_B_1,"CatB1") ;
    
    model_B_2->fitTo(*data_sub_B_2,RooFit::Minos(kFALSE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached->addPdf(*model_B_2,"CatB2") ;
    simmodel_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_->addPdf(*model_B_2,"CatB2") ;
    
    ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S.setVal(n_A_1_S.getVal()/(n_A_1_S.getVal()+n_A_2_S.getVal())-0.001);
    ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S.setVal(n_A_1_Reweighted_S.getVal()/(n_A_1_Reweighted_S.getVal()+n_A_2_Reweighted_S.getVal())-0.001);
    ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S.setVal(n_B_1_S.getVal()/n_B_2_S.getVal());
    
    ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B.setVal(n_A_1_B.getVal()/(n_A_1_B.getVal()+n_A_2_B.getVal())-0.001);
    ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B.setVal(n_A_1_Reweighted_B.getVal()/(n_A_1_Reweighted_B.getVal()+n_A_2_Reweighted_B.getVal())-0.001);
    ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B.setVal(n_B_1_B.getVal()/n_B_2_B.getVal());
    
    n_A_1_B.setConstant();
    n_A_2_B.setConstant();
    n_A_1_Reweighted_B.setConstant();
    n_A_2_Reweighted_B.setConstant();
    n_B_1_B.setConstant();
    n_B_2_B.setConstant();
    ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B.setConstant();
    ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B.setConstant();
    ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B.setConstant();
    
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached->fitTo(*data_sub,RooFit::Minos(kTRUE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted->fitTo(*dataw_sub,RooFit::Minos(kTRUE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached->fitTo(*data_sub,RooFit::Minos(kTRUE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_->fitTo(*data_sub,RooFit::Minos(kTRUE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_->fitTo(*dataw_sub,RooFit::Minos(kTRUE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_->fitTo(*data_sub,RooFit::Minos(kTRUE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached->fitTo(*data_sub,RooFit::Minos(kTRUE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted->fitTo(*dataw_sub,RooFit::Minos(kTRUE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    simmodel_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached->fitTo(*data_sub,RooFit::Minos(kTRUE),RooFit::Strategy(1),Optimize(kFALSE),RooFit::SumW2Error(kTRUE));
    
    TCanvas* canvas = new TCanvas("canvas","canvas", 1400, 800);
    gPad->SetLeftMargin(0.15);
    outputname = particle;
    outputname += " Mass";
    canvas->Divide(2,1);
    canvas->cd(1);
    RooPlot* frame2 = M.frame(Bins(bins_M),Title(outputname));
    dataw_sub_A_1->plotOn(frame2);
    model_A_1->plotOn(frame2);
    frame2->Draw();
    canvas->cd(2);
    RooPlot* frame3 = M.frame(Bins(bins_M),Title(outputname));
    dataw_sub_A_2->plotOn(frame3);
    model_A_2_Hlt1DiMuon_Hlt2DiMuonDetached->plotOn(frame3);
    frame3->Draw();
    TString tmp("test_");
    tmp += i;
    tmp += ".eps";
    //canvas->SaveAs(tmp);
    canvas->Delete();
        
    n_A_1_B.setConstant(kFALSE);
    n_A_2_B.setConstant(kFALSE);
    n_A_1_Reweighted_B.setConstant(kFALSE);
    n_A_2_Reweighted_B.setConstant(kFALSE);
    n_B_1_B.setConstant(kFALSE);
    n_B_2_B.setConstant(kFALSE);
    ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B.setConstant(kFALSE);
    ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B.setConstant(kFALSE);
    ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B.setConstant(kFALSE);
    
    n_A_1_S.setConstant(kFALSE);
    n_A_2_S.setConstant(kFALSE);
    n_A_1_Reweighted_S.setConstant(kFALSE);
    n_A_2_Reweighted_S.setConstant(kFALSE);
    n_B_1_S.setConstant(kFALSE);
    n_B_2_S.setConstant(kFALSE);
    ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S.setConstant(kFALSE);
    ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S.setConstant(kFALSE);
    ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S.setConstant(kFALSE);
          
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_1_S_->set(RooArgSet(TAU),n_A_1_S.getVal()/binning->binWidth(i),n_A_1_S.getError()/binning->binWidth(i));
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_2_S_->set(RooArgSet(TAU),n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_S.getVal()/binning->binWidth(i),n_A_2_S.getError()/binning->binWidth(i));
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S_->set(RooArgSet(TAU),n_A_1_Reweighted_S.getVal()/binning->binWidth(i),n_A_1_Reweighted_S.getError()/binning->binWidth(i));
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S_->set(RooArgSet(TAU),n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S.getVal()/binning->binWidth(i),n_A_2_Reweighted_S.getError()/binning->binWidth(i));
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S_->set(RooArgSet(TAU),n_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S.getVal()/binning->binWidth(i),n_B_1_S.getError()/binning->binWidth(i));
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S_->set(RooArgSet(TAU),n_B_2_S.getVal()/binning->binWidth(i),n_B_2_S.getError()/binning->binWidth(i));
    
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_1_S->SetBinContent(i+1,n_A_1_S.getVal()/binning->binWidth(i));
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_1_S->SetBinError(i+1,n_A_1_S.getError()/binning->binWidth(i));
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_2_S->SetBinContent(i+1,n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_S.getVal()/binning->binWidth(i));
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_2_S->SetBinError(i+1,n_A_2_S.getError()/binning->binWidth(i));
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S->SetBinContent(i+1,n_A_1_Reweighted_S.getVal()/binning->binWidth(i));
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S->SetBinError(i+1,n_A_1_Reweighted_S.getError()/binning->binWidth(i));
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S->SetBinContent(i+1,n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S.getVal()/binning->binWidth(i));
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S->SetBinError(i+1,n_A_2_Reweighted_S.getError()/binning->binWidth(i));
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S->SetBinContent(i+1,n_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S.getVal()/binning->binWidth(i));
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S->SetBinError(i+1,n_B_1_S.getError()/binning->binWidth(i));
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S->SetBinContent(i+1,n_B_2_S.getVal()/binning->binWidth(i));
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S->SetBinError(i+1,n_B_2_S.getError()/binning->binWidth(i));
    
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_check_S->SetBinContent(i+1,n_A_1_S.getVal()/(n_A_1_S.getVal()+n_A_2_S.getVal()));
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_check_S->SetBinContent(i+1,n_A_1_Reweighted_S.getVal()/(n_A_1_Reweighted_S.getVal()+n_A_2_Reweighted_S.getVal()));
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_check_S->SetBinContent(i+1,n_B_1_S.getVal()/n_B_2_S.getVal());
    
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_S_->set(RooArgSet(TAU),ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S.getVal(),ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S.getError());
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_S->SetBinContent(i+1,ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S.getVal());
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_S->SetBinError(i+1,ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S.getError());
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S_->set(RooArgSet(TAU),ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S.getVal(),ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S.getError());
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S->SetBinContent(i+1,ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S.getVal());
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S->SetBinError(i+1,ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S.getError());
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S_->set(RooArgSet(TAU),ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S.getVal(),ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S.getError());
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->SetBinContent(i+1,ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S.getVal());
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->SetBinError(i+1,ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S.getError());
    
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_B_->set(RooArgSet(TAU),ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B.getVal(),ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B.getError());
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_B->SetBinContent(i+1,ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B.getVal());
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_B->SetBinError(i+1,ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B.getError());
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B_->set(RooArgSet(TAU),ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B.getVal(),ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B.getError());
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B->SetBinContent(i+1,ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B.getVal());
    histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B->SetBinError(i+1,ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B.getError());
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B_->set(RooArgSet(TAU),ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B.getVal(),ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B.getError());
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B->SetBinContent(i+1,ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B.getVal());
    histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B->SetBinError(i+1,ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B.getError());
    
    graph_Hlt1DiMuon_Hlt2DiMuonDetached_1_S->addBinWithError(TAU.getVal(),n_A_1_S.getVal(),TMath::Abs(n_A_1_S.getErrorLo()),
                                                             n_A_1_S.getErrorHi(),TAU.getBinWidth(i));
    
    graph_Hlt1DiMuon_Hlt2DiMuonDetached_2_S->addBinWithError(TAU.getVal(),n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_S.getVal(),TMath::Abs(n_A_2_S.getErrorLo()),
                                                             n_A_2_S.getErrorHi(),TAU.getBinWidth(i));
    
    graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S->addBinWithError(TAU.getVal(),n_A_1_Reweighted_S.getVal(),
                                                                        TMath::Abs(n_A_1_Reweighted_S.getErrorLo()),
                                                                        n_A_1_Reweighted_S.getErrorHi(),TAU.getBinWidth(i));
    
    graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S->addBinWithError(TAU.getVal(),n_A_2_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S.getVal(),
                                                                        TMath::Abs(n_A_2_Reweighted_S.getErrorLo()),
                                                                        n_A_2_Reweighted_S.getErrorHi(),TAU.getBinWidth(i));
    
    graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S->addBinWithError(TAU.getVal(),n_B_1_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S.getVal(),
                                                                            TMath::Abs(n_B_1_S.getErrorLo()),
                                                                            n_B_1_S.getErrorHi(),TAU.getBinWidth(i));
    
    graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S->addBinWithError(TAU.getVal(),n_B_2_S.getVal(),
                                                                            TMath::Abs(n_B_2_S.getErrorLo()),
                                                                            n_B_2_S.getErrorHi(),TAU.getBinWidth(i));
    
    graph_Hlt1DiMuon_Hlt2DiMuonDetached_S->addBinWithError(TAU.getVal(),ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S.getVal(),TMath::Abs(ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S.getErrorLo()),
                                                           ratio_Hlt1DiMuon_Hlt2DiMuonDetached_S.getErrorHi(),TAU.getBinWidth(i),1.,kFALSE);
    
    graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S->addBinWithError(TAU.getVal(),ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S.getVal(),
                                                                      TMath::Abs(ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S.getErrorLo()),
                                                                      ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S.getErrorHi(),TAU.getBinWidth(i),1.,kFALSE);

    graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->addBinWithError(TAU.getVal(),ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S.getVal(),
                                                                          TMath::Abs(ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S.getErrorLo()),
                                                                          ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S.getErrorHi(),TAU.getBinWidth(i),1.,kFALSE);
    
    graph_Hlt1DiMuon_Hlt2DiMuonDetached_B->addBinWithError(TAU.getVal(),ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B.getVal(),TMath::Abs(ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B.getErrorLo()),
                                                           ratio_Hlt1DiMuon_Hlt2DiMuonDetached_B.getErrorHi(),TAU.getBinWidth(i),1.,kFALSE);
    
    graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B->addBinWithError(TAU.getVal(),ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B.getVal(),
                                                                      TMath::Abs(ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B.getErrorLo()),
                                                                      ratio_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_B.getErrorHi(),TAU.getBinWidth(i),1.,kFALSE);
    
    graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B->addBinWithError(TAU.getVal(),ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B.getVal(),
                                                                          TMath::Abs(ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B.getErrorLo()),
                                                                          ratio_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_B.getErrorHi(),TAU.getBinWidth(i),1.,kFALSE);
    
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached->Delete();
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted->Delete();
    simmodel_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached->Delete();
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_->Delete();
    simmodel_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_->Delete();
    simmodel_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_->Delete();
    
    data_sub->Delete();
    dataw_sub->Delete();
    data_sub2->Delete();
    data_sub_A_1->Delete();
    data_sub_A_2->Delete();
    data_sub_B_1->Delete();
    data_sub_B_2->Delete();
    dataw_sub_A_1->Delete();
    dataw_sub_A_2->Delete();
  }

  histo_Hlt1DiMuon_Hlt2DiMuonDetached_S->Write();
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S->Write();
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->Write();
  
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_S->Write();
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S->Write();
  graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S->Write();
  
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_1_S->Write();
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_2_S->Write();
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S->Write();
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S->Write();
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S->Write();
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S->Write();

  graph_Hlt1DiMuon_Hlt2DiMuonDetached_1_S->Write();
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_2_S->Write();
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S->Write();
  graph_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S->Write();
  graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S->Write();
  graph_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_2_S->Write();
  /*
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_check_S->Write();
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_check_S->Write();
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_check_S->Write();
  */  
  TCanvas* cdata = new TCanvas("cdata","cdata", 1600, 1000);
  cdata->Divide(2,2);
  
  cdata->cd(1);
  gPad->SetLeftMargin(0.15);
  outputname = "";
  outputname += particle;
  outputname += " Decay Time used for Almost Unbiased Acceptance";
  RooPlot* frame1 = TAU.frame(Bins(bins),Title(outputname));
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S_->plotOn(frame1,Name("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S_"), LineColor(kBlue), MarkerColor(kBlue));
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S_->plotOn(frame1,Name("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S_"), LineColor(kRed), MarkerColor(kRed));
  frame1->GetYaxis()->SetTitle("Events / Bin Width (ps^{-1})");
  frame1->Draw();
  gPad->SetLogx();
  
  TLegend* legend_1 = new TLegend(0.65,0.6,0.9,0.85);
  legend_1->SetFillColor(kWhite);
  legend_1->AddEntry((RooHist*)frame1->findObject("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_1_S_"),"Set A","lep");
  legend_1->AddEntry((RooHist*)frame1->findObject("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_2_S_"),"Set B","lep");
  legend_1->SetTextFont(132);
  legend_1->Draw();
  
  cdata->cd(2);
  gPad->SetLeftMargin(0.15);
  outputname = "Almost Unbiased Acceptance VS ";
  outputname += particle;
  outputname += " Decay Time";
  RooPlot* frame2 = TAU.frame(Bins(bins),Title(outputname));
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S_->plotOn(frame2,Name("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S_"), LineColor(kBlack), MarkerColor(kBlack));
  frame2->SetMinimum(0.);
  //frame2->SetMinimum(0.85);
  frame2->SetMaximum(1.1);
  frame2->GetYaxis()->SetTitle("Acceptance");
  frame2->Draw();
  gPad->SetLogx();

  TLegend* legend_2 = new TLegend(0.3,0.25,0.9,0.45);
  legend_2->SetFillColor(kWhite);
  legend_2->AddEntry((RooHist*)frame2->findObject("histo_Hlt1DiMuon_Hlt2DiMuonDetached_Reweighted_S_"),"Almost Unbiased Acceptance","lep");
  legend_2->SetTextFont(132);
  legend_2->Draw();

  cdata->cd(3);
  gPad->SetLeftMargin(0.15);
  outputname = "";
  outputname += particle;
  outputname += " Decay Time used for Exclusively Biased Acceptance";
  RooPlot* frame3 = TAU.frame(Bins(bins),Title(outputname));
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S_->plotOn(frame3,Name("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S_"), LineColor(kGreen), MarkerColor(kGreen));
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_1_S_->plotOn(frame3,Name("histo_Hlt1DiMuon_Hlt2DiMuonDetached_1_S_"), LineColor(kBlue), MarkerColor(kBlue));
  histo_Hlt1DiMuon_Hlt2DiMuonDetached_2_S_->plotOn(frame3,Name("histo_Hlt1DiMuon_Hlt2DiMuonDetached_2_S_"), LineColor(kRed), MarkerColor(kRed));
  frame3->GetYaxis()->SetTitle("Events / Bin Width (ps^{-1})");
  frame3->Draw();
  gPad->SetLogx();

  TLegend* legend_3 = new TLegend(0.65,0.5,0.9,0.85);
  legend_3->SetFillColor(kWhite);
  legend_3->AddEntry((RooHist*)frame3->findObject("histo_Hlt1DiMuon_Hlt2DiMuonDetached_1_S_"),"Set A'","lep");
  legend_3->AddEntry((RooHist*)frame3->findObject("histo_Hlt1DiMuon_Hlt2DiMuonDetached_2_S_"),"Set B'","lep");
  legend_3->AddEntry((RooHist*)frame3->findObject("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_1_S_"),"Set C","lep");
  legend_3->SetTextFont(132);
  legend_3->Draw();
  
  cdata->cd(4);
  gPad->SetLeftMargin(0.15);
  outputname = "Exclusively Biased Acceptance VS ";
  outputname += particle;
  outputname += " Decay Time";
  RooPlot* frame4 = TAU.frame(Bins(bins),Title(outputname));
  histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S_->plotOn(frame4,Name("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S_"), LineColor(kBlack), MarkerColor(kBlack));
  frame4->SetMinimum(0.);
  if(filename.Contains("MC"))
    frame4->SetMaximum(0.3);
  else if(filename.Contains("2012"))
    frame4->SetMaximum(0.9);
  else
    frame4->SetMaximum(0.6);
  frame4->GetYaxis()->SetTitle("Acceptance");
  frame4->Draw();
  gPad->SetLogx();

  TLegend* legend_4 = new TLegend(0.3,0.25,0.9,0.45);
  legend_4->SetFillColor(kWhite);
  legend_4->AddEntry((RooHist*)frame4->findObject("histo_Hlt1TrackAndTrackMuonExcl_Hlt2DiMuonDetached_S_"),"Exclusively Biased Acceptance","lep");
  legend_4->SetTextFont(132);
  legend_4->Draw();

  outputname = "plots/";
  outputname += prefix;
  outputname += "_";
  outputname += bins;
  outputname += "bins.eps";
  
  cdata->SaveAs(outputname);
  
  TCanvas* cdata1 = new TCanvas("cdata1","cdata1", 800, 500);
  
  frame2->Draw();
  gPad->SetLogx();
  legend_2->Draw();
  
  outputname = "plots/";
  outputname += prefix;
  outputname += "_";
  outputname += bins;
  outputname += "bins_AlmostUnbiased.eps";
  
  cdata1->SaveAs(outputname);

  TCanvas* cdata2 = new TCanvas("cdata2","cdata2", 800, 500);
  
  frame4->Draw();
  gPad->SetLogx();
  legend_4->Draw();
  
  outputname = "plots/";
  outputname += prefix;
  outputname += "_";
  outputname += bins;
  outputname += "bins_ExclusivelyBiased.eps";
  
  cdata2->SaveAs(outputname);
  
  TCanvas* cdata3 = new TCanvas("cdata3","cdata3", 800, 500);
  
  frame1->Draw();
  gPad->SetLogx();
  legend_1->Draw();
  
  outputname = "plots/";
  outputname += prefix;
  outputname += "_";
  outputname += bins;
  outputname += "bins_AlmostUnbiasedYields.eps";
  
  cdata3->SaveAs(outputname);

  TCanvas* cdata4 = new TCanvas("cdata4","cdata4", 800, 500);
  
  frame3->Draw();
  gPad->SetLogx();
  legend_3->Draw();
  
  outputname = "plots/";
  outputname += prefix;
  outputname += "_";
  outputname += bins;
  outputname += "bins_ExclusivelyBiasedYields.eps";
  
  cdata4->SaveAs(outputname);
  
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
