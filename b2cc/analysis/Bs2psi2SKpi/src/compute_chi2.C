{
	TFile * f = TFile::Open("/Disk/speyside8/lhcb/gcowan1/Z4430/B_s0/data/tighter_cut/selected_candidates_with_correct_angles.root");
	TFile * g = TFile::Open("toy.root");
	TTree * ft = (TTree*)f->Get("tuple");
	TTree * gt = (TTree*)g->Get("dataNTuple");

        const int n_m23(6);
        const int n_cosTheta1(2);
        const int n_cosTheta2(2);
        const int n_phi(2);
        const double m23_bins[n_m23+1] = {0.64, 0.87, 0.97, 1.07, 1.27, 1.47, 1.68};
        const double cosTheta1_bins[n_cosTheta1+1] = {-1., 0., 1.};
        const double cosTheta2_bins[n_cosTheta2+1] = {-1., 0., 1.};
        const double phi_bins[n_phi+1] = {-3.14159, 0., 3.14159};	

	double n(0.);
	double x(0.);
	double chi2(0.);

	double params = 12.;

	const int n_data = ft->GetEntries("B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr");
	const int n_toy  = gt->GetEntries();

	cout << "Number of events in the dataset: " << n_data << endl;
	cout << "Number of events in the toy dataset: " << n_toy << endl;

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
					TString cut_data = "B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr &&" + m23_cut_data + " && " + cosTheta1_cut + " && " + cosTheta2_cut + " && " + phi_cut;
					TString cut      = m23_cut      + " && " + cosTheta1_cut + " && " + cosTheta2_cut + " && " + phi_cut;
					n = ft->GetEntries(cut_data);
					x = gt->GetEntries(cut)*n_data/double(n_toy);
					chi2 += 2.*(x - n + n*log(n/x));
					cout << cut << endl;
					cout << "bin: " << i << " n " << n << " x " << x << " chi2 " << chi2 << endl;
				}
			}
		}
	}

	int ndof = n_m23*n_cosTheta1*n_cosTheta2*n_phi - 1 - params;
	cout << chi2 << " " << ndof << " " << chi2/ndof << endl;
}

