#!/bin/bash

source /cvmfs/lhcb.cern.ch/group_login.sh
/cvmfs/lhcb.cern.ch/lib/lhcb/LBSCRIPTS/LBSCRIPTS_v7r10p4/InstallArea/scripts/SetupProject.sh DaVinci
SetupProject.sh DaVinci

RAPIDFITROOT=/Home/gcowan1/software/RapidFit/trunk
RAPIDFITROOTTMP=/Home/gcowan1/software/tmp/trunk
BC=/Home/gcowan1/lhcb/lhcb/b2cc/analysis/phi_s/3fb/fits/4D/XMLFOLDER/new/sim08e
CONFIG1=$BC/stripped_back_MC_fit_reco_time_untagged_biased_tagged.xml
CONFIG2=$BC/stripped_back_MC_fit_reco_time_untagged_biased_tagged_no_weights.xml

myID=`hostid`_$RANDOM
workdir=/tmp/${myID}
mkdir -p $workdir
echo "Workdir "$workdir
cd $workdir

cp $CONFIG1 tmp1.xml
cp $CONFIG2 tmp2.xml
REPLACE='s/DecayTree0/DecayTree'$1'/'
sed -i $REPLACE tmp1.xml
sed -i $REPLACE tmp2.xml

export RAPIDFITROOT=/Home/gcowan1/software/RapidFit/trunk
$RAPIDFITROOT/bin/fitting -f tmp1.xml --OutputLevel 1
pre=${myID}"_weighted"
rename Global_Fit_Result $pre RapidFit*/*
$RAPIDFITROOT/bin/fitting -f tmp2.xml --OutputLevel 1
pre=${myID}"_unweighted"
rename Global_Fit_Result $pre RapidFit*/*


datadir=$BC/many_fits/data_new
mkdir -p $datadir
cd $datadir

cp -rf  $workdir/RapidFit*/*root .
#rm -rf $workdir
