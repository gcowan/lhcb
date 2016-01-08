#########################################################################################################
#########################################################################################################
## Greig Cowan
## 31st August 2015
#########################################################################################################
#########################################################################################################

import GaudiKernel.SystemOfUnits as Units
from Gaudi.Configuration import *
from PhysSelPython.Wrappers import AutomaticData, Selection, SelectionSequence
from Configurables import FilterDesktop
from Configurables import DaVinci
from Configurables import DecayTreeTuple
from Configurables import TupleToolDecay
from Configurables import GaudiSequencer
from Configurables import CombineParticles
from Configurables import CondDB
from Configurables import LoKi__Hybrid__TupleTool
from Configurables import LoKi__Hybrid__TupleTool
from Configurables import LoKi__Hybrid__EvtTupleTool
from Configurables import MCTupleToolHierarchy
from Configurables import TupleToolMCTruth
from Configurables import TupleToolMCBackgroundInfo
from Configurables import TupleToolTISTOS, TriggerTisTos

EVTMAX = -1
MODE = 'data'
OUTPUTLEVEL = ERROR

rootInTES = '/Event/PSIX'
location='Phys/SelLb2ChicPKForPsiX0/Particles'

#########################################################################################################
# Now set up the DecayTreeTuples for the reconstructed particles
#########################################################################################################
tupletools = []
tupletools.append("TupleToolKinematic")
tupletools.append("TupleToolGeometry")
tupletools.append("TupleToolTrackInfo")
tupletools.append("TupleToolPid")
tupletools.append("TupleToolRecoStats")
tupletools.append("TupleToolEventInfo")
triglist = [
	 "L0PhysicsDecision"
	,"L0MuonDecision"
	,"L0DiMuonDecision"
	,"L0MuonHighDecision"
	,"L0HadronDecision"
	,"L0ElectronDecision"
	,"L0PhotonDecision"
	,"Hlt1DiMuonHighMassDecision"
	,"Hlt1DiMuonLowMassDecision"
	,"Hlt1SingleMuonNoIPDecision"
	,"Hlt1SingleMuonHighPTDecision"
	,"Hlt1TrackAllL0Decision"
	,"Hlt1TrackMuonDecision"
	,"Hlt1TrackPhotonDecision"
	,"Hlt1L0AnyDecision"
	,"Hlt2Topo2BodySimpleDecision"
	,"Hlt2Topo3BodySimpleDecision"
	,"Hlt2Topo4BodySimpleDecision"
	,"Hlt2Topo2BodyBBDTDecision"
	,"Hlt2Topo3BodyBBDTDecision"
	,"Hlt2Topo4BodyBBDTDecision"
	,"Hlt2TopoMu2BodyBBDTDecision"
	,"Hlt2TopoMu3BodyBBDTDecision"
	,"Hlt2TopoMu4BodyBBDTDecision"
	,"Hlt2TopoE2BodyBBDTDecision"
	,"Hlt2TopoE3BodyBBDTDecision"
	,"Hlt2TopoE4BodyBBDTDecision"
	,"Hlt2MuonFromHLT1Decision"
	,"Hlt2DiMuonDecision"
    ,"Hlt2DiMuonDetachedDecision"
    ,"Hlt2DiMuonDetachedHeavyDecision"
    ,"Hlt2DiMuonLowMassDecision"
	,"Hlt2DiMuonJPsiDecision"
	,"Hlt2DiMuonJPsiHighPTDecision"
	,"Hlt2DiMuonPsi2SDecision"
	,"Hlt2DiMuonBDecision"
]
TISTOSTool = TupleToolTISTOS('TISTOSTool')
TISTOSTool.VerboseL0   = True
TISTOSTool.VerboseHlt1 = True
TISTOSTool.VerboseHlt2 = True
TISTOSTool.TriggerList = triglist[:]
TISTOSTool.addTool( TriggerTisTos, name="TriggerTisTos")

LoKi_B = LoKi__Hybrid__TupleTool("LoKi_B")
LoKi_B.Variables =  {
        "ETA" : "ETA",
        "PHI" : "PHI",
    "FDCHI2"          : "BPVVDCHI2",
    "FDS"             : "BPVDLS",
    "DIRA"            : "BPVDIRA",
    "pi0veto"         : "CHILDFUN ( PINFO( 25030 , -1 ) , 'gamma' == ABSID ) ",
    "DTF_CTAU"        : "DTF_CTAU( 0, True )",
    "DTF_CTAUS"       : "DTF_CTAUSIGNIFICANCE( 0, True )",
    "DTF_CHI2NDOF"    : "DTF_CHI2NDOF( True )",
    "DTF_CTAUERR"     : "DTF_CTAUERR( 0, True )",
    "DTF_MASS_constr1"  : "DTF_FUN ( M , True , strings(['chi_c1(1P)', 'J/psi(1S)']) )" ,
    "DTF_MASS_constr2"  : "DTF_FUN ( M , True , strings(['chi_c2(1P)', 'J/psi(1S)']) )" ,
    "DTF_VCHI2NDOF"     : "DTF_FUN ( VFASPF(VCHI2/VDOF) , True )",
    "PX_chic1P_constr1" : "DTF_FUN ( CHILD(PX, 1) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )",
    "PY_chic1P_constr1" : "DTF_FUN ( CHILD(PY, 1) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )",
    "PZ_chic1P_constr1" : "DTF_FUN ( CHILD(PZ, 1) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )",
    "PE_chic1P_constr1" : "DTF_FUN ( CHILD( E, 1) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )",
    "PX_proton_constr1" : "DTF_FUN ( CHILD(PX, 2) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )",
    "PY_proton_constr1" : "DTF_FUN ( CHILD(PY, 2) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )",
    "PZ_proton_constr1" : "DTF_FUN ( CHILD(PZ, 2) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )",
    "PE_proton_constr1" : "DTF_FUN ( CHILD( E, 2) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )",
    "PX_kaon_constr1"   : "DTF_FUN ( CHILD(PX, 3) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )",
    "PY_kaon_constr1"   : "DTF_FUN ( CHILD(PY, 3) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )",
    "PZ_kaon_constr1"   : "DTF_FUN ( CHILD(PZ, 3) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )",
    "PE_kaon_constr1"   : "DTF_FUN ( CHILD( E, 3) , True  , strings(['J/psi(1S)', 'chi_c1(1P)']) )",
    "PX_chic1P_constr2" : "DTF_FUN ( CHILD(PX, 1) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )",
    "PY_chic1P_constr2" : "DTF_FUN ( CHILD(PY, 1) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )",
    "PZ_chic1P_constr2" : "DTF_FUN ( CHILD(PZ, 1) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )",
    "PE_chic1P_constr2" : "DTF_FUN ( CHILD( E, 1) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )",
    "PX_proton_constr2" : "DTF_FUN ( CHILD(PX, 2) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )",
    "PY_proton_constr2" : "DTF_FUN ( CHILD(PY, 2) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )",
    "PZ_proton_constr2" : "DTF_FUN ( CHILD(PZ, 2) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )",
    "PE_proton_constr2" : "DTF_FUN ( CHILD( E, 2) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )",
    "PX_kaon_constr2"   : "DTF_FUN ( CHILD(PX, 3) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )",
    "PY_kaon_constr2"   : "DTF_FUN ( CHILD(PY, 3) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )",
    "PZ_kaon_constr2"   : "DTF_FUN ( CHILD(PZ, 3) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )",
    "PE_kaon_constr2"   : "DTF_FUN ( CHILD( E, 3) , True  , strings(['J/psi(1S)', 'chi_c2(1P)']) )",
    }

LoKi_Mu = LoKi__Hybrid__TupleTool("LoKi_Mu")
LoKi_Mu.Variables =  {
    "NSHAREDMU" : "NSHAREDMU"
    }

tuple_B2Kmumu = DecayTreeTuple("Tuple")
tuple_B2Kmumu.Inputs = [ location ]
tuple_B2Kmumu.ToolList = tupletools[:]
tuple_B2Kmumu.Decay = '[Lambda_b0 -> ^(chi_c1(1P) -> ^(J/psi(1S) -> ^mu+ ^mu-) ^gamma) ^p+ ^K-]CC'
tuple_B2Kmumu.Branches = {
        "Lambda_b0" : "[Lambda_b0 ->  (chi_c1(1P) ->  (J/psi(1S) ->  mu+  mu-)  gamma)  p+  K-]CC",
        "chi_c"     : "[Lambda_b0 -> ^(chi_c1(1P) ->  (J/psi(1S) ->  mu+  mu-)  gamma)  p+  K-]CC",
        "Jpsi"      : "[Lambda_b0 ->  (chi_c1(1P) -> ^(J/psi(1S) ->  mu+  mu-)  gamma)  p+  K-]CC",
        "gamma"     : "[Lambda_b0 ->  (chi_c1(1P) ->  (J/psi(1S) ->  mu+  mu-) ^gamma)  p+  K-]CC",
        "muplus"    : "[Lambda_b0 ->  (chi_c1(1P) ->  (J/psi(1S) -> ^mu+  mu-)  gamma)  p+  K-]CC",
        "muminus"   : "[Lambda_b0 ->  (chi_c1(1P) ->  (J/psi(1S) ->  mu+ ^mu-)  gamma)  p+  K-]CC",
        "proton"    : "[Lambda_b0 ->  (chi_c1(1P) ->  (J/psi(1S) ->  mu+  mu-)  gamma) ^p+  K-]CC",
        "kaon"      : "[Lambda_b0 ->  (chi_c1(1P) ->  (J/psi(1S) ->  mu+  mu-)  gamma)  p+ ^K-]CC",
	}
for particle in ["Lambda_b0", "chi_c", "Jpsi", "gamma", "muplus", "muminus", "proton", "kaon"]:
        tuple_B2Kmumu.addTool(TupleToolDecay, name = particle)

# List of the reconstructed tuples
tuples = [ tuple_B2Kmumu
	]

for tup in tuples:
    tup.ReFitPVs = True
    if MODE == "MC":
        tup.addTool(TupleToolMCTruth, name = "TruthTool")
        tup.addTool(TupleToolMCBackgroundInfo, name = "BackgroundInfo")
        tup.ToolList += ["TupleToolMCTruth/TruthTool"]
        tup.ToolList += ["TupleToolMCBackgroundInfo/BackgroundInfo"]

    tup.Lambda_b0.addTool( LoKi_B )
    tup.Lambda_b0.ToolList += ["LoKi::Hybrid::TupleTool/LoKi_B"]
    tup.muplus.addTool( LoKi_Mu )
    tup.muplus.ToolList += ["LoKi::Hybrid::TupleTool/LoKi_Mu"]
    tup.muminus.addTool( LoKi_Mu )
    tup.muminus.ToolList += ["LoKi::Hybrid::TupleTool/LoKi_Mu"]
    tup.gamma.ToolList += ["TupleToolPhotonInfo/PhotonInfo", "TupleToolPi0Info/Pi0Info"]
    for particle in [ tup.Lambda_b0 ]:
        particle.addTool(TISTOSTool, name = "TISTOSTool")
        particle.ToolList += [ "TupleToolTISTOS/TISTOSTool" ]

##################################################################
# If we want to write a DST do this
##################################################################
from DSTWriters.microdstelements import *
from DSTWriters.Configuration import (SelDSTWriter,
                                              stripDSTStreamConf,
                                              stripDSTElements
                                              )
SelDSTWriterElements = {
    'default'              : stripDSTElements()
    }
SelDSTWriterConf = {
    'default'              : stripDSTStreamConf()
    }
if MODE == 'MC':
  dstWriter = SelDSTWriter( "MyDSTWriter",
                          StreamConf = SelDSTWriterConf,
                          MicroDSTElements = SelDSTWriterElements,
                          OutputFileSuffix ='MC',
                          SelectionSequences = sc.activeStreams()
                          )

###################### DAVINCI SETTINGS ############################################
DaVinci().SkipEvents = 0  #1945
DaVinci().PrintFreq = 10000
DaVinci().EvtMax = EVTMAX
DaVinci().TupleFile = "DVTuples1.root"
DaVinci().HistogramFile = 'DVHistos.root'
DaVinci().RootInTES = rootInTES
DaVinci().InputType = "MDST"
DaVinci().Simulation = False
DaVinci().Lumi = True
DaVinci().DataType = "2011"
CondDB( LatestGlobalTagByDataType = '2011' )

if False: # Add the DST writing algorithms
	DaVinci().appendToMainSequence( [ dstWriter.sequence(), printTree ] )

if True: # Add the ntuple writing algorithms
	DaVinci().UserAlgorithms = [
                tuple_B2Kmumu
			]
if MODE == 'MC':
    DaVinci().Simulation = True
    DaVinci().Lumi = False
    DaVinci().UserAlgorithms += [
                mctuple_B2Kmumu
                ]

if OUTPUTLEVEL == DEBUG:
	DaVinci().MoniSequence += [ mctree ]

from Configurables import DaVinciInit
DaVinciInit().OutputLevel = OUTPUTLEVEL

if MODE != "MC":
    from Configurables import LumiIntegrateFSR, LumiIntegratorConf
    LumiIntegrateFSR('IntegrateBeamCrossing').SubtractBXTypes = ['None']

MessageSvc().Format = "% F%60W%S%7W%R%T %0W%M"

###################################################################################
####################### THE END ###################################################
###################################################################################
