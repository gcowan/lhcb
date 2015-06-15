#!/bin/bash
#$ -e /Disk/speyside8/lhcb/gcowan1/Z4430/B_s0/xml/toys/mKpi_vs_mR/logs
#$ -o /Disk/speyside8/lhcb/gcowan1/Z4430/B_s0/xml/toys/mKpi_vs_mR/logs

#source /cvmfs/lhcb.cern.ch/group_login.sh
#/cvmfs/lhcb.cern.ch/lib/lhcb/LBSCRIPTS/LBSCRIPTS_v7r10p4/InstallArea/scripts/SetupProject.sh DaVinci
#SetupProject.sh DaVinci

RAPIDFITROOT=/Home/gcowan1/software/RapidFit_CPLAB/trunk
RAPIDFITMODROOT=/Home/gcowan1/software/RapidFit_mod_background/trunk
BC=/Disk/speyside8/lhcb/gcowan1/Z4430/B_s0/xml/toys/background_param
SRC=/Disk/speyside8/lhcb/gcowan1/Z4430/B_s0/src
CONFIG1=$BC/nominal_gen.xml
CONFIG2=$BC/nominal_fit.xml

myID=`hostid`_$RANDOM
workdir=/tmp/${myID}
mkdir -p $workdir
echo $myID
#echo "JobID" $JOB_ID 
cd $workdir

datadir=$BC/results_Fit5/
mkdir -p $datadir
echo `hostname` > $datadir/${myID}_jobRunning

#export RAPIDFITROOT=/Home/gcowan1/software/RapidFit/trunk
# First generate some events
$RAPIDFITROOT/bin/fitting -f $CONFIG1 --saveOneDataSet toy.root --useUUID | tee gen_stdout

# Then fit those events and calculate fit fractions
$RAPIDFITROOT/bin/fitting -f $CONFIG2 --saveFitXML          --calculateFitFractions --OutputLevel 1 | tee fitFractions_with_bkg_nominal_stdout 
mv fitFractions.root fitFractions_with_bkg_nominal.root
$SRC/modify_toy.sh
# Then re-compute the fit fractions, but without acceptance and background
$RAPIDFITROOT/bin/fitting -f outputXMLFile.xml              --calculateFitFractions --OutputLevel 1 | tee fitFractions_without_bkg_nominal_stdout 
mv fitFractions.root fitFractions_without_bkg_nominal.root


# Then fit those events again, with the modified PDF, and calculate fit fractions
$RAPIDFITMODROOT/bin/fitting -f $CONFIG2 --saveFitXML       --calculateFitFractions --OutputLevel 1 | tee fitFractions_with_bkg_modified_stdout 
mv fitFractions.root fitFractions_with_bkg_modified.root
$SRC/modify_toy.sh
# Then re-compute the fit fractions, but without acceptance and background
$RAPIDFITMODROOT/bin/fitting -f outputXMLFile.xml           --calculateFitFractions --OutputLevel 1 | tee fitFractions_without_bkg_modified_stdout 
mv fitFractions.root fitFractions_without_bkg_modified.root

cp -f  fitFractions_with_bkg_nominal.root       $datadir/${myID}_fitFractions_with_bkg_nominal.root
cp -f  fitFractions_with_bkg_nominal_stdout     $datadir/${myID}_fitFractions_with_bkg_nominal_stdout
cp -f  fitFractions_without_bkg_nominal.root    $datadir/${myID}_fitFractions_without_bkg_nominal.root
cp -f  fitFractions_without_bkg_nominal_stdout  $datadir/${myID}_fitFractions_without_bkg_nominal_stdout
cp -f  fitFractions_with_bkg_modified.root      $datadir/${myID}_fitFractions_with_bkg_modified.root
cp -f  fitFractions_with_bkg_modified_stdout    $datadir/${myID}_fitFractions_with_bkg_modified_stdout
cp -f  fitFractions_without_bkg_modified.root   $datadir/${myID}_fitFractions_without_bkg_modified.root
cp -f  fitFractions_without_bkg_modified_stdout $datadir/${myID}_fitFractions_without_bkg_modified_stdout
cp -f  gen_stdout  $datadir/${myID}_gen_stdout
#rm -rf $workdir
