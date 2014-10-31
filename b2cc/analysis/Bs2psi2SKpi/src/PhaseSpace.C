void PhaseSpace( int d ) {
	int decay(d);

	gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
	if (!gROOT->GetClass("TGenPhaseSpace")) gSystem->Load("libPhysics");

	const double mBs(5.36677);
	const double mBd(5.2794);
	const double mLb(5.6195);
	const double mpi(0.13957);
	const double mK(0.493677);
	const double mp(0.938272);
	const double mJpsi(3.096916);
	const double mPsi(3.686093);

	TLorentzVector Lb;
	Double_t masses[3];
	double min(5.2);
	double max(5.5);
	string title1;
	string title2;

	switch (decay) {
		case 1:
			cout << "Simluated decay: Bs -> psi(2S) K K" << endl;
			Lb = TLorentzVector(0.0, 0.0, 0.0, mBs);
			masses[0] = mPsi; masses[1] = mK; masses[2] = mK;
			min = 5.2;
			max = 5.35;
			cout << "Reconstructed final state: psi(2S) K pi" << endl;
			cout << "Reconstructed final state: psi(2S) pi K" << endl;
			title1 = "m(#psi(2S)K(K#rightarrow#pi)) [GeV]";
			title2 = "m(#psi(2S)(K#rightarrow#pi)K) [GeV]";
			break;
		case 2:
			cout << "Simluated decay: Bd -> psi(2S) pi pi" << endl;
			Lb = TLorentzVector(0.0, 0.0, 0.0, mBd);
			masses[0] = mPsi; masses[1] = mpi; masses[2] = mpi;
			min = 5.2;
			max = 5.5;
			cout << "Reconstructed final state: psi(2S) pi K" << endl;
			cout << "Reconstructed final state: psi(2S) K pi" << endl;
			title1 = "m(#psi(2S)#pi(#pi#rightarrowK)) [GeV]";
			title2 = "m(#psi(2S)(#pi#rightarrowK)#pi) [GeV]";
			break;
		case 3:
			cout << "Simluated decay: Bs -> psi(2S) pi pi" << endl;
			Lb = TLorentzVector(0.0, 0.0, 0.0, mBs);
			masses[0] = mPsi; masses[1] = mpi; masses[2] = mpi;
			min = 5.4;
			max = 5.7;
			cout << "Reconstructed final state: psi(2S) pi K" << endl;
			cout << "Reconstructed final state: psi(2S) K pi" << endl;
			title1 = "m(#psi(2S)#pi(#pi#rightarrowK)) [GeV]";
			title2 = "m(#psi(2S)(#pi#rightarrowK)#pi) [GeV]";
			break;
		case 4:
			cout << "Simluated decay: Lb -> psi(2S) K p" << endl;
			Lb = TLorentzVector(0.0, 0.0, 0.0, mLb);
			masses[0] = mPsi; masses[1] = mK; masses[2] = mp;
			min = 4.9;
			max = 5.4;
			cout << "Reconstructed final state: psi(2S) K pi" << endl;
			cout << "Reconstructed final state: psi(2S) pi K" << endl;
			title1 = "m(#psi(2S)K(p#rightarrow#pi)) [GeV]";
			title2 = "m(#psi(2S)(K#rightarrow#pi)(p#rightarrowK) [GeV]";
			break;
		case 5:
			cout << "Simluated decay: Lb -> psi(2S) pi p" << endl;
			Lb = TLorentzVector(0.0, 0.0, 0.0, mLb);
			masses[0] = mPsi; masses[1] = mpi; masses[2] = mp;
			min = 5.2;
			max = 5.5;
			cout << "Reconstructed final state: psi(2S) pi K" << endl;
			cout << "Reconstructed final state: psi(2S) K pi" << endl;
			title1 = "m(#psi(2S)#pi(p#rightarrowK)) [GeV]";
			title2 = "m(#psi(2S)(#pi#rightarrowK)(p#rightarrow#pi) [GeV]";
			break;
		case 6:
			cout << "Simluated decay: Bs -> psi(2S) K pi" << endl;
			Lb = TLorentzVector(0.0, 0.0, 0.0, mBs);
			masses[0] = mPsi; masses[1] = mK; masses[2] = mpi;
			min = 5.5;
			max = 5.8;
			cout << "Reconstructed final state: psi(2S) K p" << endl;
			cout << "Reconstructed final state: psi(2S) p pi" << endl;
			title1 = "m(#psi(2S)K(#pi#rightarrowp)) [GeV]";
			title2 = "m(#psi(2S)(K#rightarrowp)#pi) [GeV]";
			break;
	}

	TGenPhaseSpace event;
	event.SetDecay(Lb, 3, masses);

	TH1F *h1 = new TH1F("h1","h1", 50, 5.2, 5.8);
	TH1F *h2 = new TH1F("h2","h2", 50, min, max);
	TH1F *h3 = new TH1F("h3","h3", 50, min, max);
	TH2F *h4 = new TH2F("h4","h4", 50, 4.5*4.5, 5.5*5.5, 50, 3.6*3.6, 5.7*5.7);
	h1->Sumw2();
	h2->Sumw2();
	h3->Sumw2();
	h4->Sumw2();

	for (Int_t n=0;n<10000;n++) {
		Double_t weight = event.Generate();

		TLorentzVector *pPsi = event.GetDecay(0);

		TLorentzVector *pHadron1 = event.GetDecay(1);
		TLorentzVector *pHadron2 = event.GetDecay(2);

		TLorentzVector pHadron1_as_kaon  (pHadron1->Px(), pHadron1->Py(), pHadron1->Pz(), sqrt(pHadron1->P()*pHadron1->P() + mK *mK)); 
		TLorentzVector pHadron1_as_pion  (pHadron1->Px(), pHadron1->Py(), pHadron1->Pz(), sqrt(pHadron1->P()*pHadron1->P() + mpi*mpi)); 
		TLorentzVector pHadron1_as_proton(pHadron1->Px(), pHadron1->Py(), pHadron1->Pz(), sqrt(pHadron1->P()*pHadron1->P() + mp *mp)); 
		TLorentzVector pHadron2_as_kaon  (pHadron2->Px(), pHadron2->Py(), pHadron2->Pz(), sqrt(pHadron2->P()*pHadron2->P() + mK *mK)); 
		TLorentzVector pHadron2_as_pion  (pHadron2->Px(), pHadron2->Py(), pHadron2->Pz(), sqrt(pHadron2->P()*pHadron2->P() + mpi*mpi)); 
		TLorentzVector pHadron2_as_proton(pHadron2->Px(), pHadron2->Py(), pHadron2->Pz(), sqrt(pHadron2->P()*pHadron2->P() + mp *mp)); 
		TLorentzVector pB        = *pPsi + *pHadron1         + *pHadron2;
		TLorentzVector pB_wrong1;
		TLorentzVector pB_wrong2;
		switch (decay) {
			case 1:
				pB_wrong1 = *pPsi + *pHadron1 + pHadron2_as_pion;
				pB_wrong2 = *pPsi +  pHadron1_as_pion + *pHadron2;
				break;
			case 2:
				pB_wrong1 = *pPsi + *pHadron1 + pHadron2_as_kaon;
				pB_wrong2 = *pPsi +  pHadron1_as_kaon + *pHadron2;
				break;
			case 3:
				pB_wrong1 = *pPsi + *pHadron1 + pHadron2_as_kaon;
				pB_wrong2 = *pPsi +  pHadron1_as_kaon + *pHadron2;
				break;
			case 4:
				pB_wrong1 = *pPsi + *pHadron1 + pHadron2_as_pion;
				pB_wrong2 = *pPsi +  pHadron1_as_pion + pHadron2_as_kaon;
				break;
			case 5:
				pB_wrong1 = *pPsi + *pHadron1 + pHadron2_as_kaon;
				pB_wrong2 = *pPsi +  pHadron1_as_kaon + pHadron2_as_pion;
				break;
			case 6:
				pB_wrong1 = *pPsi + *pHadron1 + pHadron2_as_proton;
				pB_wrong2 = *pPsi +  pHadron1_as_proton + *pHadron2;
				break;
		}
		TLorentzVector pPsiHadron1 = *pPsi + *pHadron1;
		TLorentzVector pPsiHadron2 = *pPsi + *pHadron2;

		h1->Fill(pB.M() ,weight);
		h2->Fill(pB_wrong1.M() ,weight);
		h3->Fill(pB_wrong2.M() ,weight);
		h4->Fill(pPsiHadron1.M2() ,pPsiHadron2.M2() ,weight);
	}
	TCanvas * c = new TCanvas();
	c->Divide(2,1);
	//c->cd(1);
	//h1->Draw();
	//h1->GetXaxis()->SetTitle("m(#psi(2S)p#pi) [GeV]");
	//h1->GetXaxis()->SetTitle("m(#psi(2S)pK) [GeV]");
	c->cd(1);
	h2->Draw();
	h2->GetXaxis()->SetTitle(title1.c_str());
	c->cd(2);
	h3->Draw();
	h3->GetXaxis()->SetTitle(title2.c_str());
	//c->cd(4);
	//h4->Draw();
	char buf[20];
	sprintf(buf, "plot%d.pdf", decay);
	c->SaveAs(buf);
}
