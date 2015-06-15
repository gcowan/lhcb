#!/bin/bash
#$ -e /Disk/speyside8/lhcb/gcowan1/Z4430/B_s0/xml/toys/mKpi_vs_mR/logs
#$ -o /Disk/speyside8/lhcb/gcowan1/Z4430/B_s0/xml/toys/mKpi_vs_mR/logs

#source /cvmfs/lhcb.cern.ch/group_login.sh
#/cvmfs/lhcb.cern.ch/lib/lhcb/LBSCRIPTS/LBSCRIPTS_v7r10p4/InstallArea/scripts/SetupProject.sh DaVinci
#SetupProject.sh DaVinci

RAPIDFITROOT=/Home/gcowan1/software/RapidFit_CPLAB/trunk
BC=/Disk/speyside8/lhcb/gcowan1/Z4430/B_s0/xml/toys/chi2_calibration_Fit0
SRC=/Disk/speyside8/lhcb/gcowan1/Z4430/B_s0/src
CONFIG1=$BC/nominal_gen.xml
CONFIG2=$BC/nominal_fit.xml

myID=`hostid`_$RANDOM
workdir=/tmp/${myID}
mkdir -p $workdir
echo $myID
#echo "JobID" $JOB_ID 
cd $workdir

datadir=$BC/results_new_Fit0/
mkdir -p $datadir
echo `hostname` > $datadir/${myID}_jobRunning

# First generate some events
$RAPIDFITROOT/bin/fitting -f $CONFIG1 --saveOneDataSet toy.root --useUUID | tee gen_stdout

# Then fit those events and calculate fit fractions
$RAPIDFITROOT/bin/fitting -f $CONFIG2 --saveFitXML          --calculateFitFractions --OutputLevel 1 | tee fitFractions_with_bkg_nominal_stdout 
mv fitFractions.root fitFractions_with_bkg_nominal.root
cp outputXMLFile.xml outputXMLFile2.xml
$SRC/modify_toy.sh
# Then re-compute the fit fractions, but without acceptance and background
$RAPIDFITROOT/bin/fitting -f outputXMLFile.xml              --calculateFitFractions --OutputLevel 1 | tee fitFractions_without_bkg_nominal_stdout 
mv fitFractions.root fitFractions_without_bkg_nominal.root

# Now generate a large toy sample from this fit result
$SRC/modify_for_gen.sh outputXMLFile2.xml
$RAPIDFITROOT/bin/fitting -f outputXMLFile2.xml --saveOneDataSet large_toy.root
# And finally, compute the chi2 by comparing the small and large generated samples
root -l -q $SRC/compute_chi2_toy.C | tee chi2_stdout

cp -f  fitFractions_with_bkg_nominal.root       $datadir/${myID}_fitFractions_with_bkg_nominal.root
cp -f  fitFractions_with_bkg_nominal_stdout     $datadir/${myID}_fitFractions_with_bkg_nominal_stdout
cp -f  fitFractions_without_bkg_nominal.root    $datadir/${myID}_fitFractions_without_bkg_nominal.root
cp -f  fitFractions_without_bkg_nominal_stdout  $datadir/${myID}_fitFractions_without_bkg_nominal_stdout
cp -f  gen_stdout  $datadir/${myID}_gen_stdout
cp -f  chi2.root   $datadir/${myID}_chi2.root
cp -f  chi2_stdout $datadir/${myID}_chi2_stdout
#rm -rf $workdir
