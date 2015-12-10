#include <iostream>
#include <string>
#include <sstream>
#include "TGraph.h"
#include <fstream>
#include "TH1F.h"
#include "TFile.h"

double stream(ifstream& stream) {
  double tmpVal;
  stream >> tmpVal;
  return tmpVal;
}


void fonll(){

 

   ifstream in;
   in.open("fonllpt.txt");
   double tempArray[2];
   int ok = true;
   int it = 0;
   TGraph* ptgr = new TGraph(100);
   TH1F* histo = new TH1F("pthisto","pthisto", 100, 0, 100);
   while (ok && it < 200) {
     ++it;
     for (int i = 0; i < 2; ++i){
       tempArray[i] = stream(in);  
     } 
     if (in.eof()  == true || in.good() == false) {
       ok =false; 
     } 
     else {   
       histo->SetBinContent(it,tempArray[1]);
       ptgr->SetPoint(it-1, tempArray[0], tempArray[1]);
     }
   }
   in.close();

   //   ptgr->Draw("AL");
   // TH1F* histo = ptgr->GetHistogram();
   histo->Draw("HISTO");

   TH1F* histo2 = new TH1F("etahisto","etahisto", 100, 1, 6);
   in.open("fonlleta.txt");
   it =0; ok = true;
   while (ok && it < 200) {
     ++it;
     for (int i = 0; i < 2; ++i){
       tempArray[i] = stream(in);  
     } 
     if (in.eof()  == true || in.good() == false) {
       ok =false; 
     } 
     else {   
       histo2->SetBinContent(it,tempArray[1]);
       // ptgr->SetPoint(it-1, tempArray[0], tempArray[1]);
     }
   }

   histo2->Draw();

    TFile* output = new TFile("fonll.root","RECREATE","output ROOT file");
    histo->Write(); 
    histo2->Write(); 
    output->Close();    
}
