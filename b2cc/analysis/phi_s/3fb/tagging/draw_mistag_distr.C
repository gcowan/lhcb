void draw_mistag_distr()
{


  //gROOT->ProcessLine(".x ~/lhcb/lhcbStyle.C");
  //lhcbStyle();
  TGaxis::SetMaxDigits(3);

  TChain *calib = new TChain("DecayTree");
  calib->Add("fitNTuple_peakBkg_2011_2012_Reco14_HLT2B_20140116.root");
  TTree *ct = (TTree*) calib;

  TH1F* os_c = new TH1F("os_c","os_c",50,0,0.599);
  TH1F* ss_c = new TH1F("ss_c","ss_c",50,0,0.599);

  TH1F* os_c_only = new TH1F("os_c_only","os_c_only",50,0,0.599);
  TH1F* ss_c_only = new TH1F("ss_c_only","ss_c_only",50,0,0.599);
  TH1F* os_and_ss_c = new TH1F("os_and_ss_c","os_and_ss_c",50,0,0.599);

  TH2F* os_and_ss_2d = new TH2F("os_and_ss_2d","os_and_ss_2d",25,0.001,0.5,25,0.001,0.5);

  ct->Draw("tagomega_os_cb>>os_c","(tagdecision_os_cb!=0)*sWeights_ipatia");
  ct->Draw("tagomega_ss_nn>>ss_c","(tagdecision_ss_nn!=0)*sWeights_ipatia");

  ct->Draw("tagomega_os_cb>>os_c_only","(tagdecision_os_cb!=0 && tagdecision_ss_nn==0)*sWeights_ipatia");
  ct->Draw("tagomega_ss_nn>>ss_c_only","(tagdecision_ss_nn!=0 && tagdecision_os_cb==0)*sWeights_ipatia");
  ct->Draw("tagomega_ss_nn>>os_and_ss_c","(tagdecision_ss_nn!=0 && tagdecision_os_cb!=0)*sWeights_ipatia");

  ct->Draw("tagomega_ss_nn:tagomega_os_cb>>os_and_ss_2d","(tagdecision_ss_nn!=0 && tagdecision_os_cb!=0)*sWeights_ipatia");
 
  Width_t lhcbSize = 3; 
  gStyle->SetFrameLineWidth(lhcbSize);
  gStyle->SetLineWidth(lhcbSize);
  gStyle->SetPadTickX(1);
  gStyle->SetPadTickY(1);
  gStyle->SetPalette(1);
  gStyle->SetTextSize(0.06);
  gStyle->SetTextFont(132);
  gStyle->SetLabelFont(132,"z");
  gStyle->SetTitleFont(132,"z");
  gStyle->SetLabelSize(0.06,"x");
  gStyle->SetLabelSize(0.06,"y");
  gStyle->SetLabelSize(0.06,"z");
  gStyle->SetTitleSize(1.2*0.06,"x");
  gStyle->SetTitleSize(1.2*0.06,"y");
  gStyle->SetTitleSize(1.2*0.06,"z");

  TCanvas* c1 = new TCanvas("c1","c1",800,800);
  c1->Draw();
  os_c->SetMinimum(0.0001);
  char width[50];
  sprintf(width,"Candidates / %0.2f",os_c->GetBinWidth(1));
  os_c->GetXaxis()->SetTitle("Wrong-tag probability");
  os_c->GetYaxis()->SetTitle(width);
  os_c->SetLineColor(kBlack);
  os_c->SetMarkerStyle(8);
  os_c->SetMarkerSize(0.8);
  os_c->SetLineWidth(2);
  os_c->SetTitleSize(1.*0.06,"x");
  os_c->SetTitleSize(1.*0.06,"y");
  os_c->Draw("err");

  TLegend* leg1 = new TLegend(0.25,0.65,0.4,0.8);
  leg1->SetFillColor(0);
  leg1->SetBorderSize(0);
  leg1->SetTextSize(0.045);
  leg1->SetTextFont(132);
  leg1->AddEntry(os_c,"OS tagger","PL");
  leg1->Draw();

  TPaveText *lhcbName = new TPaveText(gStyle->GetPadLeftMargin() + 0.05,
				      0.87 - gStyle->GetPadTopMargin(),
				      gStyle->GetPadLeftMargin() + 0.20,
				      0.95 - gStyle->GetPadTopMargin(),
				      "BRNDC");
  lhcbName->SetFillColor(0);
  lhcbName->SetBorderSize(0);
  lhcbName->SetTextSize(0.06);
  lhcbName->SetTextFont(132);
  lhcbName->AddText("LHCb");
  lhcbName->Draw();

  c1->Print("os_mistag_inclusive_BsJpsiPhi.eps"); 
  c1->Print("os_mistag_inclusive_BsJpsiPhi.C"); 
  c1->Print("os_mistag_inclusive_BsJpsiPhi.pdf"); 
  c1->Print("os_mistag_inclusive_BsJpsiPhi.gif"); 

  TCanvas* c2 = new TCanvas("c2","c2",800,800);
  c2->Draw();
  ss_c->SetMinimum(0.0001);
  //  char width[50];
  sprintf(width,"Candidates / %0.2f",ss_c->GetBinWidth(1));
  ss_c->GetXaxis()->SetTitle("Wrong-tag probability");
  ss_c->GetYaxis()->SetTitle(width);
  ss_c->SetLineColor(kBlack);
  ss_c->SetMarkerStyle(8);
  ss_c->SetMarkerSize(0.8);
  ss_c->SetLineWidth(2);
  ss_c->SetTitleSize(1.*0.06,"x");
  ss_c->SetTitleSize(1.*0.06,"y");
  ss_c->Draw("err");

  TLegend* leg2 = new TLegend(0.25,0.65,0.4,0.8);
  leg2->SetFillColor(0);
  leg2->SetBorderSize(0);
  leg2->SetTextSize(0.045);
  leg2->AddEntry(os_c,"SSK tagger","PL");
  leg2->Draw();

  lhcbName->Draw();  

  c2->Print("ss_mistag_inclusive_BsJpsiPhi.eps"); 
  c2->Print("ss_mistag_inclusive_BsJpsiPhi.C"); 
  c2->Print("ss_mistag_inclusive_BsJpsiPhi.pdf"); 
  c2->Print("ss_mistag_inclusive_BsJpsiPhi.gif"); 

  TCanvas* c3 = new TCanvas("c3","c3",800,800);
  c3->Draw();
  os_c_only->SetMinimum(0.0001);
  //  char width[50];
  sprintf(width,"Candidates / %0.2f",os_c_only->GetBinWidth(1));
  os_c_only->GetXaxis()->SetTitle("Wrong-tag probability");
  os_c_only->GetYaxis()->SetTitle(width);
  os_c_only->SetLineColor(kBlack);
  os_c_only->SetMarkerStyle(8);
  os_c_only->SetMarkerSize(0.8);
  os_c_only->SetLineWidth(2);
  os_c_only->SetTitleSize(1.*0.06,"x");
  os_c_only->SetTitleSize(1.*0.06,"y");
  os_c_only->Draw("err");

  TLegend* leg3 = new TLegend(0.25,0.65,0.4,0.8);
  leg3->SetFillColor(0);
  leg3->SetBorderSize(0);
  leg3->SetTextSize(0.045);
  leg3->AddEntry(os_c,"OS tagger","PL");
  leg3->Draw();

  lhcbName->Draw();

  c3->Print("os_mistag_exclusive_BsJpsiPhi.eps"); 
  c3->Print("os_mistag_exclusive_BsJpsiPhi.C"); 
  c3->Print("os_mistag_exclusive_BsJpsiPhi.pdf"); 
  c3->Print("os_mistag_exclusive_BsJpsiPhi.gif"); 

  TCanvas* c4 = new TCanvas("c4","c4",800,800);
  c4->Draw();
  ss_c_only->SetMinimum(0.0001);
  //  char width[50];
  sprintf(width,"Candidates / %0.2f",ss_c_only->GetBinWidth(1));
  ss_c_only->GetXaxis()->SetTitle("Wrong-tag probability");
  ss_c_only->GetYaxis()->SetTitle(width);
  ss_c_only->SetLineColor(kBlack);
  ss_c_only->SetMarkerStyle(8);
  ss_c_only->SetMarkerSize(0.8);
  ss_c_only->SetLineWidth(2);
  ss_c_only->SetTitleSize(1.*0.06,"x");
  ss_c_only->SetTitleSize(1.*0.06,"y");
  ss_c_only->Draw("err");

  TLegend* leg4 = new TLegend(0.25,0.65,0.4,0.8);
  leg4->SetFillColor(0);
  leg4->SetBorderSize(0);
  leg4->SetTextSize(0.045);
  leg4->AddEntry(os_c,"SSK tagger","PL");
  leg4->Draw();

  lhcbName->Draw();

  c4->Print("ss_mistag_exclusive_BsJpsiPhi.eps"); 
  c4->Print("ss_mistag_exclusive_BsJpsiPhi.C"); 
  c4->Print("ss_mistag_exclusive_BsJpsiPhi.pdf"); 
  c4->Print("ss_mistag_exclusive_BsJpsiPhi.gif"); 

  TCanvas* c5 = new TCanvas("c5","c5",800,800);
  c5->Draw();
  os_and_ss_c->SetMinimum(0.0001);
  //  char width[50];
  sprintf(width,"Candidates / %0.2f",os_and_ss_c->GetBinWidth(1));
  os_and_ss_c->GetXaxis()->SetTitle("Wrong-tag probability");
  os_and_ss_c->GetYaxis()->SetTitle(width);
  os_and_ss_c->SetLineColor(kBlack);
  os_and_ss_c->SetMarkerStyle(8);
  os_and_ss_c->SetMarkerSize(0.8);
  os_and_ss_c->SetLineWidth(2);
  os_and_ss_c->SetTitleSize(1.*0.06,"x");
  os_and_ss_c->SetTitleSize(1.*0.06,"y");
  os_and_ss_c->Draw("err");

  TLegend* leg5 = new TLegend(0.25,0.65,0.4,0.8);
  leg5->SetFillColor(0);
  leg5->SetBorderSize(0);
  leg5->SetTextSize(0.045);
  leg5->AddEntry(os_c,"OS and SSK taggers","PL");
  leg5->Draw();

  lhcbName->Draw();

  c5->Print("os_and_ss_mistag_BsJpsiPhi.eps"); 
  c5->Print("os_and_ss_mistag_BsJpsiPhi.C"); 
  c5->Print("os_and_ss_mistag_BsJpsiPhi.pdf"); 
  c5->Print("os_and_ss_mistag_BsJpsiPhi.gif"); 

  TCanvas* c6 = new TCanvas("c6","c6",800,800);
  c6->Draw();
  os_and_ss_2d->SetMinimum(0.0001);
  os_and_ss_2d->GetXaxis()->SetTitle("Wrong-tag probability OS");
  os_and_ss_2d->GetYaxis()->SetTitle("Wrong-tag probability SSK");
  os_and_ss_2d->SetTitleSize(1.*0.06,"x");
  os_and_ss_2d->SetTitleSize(1.*0.06,"y");
  os_and_ss_2d->SetLabelFont(132,"z");
  os_and_ss_2d->SetTitleFont(132,"z");
  os_and_ss_2d->Draw("COLZ");

  TPaveText *lhcbName2 = new TPaveText(gStyle->GetPadLeftMargin() + 0.05,
				      0.05 + gStyle->GetPadBottomMargin(),
				      gStyle->GetPadLeftMargin() + 0.20,
				      0.20 + gStyle->GetPadBottomMargin(),
				      "BRNDC");
  lhcbName2->SetFillColor(0);
  lhcbName2->SetBorderSize(0);
  lhcbName2->SetTextSize(0.045);
  lhcbName2->SetTextFont(132);
  lhcbName2->AddText("LHCb");
  lhcbName2->Draw();

  lhcbName2->Draw();

  c6->Print("os_and_ss_mistag_2D_BsJpsiPhi.eps"); 
  c6->Print("os_and_ss_mistag_2D_BsJpsiPhi.C"); 
  c6->Print("os_and_ss_mistag_2D_BsJpsiPhi.pdf"); 
  c6->Print("os_and_ss_mistag_2D_BsJpsiPhi.gif"); 


}
