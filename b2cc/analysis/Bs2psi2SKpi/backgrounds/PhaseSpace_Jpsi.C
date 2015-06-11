void PhaseSpace_Jpsi() {
// example of use of TGenPhaseSpace  
//Author: Valerio Filippini

   if (!gROOT->GetClass("TGenPhaseSpace")) gSystem->Load("libPhysics");


   //(Momentum, Energy units are Gev/C, GeV)
   cout << "Simluated decay: Bd -> J/psi K pi" << endl;
   TLorentzVector Lb(0.0, 0.0, 0.0, 5.26);
   Double_t masses[3] = { 3.1, 0.493677, 0.13957 };
   //cout << "Simluated decay: Lb -> J/psi p K" << endl;
   //TLorentzVector Lb(0.0, 0.0, 0.0, 5.6195);
   //Double_t masses[3] = { 3.1, 0.938272, 0.493677 };

   TGenPhaseSpace event;
   event.SetDecay(Lb, 3, masses);

   TH1F *h1 = new TH1F("h1","h1", 50, 5.2, 5.8);
   TH1F *h2 = new TH1F("h2","h2", 50, 5.2, 5.55);
   TH1F *h3 = new TH1F("h3","h3", 50, 5.2, 5.55);
   TH2F *h4 = new TH2F("h4","h4", 50, 4.5*4.5, 5.5*5.5, 50, 3.6*3.6, 5.7*5.7);

   for (Int_t n=0;n<10000;n++) {
      Double_t weight = event.Generate();

      TLorentzVector *pPsi = event.GetDecay(0);

      TLorentzVector *pProton = event.GetDecay(1);
      TLorentzVector *pHadron = event.GetDecay(2);

      TLorentzVector pProton_as_kaon(pProton->Px(), pProton->Py(), pProton->Pz(), sqrt(pProton->P()*pProton->P() + 0.493677*0.493677)); 
      TLorentzVector pProton_as_pion(pProton->Px(), pProton->Py(), pProton->Pz(), sqrt(pProton->P()*pProton->P() + 0.13957 *0.13957)); 
      TLorentzVector pHadron_as_kaon(pHadron->Px(), pHadron->Py(), pHadron->Pz(), sqrt(pHadron->P()*pHadron->P() + 0.493677*0.493677)); 
      TLorentzVector pHadron_as_pion(pHadron->Px(), pHadron->Py(), pHadron->Pz(), sqrt(pHadron->P()*pHadron->P() + 0.13957 *0.13957)); 
      TLorentzVector pB        = *pPsi + *pProton         + *pHadron;
      //TLorentzVector pB_wrong1 = *pPsi +  pProton_as_kaon + *pHadron;
      TLorentzVector pB_wrong1 = *pPsi + *pProton + pHadron_as_kaon;

      TLorentzVector pPsiProton = *pPsi + *pProton;
      TLorentzVector pPsiHadron = *pPsi + *pHadron;
   
      //pB.Print();   
      //pB_wrong.Print();   
      h1->Fill(pB.M() ,weight);
      h2->Fill(pB_wrong1.M() ,weight);
      h4->Fill(pPsiProton.M2() ,pPsiHadron.M2() ,weight);
   }
   TCanvas * c = new TCanvas();
   c->Divide(2,2);
   c->cd(1);
   h1->Draw();
   h1->GetXaxis()->SetTitle("m(J/#psiK#pi) [GeV]");
   //h1->GetXaxis()->SetTitle("m(J/#psipK) [GeV]");
   c->cd(2);
   h2->Draw();
   h2->GetXaxis()->SetTitle("m(J/#psiK(#pi#rightarrowK)) [GeV]");
   //h2->GetXaxis()->SetTitle("m(J/#psi(p#rightarrowK)K) [GeV]");
   c->cd(3);
   //h3->Draw();
   //h3->GetXaxis()->SetTitle("m(#psi(2S)(p#rightarrow#pi)(#pi#rightarrowK)) [GeV]");
   //h3->GetXaxis()->SetTitle("m(#psi(2S)(p#rightarrow#pi)(K#rightarrowK)) [GeV]");
   c->cd(4);
   h4->Draw();
  c->SaveAs("plot.pdf");
}
