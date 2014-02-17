#define calculate_helicity_angles_cxx
#include "calculate_helicity_angles.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TNtuple.h>
#include <TFile.h>
#include <TLorentzVector.h>
#include <iostream>

void calculate_helicity_angles::Loop()
{
    if (fChain == 0) return;

    TFile * file = TFile::Open("selected_candidates_with_correct_angles.root","RECREATE");
    TNtuple * tuple = new TNtuple("tuple", "tuple",  "phi:cosThetaK:cosThetaMu");

    Long64_t nentries = fChain->GetEntriesFast();

    Long64_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
    //if (jentry/1000 % 0) cout << jentry << endl;
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        // if (Cut(ientry) < 0) continue;i

        TLorentzVector pKplus   (kpx, kpy, kpz, kpe);
        TLorentzVector pPiminus (pipx, pipy, pipz, pipe);
        TLorentzVector pMplus   (mu0px, mu0py, mu0pz, mu0pe);
        TLorentzVector pMminus  (mu1px, mu1py, mu1pz, mu1pe);
        TLorentzVector B      = pMplus + pMminus + pKplus + pPiminus;
        TLorentzVector pKstar = pKplus + pPiminus;
        TLorentzVector pPsi   = pMplus + pMminus;
        TLorentzVector pZ     = pPsi + pPiminus;

        // First boost everything to the B frame
        TVector3 boostToB = B.BoostVector();
        TLorentzVector pKstar_KpiMuMu   (pKstar);
        TLorentzVector pKplus_KpiMuMu   (pKplus);
        TLorentzVector pPiminus_KpiMuMu (pPiminus);
        TLorentzVector pPsi_KpiMuMu   (pPsi);
        TLorentzVector pMplus_KpiMuMu   (pMplus);
        TLorentzVector pMminus_KpiMuMu  (pMminus);

        pKstar_KpiMuMu  .Boost( -1.*boostToB );
        pKplus_KpiMuMu  .Boost( -1.*boostToB );
        pPiminus_KpiMuMu.Boost( -1.*boostToB );
        pPsi_KpiMuMu    .Boost( -1.*boostToB );
        pMplus_KpiMuMu  .Boost( -1.*boostToB );
        pMminus_KpiMuMu .Boost( -1.*boostToB );

        // Now boost the final state particles to their corresponding mother frames
        TVector3 boostToKstar = pKstar_KpiMuMu.BoostVector();
        TVector3 boostToPsi   = pPsi_KpiMuMu.BoostVector();
        TLorentzVector pKplus_MuMu  (pKplus_KpiMuMu);
        TLorentzVector pPiminus_MuMu    (pPiminus_KpiMuMu);
        TLorentzVector pKplus_Kpi   (pKplus_KpiMuMu);
        TLorentzVector pPiminus_Kpi (pPiminus_KpiMuMu);

        TLorentzVector pMplus_MuMu  (pMplus_KpiMuMu);
        TLorentzVector pMminus_MuMu (pMminus_KpiMuMu);
        TLorentzVector pMplus_Kpi   (pMplus_KpiMuMu);
        TLorentzVector pMminus_Kpi  (pMminus_KpiMuMu);

        pKplus_Kpi   .Boost( -1.*boostToKstar );
        pPiminus_Kpi .Boost( -1.*boostToKstar );
        pKplus_MuMu  .Boost( -1.*boostToPsi );
        pPiminus_MuMu.Boost( -1.*boostToPsi );

        pMplus_Kpi  .Boost( -1.*boostToKstar );
        pMminus_Kpi .Boost( -1.*boostToKstar );
        pMplus_MuMu .Boost( -1.*boostToPsi );
        pMminus_MuMu.Boost( -1.*boostToPsi );

        // Now calculate the unit vectors etc
        TVector3 e_z_KpiMuMu =     ( pMplus_KpiMuMu.Vect() + pMminus_KpiMuMu.Vect() ).Unit();
        TVector3 e_z_Kpi     = -1.*( pMplus_Kpi.Vect()     + pMminus_Kpi.Vect()     ).Unit();
        TVector3 e_z_MuMu    = -1.*( pKplus_MuMu.Vect()    + pPiminus_MuMu.Vect()   ).Unit();

        TVector3 n_KPi = ((pKplus_KpiMuMu.Vect()).Cross(pPiminus_KpiMuMu.Vect())).Unit();
        TVector3 n_MuMu = ((pMplus_KpiMuMu.Vect()).Cross(pMminus_KpiMuMu.Vect())).Unit();

        // Calculate polar angles
        double cos_thetaK = ((pKplus_Kpi.Vect()).Unit()).Dot(e_z_Kpi );
        double cos_thetaL = ((pMplus_MuMu.Vect()).Unit()).Dot(e_z_MuMu);

        // Calculate phi
        double cos_phi = ( n_KPi.Dot( n_MuMu ) );
        double sin_phi = ( n_KPi.Cross(n_MuMu)).Dot(e_z_KpiMuMu);
        double _atan2 = atan2(sin_phi, cos_phi);
        double _phi = _atan2 ;

        double m23 = pKstar.M();

        tuple->Fill(_phi, cos_thetaK, cos_thetaL);
    }
    tuple->Write();
    file->Close();
}

int main(){
    calculate_helicity_angles t;
    t.Loop();
    return 1;

}
