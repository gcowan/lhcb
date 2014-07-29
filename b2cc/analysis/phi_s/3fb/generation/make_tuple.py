from Configurables import (
    DaVinci,
    EventSelector,
    PrintMCTree,
    MCDecayTreeTuple
)
from DecayTreeTuple.Configuration import *
import glob

"""Configure the variables below with:
decay: Decay you want to inspect, using 'newer' LoKi decay descriptor syntax,
decay_heads: Particles you'd like to see the decay tree of,
datafile: Where the file created by the Gauss generation phase is, and
year: What year the MC is simulating.
"""

# https://twiki.cern.ch/twiki/bin/view/LHCb/FAQ/LoKiNewDecayFinders
#decay = "[B0 => ^(Lambda_c~- ==> ^p~- ^K+ ^pi-) ^p+ ^pi- ^pi+]CC"
#decay = "[[B_s0]os => ^(J/psi(1S) ==> ^mu+ ^mu-) ^(phi(1020) ==> ^K+ ^K-)]CC"
decay = "[B_s0 => ^(J/psi(1S) ==> ^mu+ ^mu-) ^(phi(1020) ==> ^K+ ^K-)]CC"
decay_heads = ["B_s0", "B_s~0"]

dir = "/Disk/speyside8/lhcb/gcowan1/generation/Bs2JpsiPhi/"
datafiles = glob.glob(dir+"/*1000ev*xgen")
#datafiles = [datafiles[-1]]
print datafiles
year = 2012

# For a quick and dirty check, you don't need to edit anything below here.
##########################################################################

# Create an MC DTT containing any candidates matching the decay descriptor
mctuple = MCDecayTreeTuple("MCDecayTreeTuple")
mctuple.Decay = decay
mctuple.ToolList = [
    "MCTupleToolHierarchy",
    "LoKi::Hybrid::MCTupleTool/LoKi_Photos"
]
# Add a 'number of photons' branch
#mctuple.addTupleTool("MCTupleToolReconstructed").Associate = False
#mctuple.MCTupleToolReconstructed.FillPID = False
mctuple.addTupleTool("MCTupleToolKinematic").Verbose = True
mctuple.addTupleTool("LoKi::Hybrid::TupleTool/LoKi_Photos").Variables = {
    "nPhotos": "MCNINTREE(('gamma' == MCABSID))"
}
mctuple.addTupleTool("MCTupleToolP2VV").Calculator = 'MCBs2JpsiPhiAngleCalculator'

# Print the decay tree for any particle in decay_heads
printMC = PrintMCTree()
printMC.ParticleNames = decay_heads

# Name of the .xgen file produced by Gauss
EventSelector().Input = ["DATAFILE='{0}' TYP='POOL_ROOTTREE' Opt='READ'".format(datafile) for datafile in datafiles]

# Configure DaVinci
DaVinci().PrintFreq = 10000
DaVinci().TupleFile = "/Disk/speyside8/lhcb/gcowan1/generation/Bs2JpsiPhi/DVntuple.root"
DaVinci().Simulation = True
DaVinci().Lumi = False
DaVinci().DataType = str(year)
#DaVinci().UserAlgorithms = [printMC, mctuple]
DaVinci().UserAlgorithms = [mctuple]
