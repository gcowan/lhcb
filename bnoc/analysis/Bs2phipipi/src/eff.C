#include <gsl/gsl_sf_legendre.h>
#include "TFile.h"
#include "TTree.h"

int main()
{
	// Need to check these values from ANA note
	int l_max(2);
	int i_max(2);
	int k_max(2);
	int j_max(2);
	double EffCoeff[l_max+1][i_max+1][k_max+1][j_max+1];
	TFile * f = TFile::Open("eff.root");
	TTree * tree = (TTree*)f->Get("t2");
	tree->SetBranchAddress("AccCoeff", EffCoeff);
	tree->GetEntry(0);

	double kstMass = 892.; // update to use PDG value
	double Y_jk = 0.; double P_i = 0; double Q_l = 0.;
	double Eff = 0.;
	double kstMass_mapped = (kstMass - 745.94)/(1045.94 - 745.94)*2. + (-1);

	// Now do something with Eff. Either...
	// (1) Add it as a branch to the toy dataset for each event (as below) or
	// (2) Do some accept/reject to write out a new dataset that has only the accepted events
	
	TFile * toy = TFile::Open("toy.root");
	TTree * toy_tree = (TTree*)toy->Get("dataNTuple");
	TFile * toy_clone = TFile::Open("toy_eff_weighted.root");
	TTree * toy_clone_tree = toy_tree->Clone(0);
	toy_clone_tree->Branch("eff", &Eff);

	for ( int n = 0; n < toy_tree->GetEntries(); n++)
	{
		toy_tree->GetEntry(n);

		for ( int l = 0; l < l_max+1; l++ )
		{
			for ( int i = 0; i < i_max+1; i++ )
			{
				for ( int k = 0; k < k_max+1; k++)
				{
					for ( int j = 0; j < j_max+1; j++ )
					{
						if (j < k) continue; // must have l >= k
						Q_l  = gsl_sf_legendre_Pl     (l,    kstMass_mapped);
						P_i  = gsl_sf_legendre_Pl     (i,    cos_ThetaKpi);
						// only consider case where k >= 0                                                                         
						// these are the real valued spherical harmonics 
						if ( k == 0 ) Y_jk =           gsl_sf_legendre_sphPlm (j, k, cos_ThetaKK);
						else          Y_jk = sqrt(2) * gsl_sf_legendre_sphPlm (j, k, cos_ThetaKK) * cos(k*Phi);
						Eff += EffCoeff[l][i][k][j]*(Q_l * P_i * Y_jk);
					}
				}
			}
		}
		toy_clone_tree->Fill();
	}

	return 1;
}
