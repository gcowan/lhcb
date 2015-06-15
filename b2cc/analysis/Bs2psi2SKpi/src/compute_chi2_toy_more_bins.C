{
	TFile * f = TFile::Open("toy.root");
	TFile * g = TFile::Open("large_toy.root");
	TTree * ft = (TTree*)f->Get("dataNTuple");
	TTree * gt = (TTree*)g->Get("dataNTuple");

	const int n_m23(9);
	const int n_cosTheta1(4);
	const int n_cosTheta2(4);
	const int n_phi(4);
	const double m23_bins[n_m23+1] = {0.64, 0.87, 0.91, 0.97, 1.01, 1.07, 1.27, 1.37, 1.47, 1.68};
	const double cosTheta1_bins[n_cosTheta1+1] = {-1., -0.5, 0., 0.5, 1.};
	const double cosTheta2_bins[n_cosTheta2+1] = {-1., -0.5, 0., 0.5, 1.};
	const double phi_bins[n_phi+1] = {-3.14159, -1.59, 0., 1.59, 3.14159};

	double n(0.);
	double x(0.);
	double chi2(0.);

	const int n_data = ft->GetEntries();
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
					TString m23_cut = "m23>" + TString(Form("%g", m23_bins[i])) + "&& m23<" + TString(Form("%g", m23_bins[i+1]));
					TString cosTheta1_cut = "cosTheta1>" + TString(Form("%g", cosTheta1_bins[j])) + "&& cosTheta1<" + TString(Form("%g", cosTheta1_bins[j+1]));
					TString cosTheta2_cut = "cosTheta2>" + TString(Form("%g", cosTheta2_bins[k])) + "&& cosTheta2<" + TString(Form("%g", cosTheta2_bins[k+1]));
					TString phi_cut = "phi>" + TString(Form("%g", phi_bins[l])) + "&& phi<" + TString(Form("%g", phi_bins[l+1]));
					TString cut      = m23_cut      + " && " + cosTheta1_cut + " && " + cosTheta2_cut + " && " + phi_cut;
					n = ft->GetEntries(cut);
					x = gt->GetEntries(cut)*n_data/double(n_toy);
					if ( n < 1 ) n = 0.00001;
					chi2 += 2.*(x - n + n*log(n/x));
					cout << cut << endl;
					cout << "bin: " << i << " n " << n << " x " << x << " chi2 " << chi2 << endl;
				}
			}
		}
	}

	int ndof = n_m23*n_cosTheta1*n_cosTheta2*n_phi - 1;
	cout << chi2 << " " << ndof << endl;

	TFile * outFile = TFile::Open("chi2_large.root","RECREATE");
	TNtuple * tup = new TNtuple("tuple", "tuple", "chi2:ndof");
	tup->Fill(chi2, ndof);
	tup->Write();
	outFile->Close();
}

