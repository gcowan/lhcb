#!/bin/bash

# SGE submission options
#$ -S /bin/bash
#$ -N angular_fit
#$ -e /exports/home/gcowan1/logs
#$ -o /exports/home/gcowan1/logs
#$ -l h_rt=0:05:00
#$ -q ecdf 
#$ -cwd

myID=`echo $JOB_ID  | cut -f 1 -d .` 
workdir=$TMPDIR/$myID
mkdir -p $workdir
echo "Workdir "$workdir
cd $workdir

source /cvmfs/lhcb.cern.ch/group_login.sh
SetupProject.sh DaVinci

RAPIDFITROOT=/exports/home/gcowan1/software/RapidFit/trunk
ANGULAR=/exports/home/gcowan1/lhcb/b2cc/analysis/phi_s/3fb/toy/angular_resolution/no_angular_acceptance 
CONFIG1=$ANGULAR/Bs2JpsiPhi_2012_singlebin_toy_gen.xml
CONFIG2=$ANGULAR/Bs2JpsiPhi_2012_singlebin_toy_fit_nominal.xml
CONFIG3=$ANGULAR/Bs2JpsiPhi_2012_singlebin_toy_fit.xml
$RAPIDFITROOT/bin/fitting -f $CONFIG1 --saveOneDataSet test.root
$RAPIDFITROOT/bin/fitting -f $CONFIG2 --doPulls pulls_nominal.root
python /exports/home/gcowan1/lhcb/b2cc/analysis/phi_s/3fb/toy/angular_resolution/Preselection_trans.py test.root
$RAPIDFITROOT/bin/fitting -f $CONFIG3 --doPulls pulls_smeared.root

datadir=$ANGULAR/one_angle_smeared
mkdir -p $datadir
cd $datadir

cp -f  $workdir/pulls_nominal.root ${myID}_pulls_nominal.root
cp -f  $workdir/pulls_smeared.root ${myID}_pulls_smeared.root
rm -rf $workdir
