{
  gROOT->SetStyle("Plain");
  gStyle->SetFrameBorderMode(0);
  gStyle->SetCanvasBorderMode(0);
  gStyle->SetPadBorderMode(0);
  gStyle->SetFrameFillColor(kNone);
  gStyle->SetPadColor(kNone);
  gStyle->SetCanvasColor(kNone);
  gStyle->SetTitleBorderSize(0);
  gStyle->SetStatColor(kNone);
  gStyle->SetAxisColor(1);
  gStyle->SetLabelColor(1);
  gStyle->SetCanvasBorderMode(0);
  gStyle->SetTitleFillColor(kNone);
  gStyle->SetTextFont(132);
  gStyle->SetPadBorderSize  (10);
  gStyle->SetPadBorderMode  (0);
  
  gStyle->SetPadBottomMargin(0.16);
  gStyle->SetPadTopMargin   (0.08);
  gStyle->SetPadLeftMargin  (0.15);
  gStyle->SetPadRightMargin (0.15);
  
  gStyle->SetPadGridX       (0);
  gStyle->SetPadGridY       (0);
  gStyle->SetPadTickX       (0);
  gStyle->SetPadTickY       (0);

  // Frames
  gStyle->SetFrameFillStyle ( 0);
  gStyle->SetFrameFillColor ( 0);
  gStyle->SetFrameLineColor ( 1);
  gStyle->SetFrameLineStyle ( 0);
  gStyle->SetFrameLineWidth ( 1);
  gStyle->SetFrameBorderSize(10);
  gStyle->SetFrameBorderMode( 0);
    
    
   // Histograms
  //gStyle->SetHistFillColor(2);
  //gStyle->SetHistFillStyle(0);
 /* //gStyle->SetHistLineColor(1);
  gStyle->SetHistLineStyle(1);
  //gStyle->SetHistLineWidth(2);
  gStyle->SetHistMinimumZero();
    
    gStyle->SetMarkerStyle(8);
    gStyle->SetMarkerSize(1.);  
    gStyle->SetMarkerColor(kBlue);
*/
  // Functions
  //gStyle->SetFuncColor(1);
  //gStyle->SetFuncStyle(0);
  //gStyle->SetFuncWidth(1);
    
  gStyle->SetStatFont   (132);
  gStyle->SetTitleFont  (132);
  gStyle->SetOptTitle(0);
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(1111);
  gStyle->SetTitle(0);

  // Various
  gStyle->SetTitleSize  (0.050,"X");
  gStyle->SetTitleOffset(1.000,"X");
  gStyle->SetLabelOffset(0.003,"X");
  gStyle->SetLabelSize  (0.050,"X");
  gStyle->SetLabelFont  (132   ,"X");
  gStyle->SetNdivisions(505 , "X");
  
  gStyle->SetStripDecimals(kFALSE);

  gStyle->SetTitleSize  (0.050,"Y");
  gStyle->SetTitleOffset(1.200,"Y");
  gStyle->SetLabelOffset(0.008,"Y");
  gStyle->SetLabelSize  (0.050,"Y");
  gStyle->SetLabelFont  (132   ,"Y");
  gStyle->SetTitleFont  (132 , "Y");
  gStyle->SetNdivisions(505 , "Y");
    
  gStyle->SetLegendFillColor ( kWhite);
  gStyle->SetLegendBorderSize ( 0);
  gStyle->SetLegendFont ( 132);
    

  

}
