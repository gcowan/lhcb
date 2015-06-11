void compute_chi2(int params){
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

	TH1D * h_data = new TH1D("h_data","h", n_m23*n_cosTheta1*n_cosTheta2*n_phi, 1, n_m23*n_cosTheta1*n_cosTheta2*n_phi); 
	TH1D * h_toy  = new TH1D("h_toy" ,"h", n_m23*n_cosTheta1*n_cosTheta2*n_phi, 1, n_m23*n_cosTheta1*n_cosTheta2*n_phi); 
	TH1D * h_chi2  = new TH1D("h_chi2" ,"h", n_m23*n_cosTheta1*n_cosTheta2*n_phi, 1, n_m23*n_cosTheta1*n_cosTheta2*n_phi); 
	h_toy->SetLineColor(kRed);

	double n(0.);
	double x(0.);
	double chi2(0.);
	double pearson_chi2(0.);
	double neyman_chi2(0.);

	const int n_data = ft->GetEntries("B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr && !(Kplus_ProbNNp > 0.3 && 15>TMath::Abs(mlb-5620))");
	const int n_toy  = gt->GetEntries();

	cout << "Number of events in the dataset: " << n_data << endl;
	cout << "Number of events in the toy dataset: " << n_toy << endl;

	int n_events(0);

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
					//TString cut_data = "B_s0_Mass_JpsiConstr>5350&&5380>B_s0_Mass_JpsiConstr &&" + m23_cut_data + " && " + cosTheta1_cut + " && " + cosTheta2_cut + " && " + phi_cut;
					TString cut      = m23_cut      + " && " + cosTheta1_cut + " && " + cosTheta2_cut + " && " + phi_cut;
					n = ft->GetEntries(cut_data);
					x = gt->GetEntries(cut)*n_data/double(n_toy);
					if (n != 0) chi2 += 2.*(x - n + n*log(n/x));
					else chi2 += 2.*x;
					pearson_chi2 += (x-n)*(x-n)/x;
					cout << cut << endl;
					cout << "bin: " << i << " n " << n << " x " << x << " chi2 " << chi2 << endl;
					h_data->Fill(bin_number, n);
					h_toy ->Fill(bin_number, x);
					h_chi2 ->Fill(bin_number,2.*(x - n + n*log(n/x)) );
					bin_number++;
					n_events += n;
					}
			}
		}
	}

	int ndof = n_m23*n_cosTheta1*n_cosTheta2*n_phi - 1 - params;
	cout <<  "Posisson chi2 " <<chi2 << " " << ndof << " " << chi2/ndof << " n events " << n_events << endl;
	cout <<  "Pearson chi2 " <<pearson_chi2 << " " << ndof << " " << pearson_chi2/ndof << " n events " << n_events << endl;
/*	TCanvas * c = new TCanvas();
	c->Divide(2,1);
	c->cd(1);
	h_data->Draw();
	h_toy->Draw("same");
	h_data->GetXaxis()->SetTitle("Bin number");
	h_data->GetYaxis()->SetTitle("N");
	c->cd(2);
	h_chi2->Draw();
	h_chi2->GetXaxis()->SetTitle("Bin number");
	h_chi2->GetYaxis()->SetTitle("chi2");
	c->SaveAs("events_vs_bin.pdf");
*/
}

