#!/usr/bin/env python
# -*- coding: utf-8 -*-
# =============================================================================
__author__  = " Greig Cowan (based on script from Vanya)"
__date__    = " 2015-02-19 "
__version__ = " Version $Revision: 173922 $ "
# =============================================================================
from GaudiKernel.SystemOfUnits import GeV
## import everything from bender
from Bender.Main import *
import BenderTools.Fill
import BenderTools.TisTos
# =============================================================================
## optional logging
# =============================================================================
from Bender.Logger import getLogger
if '__main__' == __name__ : logger = getLogger ( 'BenderTutor.Histos&Tuples' )
else                      : logger = getLogger ( __name__ )
# =============================================================================
## @class HistosAndTuples
#  Inspect particles from the certain TES location and fill histos and tuple
class HistosAndTuples(Algo):
    """
    Inspect particles from the certain TES location and fill histos and tuple
    """
    def initialize ( self ) :

        sc = Algo.initialize ( self ) ## initialize the base class
        if sc.isFailure() : return sc

        ## get magnetic field service:
        imagSvc = self.svc( cpp.ILHCbMagnetSvc , 'MagneticFieldSvc' )
        if not imagSvc :
            raise RuntimeError , 'Unable to locate Magnetic Field Service '
        self.imagSvc = imagSvc

        ## set up some TisTos
        triggers = {}
        triggers['DiMuon'] = {}

        lines            = {}
        lines ['DiMuon'] = {}
        lines ['DiMuon'] ['L0TOS'  ] = 'L0(Muon|DiMuon).*Decision'
        lines ['DiMuon'] ['L0TIS'  ] = 'L0(Hadron|Muon|DiMuon|Photon|Electron)Decision'
        lines ['DiMuon'] ['Hlt1TOS'] = 'Hlt1(DiMuon|SingleMuonHighPT|MuonTrack).*Decision'
        lines ['DiMuon'] ['Hlt1TIS'] = 'Hlt1TrackAll.*Decision'
        lines ['DiMuon'] ['Hlt2TOS'] = 'Hlt2(DiMuon|SingleMuonHighPT).*Decision'
        lines ['DiMuon'] ['Hlt2TIS'] = 'Hlt2(Charm|Topo|Single|Express|Inc|Tri).*Decision'

        sc = self.tisTos_initialize ( triggers , lines )
        if sc.isFailure() : return sc

        ## initialize functionality for enhanced n-tuples
        sc = self.fill_initialize ()

        return sc

    def finalize ( self ) :
        self.fill_finalize  ()
        self.tisTos_finalize()
        return Algo.finalize ( self )

    ## the main 'analysis' method
    def analyse( self ) :   ## IMPORTANT!
        """
        The main 'analysis' method
        """

        ## get *ALL* particles from the input locations
        particles = self.select ( 'allinputs', ALL  )
        if particles.empty() : return self.Warning('No input particles', SUCCESS )

        tup = self.nTuple('MyTuple')
        for p in particles :
            chic    = p(1)
            jpsi    = chic(1)
            gamma   = chic(2)
            piplus  = p(2)
            piminus = p(3)

            pi0_veto_gamma = (MINTREE( 'gamma' == ABSID, PINFO(25030, -1) ) > 0)

            # Apply minimal cuts
            if ( PT(gamma)/GeV < 0.7 ): continue
            if ( CL(gamma) < 0.01 ): continue
            if not pi0_veto_gamma( p ): continue

            self.treatKine   ( tup , p    , '_b'   ) # fill some information about the particles
            self.treatKine   ( tup , chic , '_chic' )
            self.treatKine   ( tup , jpsi , '_jpsi' )
            self.treatKine   ( tup , piplus  , '_piplus' )
            self.treatKine   ( tup , piminus , '_piminus' )

            self.treatPions  ( tup , p ) ## fill some basic information for all pions
            self.treatMuons  ( tup , p ) ## fill some basic information for all muons
            self.treatPhotons( tup , p ) ## fill some basic information for all photons
            self.treatTracks ( tup , p ) ## fill some basic information for all charged tracks

            # Get DTF information
            dtf_b_mass_chic1P_constr = DTF_FUN ( M , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )
            dtf_b_mass_chic2P_constr = DTF_FUN ( M , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )
            dtf_ctau    = DTF_CTAU    ( 0 , True )
            dtf_ctauerr = DTF_CTAUERR ( 0 , True )
            dtf_chi2    = DTF_CHI2NDOF( True )

            dtf_chic_PX_chic1P_constr    = DTF_FUN ( CHILD(PX, 1) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )
            dtf_chic_PY_chic1P_constr    = DTF_FUN ( CHILD(PY, 1) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )
            dtf_chic_PZ_chic1P_constr    = DTF_FUN ( CHILD(PZ, 1) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )
            dtf_chic_PE_chic1P_constr    = DTF_FUN ( CHILD( E, 1) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )
            dtf_piplus_PX_chic1P_constr  = DTF_FUN ( CHILD(PX, 2) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )
            dtf_piplus_PY_chic1P_constr  = DTF_FUN ( CHILD(PY, 2) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )
            dtf_piplus_PZ_chic1P_constr  = DTF_FUN ( CHILD(PZ, 2) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )
            dtf_piplus_PE_chic1P_constr  = DTF_FUN ( CHILD( E, 2) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )
            dtf_piminus_PX_chic1P_constr = DTF_FUN ( CHILD(PX, 3) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )
            dtf_piminus_PY_chic1P_constr = DTF_FUN ( CHILD(PY, 3) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )
            dtf_piminus_PZ_chic1P_constr = DTF_FUN ( CHILD(PZ, 3) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )
            dtf_piminus_PE_chic1P_constr = DTF_FUN ( CHILD( E, 3) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )

            dtf_chic_PX_chic2P_constr    = DTF_FUN ( CHILD(PX, 1) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )
            dtf_chic_PY_chic2P_constr    = DTF_FUN ( CHILD(PY, 1) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )
            dtf_chic_PZ_chic2P_constr    = DTF_FUN ( CHILD(PZ, 1) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )
            dtf_chic_PE_chic2P_constr    = DTF_FUN ( CHILD( E, 1) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )
            dtf_piplus_PX_chic2P_constr  = DTF_FUN ( CHILD(PX, 2) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )
            dtf_piplus_PY_chic2P_constr  = DTF_FUN ( CHILD(PY, 2) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )
            dtf_piplus_PZ_chic2P_constr  = DTF_FUN ( CHILD(PZ, 2) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )
            dtf_piplus_PE_chic2P_constr  = DTF_FUN ( CHILD( E, 2) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )
            dtf_piminus_PX_chic2P_constr = DTF_FUN ( CHILD(PX, 3) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )
            dtf_piminus_PY_chic2P_constr = DTF_FUN ( CHILD(PY, 3) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )
            dtf_piminus_PZ_chic2P_constr = DTF_FUN ( CHILD(PZ, 3) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )
            dtf_piminus_PE_chic2P_constr = DTF_FUN ( CHILD( E, 3) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )

            polarity = -1 if self.imagSvc.isDown() else 1
            tup.column( 'polarity', polarity )

            tup.column_float( 'm_b_DTF_jpsi_chic1_constr'     , dtf_b_mass_chic1P_constr ( p ) / GeV )
            tup.column_float( 'm_b_DTF_jpsi_chic2_constr'     , dtf_b_mass_chic2P_constr ( p ) / GeV )
            tup.column_float( 'ctau_b_DTF'     , dtf_ctau ( p ) )
            tup.column_float( 'ctauerr_b_DTF'  , dtf_ctauerr ( p ) )
            tup.column_float( 'chi2ndof_b_DTF' , dtf_chi2 ( p ) )

            tup.column_float( 'chic_PX_chic1_constr' , dtf_chic_PX_chic1P_constr ( p ) / GeV )
            tup.column_float( 'chic_PY_chic1_constr' , dtf_chic_PY_chic1P_constr ( p ) / GeV )
            tup.column_float( 'chic_PZ_chic1_constr' , dtf_chic_PZ_chic1P_constr ( p ) / GeV )
            tup.column_float( 'chic_PE_chic1_constr' , dtf_chic_PE_chic1P_constr ( p ) / GeV )
            tup.column_float( 'piplus_PX_chic1_constr' , dtf_piplus_PX_chic1P_constr ( p ) / GeV )
            tup.column_float( 'piplus_PY_chic1_constr' , dtf_piplus_PY_chic1P_constr ( p ) / GeV )
            tup.column_float( 'piplus_PZ_chic1_constr' , dtf_piplus_PZ_chic1P_constr ( p ) / GeV )
            tup.column_float( 'piplus_PE_chic1_constr' , dtf_piplus_PE_chic1P_constr ( p ) / GeV )
            tup.column_float( 'piminus_PX_chic1_constr' , dtf_piminus_PX_chic1P_constr ( p ) / GeV )
            tup.column_float( 'piminus_PY_chic1_constr' , dtf_piminus_PY_chic1P_constr ( p ) / GeV )
            tup.column_float( 'piminus_PZ_chic1_constr' , dtf_piminus_PZ_chic1P_constr ( p ) / GeV )
            tup.column_float( 'piminus_PE_chic1_constr' , dtf_piminus_PE_chic1P_constr ( p ) / GeV )

            tup.column_float( 'chic_PX_chic2_constr' , dtf_chic_PX_chic2P_constr ( p ) / GeV )
            tup.column_float( 'chic_PY_chic2_constr' , dtf_chic_PY_chic2P_constr ( p ) / GeV )
            tup.column_float( 'chic_PZ_chic2_constr' , dtf_chic_PZ_chic2P_constr ( p ) / GeV )
            tup.column_float( 'chic_PE_chic2_constr' , dtf_chic_PE_chic2P_constr ( p ) / GeV )
            tup.column_float( 'piplus_PX_chic2_constr' , dtf_piplus_PX_chic2P_constr ( p ) / GeV )
            tup.column_float( 'piplus_PY_chic2_constr' , dtf_piplus_PY_chic2P_constr ( p ) / GeV )
            tup.column_float( 'piplus_PZ_chic2_constr' , dtf_piplus_PZ_chic2P_constr ( p ) / GeV )
            tup.column_float( 'piplus_PE_chic2_constr' , dtf_piplus_PE_chic2P_constr ( p ) / GeV )
            tup.column_float( 'piminus_PX_chic2_constr' , dtf_piminus_PX_chic2P_constr ( p ) / GeV )
            tup.column_float( 'piminus_PY_chic2_constr' , dtf_piminus_PY_chic2P_constr ( p ) / GeV )
            tup.column_float( 'piminus_PZ_chic2_constr' , dtf_piminus_PZ_chic2P_constr ( p ) / GeV )
            tup.column_float( 'piminus_PE_chic2_constr' , dtf_piminus_PE_chic2P_constr ( p ) / GeV )

            tup.column_float( 'm_pipi'  , M23 ( p ) / GeV )
            tup.column_float( 'pi0_veto_gamma'  , pi0_veto_gamma( p ) )

            self.tisTos(p, tup, 'trig_b_', self.lines['DiMuon'], verbose = True)

            tup.write()

            ##
            return SUCCESS      ## IMPORTANT!!!
# =============================================================================

# =============================================================================
## The configuration of the job
def configure ( inputdata        ,    ## the list of input files
                catalogs = []    ,    ## xml-catalogs (filled by GRID)
                castor   = False ,    ## use the direct access to castor/EOS ?
                params   = {}    ) :

    ## import DaVinci
    from Configurables import DaVinci
    ## delegate the actual configuration to DaVinci
    rootInTES = '/Event/PSIX'
    dv = DaVinci ( DataType      = '2012'        ,
                   InputType     = 'MDST'        ,
                   RootInTES     = rootInTES     ,
           Lumi      = True      ,
                   TupleFile     = 'Tuples.root'   ## IMPORTANT
                   )

    ## add the name of Bender algorithm into User sequence sequence
    alg_name = 'HistosAndTuples'
    dv.UserAlgorithms += [ 'TrackScaleState', alg_name ]

    ## define the input data
    setData  ( inputdata , catalogs , castor )

    ## get/create application manager
    gaudi = appMgr()

    ## (1) create the algorithm with given name
    alg = HistosAndTuples (
        alg_name ,
        RootInTES = rootInTES , ## we are reading uDST
        #Inputs    = [ 'Phys/SelLb2ChicPKForPsiX0/Particles' ]
        Inputs    = [ 'Phys/SelB2ChicPiPiForPsiX0/Particles' ]
        )

    return SUCCESS
# =============================================================================

# =============================================================================
## Job steering
if __name__ == '__main__' :

    logger.info ( 80*'*'  )
    logger.info ( __doc__ )
    logger.info ( ' Author  : %s ' %  __author__  )
    logger.info ( ' Version : %s ' %  __version__ )
    logger.info ( ' Date    : %s ' %  __date__    )
    logger.info ( 80*'*'  )

    ## job configuration
    ## BKQuery ( '/LHCb/Collision12/Beam4000GeV-VeloClosed-MagDown/Real Data/Reco14/Stripping20/WGBandQSelection7/90000000/PSIX.MDST'   )
    inputdata = [
        '/lhcb/LHCb/Collision11/PSIX.MDST/00041161/0000/00041161_00000001_1.psix.mdst',
    ]

    configure( inputdata , castor = True )

    ## event loop
    run(-1)

    ## get the applictaion manager
    gaudi = appMgr()

    alg = gaudi.algorithm('HistosAndTuples')
    for key in alg.Histos() :
        histo = alg.Histos(key)
        print histo.dump(20,10)

    ## alg.PrintHistos()

# =============================================================================
# The END
# =============================================================================


