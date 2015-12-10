
#include <iostream>

typedef struct {

  double value;
  double error;

} ValueWithError;

// cc -> pipi
const ValueWithError chic0pipi = {8.3e-3*2/3., 0.35-3*2/3. };
const ValueWithError chic2pipi = {2.33e-3*2/3., 0.12e-3*2/3. };
const ValueWithError jpsipipi = {1.47e-4, 0.14e-4 };
const ValueWithError psi2pipi = {7.8e-6, 2.6e-6 };

// cc -> psi(2S) phi
const ValueWithError bsjpsiphi = {1.07e-3, 0.09e-3  };
const ValueWithError bspsi2phi = { 5.4e-4 , 0.6e-4 };

// cc ->  psi(2S) K*
const ValueWithError bdchi0kstar = {1.7e-4, 0.04e-4};
const ValueWithError bdchi2kstar = {5.0e-5, 1.2e-5};
const ValueWithError bschic1phi = { 2.02e-4 , 0.3e-4 };
const ValueWithError bsphiphi = {1.85e-5, 1.85e-6};
const ValueWithError bdpsikstar = {5.8e-4 , 0.4e-4};

// psi2s -> chic gamma
const ValueWithError psi2schic0 = {9.99e-2, 0.27e-2};
const ValueWithError psi2schic1 = {9.55e-2, 0.31e-2};
const ValueWithError psi2schic2 = {9.11e-2, 0.31e-2 };

// phi-> kk
const ValueWithError phiKK =  {0.489, 0.005};

//Bs ->Ds phi
const ValueWithError bsdspi  = {3.04e-3, 0.23e-3}; 
const ValueWithError bsdsrho = {7.0e-3, 1.5e-3};
const ValueWithError bsdsstarpi = {2.0e-3, 0.5e-3};
const ValueWithError bsdsstarrho = {9.7e-3, 2.2e-3};

const ValueWithError frag = { 0.259, 0.015};


void dsRatios(){

 std::cout <<  bsdsrho.value/bsdspi.value << std::endl;
 std::cout <<  bsdsstarpi.value/bsdspi.value << std::endl;
 std::cout <<  bsdsstarrho.value/bsdspi.value << std::endl;


}

double bdpsi2chi0kstarvisible() {return 0.66* bdpsikstar.value*  chic0pipi.value *psi2schic0.value ;}
double bdpsi2chi2kstarvisible() {return 0.66* bdpsikstar.value*  chic2pipi.value *psi2schic2.value ;}



double bdchi2kstarvisible() {return 0.66* bdchi2kstar.value*  chic2pipi.value;}
double bdchi0kstarvisible() {return 0.66* bdchi0kstar.value*  chic0pipi.value;}

double bsjpsipipivisible() {return phiKK.value*bsjpsiphi.value*jpsipipi.value;}
double bspsi2pipivisible() {return phiKK.value*bspsi2phi.value*psi2pipi.value;}

double bspsi2chic0pipivisible() { return phiKK.value*bspsi2phi.value*psi2schic0.value* chic0pipi.value;}
double bspsi2chic2pipivisible() { return phiKK.value*bspsi2phi.value*psi2schic2.value* chic2pipi.value;}
double bspsi2chic2kpivisible() { return 0.666* bdpsikstar.value*psi2schic2.value* chic2pipi.value;}
double bdpsi2chic0kpivisible() { return 0.666* bdpsikstar.value*psi2schic0.value* chic0pipi.value;}



double bsphiphivisible() {return phiKK.value* phiKK.value* bsphiphi.value; }
