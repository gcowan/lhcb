# Script to create DaVinci Job
# Greig Cowan

import sys

year = str(sys.argv[1])
mode = str(sys.argv[2])

end = '.py'
if mode == 'norm': middle = '_Lb2JpsipK_'
if mode == 'Lb'  : middle = '_Lb2chicpK_'

script='/afs/cern.ch/user/d/dcraik/Lb2chicpK/lhcb/b2cc/analysis/Lb2chicpK/python/DV' + middle + year + end

job_name = middle + 'data' + str(year)
print job_name
print script

DV = DaVinci()
DV.version = 'v36r3p1'
DV.optsfile = [File(script)]


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

print data

import sys
if len(data.files) < 1:
    sys.exit()

j = Job(
  name           = job_name,
  application    = DV,
  splitter       = SplitByFiles(filesPerJob = 2, maxFiles = -1),
  inputdata      = data,
  outputfiles     = [LocalFile("*.root")],
  do_auto_resubmit = True,
  backend        = Dirac(),
  postprocessors = [RootMerger( files = ['DVTuples1.root'], ignorefailed = True )]
  )
queues.add(j.submit)

