# Script to create DaVinci Job
# Greig Cowan

import sys

year = sys.argv[1]
mode = sys.argv[2]
magnet = sys.argv[3]

if mode not in ['norm', 'signal', 'background_Bd', 'Bu_JpsiX', 'Bd_JpsiX', 'Bs_JpsiX', 'Lb_JpsiX']: sys.exit()
if magnet not in ['MagDown', 'MagUp']: sys.exit()

if mode == 'norm':
	script='/afs/cern.ch/user/g/gcowan/lhcb/lhcb/b2cc/analysis/Lb2chicpK/python/DV_Lb2chicpK_norm_' + year + '_MC.py'
else:
	script='/afs/cern.ch/user/g/gcowan/lhcb/lhcb/b2cc/analysis/Lb2chicpK/python/DV_Lb2chicpK_' + year + '_MC.py'

job_name = 'MC' + str(year) + mode + magnet
print job_name
print script

DV = DaVinci()
DV.version = 'v36r1'
DV.optsfile = [File(script)]

BK_locations = []

if year == '2011' and mode == 'background_Bd':
    # Bd -> chic(1,2)K* reflection
	BK_locations = [
	]
if year == '2011' and mode == 'signal':
	BK_locations = [
      '/MC/2011/Beam3500GeV-2011-' + magnet + '-Nu2-Pythia6/Sim08e/Digi13/Trig0x40760037/Reco14a/Stripping20r1NoPrescalingFlagged/15244202/ALLSTREAMS.DST'
    , '/MC/2011/Beam3500GeV-2011-' + magnet + '-Nu2-Pythia8/Sim08e/Digi13/Trig0x40760037/Reco14a/Stripping20r1NoPrescalingFlagged/15244202/ALLSTREAMS.DST'
	]
if year == '2012' and mode =='signal':
	BK_locations = [
      '/MC/2012/Beam4000GeV-2012-' + magnet + '-Nu2.5-Pythia6/Sim08e/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/15244202/ALLSTREAMS.DST'
	, '/MC/2012/Beam4000GeV-2012-' + magnet + '-Nu2.5-Pythia8/Sim08e/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/15244202/ALLSTREAMS.DST'
	]

if year == '2011' and mode == 'signal_Bs':
	BK_locations = [
	]
if year == '2012' and mode =='signal_Bs':
	BK_locations = [
	]

if year == '2011' and mode == 'norm':
	BK_locations = [
	]
if year == '2012' and mode =='norm':
	BK_locations = [
	]

if year == '2012' and mode == 'Bu_JpsiX':
    BK_locations = [
      '/MC/2012/Beam4000GeV-2012-' + magnet + '-Nu2.5-Pythia6/Sim08a/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/12442001/ALLSTREAMS.DST'
      ,'/MC/2012/Beam4000GeV-2012-' + magnet + '-Nu2.5-Pythia8/Sim08a/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/12442001/ALLSTREAMS.DST'
    ]

if year == '2012' and mode == 'Bd_JpsiX':
    BK_locations = [
      '/MC/2012/Beam4000GeV-2012-' + magnet + '-Nu2.5-Pythia6/Sim08a/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/11442001/ALLSTREAMS.DST'
      ,'/MC/2012/Beam4000GeV-2012-' + magnet + '-Nu2.5-Pythia8/Sim08a/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/11442001/ALLSTREAMS.DST'
    ]

if year == '2012' and mode == 'Bs_JpsiX':
    BK_locations = [
      '/MC/2012/Beam4000GeV-2012-' + magnet + '-Nu2.5-Pythia6/Sim08a/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/13442001/ALLSTREAMS.DST'
      ,'/MC/2012/Beam4000GeV-2012-' + magnet + '-Nu2.5-Pythia8/Sim08a/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/13442001/ALLSTREAMS.DST'
    ]

if year == '2011' and mode == 'Lb_JpsiX':
    BK_locations = [
      '/MC/2011/Beam3500GeV-2011-' + magnet + '-Nu2-EmNoCuts/Sim05/Trig0x40760037Flagged/Reco12a/Stripping17NoPrescalingFlagged/15442001/ALLSTREAMS.DST'
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
  splitter       = SplitByFiles(filesPerJob = 20),
  inputdata      = data,
  outputfiles     = [LocalFile("*.root")],
  do_auto_resubmit = True,
  backend        = Dirac(),
  postprocessors = [RootMerger( files = ['DVTuples1.root'], ignorefailed = True )]
  )
j.submit()

