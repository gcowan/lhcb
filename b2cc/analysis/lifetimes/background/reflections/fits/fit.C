{
using namespace RooFit ;
RooWorkspace w("w",kTRUE) ;
//w.factory("Gaussian::gauss(mass[5450,5900],mean[5620.2, 5610, 5630],width[10, 1, 30])"); // Lambda_b
w.factory("Gaussian::gauss(mass[5250,5350],mean[5275.2, 5275, 5290],width[9, 1, 10])"); // Bd
w.factory("Chebychev::poly(mass, {p0[0.1, -1, 4], p1[0.1,-0.6, 8]})") ;
//w.factory("Polynomial::poly(mass, {p0[1], p1[0.1, -100000., 1], p2[0.6,-10000, 100]})") ;
w.factory("SUM::sum(nsig[200,10,10000]*gauss,nbkg[8000,100,100000]*poly)") ;
 
// --- Generate a toyMC sample from composite PDF ---
//TFile * f = TFile::Open("../reflection_lower_sideband_Lambdab2JpsiLambda_JpsiKS.root");
//TFile * f = TFile::Open("../reflection_upper_sideband_Bd2JpsiKS_JpsiLambda.root");
//TFile * f = TFile::Open("../reflection_upper_sideband_Bd2JpsiKS_no_Bs_JpsiLambda.root");
TFile * f = TFile::Open("../reflection_lower_sideband_Bd2JpsiKS_JpsiKstar.root");
//TFile * f = TFile::Open("../reflection_upper_sideband_Bs2JpsiPhi_JpsipK_5400.root");
//TFile * f = TFile::Open("../reflection_lower_sideband_Bs2JpsiPhi_JpsipK.root");
TTree *tree = (TTree*)f->Get("DecayTree");
RooDataSet * data = new RooDataSet("data", "data", tree, RooArgSet(w::mass));
 
// --- Perform extended ML fit of composite PDF to toy data ---
w::sum.fitTo(*data) ;
 
// --- Plot toy data and composite PDF overlaid ---
gROOT->ProcessLine(".x /Users/gcowan/lhcb/lhcbStyle.C");
RooPlot* massframe = w::mass.frame() ;
data->plotOn(massframe, Binning(30)) ;
w::sum.plotOn(massframe) ;
w::sum.plotOn(massframe,Components(w::poly),LineStyle(kDashed)) ;

TCanvas * c = new TCanvas(); 
massframe->Draw()  ;
massframe->SetTitle("");
//massframe->GetXaxis()->SetTitle("m(J/#psi #pi#pi) [MeV/c^{2}]") ;
//massframe->GetXaxis()->SetTitle("m(J/#psi p#pi) [MeV/c^{2}]") ;
//massframe->GetXaxis()->SetTitle("m(J/#psi Kp) [MeV/c^{2}]") ;
massframe->GetXaxis()->SetTitle("m(J/#psi K#pi) [MeV/c^{2}]") ;
c->SaveAs("reflection_fit.pdf");
}
