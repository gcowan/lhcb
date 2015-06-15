# Script to create DaVinci Job
# Greig Cowan

import sys

year = sys.argv[1]

script='/afs/cern.ch/user/g/gcowan/lhcb/lhcb/b2cc/analysis/B2chic1pipi/python/HistosAndTuples_'+ year +'.py'

job_name = 'B2chicpipi_data' + str(year)
print job_name
print script

DV = Bender()
DV.version = 'v25r3'
DV.module = script
DV.events = -1


BK_locations = []

if year == '2011':
    BK_locations = [
     '/LHCb/Collision11/Beam3500GeV-VeloClosed-MagDown/Real Data/Reco14/Stripping20r1/WGBandQSelection9/90000000/PSIX.MDST'
    ,'/LHCb/Collision11/Beam3500GeV-VeloClosed-MagUp/Real Data/Reco14/Stripping20r1/WGBandQSelection9/90000000/PSIX.MDST'
    ]
if year == '2012':
    BK_locations = [
     '/LHCb/Collision12/Beam4000GeV-VeloClosed-MagDown/Real Data/Reco14/Stripping20/WGBandQSelection9/90000000/PSIX.MDST'
    ,'/LHCb/Collision12/Beam4000GeV-VeloClosed-MagUp/Real Data/Reco14/Stripping20/WGBandQSelection9/90000000/PSIX.MDST'
    ]

data = LHCbDataset()
bk = BKQuery()

for path in BK_locations:
    bk.path = path
    tmp = bk.getDataset()
    print path, len(tmp.files)
    if len(tmp.files) > 0:
        data.extend( tmp )

import sys
if len(data.files) < 1:
    sys.exit()

j = Job(
  name           = job_name,
  application    = DV,
  splitter       = SplitByFiles(filesPerJob = 3),
  inputdata      = data,
  outputfiles     = [LocalFile("*.root")],
  do_auto_resubmit = True,
  backend        = Dirac(),
  postprocessors = [RootMerger( files = ['Tuples.root'], ignorefailed = True )]
  )
j.submit()

