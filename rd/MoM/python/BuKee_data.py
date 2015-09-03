from Gaudi.Configuration import *
from PhysSelPython.Wrappers import Selection, SelectionSequence, DataOnDemand

from Configurables import DecayTreeTuple, FitDecayTrees, TupleToolRecoStats, TupleToolTrigger, TupleToolTISTOS, CondDB
from DecayTreeTuple.Configuration import *

tuple = DecayTreeTuple("Jpsi_Tuple")

tuple.Inputs = ["/Event/Leptonic/Phys/Bu2LLK_eeLine/Particles"]

tuple.ToolList =  [
      "TupleToolKinematic"
    , "TupleToolEventInfo"
    , "TupleToolRecoStats"
    , "TupleBuKmmFit"
]

tuple.addBranches ({
      "Bplus"        :  "[B+ ->  K+ ( J/psi(1S) ->  e+  e-)]CC",
      "Kplus"        :  "[B+ -> ^K+ ( J/psi(1S) ->  e+  e-)]CC",
      "Jpsi"         :  "[B+ ->  K+ (^J/psi(1S) ->  e+  e-)]CC",
      "muplus"       :  "[B+ ->  K+ ( J/psi(1S) -> ^e+  e-)]CC",
      "muminus"      :  "[B+ ->  K+ ( J/psi(1S) ->  e+ ^e-)]CC",
})

LoKi_All = tuple.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_All")
LoKi_All.Variables = {
        'MINIPCHI2' : "MIPCHI2DV(PRIMARY)",
        'MINIP' : "MIPDV(PRIMARY)",
        'IPCHI2_OWNPV' : "BPVIPCHI2()",
        'IP_OWNPV' : "BPVIP()"
}

LoKi_Jpsi = tuple.Jpsi.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_Jpsi")
LoKi_Jpsi.Variables = {
            "q_PV_constr_B_constr" : "DTF_FUN ( M , True , 'B+' )" ,
            "q_PV_constr" : "DTF_FUN ( M , True )" ,
            "q_B_constr"  : "DTF_FUN ( M , False , 'B+' )" ,
            "q_no_constr" : "DTF_FUN ( M , False )" ,
             }


LoKi_muplus = tuple.muplus.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_muplus")
LoKi_muplus.Variables = {
       'PIDmu' : "PIDmu",
       'ghost' : "TRGHP",
       'TRACK_CHI2' : "TRCHI2DOF",
       'NNK' : "PPINFO(PROBNNK)",
       'NNpi' : "PPINFO(PROBNNpi)",
       'NNmu' : "PPINFO(PROBNNmu)"
}

LoKi_muminus = tuple.muminus.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_muminus")
LoKi_muminus.Variables = {
       'PIDmu' : "PIDmu",
       'ghost' : "TRGHP",
       'TRACK_CHI2' : "TRCHI2DOF",
       'NNK' : "PPINFO(PROBNNK)",
       'NNpi' : "PPINFO(PROBNNpi)",
       'NNmu' : "PPINFO(PROBNNmu)"
}

LoKi_Kplus = tuple.Kplus.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_Kplus")
LoKi_Kplus.Preambulo += [
  "from LoKiTracks.decorators import *",
  "nTT=TRFUN(TrIDC ( 'isTT') )"
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

LoKi_Bplus = tuple.Bplus.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_Bplus")
LoKi_Bplus.Preambulo += [
  "muE = CHILD(E, '[B+ -> (J/psi(1S) -> e+ ^e-)  K+]CC' )",
  "muP = CHILD(P, '[B+ -> (J/psi(1S) -> e+ ^e-)  K+]CC' )",
  "muE_aspi = sqrt(muP*muP + 139*139)",
  "muPX = CHILD(PX, '[B+ -> (J/psi(1S) -> e+ ^e-)  K+]CC' )",
  "muPY = CHILD(PY, '[B+ -> (J/psi(1S) -> e+ ^e-)  K+]CC' )",
  "muPZ = CHILD(PZ, '[B+ -> (J/psi(1S) -> e+ ^e-)  K+]CC' )",
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
  "PZ = muPZ + KPZ",
]

LoKi_Bplus.Variables = {
       'ID' : "ID",
       'TAU' : "BPVLTIME()",
       'DIRA_OWNPV' : "BPVDIRA",
       'FD_CHI2' : "BPVVDCHI2",
       'ENDVERTEX_CHI2' : "VFASPF(VCHI2/VDOF)",
       'KMu_Jpsi' : "sqrt(kmuE*kmuE-(PX*PX+PY*PY+PZ*PZ))",
       'KMu_D' : "sqrt(DE*DE-(PX*PX+PY*PY+PZ*PZ))",
       #'DimuM' : "DTF_FUN(CHILD(M,'[B+ -> ^J/psi(1S) K+]CC'),True,'B+')"
}

list = [
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
    ,"Hlt2DiMuonLowMassDecision"
    ,"Hlt2DiMuonJPsiDecision"
    ,"Hlt2DiMuonJPsiHighPTDecision"
    ,"Hlt2DiMuonPsi2SDecision"
    ,"Hlt2DiMuonBDecision"
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

tuple.Decay = '[B+ -> ^(J/psi(1S) -> ^e+ ^e-) ^K+]CC'

from Configurables import DaVinci
DaVinci().TupleFile = "BuKll.root"

DaVinci().EvtMax = -1
DaVinci().DataType = '2012'
DaVinci().Simulation   = False
DaVinci().Lumi = True
#CondDB().UseOracle = True
CondDB( LatestGlobalTagByDataType = '2012' )
_myseq = GaudiSequencer("myseq")
#_myseq.Members += [ DecayTreeFitterB]
_myseq.Members += [ tuple]

DaVinci().UserAlgorithms = [_myseq]

DaVinci().MainOptions  = ""
