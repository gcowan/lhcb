{
gROOT->ProcessLine(".x /Users/gcowan/lhcb/lhcbStyle.C");
using namespace RooFit ;
 
RooWorkspace w("w",kTRUE) ;
w.factory("Decay::decay(timeWrongPV[0.3,20],tau[1.7, 1.3, 2.0], GaussModel::gm(timeWrongPV, 0, 0.045), SingleSided)");
//w.factory("Gaussian::decay(timeWrongPV[0.3,20],mean[0], sigma[1, 0, 4])");
//w.factory("SUM::sum(nsig[200,10,10000]*gauss,nbkg[8000,100,100000]*poly)") ;
 
TFile * f = TFile::Open("../time_wrongPV_2.root");
TTree *tree = (TTree*)f->Get("DecayTree");
RooDataSet * data = new RooDataSet("data", "data", tree, RooArgSet(w::timeWrongPV));
 
w::decay.fitTo(*data) ;
 
RooPlot* frame = w::timeWrongPV.frame() ;
data->plotOn(frame) ;
w::decay.plotOn(frame) ;

RooHist* hpull = frame->pullHist();
RooPlot* frame3 = w::timeWrongPV.frame(Title("Pull Distribution")) ;
frame3->addPlotable(hpull,"P") ;

TCanvas * c = new TCanvas("c1","Example 2 pads (20,80)",200,10,600,1000); 
TPad *pad1 = new TPad("pad1", "The pad 80% of the height",0.0,0.2,1.0,1.0,21);
TPad *pad2 = new TPad("pad2", "The pad 20% of the height",0.0,0.0,1.0,0.2,22);
pad1->Draw();
pad2->Draw();
pad1->SetFillColor(kWhite);
pad2->SetFillColor(kWhite);

pad1->cd();
pad1->SetLogy();
frame->Draw()  ;
frame->SetTitle("");
frame->GetXaxis()->SetTitle("Decay time [ps]") ;

pad2->cd();
frame3->SetMarkerSize(0.1);
//frame3->GetXaxis()->SetFontSize(3);
frame3->GetYaxis()->SetTitle("Pull") ;
frame3->GetXaxis()->SetTitle("Decay time [ps]") ;
frame3->Draw();
c->SaveAs("Bu2JpsiK_decay_time_wrongPV.pdf");
}
