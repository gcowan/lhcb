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
      "Bplus"        :  "[B+ ->  K+  ( J/psi(1S) ->  e+  e-)]CC",
      "Kplus"        :  "[B+ -> ^K+  ( J/psi(1S) ->  e+  e-)]CC",
      "Jpsi"         :  "[B+ ->  K+ ^( J/psi(1S) ->  e+  e-)]CC",
      "muplus"       :  "[B+ ->  K+  ( J/psi(1S) -> ^e+  e-)]CC",
      "muminus"      :  "[B+ ->  K+  ( J/psi(1S) ->  e+ ^e-)]CC",
})

LoKi_All = tuple.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_All")
LoKi_All.Variables = {
        'MINIPCHI2' : "MIPCHI2DV(PRIMARY)",
        'MINIP' : "MIPDV(PRIMARY)",
        'IPCHI2_OWNPV' : "BPVIPCHI2()",
        'IP_OWNPV' : "BPVIP()"
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
       "dimuon_mass_PV_constr_B_constr" : "DTF_FUN ( CHILD(M, 1) , True , 'B+' )" ,
       "dimuon_mass_PV_constr"          : "DTF_FUN ( CHILD(M, 1) , True )" ,
       "dimuon_mass_B_constr"           : "DTF_FUN ( CHILD(M, 1) , False , 'B+' )" ,
       "dimuon_mass_no_constr"          : "DTF_FUN ( CHILD(M, 1) , False )" ,
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

tuple.Bplus.ToolList += [ "TupleToolTISTOS/BplusTISTOS" ]
tuple.Bplus.addTool( TupleToolTISTOS, name = "BplusTISTOS" )
tuple.Bplus.BplusTISTOS.Verbose = True
tuple.Bplus.BplusTISTOS.TriggerList = list
tuple.Jpsi.ToolList += [ "TupleToolTISTOS/JpsiTISTOS" ]
tuple.Jpsi.addTool( TupleToolTISTOS, name = "JpsiTISTOS" )
tuple.Jpsi.JpsiTISTOS.Verbose = True
tuple.Jpsi.JpsiTISTOS.TriggerList = list
tuple.Kplus.ToolList += [ "TupleToolTISTOS/KplusTISTOS" ]
tuple.Kplus.addTool( TupleToolTISTOS, name = "KplusTISTOS" )
tuple.Kplus.KplusTISTOS.Verbose = True
tuple.Kplus.KplusTISTOS.TriggerList = list
tuple.muplus.ToolList += [ "TupleToolTISTOS/muplusTISTOS" ]
tuple.muplus.addTool( TupleToolTISTOS, name = "muplusTISTOS" )
tuple.muplus.muplusTISTOS.Verbose = True
tuple.muplus.muplusTISTOS.TriggerList = list
tuple.muminus.ToolList += [ "TupleToolTISTOS/muminusTISTOS" ]
tuple.muminus.addTool( TupleToolTISTOS, name = "muminusTISTOS" )
tuple.muminus.muminusTISTOS.Verbose = True
tuple.muminus.muminusTISTOS.TriggerList = list

tuple.Decay = '[B+ -> ^(J/psi(1S) -> ^e+ ^e-) ^K+]CC'

from Configurables import DaVinci
DaVinci().TupleFile = "BuKll.root"

DaVinci().EvtMax = -1
DaVinci().DataType = '2011'
DaVinci().Simulation   = False
DaVinci().Lumi = True
#CondDB().UseOracle = True
CondDB( LatestGlobalTagByDataType = '2011' )
_myseq = GaudiSequencer("myseq")
_myseq.Members += [ tuple]

DaVinci().UserAlgorithms = [_myseq]

DaVinci().MainOptions  = ""
