
s20 = [
    ## fails at event~37000
    '/lhcb/LHCb/Collision12/DIMUON.DST/00020198/0002/00020198_00021204_1.dimuon.dst',
    ##
    #'/lhcb/LHCb/Collision12/DIMUON.DST/00020198/0001/00020198_00012742_1.dimuon.dst',
    #'/lhcb/LHCb/Collision12/DIMUON.DST/00020198/0001/00020198_00018390_1.dimuon.dst',
    #'/lhcb/LHCb/Collision12/DIMUON.DST/00020198/0001/00020198_00016364_1.dimuon.dst',
    #'/lhcb/LHCb/Collision12/DIMUON.DST/00020198/0001/00020198_00015767_1.dimuon.dst',
    #'/lhcb/LHCb/Collision12/DIMUON.DST/00020198/0002/00020198_00020410_1.dimuon.dst',
    #'/lhcb/LHCb/Collision12/DIMUON.DST/00020198/0000/00020198_00007306_1.dimuon.dst',
    #'/lhcb/LHCb/Collision12/DIMUON.DST/00020198/0001/00020198_00014550_1.dimuon.dst',
    #'/lhcb/LHCb/Collision12/DIMUON.DST/00020198/0001/00020198_00016402_1.dimuon.dst',
    #'/lhcb/LHCb/Collision12/DIMUON.DST/00020198/0001/00020198_00014253_1.dimuon.dst',
    #'/lhcb/LHCb/Collision12/DIMUON.DST/00020198/0001/00020198_00014185_1.dimuon.dst'
    ]

input = s20

#
## Input data
from GaudiConf import IOHelper
PFN  = 'PFN:root://eoslhcb.cern.ch//eos/lhcb/grid/prod'
ioh = IOHelper()
ioh.inputFiles ( [ PFN + i for i in input   ] ) 

from Configurables import DaVinci
davinci = DaVinci()

##davinci.EvtMax     = 100000

davinci.PrintFreq  =    100
davinci.EvtMax     =  10000


## davinci.EvtMax     =  1000

# davinci.PrintFreq   = 1
# davinci.SkipEvents  = 37890
# davinci.EvtMax      = 20

# davinci.PrintFreq   = 100
# davinci.SkipEvents  = 1
# davinci.EvtMax      = 1000

