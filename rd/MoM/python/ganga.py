# Script to create DaVinci Job
# Greig Cowan

import sys

year = sys.argv[1]
mode = sys.argv[2]
job_name = 'B2Kll_'+ mode

script = '/afs/cern.ch/user/g/gcowan/lhcb/lhcb/rd/MoM/python/DV_B2Kll_' + year +  '.py'
if   mode == 'DIMUON':
    script = '/afs/cern.ch/user/g/gcowan/lhcb/lhcb/rd/MoM/python/BuKMuMu_data.py'
elif mode == 'LEPTONIC':
    script = '/afs/cern.ch/user/g/gcowan/lhcb/lhcb/rd/MoM/python/BuKee_data2.py'

DV = DaVinci()
DV.version = 'v37r2p2'
DV.optsfile = [File(script)]
DV.user_release_area = '/afs/cern.ch/user/g/gcowan/cmtuser'

BK_locations = []

if year == '2012':
    BK_locations = [
       '/LHCb/Collision12/Beam4000GeV-VeloClosed-MagDown/Real Data/Reco14/Stripping20/90000000/' + mode + '.DST',
       '/LHCb/Collision12/Beam4000GeV-VeloClosed-MagUp/Real Data/Reco14/Stripping20/90000000/' + mode + '.DST'
	]
if year == '2011':
    BK_locations = [
       '/LHCb/Collision11/Beam3500GeV-VeloClosed-MagDown/Real Data/Reco14/Stripping20r1/90000000/' + mode + '.DST',
       '/LHCb/Collision11/Beam3500GeV-VeloClosed-MagUp/Real Data/Reco14/Stripping20r1/90000000/' + mode + '.DST'
	]

print script

data = LHCbDataset()
bk = BKQuery()
for path in BK_locations:
	bk.path = path
	tmp = bk.getDataset()
	print path, len(tmp.files), tmp.files[0].name
	if len(tmp.files) > 0:
		data.extend( tmp )

import sys
if len(data.files) < 1:
	sys.exit()

j = Job(
  name           = job_name,
  application    = DV,
  splitter       = SplitByFiles(filesPerJob = 30),
  inputdata      = data,
  outputfiles     = [LocalFile("*.root")],
  do_auto_resubmit = True,
  backend        = Dirac(),
  postprocessors = [RootMerger( files = ['BuKll.root'], ignorefailed = True )]
  )
j.submit()

