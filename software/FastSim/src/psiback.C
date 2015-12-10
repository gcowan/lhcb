#include "TROOT.h"
#include "TMath.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooGaussian.h"
#include "RooTruthModel.h"
#include "RooChebychev.h"
#include "RooExponential.h"
#include "RooResolutionModel.h"
#include "RooGaussModel.h"
#include "RooCBShape.h"
#include "RooAddModel.h"
#include "RooAbsPdf.h"
#include "RooAddPdf.h"
#include "RooDstD0BG.h"
#include "RooHistPdf.h"
//#include "RooBackPdf.h"
//#include "RooProdPdf.h"
#include "RooVoigtian.h"
#include "RooDecay.h"
#include "TCanvas.h"
#include "TTree.h"
#include "TCut.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TH1F.h"
#include "RooPlot.h"
#include "TAxis.h"
#include "RooDataHist.h"
//#include "ksfun.h"
#include "TSystem.h"
#include "RooFitResult.h"
//#include "RooWindowPdf.h"
#include "TLatex.h"
#include <string>
#include <sstream>
#include <utility>
#include "RooRelBreitWigner.h"
#include  "RooBifurGauss.h"
#include "RooNovosibirsk.h"
#include "RooHistPdf.h"
#include "bratios.h"

using namespace RooFit ;

void psiback(std::string filename1 = "radiative_chic0.root",
             std::string filename2 = "radiative_chic2.root" ){


  double ephiphi = 0.0264 ;
  double ephichi0 = 0.0124; 
  double effback = 49./537653;
  double nphiphi = 3627;

  double nbs = nphiphi/(bsphiphivisible()*ephiphi);
  double nbd = nbs/frag.value;
 
  std::cout << "number of bs " << nbs  << std::endl;
  std::cout << "nchizero from psi2S  " << nbs*ephichi0*bspsi2chic0pipivisible()  << std::endl; 
  std::cout << "nchitwo from psi2S  " << nbs*ephichi0*bspsi2chic2pipivisible()  << std::endl; 


  std::cout << "number chic0 k* " << effback* nbd *  bdchi0kstarvisible() << std::endl; 
  std::cout << "number chic2 k* " << effback* nbd *  bdchi2kstarvisible() << std::endl; 
  std::cout << "number psi2s chic0 k* " << effback* nbd * bdpsi2chi0kstarvisible()   << std::endl; 
  std::cout << "number psi2s chic2 k* " << effback* nbd *  bdpsi2chi2kstarvisible() << std::endl; 


}

