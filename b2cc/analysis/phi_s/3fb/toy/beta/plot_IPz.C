#define plot_IPz_cxx
#include "plot_IPz.h"
#include <TH2.h>
#include <TF1.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TVector3.h>
#include <iostream>
#include <TROOT.h>
#include <TStyle.h>
#include <TProfile.h>
#include <TPaveStats.h>
#include <TEventList.h>
#include <TEntryList.h>
#include "TCut.h"

void plot_IPz::Loop()
{
	gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");	

	TH1D * h_mm = new TH1D("IPz_mm","IPz",100,0,6);
	TH1D * h_mp = new TH1D("IPz_mp","IPz",100,0,6);
	TH1D * h_km = new TH1D("IPz_km","IPz",100,0,6);
	TH1D * h_kp = new TH1D("IPz_kp","IPz",100,0,6);
	TH1D * h_eff= new TH1D("eff","eff",100,0,1);
	TH2D * h_eff_time = new TH2D("eff2","eff2",100,0,14, 1000, 0.5, 1);
	h_mm->Sumw2();
	h_mp->Sumw2();
	h_km->Sumw2();
	h_kp->Sumw2();
	h_eff->Sumw2();
	h_eff_time->Sumw2();
	if (fChain == 0) return;

	TCut selection = "B_s0_LOKI_DTF_CTAU/0.299792458>0.3";
	selection += "B_s0_LOKI_DTF_CTAU/0.299792458<14";
	selection += "(B_s0_LOKI_DTF_CTAUERR/0.299792458 < 0.12) && (B_s0_LOKI_DTF_CHI2NDOF > 0) && (B_s0_LOKI_DTF_VCHI2NDOF > 0) && (B_s0_LOKI_DTF_CHI2NDOF < 5.) && (B_s0_ENDVERTEX_CHI2/B_s0_ENDVERTEX_NDOF < 10.) && (B_s0_IPCHI2_OWNPV < 25.) && (B_s0_MINIPCHI2NEXTBEST > 50 || B_s0_MINIPCHI2NEXTBEST < 0) && (J_psi_1S_ENDVERTEX_CHI2/J_psi_1S_ENDVERTEX_NDOF < 16.) && (TMath::Abs(J_psi_1S_MM - 3090) < 60) && (muplus_PT > 500.) && (muminus_PT > 500.) && (muplus_PIDmu > 0.) && (muminus_PIDmu > 0.) && (muplus_TRACK_CHI2NDOF < 4) && (muminus_TRACK_CHI2NDOF < 4) && (phi_1020_ENDVERTEX_CHI2/phi_1020_ENDVERTEX_NDOF < 16.) && (TMath::Abs(phi_1020_M - 1020.) < 30.) && (phi_1020_PT > 1000.) && (Kplus_PIDK > 0.) && (Kminus_PIDK > 0.) && (Kplus_TRACK_CHI2NDOF < 4.) && (Kminus_TRACK_CHI2NDOF < 4.)";
	selection += "(B_s0_BKGCAT==0||B_s0_BKGCAT==50)";
	selection += "(B_s0_Hlt1DiMuonHighMassDecision_TOS==1&&B_s0_Hlt2DiMuonDetachedJPsiDecision_TOS==1)";

	selection.Print();

	Long64_t nentries = fChain->GetEntriesFast();
	std::cout << nentries << std::endl;

	fChain->Draw(">>elist",selection, "entrylist");
	TEntryList * elist = (TEntryList*)gDirectory->Get("elist");
	std::cout << elist->GetN() << std::endl;
	fChain->SetEntryList(elist);

	double IPz_mp(0.);
	double IPz_mm(0.);
	double IPz_kp(0.);
	double IPz_km(0.);
	double IPz_mp1(0.);
	double IPz_mm1(0.);
	double IPz_kp1(0.);
	double IPz_km1(0.);

	double eff_mp(0.);
	double eff_mm(0.);
	double eff_kp(0.);
	double eff_km(0.);
	double eff(0.);

	TVector3 d(0.,0.,0.);	
	TVector3 v(0.,0.,0.);	
	TVector3 p_mp(0.,0.,0.);	
	TVector3 p_mm(0.,0.,0.);	
	TVector3 p_kp(0.,0.,0.);	
	TVector3 p_km(0.,0.,0.);	
	TVector3 z(0.,0.,1.);	
	TVector3 pz(0.,0.,0.);	

	double a_online ( 0.9759);
	double a_offline( 0.9831);
	double c_online (-0.0093);
	double c_offline(-0.0041);

	double BshiftX = 0.626;  //MC
	double BshiftY = 0.100;  //MC

	Long64_t nbytes = 0, nb = 0;
	//for (Long64_t jentry=0; jentry<elist->GetN();jentry++) {
	for (Long64_t jentry=0; jentry<10000;jentry++) {
		if ( jentry % 10000 == 0) std::cout << jentry << std::endl;
		int i = elist->Next();
		nb = fChain->GetEntry(i);   nbytes += nb;
		d.SetXYZ(B_s0_ENDVERTEX_X, B_s0_ENDVERTEX_Y, B_s0_ENDVERTEX_Z);
		//v.SetXYZ(PVX[nPV], PVY[nPV], PVZ[nPV]);
		v.SetXYZ(BshiftX, BshiftY, 0);
		p_mp.SetXYZ(muplus_PX, muplus_PY, muplus_PZ);
		p_mm.SetXYZ(muminus_PX, muminus_PY, muminus_PZ);
		p_kp.SetXYZ(Kplus_PX, Kplus_PY, Kplus_PZ);
		p_km.SetXYZ(Kminus_PX, Kminus_PY, Kminus_PZ);
		
		pz = p_mp.Cross(z); // this is just the pT
		IPz_mp = std::abs((d-v).Dot(pz))/pz.Mag();
		pz = p_mm.Cross(z);
		IPz_mm = std::abs((d-v).Dot(pz))/pz.Mag();
		pz = p_kp.Cross(z);
		IPz_kp = std::abs((d-v).Dot(pz))/pz.Mag();
		pz = p_km.Cross(z);
		IPz_km = std::abs((d-v).Dot(pz))/pz.Mag();

		IPz_mp1 = std::abs(1./muplus_PT *((B_s0_ENDVERTEX_Y-BshiftY)*muplus_PX  - (B_s0_ENDVERTEX_X-BshiftX)*muplus_PY));
		IPz_mm1 = std::abs(1./muminus_PT*((B_s0_ENDVERTEX_Y-BshiftY)*muminus_PX - (B_s0_ENDVERTEX_X-BshiftX)*muminus_PY));
		IPz_kp1 = std::abs(1./Kplus_PT  *((B_s0_ENDVERTEX_Y-BshiftY)*Kplus_PX   - (B_s0_ENDVERTEX_X-BshiftX)*Kplus_PY));
		IPz_km1 = std::abs(1./Kminus_PT *((B_s0_ENDVERTEX_Y-BshiftY)*Kminus_PX  - (B_s0_ENDVERTEX_X-BshiftX)*Kminus_PY));

		std::cout << IPz_mp << " " << IPz_mp1 << " " << IPz_mp-IPz_mp1 << std::endl;
		std::cout << IPz_mm << " " << IPz_mm1 << " " << IPz_mm-IPz_mm1 << std::endl;
		std::cout << IPz_kp << " " << IPz_kp1 << " " << IPz_kp-IPz_kp1 << std::endl;
		std::cout << IPz_km << " " << IPz_km1 << " " << IPz_km-IPz_km1 << std::endl;

		h_mp->Fill(IPz_mp);
		h_mm->Fill(IPz_mp);
		h_kp->Fill(IPz_kp);
		h_km->Fill(IPz_km);
		eff_mm = a_online*(1+c_online*IPz_mm*IPz_mm); 
		eff_mp = a_online*(1+c_online*IPz_mp*IPz_mp); 
		eff_km = a_offline*(1+c_offline*IPz_km*IPz_km); 
		eff_kp = a_offline*(1+c_offline*IPz_kp*IPz_kp);
		eff = eff_mm*eff_mp*eff_km*eff_kp;
		//std::cout << B_s0_LOKI_DTF_CTAU/0.3 << " " << eff << std::endl;
		h_eff_time->Fill(B_s0_LOKI_DTF_CTAU/0.3, eff); 
	}

	TF1 * pol = new TF1("pol2", "[0]*(1 + [1]*x + [2]*x*x)", 0.3, 14.);
	pol->SetLineColor(kRed);
	pol->SetParName(0, "N");
	pol->SetParName(1, "beta");
	pol->SetParName(2, "gamma");

	gStyle->SetOptStat(0);
	gStyle->SetOptFit(0);
	gStyle->SetMarkerSize(1);
	TCanvas * c = new TCanvas();
	c->SetLogy();
	h_mp->Draw();
	h_mm->Draw("same");
	h_kp->Draw("same");
	h_km->Draw("same");
	c->SaveAs("IPz.pdf");
	TCanvas * c1 = new TCanvas();
	c1->Divide(2,1);
	c1->cd(1);
	h_eff_time->Draw("BOX");
	h_eff_time->GetXaxis()->SetTitle("t [ps]");
	h_eff_time->GetYaxis()->SetTitle("Efficiency");
	h_eff_time->GetYaxis()->SetTitleOffset(1.1);
	c1->cd(2);
	h_eff_time->ProfileX()->Draw();
	gPad->Update();
	h_eff_time->ProfileX()->SetMinimum(0.5);
	h_eff_time->ProfileX()->SetMaximum(1.0);
	h_eff_time->ProfileX()->GetXaxis()->SetTitle("t [ps]");
	h_eff_time->ProfileX()->GetYaxis()->SetTitle("<Efficiency>");
	h_eff_time->ProfileX()->GetYaxis()->SetTitleOffset(1.1);
	h_eff_time->ProfileX()->Fit(pol, "R");
	//TPaveStats * st = (TPaveStats*)h_eff_time->ProfileX()->FindObject("stats");
	//st->SetX1NDC(0.65);
	c1->SaveAs("eff.pdf");
}

int main()
{
	plot_IPz t;
	t.Loop();
	return 1;
}
