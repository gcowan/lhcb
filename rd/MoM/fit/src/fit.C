#include "RooGlobalFunc.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooConstVar.h"
#include "RooFormulaVar.h"
#include "RooGaussian.h"
#include "RooProdPdf.h"
#include "RooCBShape.h"
#include "RooVoigtian.h"
#include "TCanvas.h"
#include "TAxis.h"
#include "TH1.h"
#include "TFile.h"
#include "TCut.h"
#include "TF1.h"
#include "TROOT.h"
#include "TStyle.h"
#include "TGraphErrors.h"
#include "TGraphAsymmErrors.h"
#include "RooBDecay.h"
#include "RooAddModel.h"
#include "RooGaussModel.h"
#include "RooPlot.h"
#include "RooHist.h"
#include "RooAddPdf.h"
#include "RooB2Kll.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace RooFit;
using namespace std;

void fit(){

    RooRealVar * cosTheta = new RooRealVar("cosTheta", "cosTheta", -1., 1.);
    RooRealVar * G000 = new RooRealVar("G000", "G000", 0.5, -1., 1.);
    RooRealVar * G001 = new RooRealVar("G001", "G001", 0.5, -1., 1.);
    RooRealVar * G002 = new RooRealVar("G002", "G002", 0.5, -1., 1.);
    RooRealVar * G003 = new RooRealVar("G003", "G003", 0.);// -1., 1.);
    RooRealVar * G004 = new RooRealVar("G004", "G004", 0.);//, -1., 1.);

    RooB2Kll * pdf = new RooB2Kll("pdf", "pdf", *cosTheta, *G000, *G001, *G002, *G003, *G004);

    RooDataSet * data = pdf->generate(RooArgSet(*cosTheta), 10000);
    RooFitResult * fitresult = pdf->fitTo(*data,Save(kTRUE), Minos(kFALSE), NumCPU(4));
    
    RooPlot * frame = cosTheta->frame();
    data->plotOn(frame);
    pdf->plotOn(frame);

    gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
    TCanvas* c = new TCanvas("fit","fit", 800, 800);
    frame->Draw();
    c->SaveAs("fit.png");
}

int main()
{
    fit();
    return 0;
}

