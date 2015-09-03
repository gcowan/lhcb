

from Gaudi.Configuration import *
from PhysSelPython.Wrappers import Selection, SelectionSequence, DataOnDemand, AutomaticData



from Configurables import DecayTreeTuple, FitDecayTrees, TupleToolRecoStats, TupleToolTrigger, TupleToolTISTOS, CondDB, SelDSTWriter, FilterDesktop
from DecayTreeTuple.Configuration import *

from Configurables import TrackSmearState as SMEAR
smear = SMEAR("StateSmear")
from Configurables import TrackSmeared
TrackSmeared("TrackSmearing").smearBest = True
TrackSmeared("TrackSmearing").Scale = 0.5
TrackSmearingSeq = GaudiSequencer("TrackSmearingSeq")
TrackSmearingSeq.Members = [ TrackSmeared("TrackSmearing") ]


# Standard stripping20 
name = 'bukmumu'

"""
Options for building Stripping20,
with tight track chi2 cut (<3)
"""

from Configurables import EventNodeKiller
eventNodeKiller = EventNodeKiller('Stripkiller')
eventNodeKiller.Nodes = ['/Event/AllStreams','/Event/Strip']

from Gaudi.Configuration import *
MessageSvc().Format = "% F%30W%S%7W%R%T %0W%M"

# Tighten Trk Chi2 to <3
from CommonParticles.Utils import DefaultTrackingCuts
DefaultTrackingCuts().Cuts  = { "Chi2Cut" : [ 0, 4 ],
                                "CloneDistCut" : [5000, 9e+99 ] }

#
# Build the streams and stripping object
#
from StrippingArchive.Stripping20.StrippingB2XMuMu import B2XMuMuConf as builder
from StrippingArchive.Stripping20.StrippingB2XMuMu import defaultConfig as config
from StrippingConf.Configuration import StrippingConf, StrippingStream
#from StrippingSettings.Utils import strippingConfiguration
#from StrippingArchive.Utils import buildStreams, cloneLinesFromStream
#from StrippingArchive import strippingArchive
config['MuonPID'] = -999999

stripping='stripping20'
#get the configuration dictionary from the database
#config  = strippingConfiguration(stripping)
#config['HLT_FILTER_HMuNu']=""
lb = builder('B2XMuMu',config)
print config
#get the line builders from the archive


#
# Merge into one stream and run in flag mode
#
AllStreams = StrippingStream("Dimuon")

for line in lb.lines():
    if line.name() == 'StrippingB2XMuMu_Line':
        AllStreams.appendLines([line])


sc = StrippingConf( Streams = [ AllStreams ],
                    MaxCandidates = 2000
                    )



stripsel = AutomaticData(Location = "Phys/B2XMuMu_Line/Particles")


_stripfilter = FilterDesktop("stripfilter",
  		      Preambulo = ["from LoKiPhysMC.decorators import *","from LoKiPhysMC.functions import mcMatch"],
                      Code = "mcMatch('[B+]cc')")

Bu_Kmumu = Selection ("Sel"+name,
                     Algorithm = _stripfilter,
                     RequiredSelections = [stripsel])
seq = SelectionSequence("seq",
                      TopSelection = Bu_Kmumu)

tuple = DecayTreeTuple("Jpsi_Tuple")

tuple.Inputs = [stripsel.outputLocation()]


tuple.ToolList =  [
      "TupleToolKinematic"
    , "TupleToolEventInfo"
    , "TupleToolRecoStats"
    , "TupleToolMCTruth"
    , "TupleToolMCBackgroundInfo"
    , "TupleBuKmmFit"
]


tuple.addBranches ({         
      "Kplus" :  "[B+ -> ^K+ (J/psi(1S) -> mu+ mu-)]CC",
      "Jpsi" :  "[B+ -> K+ ^(J/psi(1S) -> mu+ mu-)]CC",
      "muplus" :  "[B+ -> K+ (J/psi(1S) -> ^mu+ mu-)]CC",
      "muminus" :  "[B+ -> K+ (J/psi(1S) -> mu+ ^mu-)]CC",
      "Bplus" : "[B+ -> K+ J/psi(1S)]CC",
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

LoKi_Bplus=tuple.Bplus.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_Bplus")
LoKi_Bplus.Preambulo += [
  "muE = CHILD(E, '[B+ -> (J/psi(1S) -> mu+ ^mu-)  K+]CC' )",
  "muP = CHILD(P, '[B+ -> (J/psi(1S) -> mu+ ^mu-)  K+]CC' )",
  "muE_aspi = sqrt(muP*muP + 139*139)",
  "muPX = CHILD(PX, '[B+ -> (J/psi(1S) -> mu+ ^mu-)  K+]CC' )",
  "muPY = CHILD(PY, '[B+ -> (J/psi(1S) -> mu+ ^mu-)  K+]CC' )",
  "muPZ = CHILD(PZ, '[B+ -> (J/psi(1S) -> mu+ ^mu-)  K+]CC' )",
  "KP = CHILD(P, '[B+ -> J/psi(1S) ^K+]CC' )",
  "KE_asmu = sqrt(KP*KP + 105*105)",
  "KE = sqrt(KP*KP + 497*497)",
  "KPX = CHILD(PX, '[B+ -> J/psi(1S) ^K+]CC' )",
  "KPY = CHILD(PY, '[B+ -> J/psi(1S) ^K+]CC' )",
  "KPZ = CHILD(PZ, '[B+ -> J/psi(1S) ^K+]CC' )",
  "kmuE = muE + KE_asmu",
  "DE = muE_aspi + KE",
  "PX = muPX + KPX",
  "PY = muPY + KPY",
  "PZ = muPZ + KPZ"
]
LoKi_Bplus.Variables = {
       'DTF_CHI2' : "DTF_CHI2NDOF(True)",
       'TAU' : "BPVLTIME()",
       'DIRA_OWNPV' : "BPVDIRA",
       'FD_CHI2' : "BPVVDCHI2",
       'ENDVERTEX_CHI2' : "VFASPF(VCHI2/VDOF)",
       'KMu_Jpsi' : "sqrt(kmuE*kmuE-(PX*PX+PY*PY+PZ*PZ))",
       'KMu_D' : "sqrt(DE*DE-(PX*PX+PY*PY+PZ*PZ))"
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
    , "Hlt2DiMuonDetachedDecision"
    , "Hlt2SingleMuonDecision"
    , "Hlt2DiMuonDetachedHeavyDecision"
]

tuple.Bplus.ToolList += [ "TupleToolTISTOS" ]
tuple.Bplus.addTool( TupleToolTISTOS, name = "TupleToolTISTOS" )
tuple.Bplus.TupleToolTISTOS.Verbose = True
tuple.Bplus.TupleToolTISTOS.TriggerList = list
tuple.Jpsi.ToolList += [ "TupleToolTISTOS" ]
tuple.Jpsi.addTool( TupleToolTISTOS, name = "TupleToolTISTOS" )
tuple.Jpsi.TupleToolTISTOS.Verbose = True
tuple.Jpsi.TupleToolTISTOS.TriggerList = list
tuple.Kplus.ToolList += [ "TupleToolTISTOS" ]
tuple.Kplus.addTool( TupleToolTISTOS, name = "TupleToolTISTOS" )
tuple.Kplus.TupleToolTISTOS.Verbose = True
tuple.Kplus.TupleToolTISTOS.TriggerList = list


tuple.Decay = "[B+ -> ^(J/psi(1S) -> ^mu+ ^mu-)  ^K+]CC"


dstWriter = SelDSTWriter('BuKmumuDSTWriter',
                   SelectionSequences = sc.activeStreams(),
                   OutputFileSuffix = 'Stripped')

from Configurables import DaVinci
DaVinci().TupleFile = "BuKMuMu.root"

DaVinci().EvtMax = -1
DaVinci().DataType = '2012'
DaVinci().Simulation   = True
DaVinci().Lumi = False
#CondDB().UseOracle = True
#DaVinci().DDDBtag  = "dddb-20120831"
#DaVinci().CondDBtag = "sim-20121025-vc-md100"
_myseq = GaudiSequencer("myseq")
#_myseq.Members += [ DecayTreeFitterB]
_myseq.Members += [ eventNodeKiller ]
#_myseq.Members += [ TrackSmearingSeq ]  
_myseq.Members += [ sc.sequence() ] 
_myseq.Members += [ seq.sequence() ] 
#_myseq.Members += [ dstWriter.sequence() ]
_myseq.Members += [tuple]

DaVinci().UserAlgorithms = [smear,_myseq]

DaVinci().MainOptions  = ""
