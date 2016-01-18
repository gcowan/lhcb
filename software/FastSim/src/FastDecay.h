#ifndef DECAY_H
#define DECAY_H

#include "TGenPhaseSpace.h"
#include "TH1F.h"
#include "TLorentzVector.h"
#include "TTree.h"
#include "TRandom.h"
#include "TString.h"

#include "RooDataSet.h"

#include <iostream>
#include <vector>
#include <map>

#include "functions.h"

class FastDecay {
	public:
		FastDecay(TString filename)
			: tree(0), varsPerPart(0),
			  rand(0), maxgen(1000),
			  ptHisto(0), etaHisto(0), smearGraph(0)
			{loadDecay(filename);}

		void setRandomGenerator(TRandom& r) { rand = r; }
		void setMaxGen(int mg) { maxgen = mg; }
		void loadParentKinematics(TH1F* pt, TH1F* eta);
		void loadSmearGraph(TGraphErrors* sg) { smearGraph = sg;}
		
		bool generate();
		TLorentzVector getP(unsigned int i);
		TLorentzVector getPSmeared(unsigned int i);
		void saveHistos(TString fname);
		void saveTree(TString fname);

	private:
		void loadDecay(TString filename);
		void setupMasses();
		TString getUniqName(TString base);
		void setupHistos();
		void setupTree();

		void floatMasses();
		void genParent();
		void smearMomenta();
		void fillHistos();
		void fillTree();

		void setupRhoMass();
		void setupKstMass();
		void setupPhiMass();
		void setupChic0Mass();
		void setupChic1Mass();
		void setupChic2Mass();

		std::vector<int> parts;
		std::vector<TString> names;
		std::vector<int> mother;
		std::vector<int> nDaug;
		std::vector<int> firstDaug;
		std::vector<double> m;
		std::vector<TLorentzVector> p;
		std::vector<TLorentzVector> pSmeared;
		std::vector<TH1F*> histos;

		std::set<TString> usedNames;

		TTree* tree;
		std::vector<double> treeVars;
		int varsPerPart;

		TRandom rand;
		int maxgen;

		//parent kinematics
    		TH1F* ptHisto; 
    		TH1F* etaHisto;

		//momentum smearing
    		TGraphErrors* smearGraph;

		//datasets to sample resonance masses from
		//loaded on-demand
		std::map<int, RooDataSet*> massdata;
		std::map<int, double> minmass;
		std::map<int, double> maxmass;
};
#endif
