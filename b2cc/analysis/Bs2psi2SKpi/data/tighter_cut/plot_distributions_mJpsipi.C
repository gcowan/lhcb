#include "/Home/gcowan1/software/RapidFit/trunk/pdfs/dalitz/include/DPHelpers.hh" 
#include "/Home/gcowan1/software/RapidFit/trunk/pdfs/dalitz/include/CalculateAngles.hh" 
#include "TFile.h"
#include "TTree.h"
#include "TCanvas.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TPaveText.h"
#include "TStyle.h"
#include "TROOT.h"
#include <iostream>

using namespace std;

void plot_distributions_mJpsipi()
{
	gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
	TFile * f0 = TFile::Open("/Disk/ds-sopa-group/PPEarchive/speyside8/lhcb/gcowan1/Z4430/B_s0/data/tighter_cut/selected_candidates_with_correct_angles.root");
	TTree * t0 = (TTree*)f0->Get("tuple");
	TFile * f1 = TFile::Open("/Disk/ds-sopa-group/PPEarchive/speyside8/lhcb/gcowan1/Z4430/B_s0/data/tighter_cut/BsKpi-mc_Tight_proton_with_correct_angles.root");
	TTree * t1 = (TTree*)f1->Get("tuple");
	TFile * f = TFile::Open("toy.root");
	TTree * t = (TTree*)f->Get("dataNTuple");

	double massB(5.36677);
	double massPsi(3.686093);
	TLorentzVector pMuPlus(0., 0., 0., 0.);
	TLorentzVector pMuMinus(0., 0., 0., 0.);
	TLorentzVector pPi(0., 0., 0., 0.);
	TLorentzVector pK(0., 0., 0., 0.);

	//float m23;
	//float cosTheta1;
	//float cosTheta2;
	//float phi;
	double m23;
	double cosTheta1;
	double cosTheta2;
	double phi;

	t->SetBranchAddress("m23", &m23);//, &b_m23);
	t->SetBranchAddress("cosTheta1", &cosTheta1);//, &b_cosTheta1);
	t->SetBranchAddress("cosTheta2", &cosTheta2);//, &b_cosTheta2);
	t->SetBranchAddress("phi", &phi);//, &b_phi);


	int nbins(11);
	TH1D * mkpi_toy = new TH1D ("kpi_toy", "kpi", 20, 0.68, 1.6);
	TH1D * cosTheta1_toy = new TH1D ("cosTheta1_toy", "cosTheta1", 20, -1., 1.);
	TH1D * cosTheta2_toy = new TH1D ("cosTheta2_toy", "cosTheta2", 20, -1., 1.);
	TH1D * phi_toy = new TH1D ("phi_toy", "phi", 20, -TMath::Pi(), TMath::Pi());
	TH1D * mpsipi_toy = new TH1D ("psipi_toy", "psipi", nbins, 3.8, 4.9);
	TH1D * mpsik_toy  = new TH1D ("psik_toy", "psik", 15, 4.0, 5.3);
	mpsik_toy->SetLineColor(kBlack);
	mpsik_toy->SetLineStyle(1);
	mpsik_toy->SetLineWidth(4.);

	const int n = t->GetEntries();

	for (int i = 0; i < n; i++)
	{
		t->GetEntry(i);


		DPHelpers::calculateFinalStateMomentaBelle(massB, m23, massPsi,
				cosTheta1, cosTheta2, phi,
				0.1056583715, 0.139570, 0.493677,
				pMuPlus, pMuMinus, pPi, pK);

		double belle_m23(0.);
		double belle_cosKPi(0.);
		double belle_cosPsi(0.);
		double belle_phiKPiPsi(0.);
		double belle_m13(0.);
		double belle_cosZ(0.);
		double belle_cosPsi_Z(0.);
		double belle_phiPsiZ(0.);
		double belle_phiZPsiPsi(0.);
		const TLorentzVector myMuPlus(pMuPlus);
		const TLorentzVector myMuMinus(pMuMinus);
		const TLorentzVector myPi(pPi);
		const TLorentzVector myK(pK);
		DPHelpers::Belle(myMuPlus, myMuMinus, myPi, myK
				, belle_m23
				, belle_cosKPi
				, belle_cosPsi
				, belle_phiKPiPsi
				, belle_m13
				, belle_cosZ
				, belle_cosPsi_Z
				, belle_phiPsiZ
				, belle_phiZPsiPsi
				);
		mkpi_toy->Fill(belle_m23);
		cosTheta1_toy->Fill(belle_cosPsi);
		cosTheta2_toy->Fill(belle_cosKPi);
		phi_toy->Fill(belle_phiKPiPsi);
		mpsipi_toy->Fill(belle_m13);

		//cout << m23 << " " << cosTheta1 << " " << cosTheta2 << " " << phi << endl;
		//cout << belle_m23 << " " << belle_cosPsi << " " << belle_cosKPi << " " << belle_phiKPiPsi << endl;
	}

    	TH1D * mpsipi = new TH1D ("psipi", "psipi", 11, 3.8, 4.9);
    	mpsipi->Sumw2();
    	int num = t0->Draw("m13/1e3>>psipi","B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr&&!(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))");
	mpsipi_toy->Scale(float(num)/mpsipi_toy->GetEntries()*float(nbins)/11);
    	
	TH1D * mpsipi_mc = new TH1D ("psipi_mc", "psipi", 11, 3.8, 4.9);
	mpsipi_mc->SetLineColor(kRed);
	mpsipi_mc->SetLineWidth(4);
	mpsipi_mc->SetLineStyle(2);
    	int num_mc = t1->Draw("m13/1e3>>psipi_mc","B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr&&!(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))");
	mpsipi_mc->Scale(float(num)/num_mc*float(11)/11);
	cout << num << " " << mpsipi_toy->GetEntries() << endl;

	TPaveText * lhcbName = new TPaveText(gStyle->GetPadLeftMargin() + 0.03,
			0.87 - gStyle->GetPadTopMargin(),
			gStyle->GetPadLeftMargin() + 0.13,
			0.95 - gStyle->GetPadTopMargin(),
			"BRNDC");
	lhcbName->AddText("LHCb");
	lhcbName->SetFillColor(0);
	lhcbName->SetTextAlign(12);
	lhcbName->SetBorderSize(0);

	gStyle->SetOptStat(0);
	TCanvas * c = new TCanvas();
	mpsipi->Draw();
	mpsipi_mc->Draw("same");
	mpsipi_toy->Draw("same");
	mpsipi->GetXaxis()->SetTitle("m(#psi(2S)#pi^{#font[122]{-}}) [GeV/#it{c}^{2}]");
	mpsipi->GetYaxis()->SetTitle("Candidates / ( 0.1 GeV/#it{c}^{2} )");
	lhcbName->Draw();
	c->SaveAs("psipi_projections.pdf");

	TCanvas * d = new TCanvas();
	d->Divide(2,2);
	d->cd(1);
	mkpi_toy->Draw();
	lhcbName->Draw();
	d->cd(2);
	cosTheta1_toy->Draw();
	lhcbName->Draw();
	d->cd(3);
	cosTheta2_toy->Draw();
	lhcbName->Draw();
	d->cd(4);
	phi_toy->Draw();
	lhcbName->Draw();
	d->SaveAs("projections.pdf");

}

int main(){
	plot_distributions_mJpsipi();
	return 1;
}
