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

location='/Event/Dimuon/Phys/B2XMuMu_Line/Particles'

#########################################################################################################
# Set up the MCDecayTreeTuples for each of the decays that we are interested in.
# We want to save all of the generated events for each mode.
#########################################################################################################
from Configurables import MCDecayTreeTuple, MCTupleToolKinematic, MCTupleToolHierarchy, LoKi__Hybrid__MCTupleTool

# LoKi variables
LoKi_Photos = LoKi__Hybrid__MCTupleTool("LoKi_Photos")
LoKi_Photos.Variables = {
    "nPhotons" : "MCNINTREE ( ('gamma'==MCABSID) )",
    "MC_PT"    : "MCPT",
    "MC_THETA" : "MCTHETA",
    "MC_ETA"   : "MCETA",
    "MC_PHI"   : "MCPHI",
    "MC_ABSID" : "MCABSID"
	}

mctuple_B2Kmumu = MCDecayTreeTuple( 'MCTuple_B2Kmumu' )
mctuple_B2Kmumu.Decay = "[ (Beauty & LongLived) --> ^(J/psi(1S) -> ^mu+ ^mu- ...) ^K+ ... ]CC"
mctuple_B2Kmumu.Branches = {
		'B'       : "[ (Beauty & LongLived) --> ^(J/psi(1S) ->  mu+  mu- ...)  K+  ... ]CC",
		'Kplus'   : "[ (Beauty & LongLived) --> ^(J/psi(1S) ->  mu+  mu- ...) ^K+  ... ]CC",
		'psi'     : "[ (Beauty & LongLived) --> ^(J/psi(1S) ->  mu+  mu- ...)  K+  ... ]CC",
		'muplus'  : "[ (Beauty & LongLived) --> ^(J/psi(1S) -> ^mu+  mu- ...)  K+  ... ]CC",
		'muminus' : "[ (Beauty & LongLived) --> ^(J/psi(1S) ->  mu+ ^mu- ...)  K+  ... ]CC",
		}

# List of the mc tuples
mctuples = [
        mctuple_B2Kmumu
	]

for tup in mctuples:
    tup.addTool(MCTupleToolKinematic())
    tup.MCTupleToolKinematic.Verbose=True
    tup.addTool(LoKi_Photos)
    tup.ToolList  = [ "MCTupleToolHierarchy"
            , "MCTupleToolKinematic"
            , "LoKi::Hybrid::MCTupleTool/LoKi_Photos" # doesn't work with DaVinci v36r6
            ]
    tup.addTool(TupleToolMCTruth, name = "TruthTool")
    tup.addTool(TupleToolMCBackgroundInfo, name = "BackgroundInfo")
    tup.ToolList += ["TupleToolMCTruth/TruthTool"]
    tup.ToolList += ["TupleToolMCBackgroundInfo/BackgroundInfo"]

if OUTPUTLEVEL == DEBUG:
	from Configurables import PrintMCTree, PrintMCDecayTreeTool
	mctree = PrintMCTree("PrintTrue")
	mctree.addTool( PrintMCDecayTreeTool )
	mctree.PrintMCDecayTreeTool.Information = "Name M P Px Py Pz Pt Vx Vy Vz"
	mctree.ParticleNames = [ "B+", "B-" ]
	mctree.Depth = 3  # down to the K and mu

#########################################################################################################
# Now set up the DecayTreeTuples for the reconstructed particles
#########################################################################################################
tupletools = []
tupletools.append("TupleToolPrimaries")
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
	,"Hlt2SingleElectronTFLowPtDecision"
	,"Hlt2SingleElectronTFHighPtDecision"
	,"Hlt2DiElectronHighMassDecision"
	,"Hlt2DiElectronBDecision"
	,"Hlt2B2HHLTUnbiasedDecision"
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
        "Best_PV_CORRM" : "BPVCORRM",
        "Best_PV_Eta"   : "BPVETA",
        "ETA" : "ETA",
        "PHI" : "PHI",
    "LOKI_FDCHI2"          : "BPVVDCHI2",
    "LOKI_FDS"             : "BPVDLS",
    "LOKI_DIRA"            : "BPVDIRA",
    "LOKI_DTF_CTAU"        : "DTF_CTAU( 0, True )",
    "LOKI_DTF_CTAUS"       : "DTF_CTAUSIGNIFICANCE( 0, True )",
    "LOKI_DTF_CHI2NDOF"    : "DTF_CHI2NDOF( True )",
    "LOKI_DTF_CTAUERR"     : "DTF_CTAUERR( 0, True )",
    "LOKI_MASS_JpsiConstr" : "DTF_FUN ( M , False , 'J/psi(1S)' )" ,
    "LOKI_DTF_VCHI2NDOF"   : "DTF_FUN ( VFASPF(VCHI2/VDOF) , True )",
        }

LoKi_psi = LoKi__Hybrid__TupleTool("LoKi_psi")
LoKi_psi.Variables = {
    "q_PV_constr_B_constr" : "DTF_FUN ( M , True , 'B+' )" ,
    "q_PV_constr" : "DTF_FUN ( M , True )" ,
    "q_B_constr"  : "DTF_FUN ( M , False , 'B+' )" ,
    "q_no_constr" : "DTF_FUN ( M , False )" ,
    }

LoKi_Mu = LoKi__Hybrid__TupleTool("LoKi_Mu")
LoKi_Mu.Variables =  {
    "NSHAREDMU" : "NSHAREDMU"
    }

tuple_B2Kmumu = DecayTreeTuple("Tuple_B2Kmumu")
tuple_B2Kmumu.Inputs = [ location ]
tuple_B2Kmumu.ToolList = tupletools[:]
tuple_B2Kmumu.Decay = '[B+ -> ^(J/psi(1S) -> ^mu+ ^mu-) ^K+]CC'
tuple_B2Kmumu.Branches = {
        "B"      : "[B+ ->  (J/psi(1S) ->  mu+  mu-)  K+]CC",
        "Kplus"  : "[B+ ->  (J/psi(1S) ->  mu+  mu-) ^K+]CC",
        "psi"    : "[B+ -> ^(J/psi(1S) ->  mu+  mu-)  K+]CC",
        "muplus" : "[B+ ->  (J/psi(1S) -> ^mu+  mu-)  K+]CC",
        "muminus": "[B+ ->  (J/psi(1S) ->  mu+ ^mu-)  K+]CC",
	}
for particle in ["B", "Kplus", "psi", "muplus", "muminus"]:
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

    tup.B.addTool( LoKi_B )
    tup.B.ToolList += ["LoKi::Hybrid::TupleTool/LoKi_B"]
    tup.psi.addTool( LoKi_psi )
    tup.psi.ToolList += ["LoKi::Hybrid::TupleTool/LoKi_psi"]
    tup.muplus.addTool( LoKi_Mu )
    tup.muplus.ToolList += ["LoKi::Hybrid::TupleTool/LoKi_Mu"]
    tup.muminus.addTool( LoKi_Mu )
    tup.muminus.ToolList += ["LoKi::Hybrid::TupleTool/LoKi_Mu"]
    for particle in [ tup.B ]:
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
DaVinci().PrintFreq = 1000
DaVinci().EvtMax = EVTMAX
DaVinci().TupleFile = "DVTuples1.root"
DaVinci().HistogramFile = 'DVHistos.root'
DaVinci().InputType = "DST"
DaVinci().Simulation = False
DaVinci().Lumi = True
DaVinci().DataType = "2012"
CondDB( LatestGlobalTagByDataType = '2012' )

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
