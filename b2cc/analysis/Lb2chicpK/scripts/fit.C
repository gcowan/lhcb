void fit(char * input_file, char * out_file_mass){

    //gROOT->ProcessLine(".x ~/lhcb/lhcbstyle.C");
    //lhcbStyle();

    const std::string filename(input_file);
    const std::string treename = "reducedTree";

    TFile* file = TFile::Open( filename.c_str() );
    if( !file ) std::cout << "file " << filename << " does not exist" << std::endl;
    TTree* tree = (TTree*)file->Get( treename.c_str() );
    if( !tree ) std::cout << "tree " << treename << " does not exist" << std::endl;


    // -- signal, mass shape
    RooRealVar mass("mass","m(#chi_{c}pK^{-})", 5.55, 5.7); 
    RooRealVar mass_chicp("mass_chicp","m(#chi_{c}p)", 4.35, 5.35, "GeV/c^{2}"); 
    RooRealVar mass_pK("mass_pK","m(pK)", 1.3, 2.3, "GeV/c^{2}"); 
    RooRealVar mass_Jpsi("mass_Jpsi","m(#mu#mu)", 3.0, 3.2, "GeV/c^{2}"); 
    RooRealVar mass_Chic("mass_Chic","m(J/#psi#gamma)", 3.4, 3.7, "GeV/c^{2}"); 
    RooRealVar mean("mean","mean", 5.6, 5.59, 5.65);
    RooRealVar sigma1("sigma1","sigma1", 0.010, 0.001, 0.1);
    RooRealVar sigma2("sigma2","sigma2", 30.0, 5.0, 300.0);
    RooRealVar alpha1("alpha1","alpha1", 1.0, 0.5, 5.0);
    RooRealVar n1("n1","n1", 1.8, 0.2, 15.0);
    RooRealVar alpha2("alpha2","alpha2", -0.5, -5.5, 0.0);
    RooRealVar n2("n2","n2", 0.7, 0.2, 10.0);

    RooGaussian gauss1("gauss1","gauss1", mass, mean, sigma1);
    RooGaussian gauss2("gauss2","gauss2", mass, mean, sigma2);
    RooCBShape cb1("cb1","cb1", mass, mean, sigma1, alpha1, n1); 
    RooCBShape cb2("cb2","cb2", mass, mean, sigma2, alpha2, n2); 

    RooRealVar cbRatio("cbRatio","cbRatio", 0.8, 0.1, 1.0);
    RooRealVar dfbYield("dfbYield","dfb Yield", 1e2, 1e1, 1e4);
    RooRealVar bgYield("bgYield","bg Yield", 100.0, 100.0, 1e4);

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

    // -- bg, mass shape
    RooRealVar a1("a1","a1", 0.0, -1.0, 1.0);
    RooChebychev comb("comb","comb", mass, a1);
    RooRealVar mean3("mean3","mean3", 5.56, 5.5, 5.6);
    RooRealVar sigma3("sigma3","sigma3", 0.1, 0.001, 0.1);
    RooRealVar frac3("frac3","frac", 0.2, 0.0, 0.5);
    RooGaussian gauss3("gauss3","gauss3", mass, mean3, sigma3);
    RooAddPdf bg("bg","bg", RooArgList(gauss3, comb), RooArgList(frac3));

    // -- add signal & bg
    RooAddPdf pdf("pdf", "pdf", RooArgList(gauss1, bg), RooArgList( dfbYield, bgYield));  

    RooArgSet obs;
    obs.add(mass);
    obs.add(mass_chicp);
    obs.add(mass_pK);
    obs.add(mass_Jpsi);
    obs.add(mass_Chic);
    RooDataSet ds("ds","ds", obs, RooFit::Import(*tree)); 

    RooPlot* plot = mass.frame();

    pdf.fitTo( ds, RooFit::Extended() );
    ds.plotOn( plot );
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
    plot->Draw();

    pad2->cd();
    plotPullMass->Draw("AP");

    c->SaveAs(out_file_mass);

    RooStats::SPlot* sData = new RooStats::SPlot("sData","An SPlot",
            ds, &pdf, RooArgList(dfbYield, bgYield) );


    RooDataSet * dataw_z = new RooDataSet(ds.GetName(),ds.GetTitle(),&ds,*(ds.get()),0,"dfbYield_sw") ;
    
    TCanvas* d = new TCanvas();
    RooPlot* w_mass_chicp = mass_chicp.frame();
    dataw_z->plotOn(w_mass_chicp, RooFit::DataError(RooAbsData::SumW2), RooFit::Binning(20)) ;
    w_mass_chicp->Draw();
    d->SaveAs("m_chicp_sweighted.png");
 
    TCanvas* e = new TCanvas();
    RooPlot* w_mass_pK = mass_pK.frame();
    dataw_z->plotOn(w_mass_pK, RooFit::DataError(RooAbsData::SumW2), RooFit::Binning(20)) ;
    w_mass_pK->Draw();
    e->SaveAs("m_pK_sweighted.png");

    TCanvas* f = new TCanvas();
    RooPlot* w_mass_Jpsi = mass_Jpsi.frame();
    dataw_z->plotOn(w_mass_Jpsi, RooFit::DataError(RooAbsData::SumW2), RooFit::Binning(20)) ;
    w_mass_Jpsi->Draw();
    f->SaveAs("m_Jpsi_sweighted.png");

    TCanvas* g = new TCanvas();
    RooPlot* w_mass_Chic = mass_Chic.frame();
    dataw_z->plotOn(w_mass_Chic, RooFit::DataError(RooAbsData::SumW2), RooFit::Binning(20)) ;
    w_mass_Chic->Draw();
    g->SaveAs("m_Chic_sweighted.png");
}
