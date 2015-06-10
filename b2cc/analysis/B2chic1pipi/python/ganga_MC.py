# Script to create DaVinci Job
# Greig Cowan 

import sys

year = sys.argv[1]
mode = sys.argv[2]

if mode not in ['norm', 'signal_Bd', 'signal_Bs']: sys.exit()

if mode == 'norm':
	script='/afs/cern.ch/user/g/gcowan/lhcb/lhcb/b2cc/B2chicpipi/analysis/python/HistosAndTuples_MC_'+ year +'_norm.py'
else:
	script='/afs/cern.ch/user/g/gcowan/lhcb/lhcb/b2cc/B2chicpipi/analysis/python/HistosAndTuples_MC_'+ year +'.py'

job_name = 'MC' + str(year) + mode
print job_name
print script

DV = Bender()
DV.version = 'v25r3'
DV.module = script
DV.events = -1


BK_locations = []

if year == '2011' and mode == 'signal_Bd':
	BK_locations = [
	  '/MC/2011/Beam3500GeV-2011-MagDown-Nu2-Pythia6/Sim08g/Digi13/Trig0x40760037/Reco14c/Stripping20r1NoPrescalingFlagged/11244215/ALLSTREAMS.DST'
	 ,'/MC/2011/Beam3500GeV-2011-MagDown-Nu2-Pythia8/Sim08g/Digi13/Trig0x40760037/Reco14c/Stripping20r1NoPrescalingFlagged/11244215/ALLSTREAMS.DST'
	 ,'/MC/2011/Beam3500GeV-2011-MagUp-Nu2-Pythia6/Sim08g/Digi13/Trig0x40760037/Reco14c/Stripping20r1NoPrescalingFlagged/11244215/ALLSTREAMS.DST'
	 ,'/MC/2011/Beam3500GeV-2011-MagUp-Nu2-Pythia8/Sim08g/Digi13/Trig0x40760037/Reco14c/Stripping20r1NoPrescalingFlagged/11244215/ALLSTREAMS.DST'
	]
if year == '2012' and mode =='signal_Bd':
	BK_locations = [
	  '/MC/2012/Beam4000GeV-2012-MagDown-Nu2.5-Pythia6/Sim08g/Digi13/Trig0x409f0045/Reco14c/Stripping20NoPrescalingFlagged/11244215/ALLSTREAMS.DST'
	 ,'/MC/2012/Beam4000GeV-2012-MagDown-Nu2.5-Pythia8/Sim08g/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/11244215/ALLSTREAMS.DST'
	 ,'/MC/2012/Beam4000GeV-2012-MagUp-Nu2.5-Pythia6/Sim08g/Digi13/Trig0x409f0045/Reco14c/Stripping20NoPrescalingFlagged/11244215/ALLSTREAMS.DST'
	 ,'/MC/2012/Beam4000GeV-2012-MagUp-Nu2.5-Pythia8/Sim08g/Digi13/Trig0x409f0045/Reco14c/Stripping20NoPrescalingFlagged/11244215/ALLSTREAMS.DST'
	]

if year == '2011' and mode == 'signal_Bs':
	BK_locations = [
	  '/MC/2011/Beam3500GeV-2011-MagDown-Nu2-Pythia6/Sim08g/Digi13/Trig0x40760037/Reco14c/Stripping20r1NoPrescalingFlagged/13244214/ALLSTREAMS.DST'
	, '/MC/2011/Beam3500GeV-2011-MagDown-Nu2-Pythia8/Sim08g/Digi13/Trig0x40760037/Reco14c/Stripping20r1NoPrescalingFlagged/13244214/ALLSTREAMS.DST'
	, '/MC/2011/Beam3500GeV-2011-MagUp-Nu2-Pythia6/Sim08g/Digi13/Trig0x40760037/Reco14c/Stripping20r1NoPrescalingFlagged/13244214/ALLSTREAMS.DST'
	, '/MC/2011/Beam3500GeV-2011-MagUp-Nu2-Pythia8/Sim08g/Digi13/Trig0x40760037/Reco14c/Stripping20r1NoPrescalingFlagged/13244214/ALLSTREAMS.DST'
	]
if year == '2012' and mode =='signal_Bs':
	BK_locations = [
	  '/MC/2012/Beam4000GeV-2012-MagDown-Nu2.5-Pythia6/Sim08g/Digi13/Trig0x409f0045/Reco14c/Stripping20NoPrescalingFlagged/13244214/ALLSTREAMS.DST'
	, '/MC/2012/Beam4000GeV-2012-MagDown-Nu2.5-Pythia8/Sim08g/Digi13/Trig0x409f0045/Reco14a/Stripping20NoPrescalingFlagged/13244214/ALLSTREAMS.DST'
	, '/MC/2012/Beam4000GeV-2012-MagUp-Nu2.5-Pythia6/Sim08g/Digi13/Trig0x409f0045/Reco14c/Stripping20NoPrescalingFlagged/13244214/ALLSTREAMS.DST'
	, '/MC/2012/Beam4000GeV-2012-MagUp-Nu2.5-Pythia8/Sim08g/Digi13/Trig0x409f0045/Reco14c/Stripping20NoPrescalingFlagged/13244214/ALLSTREAMS.DST'
	]

if year == '2011' and mode == 'norm':
	BK_locations = [
	  '/MC/2011/Beam3500GeV-2011-MagDown-Nu2-Pythia6/Sim08g/Digi13/Trig0x40760037/Reco14c/Stripping20r1NoPrescalingFlagged/13244202/ALLSTREAMS.DST'
	 ,'/MC/2011/Beam3500GeV-2011-MagDown-Nu2-Pythia8/Sim08g/Digi13/Trig0x40760037/Reco14c/Stripping20r1NoPrescalingFlagged/13244202/ALLSTREAMS.DST'
	 ,'/MC/2011/Beam3500GeV-2011-MagUp-Nu2-Pythia6/Sim08g/Digi13/Trig0x40760037/Reco14c/Stripping20r1NoPrescalingFlagged/13244202/ALLSTREAMS.DST'
	 ,'/MC/2011/Beam3500GeV-2011-MagUp-Nu2-Pythia8/Sim08g/Digi13/Trig0x40760037/Reco14c/Stripping20r1NoPrescalingFlagged/13244202/ALLSTREAMS.DST'
	]
if year == '2012' and mode =='norm':
	BK_locations = [
	  '/MC/2012/Beam4000GeV-2012-MagDown-Nu2.5-Pythia6/Sim08g/Digi13/Trig0x409f0045/Reco14c/Stripping20NoPrescalingFlagged/13244202/ALLSTREAMS.DST'
	 ,'/MC/2012/Beam4000GeV-2012-MagDown-Nu2.5-Pythia8/Sim08g/Digi13/Trig0x409f0045/Reco14c/Stripping20NoPrescalingFlagged/13244202/ALLSTREAMS.DST'
	 ,'/MC/2012/Beam4000GeV-2012-MagUp-Nu2.5-Pythia6/Sim08g/Digi13/Trig0x409f0045/Reco14c/Stripping20NoPrescalingFlagged/13244202/ALLSTREAMS.DST'
	 ,'/MC/2012/Beam4000GeV-2012-MagUp-Nu2.5-Pythia8/Sim08g/Digi13/Trig0x409f0045/Reco14c/Stripping20NoPrescalingFlagged/13244202/ALLSTREAMS.DST'
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

