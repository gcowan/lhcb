{
        const int nbins(8);
        double bins[nbins+1];
        const double t_min(0.3);
        const double t_max(10.);
        const double tau_PDG(1.613);
        double A(TMath::Exp(-t_max/tau_PDG));
        double B(TMath::Exp(-t_min/tau_PDG));
        bins[0] = t_min;
        bins[nbins] = t_max;
        for(int i(1); i < nbins; i++){
                bins[i] = -TMath::Log(((double)i*(A-B)/(double)nbins+B))*tau_PDG;
        }
        for(int i(0); i <= nbins; i++) cout << bins[i] << endl;
}
