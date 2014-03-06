#!/bin/bash

# SGE submission options
#$ -S /bin/bash
#$ -N lifetime_fit
#$ -e /exports/home/gcowan1/logs
#$ -o /exports/home/gcowan1/logs
#$ -l h_rt=1:00:00
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
LIFETIME=/exports/home/gcowan1/lhcb/b2cc/analysis/phi_s/3fb/fits 
CONFIG=$LIFETIME/time/lifetime_fit.xml
$RAPIDFITROOT/bin/fitting -f $CONFIG --OutputLevel 2 --saveFitXML | tee stdout                                                                                                                      

tar cvfz Rapid.tgz RapidFitOutput*

datadir=/exports/home/gcowan1/tmp
mkdir -p $datadir
cd $datadir

cp -f  $workdir/*xml .
cp -f  $workdir/stdout  ${myID}_stdout
cp -f  $workdir/Rapid.tgz  ${myID}_Rapid.tgz
rm -rf $workdir
