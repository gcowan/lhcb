from Gaudi.Configuration import *
from PhysSelPython.Wrappers import Selection, SelectionSequence, DataOnDemand, AutomaticData

from Configurables import DecayTreeTuple, FitDecayTrees, TupleToolRecoStats, TupleToolTrigger, TupleToolTISTOS, CondDB, SelDSTWriter, FilterDesktop
from Configurables import TupleToolP2VV
from DecayTreeTuple.Configuration import *

from Configurables import TrackSmearState as SMEAR
smear = SMEAR("StateSmear")
from Configurables import TrackSmeared
TrackSmeared("TrackSmearing").smearBest = True
TrackSmeared("TrackSmearing").Scale = 0.5
TrackSmearingSeq = GaudiSequencer("TrackSmearingSeq")
TrackSmearingSeq.Members = [ TrackSmeared("TrackSmearing") ]

tuple = DecayTreeTuple("psi_Tuple")

tuple.Inputs = ['/Event/AllStreams/Phys/BetaSPsi2SMuMu_Bs2Psi2SPhiMuMuDetatchedLine/Particles']

tuple.ToolList =  [
      "TupleToolKinematic"
    , "TupleToolEventInfo"
    , "TupleToolRecoStats"
    , "TupleToolMCTruth"
    , "TupleToolMCBackgroundInfo"
    ]

tuple.addBranches ({
      "Kplus"   :  "[B_s0 ->  (psi(2S) ->  mu+  mu-)  (phi(1020) -> ^K+  K-)]CC",
      "Kminus"  :  "[B_s0 ->  (psi(2S) ->  mu+  mu-)  (phi(1020) ->  K+ ^K-)]CC",
      "muplus"  :  "[B_s0 ->  (psi(2S) -> ^mu+  mu-)  (phi(1020) ->  K+  K-)]CC",
      "muminus" :  "[B_s0 ->  (psi(2S) ->  mu+ ^mu-)  (phi(1020) ->  K+  K-)]CC",
      "psi"     :  "[B_s0 -> ^(psi(2S) ->  mu+  mu-)  (phi(1020) ->  K+  K-)]CC",
      "phi"     :  "[B_s0 ->  (psi(2S) ->  mu+  mu-) ^(phi(1020) ->  K+  K-)]CC",
      "B_s0"    :  "[B_s0 ->  (psi(2S) ->  mu+  mu-)  (phi(1020) ->  K+  K-)]CC",
})

LoKi_All=tuple.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_All")
LoKi_All.Variables = {
        'MINIPCHI2' : "MIPCHI2DV(PRIMARY)",
        'MINIP' : "MIPDV(PRIMARY)",
        'IPCHI2_OWNPV' : "BPVIPCHI2()",
        'IP_OWNPV' : "BPVIP()"
}

LoKi_muplus=tuple.muplus.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_muplus")
LoKi_muplus.Variables = {
       'PIDmu' : "PIDmu",
       'ghost' : "TRGHP",
       'TRACK_CHI2' : "TRCHI2DOF",
       'NNK' : "PPINFO(PROBNNK)",
       'NNpi' : "PPINFO(PROBNNpi)",
       'NNmu' : "PPINFO(PROBNNmu)"
}

LoKi_muminus=tuple.muminus.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_muminus")
LoKi_muminus.Variables = {
       'PIDmu' : "PIDmu",
       'ghost' : "TRGHP",
       'TRACK_CHI2' : "TRCHI2DOF",
       'NNK' : "PPINFO(PROBNNK)",
       'NNpi' : "PPINFO(PROBNNpi)",
       'NNmu' : "PPINFO(PROBNNmu)"
}

LoKi_Kplus=tuple.Kplus.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_Kplus")
LoKi_Kplus.Preambulo += [
       "from LoKiTracks.decorators import *",
       "nTT=TRFUN(TrIDC ( 'isTT'))"
]
LoKi_Kplus.Variables = {
       'PIDmu' : "PIDmu",
       'PIDK'  : "PIDK",
       'ghost' : "TRGHP",
       'TRACK_CHI2' : "TRCHI2DOF",
       'NNK' : "PPINFO(PROBNNK)",
       'NNpi' : "PPINFO(PROBNNpi)",
       'NNKpi' : "PPINFO(PROBNNK)-PPINFO(PROBNNpi)",
       'NNKmu' : "PPINFO(PROBNNK)-PPINFO(PROBNNmu)",
       'NNmu' : "PPINFO(PROBNNmu)",
       'isMuonLoose' : "switch(ISMUONLOOSE,1,0)",
       'isMuon' : "switch(ISMUON,1,0)",
       'inMuon' : "switch(INMUON,1,0)",
       'nTT' : "nTT"
}

LoKi_Kminus=tuple.Kminus.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_Kminus")
LoKi_Kminus.Preambulo += [
       "from LoKiTracks.decorators import *",
       "nTT=TRFUN(TrIDC ( 'isTT'))"
]
LoKi_Kminus.Variables = {
       'PIDmu' : "PIDmu",
       'PIDK'  : "PIDK",
       'ghost' : "TRGHP",
       'TRACK_CHI2' : "TRCHI2DOF",
       'NNK' : "PPINFO(PROBNNK)",
       'NNpi' : "PPINFO(PROBNNpi)",
       'NNKpi' : "PPINFO(PROBNNK)-PPINFO(PROBNNpi)",
       'NNKmu' : "PPINFO(PROBNNK)-PPINFO(PROBNNmu)",
       'NNmu' : "PPINFO(PROBNNmu)",
       'isMuonLoose' : "switch(ISMUONLOOSE,1,0)",
       'isMuon' : "switch(ISMUON,1,0)",
       'inMuon' : "switch(INMUON,1,0)",
       'nTT' : "nTT"
}

LoKi_B_s0=tuple.B_s0.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_B_s0")
LoKi_B_s0.Variables = {
     "LOKI_FDCHI2"          : "BPVVDCHI2",
     "LOKI_FDS"             : "BPVDLS",
     "LOKI_DIRA"            : "BPVDIRA",
     "LOKI_DTF_CTAU"        : "DTF_CTAU( 0, True )",
     "LOKI_DTF_CTAUS"       : "DTF_CTAUSIGNIFICANCE( 0, True )",
     "LOKI_DTF_CHI2NDOF"    : "DTF_CHI2NDOF( True )",
     "LOKI_DTF_CTAUERR"     : "DTF_CTAUERR( 0, True )",
     "LOKI_MASS_JpsiConstr" : "DTF_FUN ( M , False , 'psi(2S)' )" ,
     "LOKI_DTF_VCHI2NDOF"   : "DTF_FUN ( VFASPF(VCHI2/VDOF) , True )",
}

list = [
      "L0DiMuonDecision"
    , "L0MuonDecision"
    , "Hlt1TrackAllL0Decision"
    , "Hlt1TrackMuonDecision"
    , "Hlt1DiMuonLowMassDecision"
    , "Hlt1DiMuonHighMassDecision"
    , "Hlt1SingleMuonHighPTDecision"
    , "Hlt2TopoMu2BodyBBDTDecision"
    , "Hlt2TopoMu3BodyBBDTDecision"
    , "Hlt2Topo2BodyBBDTDecision"
    , "Hlt2Topo3BodyBBDTDecision"
    , "Hlt2SingleMuonDecision"
    , "Hlt2DiMuonPsi2SDecision"
    , "Hlt2DiMuonDetachedDecision"
    , "Hlt2DiMuonDetachedPsi2SDecision"
    , "Hlt2DiMuonDetachedHeavyDecision"
]

tuple.B_s0.ToolList += [ "TupleToolTISTOS" ]
tuple.B_s0.addTool( TupleToolTISTOS, name = "TupleToolTISTOS" )
tuple.B_s0.TupleToolTISTOS.Verbose = True
tuple.B_s0.TupleToolTISTOS.TriggerList = list
tuple.psi.ToolList += [ "TupleToolTISTOS" ]
tuple.psi.addTool( TupleToolTISTOS, name = "TupleToolTISTOS" )
tuple.psi.TupleToolTISTOS.Verbose = True
tuple.psi.TupleToolTISTOS.TriggerList = list

TupleToolP2VV_Bs = tuple.B_s0.addTupleTool('TupleToolP2VV/TupleToolP2VV_Bs')
TupleToolP2VV_Bs.Calculator = 'Bs2JpsiPhiAngleCalculator'

tuple.Decay = "[B_s0 -> ^(psi(2S) -> ^mu+ ^mu-) ^(phi(1020) -> ^K+ ^K-)]CC"


from Configurables import DaVinci
DaVinci().TupleFile = "Bs2psi2Sphi.root"

DaVinci().EvtMax = -1
DaVinci().DataType = '2012'
DaVinci().Simulation   = True
DaVinci().Lumi = False
#CondDB().UseOracle = True
#DaVinci().DDDBtag  = "dddb-20120831"
#DaVinci().CondDBtag = "sim-20121025-vc-md100"
_myseq = GaudiSequencer("myseq")
_myseq.Members += [tuple]

DaVinci().UserAlgorithms = [smear,_myseq]

DaVinci().MainOptions  = ""
