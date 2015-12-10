
#include "TFile.h"
#include "TH1F.h"

void backplot(){

 TFile* file1 = new TFile("tight.root");
 TH1F* histo1 = (TH1F*)file1->Get("h1");
 TH1F* sumHisto = (TH1F*)histo1->Clone("sum");
 histo1->Scale(225./histo1->GetEntries());
 histo1->Draw("HISTO");

 TFile* file2 = new TFile("radiative_chic0.root");
 TH1F* histo2 = (TH1F*)file2->Get("h1");
 histo2->Scale(8.4/histo2->GetEntries());
 histo2->SetLineColor(3);
 histo2->SetFillColor(3);
 histo2->Draw("HISTOSAME");

 TFile* file3 = new TFile("radiative_chic2.root");
 TH1F* histo3 = (TH1F*)file3->Get("h1");
 histo3->SetLineColor(2);
 histo3->SetFillColor(2);
 histo3->Scale(14.4/histo3->GetEntries());
 histo3->Draw("HISTOSAME");

 
 sumHisto->Scale(225./sumHisto->GetEntries());
 sumHisto->Add(histo2);
 sumHisto->Add(histo3);
 sumHisto->Draw("HISTO");
 histo1->SetLineColor(92);
 histo1->SetFillColor(92);
 histo1->Draw("HISTOSAME"); 

}
