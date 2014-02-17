{
using namespace RooFit ;
 
RooWorkspace w("w",kTRUE) ;
w.factory("Gaussian::gauss(mass[5560,5680],mean[5620.2, 5610, 5630],width[10,1,20])"); // Lambda_b
//w.factory("Gaussian::gauss(mass[5200,5320],mean[5275.2, 5275, 5285],width[9])"); // Bd
w.factory("Chebychev::poly(mass, {p0[0.1, -0.1, 4], p1[0.1,-0.6, 0.8], p2[-0.1, -1, 0.1], p3[0]})") ;
w.factory("SUM::sum(nsig[200,10,10000]*gauss,nbkg[8000,100,100000]*poly)") ;
 
// --- Generate a toyMC sample from composite PDF ---
TFile * f = TFile::Open("../reflection_upper_sideband.root");
TTree *tree = (TTree*)f->Get("DecayTree");
RooDataSet * data = new RooDataSet("data", "data", tree, RooArgSet(w::mass));
 
// --- Perform extended ML fit of composite PDF to toy data ---
w::sum.fitTo(*data) ;
 
// --- Plot toy data and composite PDF overlaid ---
RooPlot* massframe = w::mass.frame() ;
data->plotOn(massframe) ;
w::sum.plotOn(massframe) ;
w::sum.plotOn(massframe,Components(w::poly),LineStyle(kDashed)) ;

gROOT->ProcessLine(".L /Users/gcowan/lhcb/lhcbStyle.C");
TCanvas * c = new TCanvas(); 
massframe->Draw()  ;
massframe->SetTitle("");
massframe->GetXaxis()->SetTitle("m(J/#psi Kp) [MeV/c^{2}]") ;
//massframe->GetXaxis()->SetTitle("m(J/#psi K#pi) [MeV/c^{2}]") ;
c->SaveAs("reflection_fit.pdf");
}
