{
	TFile * data = TFile::Open("../data/selected_candidates_with_correct_angles.root");
	TTree * t_data = (TTree*)data->Get("tuple");
	TFile * toy = TFile::Open("../data/selected_candidates_with_correct_angles.root");
	TTree * t_toy = (TTree*)toy->Get("tuple");

	const int n_mKpi(7);
	double mKpi_bin_limits[n_mKpi] = {0.65, 0.8, 0.9, 1.0, 1.2, 1.4, 1.7};

	char mKpi_cut[50];
	for ( int i = 0; i < n_mKpi - 1; i++)
	{
		sprintf(mKpi_cut, "m23/1000. > %g && m23/1000. < %g", mKpi_bin_limits[i], mKpi_bin_limits[i+1]);
		cout << mKpi_cut << endl;
		cout << t_data->GetEntries(mKpi_cut) << endl;
	}

}

