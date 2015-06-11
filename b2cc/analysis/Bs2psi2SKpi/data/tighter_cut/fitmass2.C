#include  "RooBifurGauss.h"
#include "TMath.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooGaussian.h"
#include "RooTruthModel.h"
#include "RooExponential.h"
#include "RooResolutionModel.h"
#include "RooGaussModel.h"
#include  "RooGaussian.h"
#include "RooCBShape.h"
#include "RooAddModel.h"
#include "RooAbsPdf.h"
#include "RooAddPdf.h"
#include "RooHistPdf.h"
#include "RooProdPdf.h"
#include "RooDecay.h"
#include "RooGlobalFunc.h"
#include "RooConstVar.h"
#include "TCanvas.h"
#include "TTree.h"
#include "TCut.h"
#include "TFile.h"
#include "RooPlot.h"
#include "TAxis.h"
#include "RooDataHist.h"
//#include "ksfun.h"
#include "TSystem.h"
#include "RooFitResult.h"
#include "TLatex.h"
#include "TLine.h"
#include <string>
#include <sstream>
#include <utility>
#include "RooStats/SPlot.h"
#include "TPolyLine.h"
#include "RooFitResult.h"
//#include "RooStudentT.h"
#include "TROOT.h"
//#Include </usr/include/c++/4.2.1/backward/iostream.h>
#include <iostream>
//std::string mString = "B_s0_Mass_JpsiConstr > 5150 && B_s0_Mass_JpsiConstr < 5450";

using namespace RooFit ;

std::string massCandidates(double minmass, double maxmass, double nbins){

  double bsize = (maxmass - minmass)/nbins;
  std::stringstream ax; ax << "Candidates/(" << bsize << "MeV/#font[12]{c}^{2})" ;
  return ax.str();
}

void addBlurb(TCanvas* can){

  can->cd(1);
  TLatex *myLatex = new TLatex(0.5,0.5,"");
  myLatex->SetTextFont(132);
  myLatex->SetTextColor(1);
  myLatex->SetTextSize(0.06);
  myLatex->SetNDC(kTRUE);
  myLatex->SetTextAlign(11);
  myLatex->SetTextSize(0.05);
  myLatex->DrawLatex(0.6, 0.82,"#splitline{LHCb Preliminary}{#scale[1]{#sqrt{s} = 7 + 8 TeV, L =3 fb^{-1}}}");


}

double fracInWindow( double minmass, double maxmass, RooRealVar& m , RooAbsPdf* pdf){

  RooArgSet nset(m) ;
  m.setRange("pdf", minmass, maxmass) ;
  RooAbsReal* igx_sig = pdf->createIntegral(m,NormSet(m),Range("pdf")) ;
  return  igx_sig->getVal();
}


void fitmass2(std::string filename = "tight-mva.root", std::string massbr = "B_s0_Mass_JpsiConstr",  bool plotZoom = false,  double minmass = 5200, double maxmass = 5450, double reflectGuess = 377 , double nlb = 91,   double themax = 280 , double themax2 =12000, int nbins = 50){

  //gROOT -> ProcessLine( ".x ./mattStyle.C" );


  // std::string cutString =  mString ;
  std::stringstream mString;
  mString << massbr << " >" << minmass << " && "<<  massbr << " < " << maxmass;

  TCut theCut = mString.str().c_str();

 TFile* theFile = new TFile(filename.c_str());
 TTree* tree = (TTree*)theFile->Get("bCandidates");
 tree->Print();

 double mass;
 tree->SetBranchAddress(massbr.c_str(),&mass);

 RooRealVar m(massbr.c_str(),massbr.c_str(),minmass, maxmass);
 RooDataSet data("mass_DS", "mass_DS", RooArgSet(m),Cut(theCut),Import(*tree));

 int ntot = data.numEntries();

 RooRealVar mx("mBd","mBd", 5279, 5270,5285);  //mx.setConstant(true);

 RooRealVar dm("dm","dm",87.6, 85, 90);
 RooGaussian dmconstraint("dmConstr","dmConstr",dm,RooConst(87.19),RooConst(0.24)) ;

 RooFormulaVar mBs("mBs", "mBs", "mBd+dm",RooArgList(mx,dm));


 // RooRealVar s("sigma","sigma",4.65, 0,8);  //s.setConstant(true);
 RooRealVar taub("taub","taub",-0.0012, -0.1,0.1); //taub.setConstant(true);
 RooGaussian tauconstraint("tauConstr","tauConstr",taub,RooConst(-0.00117),RooConst(0.0003)) ;
 RooExponential bg("back","exp",m,taub);
 // RooRealVar s2("sigma2","sigma2",8.32,0, 15); //s2.setConstant(true);

 RooRealVar scale("scale", "scale", 1, 0.8, 1.2);
 RooFormulaVar s2("sigma2", "sigma2", "7.59*scale",scale);
 RooFormulaVar s("sigma", "sigma", "4.91*scale",scale);


 RooFormulaVar s3("sigma3", "sigma3", "sigma*1.06",s);
 RooFormulaVar s4("sigma4", "sigma4", "sigma2*1.06",s2);

 RooRealVar st("sigmat", "sigmat", 18.3, 7., 30); st.setConstant(true);
 RooGaussian gauss1("gauss1","gauss(x,mean,sigma)",m, mx,st);
 RooGaussian gauss2("gauss2","gauss(x,mean,sigma)",m, mBs,st);

 RooRealVar sghost("sghost", "sghost", 14.1, 0., 30); sghost.setConstant(true);
 RooGaussian ghostgauss("ghostgauss","gauss(x,mean,sigma)",m, mx,sghost);
 RooGaussian ghostgauss2("ghostgauss2","gauss(x,mean,sigma)",m, mBs,sghost);

 RooRealVar a("a", "a", 2.47, 0., 4); a.setConstant(true);
 // RooRealVar a("a", "a", 2.67, 0., 4); a.setConstant(true); // single cb
 RooRealVar n("n", "n", 1., 0., 20); n.setConstant(true);
 // RooRealVar ns("ns", "ns", 5.84, 2., 10); ns.setConstant(true);
 // RooRealVar s2("sigma2","sigma2",8.15,0, 15); //s2.setConstant(true);

 // RooStudentT student1("student1", "student", m, mx, s2, ns);
 RooCBShape cb1("crystalball1","cb(x,mean,sigma)",m, mx,s,a,n);

 // RooStudentT student2("student2", "student", m, mBs, s2, ns);
 RooCBShape cb2("crystalball2","cb(x,mean,sigma)",m, mBs,s3,a,n);

 RooRealVar a2("a2", "a2", 4.56, 0., 4); a2.setConstant(true);
 RooRealVar n2("n2", "n2", 1., 0.99, 10); n2.setConstant(true);
 RooCBShape cb3("crystalball3","cb(x,mean,sigma)",m, mx,s2,a2,n2);
 RooCBShape cb4("crystalball4","cb(x,mean,sigma)",m, mBs,s4,a2,n2);

 RooRealVar f("f","f",0.77, 0.65,0.85); f.setConstant(true);
 RooRealVar f2("f2","f2",0.01, 0.,0.01); f2.setConstant(true);

 RooAddPdf sigmodel1("sigmodel1","sigmodel1",RooArgList(cb1,gauss1,cb3), RooArgList(f,f2));
 RooAddPdf sigmodel2("sigmodel2","sigmodel2",RooArgList(cb2,gauss2,cb4), RooArgList(f,f2));


 // reflection
 //RooRealVar rm("rm","rm", 5280, 5250,5300);  rm.setConstant(true); // 4.2
 //RooRealVar rs("rsigma","rsigma",169.,0, 200);  //rs.setConstant(true); // 47
 //RooRealVar rs2("rsigma2","rsigma2",11.3,0, 200);  //rs2.setConstant(true); //2.4
 //RooBifurGauss bif("bif","bif",m,rm,rs,rs2);
 //RooGaussian rsconstraint2("rsConstr2","rsConstr2",rs2,RooConst(11.3),RooConst(2.4)) ;

 RooRealVar rm("rm","rm", 5286., 5250,5420);  //rm.setConstant(true); // 4.2
 RooRealVar rs("rsigma","rsigma",193.,0, 200);  rs.setConstant(true); // 47
 RooRealVar rs2("rsigma2","rsigma2",7.7,0, 200);//rs2.setConstant(true); //2.4
 RooBifurGauss bif("bif","bif",m,rm,rs,rs2);
 RooGaussian rsconstraint2("rsConstr2","rsConstr2",rs2,RooConst(7.7),RooConst(1.7)) ;

 RooGaussian rmconstraint("rmConstr","rmConstr",rm,RooConst(5286),RooConst(2.8)) ;


 // reflection2
 RooRealVar rrm("rrm","rrm",  5344   , 5250,5500);  rrm.setConstant();
 RooRealVar rrs("rrsigma","rrsigma",15.8,0, 200);  rrs.setConstant(true);
 RooRealVar rrs2("rrsigma2","rrsigma2",73.1,0, 200);  rrs2.setConstant(true);
 RooBifurGauss rbif("rbif","rbif",m,rrm,rrs,rrs2);


 // reflection2
 RooRealVar bs_rrm("bs_rrm","bs_rrm",   5.42548e+03    , 5250,5500);  bs_rrm.setConstant();
 RooRealVar bs_rrs("bs_rrsigma","bs_rrsigma",12.5,0, 200);  bs_rrs.setConstant(true);
 RooRealVar bs_rrs2("bs_rrsigma2","bs_rrsigma2",2.00000e+02 ,0, 500);  bs_rrs2.setConstant(true);
 RooBifurGauss bs_rbif("bs_rbif","bs_rbif",m,bs_rrm,bs_rrs,bs_rrs2);


 // reflection2
 RooRealVar lrm("lrm","lrm",   5317.5   , 5100,5500);  lrm.setConstant(true);
 RooRealVar lrs("lrsigma","lrsigma",1000,0, 2000);  lrs.setConstant(true);
 RooRealVar lrs2("lrsigma2","lrrsigma2",41.5 ,0, 200);  lrs2.setConstant(true);
 RooBifurGauss lrbif("lbif","lbif",m,lrm,lrs,lrs2);

 // reflection eta
 RooRealVar erm("erm","erm",   5.26681e+03   , 5100,5500);  erm.setConstant(true);
 RooRealVar ers("ersigma","ersigma", 1.98820e+02 ,0, 600);  ers.setConstant(true);
 RooRealVar ers2("ersigma2","errsigma2", 1.66627e+02    ,0, 200);  ers2.setConstant(true);
 RooBifurGauss erbif("ebif","ebif",m,erm,ers,ers2);

 // reflection2
 RooRealVar krm("krm","krm",   5.11730e+03   , 5100,5500);  krm.setConstant();
 RooRealVar krs("krsigma","krsigma",200,0, 600);  krs.setConstant(true);
 RooRealVar krs2("krsigma2","krrsigma2",10.7 ,0, 200);  krs2.setConstant(true);
 RooBifurGauss krbif("kbif","kbif",m,krm,krs,krs2);



 RooRealVar nsigBd("NsigBd","back fraction", data.numEntries()/2.0, 0., data.numEntries());
 RooRealVar nsigBs("NsigBs","back fraction", 300, 0., data.numEntries());//nsigBs.setConstant(true);
 RooRealVar nback("Nbkg","back fraction",data.numEntries()/4.0, 0., data.numEntries());
 RooRealVar nref("Nref","back fraction", reflectGuess , 0., data.numEntries());// nref.setConstant(true);
 RooRealVar nref2("Nref2","back fraction", 13. , 0., data.numEntries()) ; nref2.setConstant(true); //Bs -> psi(2S) pipi
 RooRealVar nref3("Nref3","back fraction", nlb , 0., data.numEntries()) ; nref3.setConstant(true); //Lambdab
 RooRealVar nref4("Nref4","back fraction", 117 , 0., 500) ; // B+->psi Kpipi
 RooRealVar nref5("Nref5","back fraction", 10.3 , 0., 500) ; nref5.setConstant(true); // B+->psi Kpipi
 RooRealVar nref6("Nref6","back fraction", 34. , 0., data.numEntries()) ; nref6.setConstant(true); //Lambdab
 RooRealVar nref7("Nref7","back fraction", 6. , 0., data.numEntries()) ; nref7.setConstant(true); //Lambdab
 RooFormulaVar ngh1("ngh1", "ngh1", "0.013*NsigBd",nsigBd);
 RooFormulaVar ngh2("ngh2", "ngh2", "0.013*NsigBs",nsigBs);

 RooRealVar fref("fref","fref",0.63, 0.,0.85); fref.setConstant(true);
 RooAddPdf bsbdref("bsbdref", "bsbdref", RooArgList(rbif, bs_rbif) , fref  );


 RooGaussian nnrefconstraint("nrefConstr","nrefConstr",nref,RooConst(reflectGuess),RooConst(72)) ;
 RooPlot* mframe = m.frame();
 //rbif.plotOn(mframe);
 //mframe->Draw();
 //return;
 // RooAddPdf model("model","model", RooArgList(sigmodel1,sigmodel2,bg,bif,rbif,lrbif,krbif), RooArgList(nsigBd,nsigBs,nback,nref,nref2,nref3,nref4));
 //RooAddPdf model("model","model", RooArgList(sigmodel1,sigmodel2,ghostgauss,ghostgauss2, bg,bif,lrbif,bsbdref,erbif), RooArgList(nsigBd,nsigBs,ngh1,ngh2,nback,nref,nref3,nref7,nref6));
 RooAddPdf model("model","model", RooArgList(sigmodel1,sigmodel2,ghostgauss,ghostgauss2, bg,bif,lrbif,rbif,bs_rbif), RooArgList(nsigBd,nsigBs,ngh1,ngh2,nback,nref,nref3,nref2, nref7));


 // RooAddPdf model("model","model", RooArgList(sigmodel1,sigmodel2,ghostgauss,ghostgauss2 ,bg,bif,rbif,lrbif,bs_rbif), RooArgList(nsigBd,nsigBs,ngh1,ngh2,nback,nref,nref2,nref3,nref5));

 //RooAddPdf model("model","model", RooArgList(sigmodel1,bg,bif), RooArgList(nsigBd,nback,nref));
 // RooFitResult* result = model.fitTo(data,Extended(),Save(),ExternalConstraints(RooArgSet(dmconstraint,nnrefconstraint, rsconstraint2, rmconstraint, tauconstraint )));
 RooFitResult* result = model.fitTo(data,Extended(),Save(),ExternalConstraints(RooArgSet(nnrefconstraint, rsconstraint2, rmconstraint)));// ,tauconstraint)));

 double nll = result->minNll();
 std::cout << "likelihood " <<  nll <<  std::endl;

 // RooPlot* mframe = m.frame();

 // if (paramOn == true) sigmodel.paramOn(mframe); //, Format("NE", AutoPrecision(1)));
 std::string axstring = massCandidates(minmass,maxmass,nbins) ;
 //mframe->SetXTitle("M(#psi(2S) K^{+}#pi^{-}) [MeV/#font[12]{c}^{2}]");
 // mframe->SetYTitle(axstring.c_str());
 mframe->SetXTitle("");
 mframe->SetYTitle("");
 mframe->SetTitle("");
 TAxis* xachse = mframe->GetXaxis(); TAxis* yachse = mframe->GetYaxis();
 xachse->SetTitleFont (132);
 yachse->SetTitleFont (132);
 xachse->SetLabelFont (132);
 yachse->SetLabelFont (132);
 xachse->SetTitleSize(0.05);
 yachse->SetTitleSize(0.052);
 yachse->SetTitleOffset(1.1);
 xachse->SetTitleOffset(1.0);
 TCanvas *c1 = new TCanvas("c1", "c1",10,44,800,600);
 TPad* pad1 = new TPad("pad1","This is pad1",0.05,0.2,0.95,0.97);
 TPad* pad2 = new TPad("pad2","This is pad2",0.05,0.0,0.95,0.2);
 //TPad* pad3 = new TPad("pad3","This is pad3",0.6,0.6,0.9,0.9);
 pad1->Draw();
 pad2->Draw();
 //pad3->Draw();
 //if (plotZoom) pad3->Draw();
 pad1->cd();

   RooPlot* frame3 =  m.frame(Name("test")) ; // Same way you made 'frame'
   data.plotOn(frame3, Binning(nbins));
   // frame3->SetMaximum(200);
   frame3->SetXTitle("");
   frame3->SetYTitle("");
   frame3->SetTitle("");
   TAxis* xachse2 = frame3->GetXaxis(); TAxis* yachse2 = frame3->GetYaxis();
   xachse2->SetTitleFont (132);
   yachse2->SetTitleFont (132);
   xachse2->SetLabelFont (132);
   yachse2->SetLabelFont (132);
   xachse2->SetTitleSize(0.052);
   yachse2->SetTitleSize(0.052);
   yachse2->SetTitleOffset(0.8);
   xachse2->SetTitle("");
   yachse2->SetTitle("");
   model.plotOn(frame3,Components("ghostgauss"), LineColor(kMagenta), LineStyle(1));
   model.plotOn(frame3,Components(bg.GetName()), LineColor(kGreen), LineStyle(2));
   model.plotOn(frame3, Components(RooArgSet(bg,bif,bsbdref,lrbif,erbif)) , LineStyle(1), FillColor(92),LineColor(92), DrawOption("FL") );
   model.plotOn(frame3,Components("sigmodel1"), LineColor(kBlue), LineStyle(2));
   model.plotOn(frame3,Components("sigmodel2"), LineColor(kBlue), LineStyle(2));
   data.plotOn(frame3, Binning(nbins));
   model.plotOn(frame3, LineColor(2));
   frame3->SetMaximum(themax);
   frame3->SetXTitle("");
   frame3->SetYTitle("");
   frame3->SetXTitle("M(#psi(2S) K^{+}#pi^{-}) [MeV/#font[12]{c}^{2}]");
   frame3->SetYTitle(axstring.c_str());
   frame3->Draw();
   addBlurb(c1);

   /*
 if (plotZoom){
  pad3->cd();
  data.plotOn(mframe, Binning(nbins));
  model.plotOn(mframe, LineColor(2));
  cout << "chi^2 = " << mframe->chiSquare() << endl ;
  //data.plotOn(mframe, Binning(50));
  mframe->SetMaximum(themax2);
  mframe->SetXTitle("");
  mframe->SetYTitle("");
  mframe->SetTitle("");
  mframe->Draw();
 }
   */
 // stringstream out_2;


  pad2->cd();
  RooPlot* frame2 =  m.frame() ; // Same way you made 'frame'
  RooHist* phist = frame3->pullHist( );
   int np = phist->GetN();


   std::cout <<  " np " << np << std::endl;
   //  std::vector<float> xv; std::vector<float> yv;
   double xv[141] ;
   double yv[141] ;
   int i = 0;
   for (i = 0; i < np; ++i){
     xv[i] = phist->GetX()[i];
     yv[i] =  phist->GetY()[i] - phist->GetErrorYlow(i)  ;
   }


   int start = i;
   for (i = np-1; i >= 0; --i, ++start){
     xv[start] = phist->GetX()[i];
     yv[start] =  phist->GetY()[i] + phist->GetErrorYhigh(i)  ;
   }

   xv[np*2] = xv[0];
   yv[np*2] = yv[0] -  phist->GetErrorYlow(0) ;

  TPolyLine* pline = new TPolyLine(2*np +1,xv, yv);
  pline->SetFillColor(31);
  pline->SetLineColor(2);
  pline->SetLineWidth(4);

  TPolyLine* line = new TPolyLine(np, phist->GetX(), phist->GetY());
  line->SetLineColor(2);
  line->SetLineWidth(2);

   frame2->SetMinimum(-6.5) ;
   frame2->SetMaximum(6.5) ;
  xachse = frame2->GetXaxis(); yachse = frame2->GetYaxis();
  // mean.plotOn(xframe);
  xachse->SetTitleFont (132);
  yachse->SetTitleFont (132);
  xachse->SetLabelFont (132);
  yachse->SetLabelFont (132);
  yachse->SetTitleOffset(0.2);
  yachse->SetTitleSize(0.2);
  yachse->SetLabelSize(0.08);
  xachse->SetLabelOffset(0.2);
  yachse->SetNdivisions(110);
  frame2->SetXTitle("");
  frame2->SetYTitle("pull");
  frame2->SetTitle("");

  frame2->addPlotable(phist,"P") ;
  frame2->Draw() ;
  //pline->Draw("fsame");
  //line->Draw("lsame");

  TLine* zline = new TLine(5200,0, 5500, 0);
  zline->Draw();

 std::cout << "Prob chi2" << TMath::Prob(frame3->chiSquare()*(nbins - 10), nbins-10 ) << std::endl;
 std::cout << "likelihood " <<  nll <<  std::endl;

 double bdfrac = fracInWindow(5350, 5380, m, &sigmodel1);
 double bsfrac = fracInWindow(5350, 5380, m, &sigmodel2);
 double bdghost = fracInWindow(5350, 5380, m, &ghostgauss);
 double bsghost = fracInWindow(5350, 5380, m, &ghostgauss2);
 double bgfrac = fracInWindow(5350, 5380, m, &bg);
 double bdref = fracInWindow(5350, 5380, m, &rbif);

 std::cout << "Bd fraction in window " <<  bdfrac <<  " Number "  <<  bdfrac*nsigBd.getVal() << std::endl;
 std::cout << "Bs fraction in window " << bsfrac << " Number " <<  bsfrac*nsigBs.getVal() << std::endl;
 std::cout << "Bd ghost fraction in window " << bdghost << "  Number  " << bdghost*nsigBd.getVal() *0.013<< std::endl;
 std::cout << "Bs ghost fraction in window " << bsghost << " Number " << bsghost*nsigBs.getVal()*0.013 << std::endl;
 std::cout << "background in window " << bgfrac << " Number " << bgfrac*nback.getVal() << std::endl;
 std::cout << "Bd reflection in window " << bdref << " Number " << bdref*nref2.getVal() << std::endl;

 double total = bdfrac*nsigBd.getVal() + bsfrac*nsigBs.getVal() + bdghost*nsigBd.getVal() *0.013 + bsghost*nsigBs.getVal()*0.013 + bgfrac*nback.getVal() + bdref*nref2.getVal();
 double bkg   = bdfrac*nsigBd.getVal()                          + bdghost*nsigBd.getVal() *0.013 + bsghost*nsigBs.getVal()*0.013 + bgfrac*nback.getVal() + bdref*nref2.getVal();
 std::cout << "Total number events in window " << total << " background in window " << bkg << " bkg fraction " << bkg/total << std::endl; 

}
