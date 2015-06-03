#-- GAUDI jobOptions generated on Thu Feb 19 11:59:16 2015
#-- Contains event types : 
#--   90000000 - 43 files - 4693433 events - 198.41 GBytes


#--  Extra information about the data processing phases:


#--  Processing Pass Step-125603 

#--  StepId : 125603 
#--  StepName : Merging for WGBandQSelection 
#--  ApplicationName : DaVinci 
#--  ApplicationVersion : v33r6p1 
#--  OptionFiles : $APPCONFIGOPTS/Merging/DV-Stripping-Merging.py 
#--  DDDB : None 
#--  CONDDB : None 
#--  ExtraPackages : AppConfig.v3r177 
#--  Visible : N 

from Gaudi.Configuration import * 
from GaudiConf import IOHelper
IOHelper('ROOT').inputFiles(['LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000001_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000002_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000003_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000004_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000005_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000006_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000007_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000008_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000009_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000010_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000011_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000012_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000013_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000014_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000015_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000016_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000017_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000018_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000019_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000020_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000021_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000022_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000023_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000024_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000025_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000026_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000027_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000028_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000029_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000030_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000031_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000032_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000033_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000034_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000035_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000036_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000037_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000038_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000039_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000040_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000041_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000042_1.psix.mdst',
'LFN:/lhcb/LHCb/Collision11/PSIX.MDST/00041157/0000/00041157_00000043_1.psix.mdst'
], clear=True)
