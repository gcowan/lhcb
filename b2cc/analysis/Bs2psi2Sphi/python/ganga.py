# Script to create DaVinci Job
# Greig Cowan

import sys

year = sys.argv[1]
job_name = 'Bs2psi2Sphi_' + year

script = '/afs/cern.ch/user/g/gcowan/lhcb/lhcb/b2cc/analysis/Bs2psi2Sphi/python/DV_Bs2psi2Sphi_MC.py'

DV = DaVinci()
DV.version = 'v36r1'
DV.optsfile = [File(script)]
DV.user_release_area = '/afs/cern.ch/user/g/gcowan/cmtuser'

BK_locations = []

if year == '2012':
    BK_locations = [
       '/MC/2012/Beam4000GeV-2012-MagDown-Nu2.5-Pythia6/Sim08a/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/13144020/ALLSTREAMS.DST',
       '/MC/2012/Beam4000GeV-2012-MagDown-Nu2.5-Pythia8/Sim08a/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/13144020/ALLSTREAMS.DST',
       '/MC/2012/Beam4000GeV-2012-MagUp-Nu2.5-Pythia6/Sim08a/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/13144020/ALLSTREAMS.DST',
       '/MC/2012/Beam4000GeV-2012-MagUp-Nu2.5-Pythia8/Sim08a/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/13144020/ALLSTREAMS.DST'
	]

print script

data = LHCbDataset()
bk = BKQuery()
for path in BK_locations:
	bk.path = path
	tmp = bk.getDataset()
	print path, len(tmp.files), tmp.files[0].name
	if len(tmp.files) > 0:
		data.files += tmp.files
		#data.extend( tmp.files )

print data

import sys
if len(data.files) < 1:
	sys.exit()

j = Job(
  name           = job_name,
  application    = DV,
  splitter       = SplitByFiles(filesPerJob = 3, maxFiles = -1),
  inputdata      = data,
  outputfiles     = [LocalFile("*.root")],
  do_auto_resubmit = True,
  backend        = Dirac(),
  postprocessors = [RootMerger( files = ['Bs2psi2Sphi.root'], ignorefailed = True )]
  )
j.submit()

