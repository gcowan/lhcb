#include <TH2.h>
#include <TH1D.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TFile.h>
#include <TTree.h>
#include <TNtuple.h>
#include <TMath.h>
#include <TProfile.h>
#include <TLine.h>
#include <TROOT.h>
#include <TRandom3.h>
#include <TEntryList.h>
#include <iostream>

double compute_chi2(TTree *, TTree *);

int main() {
	TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/Z4430/B_s0/data/tighter_cut/selected_candidates_with_correct_angles.root");
	TFile * g = TFile::Open("toy.root");
	TTree * ft = (TTree*)f->Get("tuple");
	TTree * gt = (TTree*)g->Get("dataNTuple");

	std::cout << ft->GetEntries() << std::endl;
	const unsigned int n_data = ft->GetEntries("B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr && !(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))");
	
	TEntryList * eList = new TEntryList("elist", "elist");
	ft->Draw(">>elist","B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr && !(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))", "entrylist");

	double data_chi2 = compute_chi2(ft, gt);

	unsigned int iterations(100);
	double chi2_vals[iterations];

	TRandom3 * r = new TRandom3();
	TH1D * h = new TH1D("hist", "hist", 10, 0., 200.);
	for (unsigned int i = 0; i < iterations; i++)
	{
		// Create the bootstrapped sample
		TTree * boot_ft = ft->CloneTree(0);
		while ( boot_ft->GetEntries() < n_data )
		{
			unsigned int event = r->Integer(n_data);
			//std::cout << event << " " << eList->GetEntry(event) << std::endl;
			ft->GetEntry(eList->GetEntry(event));
			boot_ft->Fill();
		}
		double chi2 = compute_chi2(boot_ft, gt);
		chi2_vals[i] = chi2;
		h->Fill(chi2);
		std::cout << chi2 << std::endl;
		delete boot_ft;
	}

	TLine l(data_chi2,0,data_chi2,10);
	l.SetLineColor(kRed);  	
	TCanvas * c = new TCanvas();
	h->Draw();
	l.Draw();
	c->SaveAs("test.pdf");

	return 1;
}

double compute_chi2(TTree * ft, TTree * gt) {
        const int n_m23(6);
        const int n_cosTheta1(2);
        const int n_cosTheta2(2);
        const int n_phi(2);
        const double m23_bins[n_m23+1] = {0.64, 0.87, 0.97, 1.07, 1.27, 1.43, 1.68};
        const double cosTheta1_bins[n_cosTheta1+1] = {-1., 0., 1.};
        const double cosTheta2_bins[n_cosTheta2+1] = {-1., 0., 1.};
        const double phi_bins[n_phi+1] = {-3.14159, 0., 3.14159};	

	double n(0.);
	double x(0.);
	double chi2(0.);

	double params = 10.;

	const int n_data = ft->GetEntries("B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr && !(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))");
	const int n_toy  = gt->GetEntries();

	//std::cout << "Number of events in the dataset: " << n_data << std::endl;
	//std::cout << "Number of events in the toy dataset: " << n_toy << std::endl;

	int bin_number = 1;
	for ( int i = 0; i < n_m23; i++ )
	{
		for ( int j = 0; j < n_cosTheta1; j++ )
		{
			for ( int k = 0; k < n_cosTheta2; k++ )
			{
				for ( int l = 0; l < n_phi; l++ )
				{
					TString m23_cut_data = "m23/1000.>" + TString(Form("%g", m23_bins[i])) + "&& m23/1000.<" + TString(Form("%g", m23_bins[i+1]));
					TString m23_cut = "m23>" + TString(Form("%g", m23_bins[i])) + "&& m23<" + TString(Form("%g", m23_bins[i+1]));
					TString cosTheta1_cut = "cosTheta1>" + TString(Form("%g", cosTheta1_bins[j])) + "&& cosTheta1<" + TString(Form("%g", cosTheta1_bins[j+1]));
					TString cosTheta2_cut = "cosTheta2>" + TString(Form("%g", cosTheta2_bins[k])) + "&& cosTheta2<" + TString(Form("%g", cosTheta2_bins[k+1]));
					TString phi_cut = "phi>" + TString(Form("%g", phi_bins[l])) + "&& phi<" + TString(Form("%g", phi_bins[l+1]));
					TString cut_data = "B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr && !(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620)) &&" + m23_cut_data + " && " + cosTheta1_cut + " && " + cosTheta2_cut + " && " + phi_cut;
					TString cut      = m23_cut      + " && " + cosTheta1_cut + " && " + cosTheta2_cut + " && " + phi_cut;
					n = ft->GetEntries(cut_data);
					x = gt->GetEntries(cut)*n_data/double(n_toy);
					if (n != 0) chi2 += 2.*(x - n + n*log(n/x));
					else chi2 += 2.*x;
					//std::cout << cut << std::endl;
					//std::cout << "bin: " << i << " n " << n << " x " << x << " chi2 " << chi2 << std::endl;
					bin_number++;
				}
			}
		}
	}

	int ndof = n_m23*n_cosTheta1*n_cosTheta2*n_phi - 1 - params;
	//std::cout << chi2 << " " << ndof << " " << chi2/ndof << std::endl;
	return chi2;
}

