void sum_weights() {


  TFile *file = TFile::Open("../../../../data/fitNTuple_peakBkg_2011_2012_Reco14_TOS_HLT2B_20140822_with_IPz_weights_v2.root");
  TTree * t=(TTree *)file->Get("DecayTree");

  Double_t velo_weight_trigger, velo_weight_track_trigger,  sweight;


  Int_t
    unbiased_trigger, biased_trigger, mkkbin, year;

  t->SetBranchAddress("sWeights_ipatia",&sweight);
  t->SetBranchAddress("B_velo_eff_weight_with_trigger",&velo_weight_trigger);
  t->SetBranchAddress("B_velo_eff_weight_with_track_trigger",&velo_weight_track_trigger);

  t->SetBranchAddress("triggerDecisionUnbiased",&unbiased_trigger);
  t->SetBranchAddress("triggerDecisionBiasedExcl",&biased_trigger);
  t->SetBranchAddress("KKMassCat",&mkkbin);
  t->SetBranchAddress("runPeriod",&year);

  double sum[2][3][6]={0.};
  double sumall=0;
  unsigned int nentries = t->GetEntries();
  for(unsigned int j=0; j < nentries; j++)
    {
      t->GetEntry(j);
      if(unbiased_trigger==1)        sum[year-2011][0][mkkbin] += sweight*velo_weight_trigger;
      else if(biased_trigger==1)     sum[year-2011][1][mkkbin] += sweight*velo_weight_track_trigger;

      
    }
 
  for(unsigned int i=0; i < 2; i++){
    std::cout<< "year " <<2011+i <<std::endl;
    for(unsigned int j=0; j < 3; j++){
      std::cout<< "category "<< j << std::endl;
      for(unsigned int l=0; l < 6; l++){
	if(j<2)std::cout<< sum[i][j][l] << "  ";
	else std::cout<< sum[i][0][l] +sum[i][1][l] << "  ";
	sumall +=sum[i][j][l];
      }
      std::cout<<""<<std::endl;
    }
    std::cout<<""<<std::endl;
  }
  
  std::cout<<"total all= "<<sumall<<std::endl;


}
