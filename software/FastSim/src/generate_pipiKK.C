
#include "TH1F.h"
#include "TGraphErrors.h"
#include "TLorentzVector.h"
#include "functions.h"
#include "TGenPhaseSpace.h"
#include "TRandom.h"

typedef struct {

  TLorentzVector pi1;
  TLorentzVector pi2;
  TLorentzVector k1;
  TLorentzVector k2;

} Decay;

class psiRadGen{

public:

  psiRadGen(TH1F* ptHisto, TH1F* etaHisto, TGraphErrors* graph, int m_maxcall = 10000);

  ~psiRadGen(){}

  Decay generate(const double& masschi) const;  

private:

  TRandom m_ran;
  TH1F* m_ptHisto;
  TH1F* m_etahisto;
  TGraphErrors* m_graph;
  int m_maxcall;

  double masses[2];
  double masses2[2];
  double masses3[2];
  double masses4[2];

  TGenPhaseSpace m_event;
  TGenPhaseSpace m_subevent1;
  TGenPhaseSpace m_subevent2;
  TGenPhaseSpace m_subevent3;

};


psiRadGen::psiRadGen(TH1F* ptHisto, TH1F* etaHisto) : m_ptHisto(ptHisto), m_etaHisto(etaHisto), m_graph(graph){
  //constructor
  masses[2] = {mPsi,mphi};
  masses2[2] = {0,mchic2};
  masses3[2] = {mpi,mpi};
  masses4[2] = {mK,mK};

  m_ran = TRandom();
}

bool psiRadGen::generate(const double& masschi, Decay& theDecay) const{

 TLorentzVector Bs = genB(m_ran,m_ptHisto,m_etaHisto, m_mBs);

 bool isok = generateEvent(masses,m_ran,m_maxcall); 
 TLorentzVector psi = *event.GetDecay(0); // psi
 TLorentzVector phi = *event.GetDecay(1); //phi 


 return theDecay;
}

