#include "glob.h"
#include <iostream>
#include "TROOT.h"
#include "TBranch.h"
#include "TFile.h"
#include "TTree.h"
#include "TStyle.h"
#include "TH1D.h"
#include "TCanvas.h"
 
int main()
{
	gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");	
	TFile * f_nom;
	TFile * f_sme;
	TTree * t_nom;
	TTree * t_sme;

   	Double_t        gamma_value_nom;
   	Double_t        gamma_value_sme;
   	Double_t        gamma_error_nom;
   	TBranch        *b_gamma_value;   //!
   	TBranch        *b_gamma_error;   //!

    	const int nvars = 11;
        const char * names[nvars]  = {"gamma_value", "deltaGamma_value", "Aperp_sq_value", "Azero_sq_value", "deltaM_value", "Phi_s_value", "lambda_value", "delta_perp_value", "delta_para_value", "F_s_value", "delta_s_value"};
        const char * errors[nvars] = {"gamma_error", "deltaGamma_error", "Aperp_sq_error", "Azero_sq_error", "deltaM_error", "Phi_s_error", "lambda_error", "delta_perp_error", "delta_para_error", "F_s_error", "delta_s_error"};
        //const char * title[nvars] = {"gamma (nominal-smeared)", "deltaGamma (nominal-smeared)", "Aperp_sq (nominal-smeared)", "Azero_sq (nominal-smeared)"};
        const char * title[nvars] = {"gamma (nominal-smeared)/error", "deltaGamma (nominal-smeared)/error", "Aperp_sq (nominal-smeared)/error", "Azero_sq (nominal-smeared)/error","deltaM (nominal-smeared)/error", "phi_s (nominal-smeared)/error", "lambda (nominal-smeared)/error", "delta_perp (nominal-smeared)/error", "delta_para (nominal-smeared)/error", "F_s (nominal-smeared)/error", "delta_s (nominal-smeared)/error"};
        //const char * title[nvars] = {"gamma (nominal-smeared)/nominal", "deltaGamma (nominal-smeared)/nominal", "Aperp_sq (nominal-smeared)/nominal", "Azero_sq (nominal-smeared)/nominal"};

	TH1D * histos[nvars];
	for (int j = 0; j < nvars; j++)
	{
		//histos[j] = new TH1D(names[j], "gamma", 50, -0.01, 0.01);
		//histos[j] = new TH1D(names[j], "gamma", 50, -0.2, 0.2);
		histos[j] = new TH1D(names[j], "gamma", 50, -1., 1.);
	}
        glob_t globbuf_nom;
        glob_t globbuf_sme;

        globbuf_nom.gl_offs = 1;
        glob("*pulls.root", GLOB_DOOFFS, NULL, &globbuf_nom);
        globbuf_nom.gl_pathv[0] = "ls";
        
	globbuf_sme.gl_offs = 1;
        glob("*pulls_Bc.root", GLOB_DOOFFS, NULL, &globbuf_sme);
        globbuf_sme.gl_pathv[0] = "ls";

	for (int i = 1; i < globbuf_nom.gl_pathc; i++ )
	{
		std::cout << globbuf_nom.gl_pathv[i] << " " << globbuf_sme.gl_pathv[i] << std::endl;
		f_nom = TFile::Open(globbuf_nom.gl_pathv[i]);
		f_sme = TFile::Open(globbuf_sme.gl_pathv[i]);
		t_nom = (TTree*)f_nom->Get("RapidFitResult");
		t_sme = (TTree*)f_sme->Get("RapidFitResult");
   	
		for (int j = 0; j < nvars; j++)
		{
			t_nom->SetBranchAddress(names[j] , &gamma_value_nom, &b_gamma_value);
			t_nom->SetBranchAddress(errors[j], &gamma_error_nom, &b_gamma_error);
			t_nom->GetEntry(0);
   			t_sme->SetBranchAddress(names[j], &gamma_value_sme, &b_gamma_value);
			t_sme->GetEntry(0);
			std::cout << names[j] << " " << gamma_value_nom << " " << gamma_value_sme << " " << gamma_error_nom << std::endl;
			//histos[j].Fill((gamma_value_nom-gamma_value_sme));
			histos[j]->Fill((gamma_value_nom-gamma_value_sme)/gamma_error_nom);
			//histos[j].Fill((gamma_value_nom-gamma_value_sme)/gamma_value_nom);
			histos[j]->Print();
			t_nom->ResetBranchAddresses();
			t_sme->ResetBranchAddresses();
		}
		f_nom->Close();
		f_sme->Close();
	}	

	gStyle->SetOptFit(1);	
	gStyle->SetOptStat(2220);
	TCanvas * c = new TCanvas();
	c->Divide(3,4);
	for (int j = 0; j < nvars; j++)
	{
		c->cd(j+1);
		histos[j]->Draw();
		histos[j]->Fit("gaus");
		histos[j]->GetXaxis()->SetTitle(title[j]);
		//delete histos[j];
	}
	c->SaveAs("fit_differences.pdf");
}
