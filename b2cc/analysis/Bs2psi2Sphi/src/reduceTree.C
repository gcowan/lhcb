#include "TCanvas.h"
#include "TAxis.h"
#include "TH1.h"
#include "TTree.h"
#include "TFile.h"
#include "TCut.h"
#include "TF1.h"
#include "TROOT.h"
#include "TStyle.h"
#include "TGraphErrors.h"
#include "TGraphAsymmErrors.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void reduceTree(){ 

  // -- define tuple file name, tuple name and cuts to apply
  // -- and also the name of the output file
  const std::string filename = "Tuple_merged.root";
  const std::string treename("HistosAndTuples/MyTuple");
  const std::string cuts = "m_b_DTF_jpsi_chic1_constr>5.55&&m_b_DTF_jpsi_chic1_constr<5.7&&dtf_B<5 && c2ip_B <15 && dls_B>12 && c2ip_Kaon>5 && c2ip_Proton > 5 && minCl_gamma > 0.05 && m_Chic>3.4 && m_Chic < 3.7&&trig_b_l0tos_tos == 1 &&trig_b_l1tos_tos == 1 && trig_b_l2tos_tos == 1 && trgh_track[0] < 0.3 && trgh_track[1] < 0.3 && trgh_track[2] < 0.3 && trgh_track[3] < 0.3&& ann_kaon[0]>0.3&&minann_mu>0.3" ;
  const std::string outFilename("reducedTree.root");
  

  TFile* file = TFile::Open( filename.c_str() );
  if( !file ) std::cout << "file " << filename << " does not exist" << std::endl;

  TTree* tree = (TTree*)file->Get( treename.c_str() );
  if( !tree ) std::cout << "tree " << treename << " does not exist" << std::endl;
  
  // -- activate the branches you need
  
  tree->SetBranchStatus("*", 0);
  tree->SetBranchStatus("m_b_DTF_jpsi_chic1_constr",1);
  tree->SetBranchStatus("dtf_B",1);
  tree->SetBranchStatus("c2ip_B",1);
  tree->SetBranchStatus("dls_B",1);
  tree->SetBranchStatus("c2ip_Kaon",1);
  tree->SetBranchStatus("c2ip_Proton",1);
  tree->SetBranchStatus("minCl_gamma",1);
  tree->SetBranchStatus("m_Chic",1);
  tree->SetBranchStatus("trig_b_l0tos_tos",1);
  tree->SetBranchStatus("trig_b_l1tos_tos",1);
  tree->SetBranchStatus("trig_b_l2tos_tos",1);
  tree->SetBranchStatus("trgh_track",1);
  tree->SetBranchStatus("ann_kaon",1);
  tree->SetBranchStatus("minann_mu",1);
  tree->SetBranchStatus("m_chicp",1);
  tree->SetBranchStatus("m_pK",1);
  tree->SetBranchStatus("m_Jpsi",1);
  
  // -- this file is just here to make the 'CopyTree' happy
  TFile* dummyFile = new TFile("dummy.root","RECREATE");
  TTree* rTree1 = tree->CopyTree( cuts.c_str() );

  float mass, mass_chicp, mass_pK, mass_Jpsi, mass_Chic;

  rTree1->SetBranchAddress("m_b_DTF_jpsi_chic1_constr", &mass);
  rTree1->SetBranchAddress("m_chicp", &mass_chicp);
  rTree1->SetBranchAddress("m_pK", &mass_pK);
  rTree1->SetBranchAddress("m_Jpsi", &mass_Jpsi);
  rTree1->SetBranchAddress("m_Chic", &mass_Chic);

  TFile* rFile = new TFile( outFilename.c_str() ,"RECREATE");
  TTree* rTree2 = new TTree();
  rTree2->SetName("reducedTree");
  rTree2->Branch("mass", &mass, "mass/F");
  rTree2->Branch("mass_chicp", &mass_chicp, "mass_chicp/F");
  rTree2->Branch("mass_pK", &mass_pK, "mass_pK/F");
  rTree2->Branch("mass_Jpsi", &mass_Jpsi, "mass_Jpsi/F");
  rTree2->Branch("mass_Chic", &mass_Chic, "mass_Chic/F");

  int percentCounter = 1;

  for(int i = 0; i < rTree1->GetEntries(); ++i){

    const int percent = (int)(rTree1->GetEntries()/100.0);
    
    if( i == percent*percentCounter ){
      std::cout << percentCounter << " %" << std::endl;
      percentCounter++;
    }

    rTree1->GetEntry(i);
    rTree2->Fill();
    //std::cout << mass << std::endl;   
  }
  rTree2->Print();
  rTree2->Write();
  rFile->Save();

}

int main()
{
    reduceTree();  
    return 1;
}
