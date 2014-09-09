#!/bin/bash

source /cvmfs/lhcb.cern.ch/group_login.sh
/cvmfs/lhcb.cern.ch/lib/lhcb/LBSCRIPTS/LBSCRIPTS_v7r10p4/InstallArea/scripts/SetupProject.sh DaVinci
SetupProject.sh DaVinci

RAPIDFITROOT=/Home/gcowan1/software/RapidFit/trunk
RAPIDFITROOTTMP=/Home/gcowan1/software/tmp/trunk
BC=/Home/gcowan1/lhcb/lhcb/b2cc/analysis/phi_s/3fb/toy/lower_acceptance/
CONFIG1=$BC/untagged_gen.xml
CONFIG2=$BC/untagged_fit.xml

myID=`hostid`_$RANDOM
workdir=/tmp/${myID}
mkdir -p $workdir
echo "Workdir "$workdir
cd $workdir

datadir=$BC/all_time_200bin_fixed_gen_50bin_variable_fit/
mkdir -p $datadir
echo `hostname` > $datadir/${myID}_jobRunning

export RAPIDFITROOT=/Home/gcowan1/software/RapidFit/trunk
$RAPIDFITROOT/bin/fitting -f $CONFIG1 --saveOneDataSet test.root --useUUID | tee gen_stdout
$RAPIDFITROOT/bin/fitting -f $CONFIG2 --doPulls pulls.root --OutputLevel 1 | tee fit_stdout 

cd $datadir

cp -f  $workdir/pulls.root ${myID}_pulls.root
cp -f  $workdir/gen_stdout ${myID}_gen_stdout
cp -f  $workdir/fit_stdout ${myID}_fit_stdout
#rm -rf $workdir
