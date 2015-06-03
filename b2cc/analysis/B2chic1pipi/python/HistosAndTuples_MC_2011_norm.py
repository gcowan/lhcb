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

        ## initialize functionality for enhanced n-tuples 
        sc = self.fill_initialize ()

	self.bkg = self.tool( cpp.IBackgroundCategory,  'BackgroundCategory')

        return sc

    def finalize ( self ) :
        self.fill_finalize  ()
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

            self.treatKaons  ( tup , p ) ## fill some basic information for all kaons
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
	    
    	    tup.column_float( 'm_b_DTF_jpsi_chic1_constr'     , dtf_b_mass_chic1P_constr ( p ) / GeV )
    	    tup.column_float( 'm_b_DTF_jpsi_chic2_constr'     , dtf_b_mass_chic2P_constr ( p ) / GeV )
    	    tup.column_float( 'ctau_b_DTF'     , dtf_ctau ( p ) )
    	    tup.column_float( 'ctauerr_b_DTF'  , dtf_ctauerr ( p ) )
    	    tup.column_float( 'chi2ndof_b_DTF' , dtf_chi2 ( p ) )

	    tup.column_float("bkgcat_b",       self.bkg.category(p))
	    tup.column_float("bkgcat_chic",    self.bkg.category(chic))
	    tup.column_float("bkgcat_jpsi",    self.bkg.category(jpsi))
	    tup.column_float("bkgcat_gamma",   self.bkg.category(gamma))
	    tup.column_float("bkgcat_piplus",  self.bkg.category(piplus))
	    tup.column_float("bkgcat_piminus", self.bkg.category(piminus))

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

    from PhysSelPython.Wrappers import AutomaticData
    jpsi_name = 'FullDSTDiMuonJpsi2MuMuDetachedLine'
    psi2_name = 'FullDSTDiMuonPsi2MuMuDetachedLine'
    jpsi  = AutomaticData ( '/Event/AllStreams/Phys/%s/Particles' % jpsi_name ) 
    psi2s = AutomaticData ( '/Event/AllStreams/Phys/%s/Particles' % psi2_name )
    
    from PhysSelPython.Wrappers import MergedSelection
    psis = MergedSelection (
    		'SelDetachedPsisForBandQ' ,  
    		RequiredSelections = [ jpsi , psi2s ] 
    )

    from StrippingSelections.StrippingPsiXForBandQ import PsiX_BQ_Conf    as PsiX
    from StrippingSelections.StrippingPsiX0        import PsiX0Conf       as PsiX0 

    def _psi_ ( self ) :
        """
        psi(') -> mu+ mu- 
        """
        return psis

    PsiX0 . psi = _psi_
    PsiX  . psi = _psi_

    logger.warning ( "Redefine PsiX .psi" )

    psix   = PsiX   ( 'PsiX'  , {} )
    psix0  = PsiX0  ( 'PsiX0' , {} )
    for s in ( psix.psi_pi       () ,
           psix.psi_K        () ,
           #
           psix.psi_2pi      () ,
           psix.psi_2K       () ,
           psix.psi_2Kpi     () ,
           ## 
           psix.psi_3pi      () ,
           psix.psi_3K       () ,
           psix.psi_3Kpi     () ,
           ##
           psix.psi_4pi      () ,
           psix.psi_4Kpi     () ,
           psix.psi_4K       () ,
           ##
           psix.psi_5pi      () ,
           psix.psi_5K       () ,
           psix.psi_5Kpi     () ,
           ##
           psix.psi_6pi      () ,
           psix.psi_6Kpi     () ,
           ##
           psix.psi_7pi      () ,
           psix.psi_7Kpi     () ,
           ##
           # Lb 
           psix.psi_pK       () ,
           psix.psi_ppi      () ,
           psix.psi_pKpipi   () ,
           ##
           # 2protons 
           psix.psi_pp       () ,
           psix.psi_pppi     () ,
           psix.psi_ppK      () ,
           psix.psi_pppipi   () ,
           psix.psi_ppKpipi  () ,
           psix.psi_pppipipi () ,
           ##
           ) :
      a = s.algorithm ()
      a.ParticleCombiners = { '' : 'LoKi::VertexFitter:PUBLIC' }
      #
      a.MaxCandidates          = 2000
      a.StopAtMaxCandidates    = True 
      a.StopIncidentType       = 'ExceedsCombinatoricsLimit'
      # 
    from PhysSelPython.Wrappers import MultiSelectionSequence
    from PhysSelPython.Wrappers import      SelectionSequence    
    psi_x = MultiSelectionSequence (
        "PSIX"      ,
        Sequences = [
        ## channels with chic
        # 
        SelectionSequence ( 'B2CHICK'     , psix0 . b2chicK     () ) ,
        SelectionSequence ( 'B2CHICKK'    , psix0 . b2chicKK    () ) ,
        SelectionSequence ( 'B2CHICKPi'   , psix0 . b2chicKpi   () ) ,
        SelectionSequence ( 'B2CHICKPiPi' , psix0 . b2chicKpipi () ) ,
        SelectionSequence ( 'B2CHICPiPi'  , psix0 . b2chicpipi  () ) ,
        #
        SelectionSequence ( 'BC2CHICPi'   , psix0 . bc2chicpi    () ) ,
        SelectionSequence ( 'Lb2CHICPi'   , psix0 . lb2chicpK    () ) ,
        ]
    )

    ## import DaVinci 
    from Configurables import DaVinci
    ## delegate the actual configuration to DaVinci
    dv = DaVinci ( DataType      = '2011'        ,
                   InputType     = 'DST'         ,
		   Simulation	 = True		 ,
		   Lumi		 = False	 ,
                   TupleFile     = 'Tuples.root'   ## IMPORTANT 
                   )
    
    ## add the name of Bender algorithm into User sequence sequence 
    alg_name = 'HistosAndTuples'
    dv.UserAlgorithms += [ psi_x.sequence(), 'TrackScaleState', alg_name ]

    
    ## define the input data
    setData  ( inputdata , catalogs , castor )
    
    ## get/create application manager
    gaudi = appMgr() 
    
    ## (1) create the algorithm with given name 
    alg = HistosAndTuples (
        alg_name ,
        Inputs    = [ 'Phys/SelB2ChicKKForPsiX0/Particles' ]
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
	'/lhcb/MC/2011/ALLSTREAMS.DST/00043757/0000/00043757_00000012_2.AllStreams.dst',
	]
    
    configure( inputdata , castor = True )
    
    ## event loop 
    run(1000)

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


