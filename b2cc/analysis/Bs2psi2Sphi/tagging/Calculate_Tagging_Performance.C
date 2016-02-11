
//INPUT TO BE PROVIDED IN THIS MACRO BY THE USER IN AN INPUT file (for e.g. input.txt): 
//     1) NTUPLE NAME
//     2) OUTPUT FILE NAME (in default it's a .txt in which are reported inputs and the corresponding tagging perfromances)
//     3) TYPE OF PARTICLE
//     4) NAME OF THE TREE
//     5) VARIABLE NAMES (eta OS,tag dec OS, eta SS, tag dec SS, weight) CORRESPONDING TO THE ONES WRITTEN IN THE NTUPLES
//     6) TAGGING PARAMETER VALUES : p0, p1 (+ stat + syst errors), <eta>, rho(p0;p1) FOR TWO TAGGERS
//   
//     here is reported an example:
///////////////////////////////////////////////////////////////////////////////////////////
// /Users/GiuliTella/root/macros/sweighted_data_Reco14_2011_2012_withMoreObs2_CORRECTED.root
// /Users/GiuliTella/root/macros/BsDspi_TaggingPerformances_BOTH_OS_SSKnnet_Reco14_2011_2012
// Bs_zero
// dataset
// etaOS_pred
// tagOS_idx
// etaSS_nnet_pred
// tagSS_nnet_idx
// nsig_sw
// OScut-based
// 0.3925 
// 0.0058 
// 0.0055 
// 1.052   
// 0.055   
// 0.057   
// 0.3687 
// 0.070  
// 0.0     
// SSKnnet 
// 0.4429 
// 0.0044 
// 0.0035
// 0.977   
// 0.072   
// 0.068  
// 0.4377 
// 0.042   
// 0.0   
///////////////////////////////////////////////////////////////////////////////////////////
// To understand which is the meaning of each number look for "Content of the input file" in the code
// Pay attention to keep the same order!!!!!!!!!!!!!! 
// Remember to CHANGE THE NAME OF THE OUTPUT FILE each time you evaluate the Tagging Performances for different categories od tagged events (OSonly, ...)
///////////////////////////////////////////////////////////////////////////////////////////
// What the macro can do:
//a) Evaluation of Tagging Performance for INDEPENDENT taggers: 
// SETUP DEFINITION:
// Default                      : the OS
//
// #define SS                   : the SS 
//
//b)Evaluation of Tagging Performance for COMBINED taggers: 
// SETUP DEFINITION:
// #define BOTH              : OS & SS tagged events
// #define ONLY              : OSonly tagged events
// #define ONLY & #define SS : SSonly tagged events

//TO RUN: root -l 
//        .L Calculate_Tagging_Performace.C+
//        Calculate_Tagging_Performance("input.txt")
//-----------------------------------------------------------------------------


#define BOTH   
//#define ONLY 
//#define SS  
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <string>
#include <iostream>
#include <fstream>
#include <TTree.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TH3F.h>
#include <TMinuit.h>
#include <TGaxis.h>
#include <math.h>



#include <math.h>
using std::abs;
using namespace std;
namespace {
  using std::cout;
  using std::endl;
  using std::string;
}

double err (double a, double b) {
  double r = 0;
  double sr= 0;

  if (b !=0) {
    r = a/b;
    sr = sqrt(r*(1-r)/b);
  }
  return sr;
  }

double calibration (double p_zero, double p_one, double eta_ave, double eta_predicted) {
  
  double omega = 0;
  omega = p_zero + p_one*(eta_predicted - eta_ave);
    return omega;
}
void Calculate_Tagging_Performance(TString inputConfName){

  ifstream inputConf;
  inputConf.open(inputConfName);

  const int totArg=29; //number of argument in inputs
  TString arg[totArg];//strings of inputs
  int arg_i=0;

  if(inputConf.is_open()){ 
    while(inputConf >> arg[arg_i]) { //read the config file
      cout << arg[arg_i] << endl; 
      if(arg_i==totArg-1) break;
      arg_i++; 
    }
  }else{
    cout << "No configuration file!" << endl;
    return;
  }
  if(arg_i<(totArg-1)){cout << "Insufficient number of arguments in conf file: " << arg_i << ", required " << totArg << endl; return;}
  //Content of the input file
  //Begin
  TString inputFile=arg[0];
  TString output=arg[1];
  TString Bparticle=arg[2];
  TString decayTree=arg[3];
  TString tagomegaOSTree=arg[4];
  TString tagdecisionOSTree=arg[5];
  TString tagomegaSSTree=arg[6];
  TString tagdecisionSSTree=arg[7];
  TString weight=arg[8];
  TString tagname_OS=arg[9];
  double p0os=arg[10].Atof();
  double err_p0os[2];
  err_p0os[0]=(arg[11]).Atof();
  err_p0os[1]=(arg[12]).Atof();
  double p1os=(arg[13]).Atof(); 
  double err_p1os[2];
  err_p1os[0]=(arg[14]).Atof();
  err_p1os[1]=(arg[15]).Atof();
  double eta_meanos=(arg[16]).Atof();
  double rhoos[2];
  rhoos[0]=(arg[17]).Atof();
  rhoos[1]=(arg[18]).Atof();
  TString tagname_SS=arg[19];
  double p0ss=(arg[20]).Atof();
  double err_p0ss[2];
  err_p0ss[0]=(arg[21]).Atof();
  err_p0ss[1]=(arg[22]).Atof();
  double p1ss=(arg[23]).Atof();
  double err_p1ss[2];
  err_p1ss[0]=(arg[24]).Atof();
  err_p1ss[1]=(arg[25]).Atof();
  double eta_meanss=(arg[26]).Atof();
  double rhoss[2];
  rhoss[0]=(arg[27]).Atof();
  rhoss[1]=(arg[28]).Atof();
  //end
  ofstream fp(output+".txt");
  
  for(int i=0;i<29;i++){
    fp << arg[i] << endl;
  }
  cout << "Tagging Performance Evaluation for:" <<endl;

#ifdef BOTH
  cout << "OS && SS tagged events" << endl;
  fp << "OS && SS tagged events" << endl;
#endif

#ifdef ONLY
#ifdef SS
  cout << "SS ONLY tagged events" << endl;
  fp << "SS ONLY tagged events" << endl;
#else
  cout << "OS ONLY tagged events" << endl;
  fp << "OS ONLY tagged events" << endl;
#endif
#else
#ifndef BOTH
#ifdef SS
   cout << "SS tagged events (independently from OS)" << endl;
   fp << "SS tagged events (independently from OS)" << endl;
#else
   cout << "OS tagged events (independently from SS)" << endl;
   fp << "OS tagged events (independently from SS)" << endl;
#endif
#endif
#endif


  TChain* chain = new TChain(decayTree);
  chain->Add(inputFile);
  cout << decayTree << endl;
  TTree*  t1;
  t1=chain;
  int PartID=-999; 
  if(Bparticle=="Bzero") PartID=511;
  else if (Bparticle=="Bs_zero") PartID=531;
  else if (Bparticle=="Bplus") PartID=521;
  else{ 
    cout << "Incorrect meson! PartID: " << PartID << endl; 
    return;
  }
  cout << "PartID: " << PartID << " (Bplus==521, Bzero==511, Bs_zero==531) " << endl;

  int tagdecOS = -999;
  int tagdecSS = -999;
  double tagomegaOS = -999;
  double tagomegaSS = -999;
  float N_sig = -999;
  t1->SetBranchStatus("*", kTRUE); 
  t1->SetBranchAddress(tagdecisionOSTree, &tagdecOS);
  t1->SetBranchAddress(tagdecisionSSTree, &tagdecSS);
  t1->SetBranchAddress(tagomegaOSTree, &tagomegaOS);
  t1->SetBranchAddress(tagomegaSSTree, &tagomegaSS);
  t1->SetBranchAddress(weight, &N_sig);

  Long64_t nentries = chain->GetEntries();// number of events
  cout << "Total number of entries in the Tree = " << nentries << endl;
 
  double sum_Di2     = 0;
 
#ifndef BOTH
  double sum_Di      = 0;
  double sum_etai_Di = 0;
  
#endif

#ifdef BOTH
  double sum_Di_os(0), sum_Di_ss(0), sum_etai_Di_os(0), sum_etai_Di_ss(0);
#endif

  double sumWeight = 0;
  
  TH1D *H_eta_i = new TH1D("eta", "distribution of #eta", 180, 0.0, 0.6);
  TH1D *H_omega_i = new TH1D("omega", "distribution of #omega(#eta)", 180, 0.0, 0.6);
  TH1D *H_err_omega_i[2];
  H_err_omega_i[0] = new TH1D("err_omegai_stat", "error_omegai_stat", 100, 0, 0.03);
  H_err_omega_i[1] = new TH1D("err_omegai_syst", "error_omegai_syst", 200, 0, 0.02);


  float N_sig_tot(0.); // Obtained using the Splot, or other fit over ALL the data
  
  
#ifndef BOTH
#ifdef SS

  double p0 = p0ss;
  double p1 = p1ss;
  double eta_mean = eta_meanss;
  double rho[2];   rho[0]=rhoss[0];  rho[1]=rhoss[1];
  double err_p0[2]; err_p0[0]=err_p0ss[0];  err_p0[1]=err_p0ss[1];
  double err_p1[2]; err_p1[0]=err_p1ss[0];  err_p1[1]=err_p1ss[1];

#else

  double p0 = p0os;
  double p1 = p1os;
  double eta_mean = eta_meanos;
  double rho[2];   rho[0]=rhoos[0];  rho[1]=rhoos[1];
  double err_p0[2]; err_p0[0]=err_p0os[0];  err_p0[1]=err_p0os[1];
  double err_p1[2]; err_p1[0]=err_p1os[0];  err_p1[1]=err_p1os[1];

#endif

#ifdef ONLY
#ifdef SS
cout << "-> Calculate Tagging Performance for ONLY events tagged by SS tagger and NOT by the OS" << endl;
#else
cout << "-> Calculate Tagging Performance for ONLY events tagged by OS tagger and NOT by the SS" << endl;
#endif
#endif
  // Tagging Performance for independent taggers or events tagged by ONLY one taggers    
  // Loop over the entries 
  for (Int_t i=0; i<nentries; i++){

    t1->GetEntry(i);

    Int_t     tagdecision_os_idx = tagdecOS;
    Double_t  tagomega_os        = tagomegaOS;
    Int_t     tagdecision_ss_idx = tagdecSS; 
    Double_t  tagomega_ss        = tagomegaSS;
    Float_t  N_sig_sw           = N_sig;
    N_sig_tot = N_sig_tot + N_sig_sw;
#ifdef SS       
    double my_tagomega = tagomega_ss;
    int my_tagdecision_idx = tagdecision_ss_idx;
#ifdef ONLY
    my_tagdecision_idx =  my_tagdecision_idx * (abs(tagdecision_os_idx) -1 ); // SS only
    
#endif
#else
    double my_tagomega = tagomega_os;
    int my_tagdecision_idx = tagdecision_os_idx; 
#ifdef ONLY
    my_tagdecision_idx = my_tagdecision_idx * (abs(tagdecision_ss_idx) -1 );  // OS only
    
#endif
    
#endif

    if( my_tagomega > 0.5 ) {      
      cout<<" ATTENTION eta>0.5 ="<<my_tagomega<<" "<<my_tagdecision_idx<<endl;      
      my_tagomega = 0.5;
      my_tagdecision_idx =0;
    }
    
    if(my_tagdecision_idx != 0){
      
      H_eta_i->Fill(my_tagomega,N_sig_sw);
      double omega_i;
      omega_i = calibration(p0, p1, eta_mean, my_tagomega);
      if( omega_i > 0.5 ) {      
        omega_i = 0.5;
        my_tagdecision_idx = 0;
	continue ;
	}      
      //Errors
      double err_omega_i[2]={0.,0.};
      for(int j = 0; j<2 ; j++){
        err_omega_i[j] = sqrt(pow(err_p0[j],2) + pow((my_tagomega - eta_mean)*err_p1[j], 2) +
                              2.*rho[j]*err_p0[j]*err_p1[j]*(my_tagomega - eta_mean));
      }
      
      
      H_omega_i->Fill(omega_i,N_sig_sw);
      H_err_omega_i[0]->Fill(err_omega_i[0],N_sig_sw);
      H_err_omega_i[1]->Fill(err_omega_i[1],N_sig_sw);
            
      double Di = (1 - 2 * omega_i);
      
      // sum of (D_i^2)
      sum_Di2 = sum_Di2 + N_sig_sw * Di * Di;
      sumWeight = sumWeight + N_sig_sw;
      
      // for the error calculation
      // sum for d D_eff^2 / d p0_ss
      sum_Di = sum_Di + N_sig_sw * Di;
      // sum for d D_eff^2 / d p1_ss
      sum_etai_Di = sum_etai_Di + N_sig_sw * (my_tagomega - eta_mean) * Di;
      
    }
  }
  
#else
  // Tagging Performance for events tagged by both taggers: OS && SS   
  // Loop over the entries 
  cout << "-> Calculate Tagging Performance for BOTH OS&SS tagged events " << endl;

  for (Int_t i=0; i<nentries; i++){
    
    t1->GetEntry(i);

    Int_t     tagdecision_os_idx = tagdecOS;
    Double_t  tagomega_os        = tagomegaOS;
    Int_t     tagdecision_ss_idx = tagdecSS; 
    Double_t  tagomega_ss        = tagomegaSS;
    Float_t  N_sig_sw           = N_sig;
    N_sig_tot = N_sig_tot + N_sig_sw;

    double my_tagomega_os = tagomega_os;
    double my_tagomega_ss = tagomega_ss;
    int my_tagdecision_os_idx = tagdecision_os_idx ;
    int my_tagdecision_ss_idx = tagdecision_ss_idx ;
    
    if( my_tagomega_os > 0.5 ) {      

      cout<<" ATTENTION eta_i os ="<<my_tagomega_os<<" "<<my_tagdecision_os_idx<<endl;
      
      my_tagomega_os = 0.5;
      my_tagdecision_os_idx =0;
    }
    if( my_tagomega_ss > 0.5 ) {      
      cout<<" ATTENTION eta_i ss ="<<my_tagomega_ss<<" "<<my_tagdecision_ss_idx<<endl;
      my_tagomega_ss = 0.5;
      my_tagdecision_ss_idx =0;
    }

    if(my_tagdecision_ss_idx * my_tagdecision_os_idx==0 ) continue;
    
    // OS calibration
    double omega_ios;
    omega_ios = calibration(p0os,p1os,eta_meanos,my_tagomega_os);
    if( omega_ios > 0.5 ) {      
        omega_ios = 0.5;
        my_tagdecision_os_idx = 0;
	continue ;
	}      
   
    double err_omega_ios[2];    
    for(int j = 0; j<2 ; j++)
      err_omega_ios[j] = sqrt(pow(err_p0os[j],2) + pow((my_tagomega_os - eta_meanos)*err_p1os[j], 2) +
                              2.*rhoos[j]*err_p0os[j]*err_p1os[j]*(my_tagomega_os - eta_meanos) );
    
    // SS calibration
    double omega_iss;
    omega_iss = calibration(p0ss,p1ss,eta_meanss,my_tagomega_ss);
    if( omega_iss > 0.5 ) {      
        omega_iss = 0.5;
        my_tagdecision_ss_idx = 0;
	continue ;
    }
    
    double err_omega_iss[2];
    for(int j = 0; j<2 ; j++)
      err_omega_iss[j] = sqrt(pow(err_p0ss[j],2) + pow((my_tagomega_ss - eta_meanss)*err_p1ss[j], 2) + 
                              2.*rhoss[j]*err_p0ss[j]*err_p1ss[j]*(my_tagomega_ss - eta_meanss) );
    
    double omega_i;      
    double Di, dD2_dp0ss, dD2_dp0os, dD2_dp1ss, dD2_dp1os;    
    
    //General formula for two taggers combination: OS and SS          
    
    //mistag combination
    double Num = (0.5*(1 + my_tagdecision_ss_idx) - my_tagdecision_ss_idx*(1-omega_iss))*(0.5*(1 + my_tagdecision_os_idx) - my_tagdecision_os_idx*(1 - omega_ios));
    double Den = Num + (0.5*(1 - my_tagdecision_ss_idx) + my_tagdecision_ss_idx*(1 - omega_iss))*(0.5*(1 - my_tagdecision_os_idx) + my_tagdecision_os_idx*(1 - omega_ios));
    double Prob = Num/Den;
    
    //eta predicted combination
    double Num_eta = (0.5*(1 + my_tagdecision_ss_idx) - my_tagdecision_ss_idx*(1 - my_tagomega_ss))*(0.5*(1 + my_tagdecision_os_idx) - my_tagdecision_os_idx*(1 - my_tagomega_os));
    double Den_eta = Num_eta + (0.5*(1 - my_tagdecision_ss_idx) + my_tagdecision_ss_idx*(1 - my_tagomega_ss))*(0.5*(1 - my_tagdecision_os_idx) + my_tagdecision_os_idx*(1 - my_tagomega_os));
    double eta_OSSS = Num_eta / Den_eta;
    
    if( Prob > 0.5) { 
      omega_i = 1 -  Prob ;
      eta_OSSS = 1 - eta_OSSS;
    } else {
      omega_i = Prob ;
      eta_OSSS = eta_OSSS;
    }
       
    H_omega_i->Fill(omega_i,N_sig_sw);
    H_eta_i->Fill(eta_OSSS,N_sig_sw);
    
    //For the error propagation 
    double d_omega_d_omegass;
    double d_omega_d_omegaos;
    double err_omega_i[2];        
    if(my_tagdecision_ss_idx == my_tagdecision_os_idx ){
      
      d_omega_d_omegass = (omega_ios * Den - omega_ios*omega_iss * (2. * omega_ios - 1 )) / (pow(Den,2));      
      d_omega_d_omegaos = (omega_iss * Den - omega_ios*omega_iss * (2. * omega_iss - 1 )) / (pow(Den,2));
      
    } 
    else 
      { 
	
	d_omega_d_omegass = (   (- omega_ios ) * Den - (1 - 2. * omega_ios) * omega_ios*(1-omega_iss)) / (pow(Den, 2));
	d_omega_d_omegaos = ((1 - omega_iss) * Den - (1 - 2. * omega_iss) * omega_ios*(1-omega_iss)) / (pow(Den, 2));
	
      }
    

    for(int j = 0 ; j < 2 ; j++)
      err_omega_i[j] = sqrt(pow((d_omega_d_omegass * err_omega_iss[j]), 2) + pow((d_omega_d_omegaos * err_omega_ios[j]), 2)) ;
    
    H_err_omega_i[0]->Fill(err_omega_i[0],N_sig_sw);
    H_err_omega_i[1]->Fill(err_omega_i[1],N_sig_sw);
    Di = (1 - 2 * omega_i);
    
    dD2_dp0ss = Di * d_omega_d_omegass;
    dD2_dp0os = Di * d_omega_d_omegaos;
    dD2_dp1ss = (my_tagomega_ss - eta_meanss) * dD2_dp0ss;
    dD2_dp1os = (my_tagomega_os - eta_meanos) * dD2_dp0os;
    
    
    // sum of (D_i^2)
    sum_Di2 = sum_Di2 + N_sig_sw * Di * Di;
    sumWeight = sumWeight + N_sig_sw;
    
    // for the error calculation
    // sum for d D_eff^2 / d p0
    sum_Di_os = sum_Di_os + N_sig_sw * dD2_dp0os;
    sum_Di_ss = sum_Di_ss + N_sig_sw * dD2_dp0ss;
    // sum for d D_eff^2 / d p1
    sum_etai_Di_os = sum_etai_Di_os + N_sig_sw * dD2_dp1os ; 
    sum_etai_Di_ss = sum_etai_Di_ss + N_sig_sw * dD2_dp1ss ; 
    
  }
  
#endif
 
  cout << "Total Number of Signal Events:  " << N_sig_tot <<endl;
  // Calculate <D_eff>
  double D =  sqrt(sum_Di2/sumWeight);
#ifndef BOTH
  cout << "< eta > from Input = " << eta_mean << endl;
  cout << "< eta > from DataSet = "<< H_eta_i->GetMean() <<endl;
  fp << "< eta > from Input = " << eta_mean << endl;
  fp << "< eta > from DataSet = "<< H_eta_i->GetMean() <<endl;
#endif
  cout << "===============================================================" << endl;
  cout << "AFTER CALIBRATION the events with omega > 0.5 have been removed" << endl;
  cout << "Weighted number of tagged events: " << sumWeight <<endl;
  fp << "Weighted number of tagged events: " << sumWeight <<endl;

  // Calculate tagging efficiency and its error
  double etag =  (sumWeight/N_sig_tot);
  double err_etag[2];
  err_etag[0] = err(sumWeight, N_sig_tot);
  err_etag[1] = 0;

  double epsD2 = etag * D * D;

#ifndef  BOTH
  // Error calculation  (Formula (24) and (25) of phis LP ana note (appendix))

  double diff_Deff2_dp0 = -4*sum_Di/sumWeight;
  double diff_Deff2_dp1 = -4*sum_etai_Di/sumWeight;
  
  double err2_Deff2[2];
  double err_Deff[2];
  double err_epsD2[2];

  for(int j= 0; j<2; j++)
  {

    // Formula (26) see phis LP ana note (appendix)

    err2_Deff2[j] = pow(err_p0[j] * diff_Deff2_dp0 ,2) + 
                    pow(err_p1[j] * diff_Deff2_dp1 ,2) +
      2 * rho[j] * err_p0[j] * err_p1[j] * diff_Deff2_dp0 * diff_Deff2_dp1;

    err_Deff[j] = sqrt(err2_Deff2[j])/(2*D);

    // Formula (27) see phis LP ana note (appendix)
    err_epsD2[j] = sqrt( pow(etag ,2)* err2_Deff2[j] + pow(D*D * err_etag[j], 2));

  }
#else
  // Error calculation  (Formula (24) and (25) of phis LP ana note (appendix))

  double diff_Deff2_dp0os = -4*sum_Di_os/sumWeight;
  double diff_Deff2_dp0ss = -4*sum_Di_ss/sumWeight;
  double diff_Deff2_dp1os = -4*sum_etai_Di_os/sumWeight;
  double diff_Deff2_dp1ss = -4*sum_etai_Di_ss/sumWeight;
  
  double err2_Deff2[2];
  double err_Deff[2];
  double err_epsD2[2];

  for(int j= 0; j<2; j++)
  {

    // Formula (34) see phis LP ana note (appendix)

    err2_Deff2[j] = pow(err_p0os[j] * diff_Deff2_dp0os ,2) + 
                    pow(err_p1os[j] * diff_Deff2_dp1os ,2) +
      2 * rhoos[j] * err_p0os[j] * err_p1os[j] * diff_Deff2_dp0os * diff_Deff2_dp1os + 
                    pow(err_p0ss[j] * diff_Deff2_dp0ss ,2) + 
                    pow(err_p1ss[j] * diff_Deff2_dp1ss ,2) +
      2 * rhoss[j] * err_p0ss[j] * err_p1ss[j] * diff_Deff2_dp0ss * diff_Deff2_dp1ss ;

    err_Deff[j] = sqrt(err2_Deff2[j])/(2*D);

    // Formula (35) see phis LP ana note (appendix)
    err_epsD2[j] = sqrt( pow(etag ,2)* err2_Deff2[j] + pow(D*D * err_etag[j], 2));

  }

#endif
  cout << "===============================================================" << endl;
  cout << "Tagging Performances for " << Bparticle << endl;
  cout << "AFTER CALIBRATION Tagging efficiency [%]: " <<etag *100. << " \\pm " << err_etag[0] *100. << endl;
 
  cout << "Effective dilution2: " << D*D << " \\pm " << sqrt(err2_Deff2[0]) << " \\pm " << sqrt(err2_Deff2[1]) << endl;
  cout << "Effective dilution [%]: " << D*100.<< " \\pm " << err_Deff[0] *100. << " \\pm " << err_Deff[1]*100. << endl;
  cout << "Effective omega [%]: " << 0.5*(1-D) *100. << " \\pm " << 0.5*err_Deff[0] *100. << " \\pm " << 0.5*err_Deff[1] *100. << endl;
  cout << "===============================================================" << endl;
  cout << "Effective Tagging Power [%]: " << endl;
  cout << "eps D^2: "<< epsD2 *100. << " \\pm " << err_epsD2[0] *100. << " \\pm " << err_epsD2[1] *100. << endl;
  
  fp << "AFTER CALIBRATION Tagging efficiency [%]: " <<etag *100. << " \\pm " << err_etag[0] *100. << endl;
  fp << "eps D^2: "<< epsD2 *100. << " \\pm " << err_epsD2[0] *100. << " \\pm " << err_epsD2[1] *100.  << endl;
  fp.close();
  gStyle->SetOptStat("m r");



  TCanvas *c12 = new TCanvas("c12","c12",900,500); c12->Divide(2,1);
  c12->cd(1);        H_omega_i->Draw();      
  c12->cd(2);        H_eta_i->Draw();
  //c12->cd(3);        H_err_omega_i[0]->Draw();
  //c12->cd(4);        H_err_omega_i[1]->Draw();
    
  
  return ;
}






