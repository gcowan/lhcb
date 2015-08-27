void fit_MC(char * input_file = "../data/Lb2chicpK_MC_2011_2012_signal_reduced.root", char * out_file_mass = "Lb2chicpK_MC_2011_2012_mass_fit.png"){

    //gROOT->ProcessLine(".x ~/lhcb/lhcbstyle.C");
    //lhcbStyle();

    const std::string filename(input_file);
    const std::string treename = "reducedTree";

    TFile* file = TFile::Open( filename.c_str() );
    if( !file ) std::cout << "file " << filename << " does not exist" << std::endl;
    TTree* tree = (TTree*)file->Get( treename.c_str() );
    if( !tree ) std::cout << "tree " << treename << " does not exist" << std::endl;


    // -- signal, mass shape
    RooRealVar mass("mass","m(#chi_{c}pK^{-})", 5.45, 5.85); 
    RooRealVar mass_chicp("mass_chicp","m(#chi_{c}p)", 4.4, 5.2, "GeV/c^{2}"); 
    RooRealVar mass_pK("mass_pK","m(pK)", 1.3, 2.3, "GeV/c^{2}"); 
    RooRealVar mass_Jpsi("mass_jpsi","m(#mu#mu)", 3.0, 3.2, "GeV/c^{2}"); 
    RooRealVar mass_Chic("mass_chic","m(J/#psi#gamma)", 3.35, 3.75, "GeV/c^{2}"); 
    RooRealVar mean("mean","mean", 5.6, 5.59, 5.65);
    RooRealVar sigma1("sigma1","sigma1", 0.010, 0.001, 0.1);
    RooRealVar sigma2("sigma2","sigma2", 0.1, 0.05, 1.0);
    RooRealVar alpha1("alpha1","alpha1", 1.0, 0.5, 5.0);
    RooRealVar n1("n1","n1", 1.8, 0.2, 15.0);
    RooRealVar alpha2("alpha2","alpha2", -0.5, -5.5, 0.0);
    RooRealVar n2("n2","n2", 0.7, 0.2, 10.0);
    RooRealVar bkgcat_chic("bkgcat_chic","bkgcat_chic", 0, 100);

    RooGaussian gauss1("gauss1","gauss1", mass, mean, sigma1);
    RooGaussian gauss2("gauss2","gauss2", mass, mean, sigma2);
    RooCBShape cb1("cb1","cb1", mass, mean, sigma1, alpha1, n1); 
    RooCBShape cb2("cb2","cb2", mass, mean, sigma2, alpha2, n2); 
    
    // the chi_c2 component
    RooRealVar mean3("mean3","mean3", 5.57, 5.52, 5.58);
    RooRealVar sigma3("sigma3","sigma3", 0.01, 0.001, 0.02);
    RooGaussian gauss3("gauss3","gauss3", mass, mean3, sigma3);

    RooRealVar cbRatio("cbRatio","cbRatio", 0.8, 0.1, 1.0);
    RooRealVar frac2("frac2","frac2", 0.3, 0., 1.);

    /*
    alpha1.setVal( 2.1  );
    alpha2.setVal( -4.9 );
    n1.setVal( 3.2 );
    n2.setVal( 7.9 );
    cbRatio.setVal( 0.6808 );
    alpha1.setConstant( true );
    alpha2.setConstant( true );
    cbRatio.setConstant( true );
    n1.setConstant( true );
    n2.setConstant( true );
    */

    // -- add signal & bg
    //RooAddPdf pdf("pdf", "pdf", RooArgList(gauss2, gauss1), RooArgList( frac2 ));  
    RooAddPdf pdf("pdf", "pdf", RooArgList(cb2, cb1), RooArgList( frac2 ));  

    RooArgSet obs;
    obs.add(mass);
    //obs.add(mass_chicp);
    //obs.add(mass_pK);
    obs.add(mass_Jpsi);
    obs.add(mass_Chic);
    obs.add(bkgcat_chic);
    RooDataSet ds("ds","ds", obs, RooFit::Import(*tree), RooFit::Cut("bkgcat_chic < 10")); 

    RooPlot* plot = mass.frame();

    pdf.fitTo( ds );
    ds.plotOn( plot, RooFit::Binning(80) );
    pdf.plotOn( plot );


    RooPlot* plotPullMass = mass.frame();

    plotPullMass->addPlotable( plot->pullHist() );
    //plotPullMass->SetMinimum();
    //plotPullMass->SetMaximum();

    TCanvas* c = new TCanvas();

    TPad* pad1 = new TPad("pad1","pad1", 0, 0.3, 1, 1.0);
    pad1->SetBottomMargin(0);
    pad1->Draw();
    c->cd();
    TPad* pad2 = new TPad("pad2","pad2", 0, 0.05, 1, 0.3);
    pad2->SetBottomMargin(0.2);
    pad2->SetTopMargin(0.0);
    pad2->Draw();

    //  pdf.plotOn( plot, RooFit::Components( DfbPdf ), RooFit::LineColor( kRed ), RooFit::LineStyle(kDashed) );
    //  pdf.plotOn( plot, RooFit::Components( promptPdf ), RooFit::LineColor( kBlue ), RooFit::LineStyle(kDotted) );
    //  pdf.plotOn( plot, RooFit::Components( bgPdf ), RooFit::LineColor( kOrange ), RooFit::LineStyle(kDashDotted) );

    pad1->cd();
    pad1->SetLogy();
    plot->Draw();

    pad2->cd();
    plotPullMass->Draw("AP");

    c->SaveAs(out_file_mass);
}
