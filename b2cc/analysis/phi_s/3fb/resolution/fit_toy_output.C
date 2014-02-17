{
using namespace RooFit ;
 
RooWorkspace w("w",kTRUE) ;
w.factory("Gaussian::gauss1(diff[-5,5],mean1[0, -1, 1],width1[0.1,0,1])");
w.factory("Gaussian::gauss2(diff[-5,5],mean2[0, -1, 1],width2[1.3,1,2])");
w.factory("SUM::sum(f[0.5, 0, 1]*gauss1,gauss2)") ;

 
// --- Generate a toyMC sample from composite PDF ---
TFile * f = TFile::Open("OFFSetStudy.root");
TH1F * h = (TH1F*)f->Get("TH1_0_74430534313432872");
RooDataHist * data = new RooDataHist("data", "data", RooArgList(w::diff), h);
 
// --- Perform extended ML fit of composite PDF to toy data ---
w::sum.fitTo(*data) ;
 
// --- Plot toy data and composite PDF overlaid ---
RooPlot* diffframe = w::diff.frame() ;
data->plotOn(diffframe) ;
w::sum.plotOn(diffframe) ;
w::sum.plotOn(diffframe,Components(w::gauss1),LineStyle(kDashed)) ;

gROOT->ProcessLine(".L /Users/gcowan/lhcb/lhcbStyle.C");
TCanvas * c = new TCanvas(); 
diffframe->Draw()  ;
diffframe->SetTitle("");
c->SaveAs("fit.pdf");
}
