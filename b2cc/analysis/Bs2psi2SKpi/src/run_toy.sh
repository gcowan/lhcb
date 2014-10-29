#PBS -S /bin/bash
#PBS -N spin2_sFit
#PBS -e /home/gcowan/logs
#PBS -o /home/gcowan/logs
#PBS -l walltime=48:00:00
#PBS -l pmem=4gb
#PBS -l mem=4gb

# Setup work directory
myID=`echo $PBS_JOBID  | cut -f 1 -d .` 
workdir=/scratch/$USER/$myID
mkdir -p $workdir
echo "Workdir "$workdir

# Where do I put the output?
datadir=/home/gcowan/lhcb/Z4430/B_s0/fits/toy/K892_K21430_K11410_NR_cFit_tight_data_nominal/362_signal/
#datadir=/home/gcowan/lhcb/Z4430/B_s0/fits/toy/K892_K21430_K800_K01430_NR_cFit_tight_data_nominal/362_signal/
#datadir=/home/gcowan/lhcb/Z4430/B_s0/fits/toy/K892_K21430_NR_cFit_tight_data_nominal/362_signal/
#datadir=/home/gcowan/lhcb/Z4430/B_s0/fits/toy/K892_K21430_K01430_NR_cFit_tight_data_nominal/
#datadir=/home/gcowan/lhcb/Z4430/B_s0/fits/toy/K892_K21430_K11410_K01430_NR_cFit_tight_data_nominal/
mkdir -p $datadir

cd $workdir

/sw/lib/lhcb/LBSCRIPTS/LBSCRIPTS_v7r1/InstallArea/scripts/SetupProject.sh DaVinci
RAPIDFITROOT=/home/gcowan/public/test_Bs0/trunk 
$RAPIDFITROOT/bin/fitting -f /home/gcowan/lhcb/Z4430/B_s0/xml/toys/K892_K21430_K11410_NR_cFit_tight_data_nominal.xml --useUUID --calculateFitFractions | tee stdout                                                                                                                      
#$RAPIDFITROOT/bin/fitting -f /home/gcowan/lhcb/Z4430/B_s0/xml/toys/K892_K21430_K800_K01430_NR_cFit_tight_data_nominal.xml --useUUID --calculateFitFractions | tee stdout                                                                                                                      
#$RAPIDFITROOT/bin/fitting -f /home/gcowan/lhcb/Z4430/B_s0/xml/toys/K892_K21430_NR_cFit_tight_data_nominal.xml --useUUID --calculateFitFractions | tee stdout                                                                                                                      
#$RAPIDFITROOT/bin/fitting -f /home/gcowan/lhcb/Z4430/B_s0/xml/toys/K892_K21430_K01430_NR_cFit_tight_data_nominal.xml --useUUID --calculateFitFractions | tee stdout                                                                                                                      
#$RAPIDFITROOT/bin/fitting -f /home/gcowan/lhcb/Z4430/B_s0/xml/toys/K892_K21430_K11410_K01430_NR_cFit_tight_data_nominal.xml --useUUID --calculateFitFractions | tee stdout                                                                                                                      

tar cvfz Rapid.tgz RapidFitOutput*

cd $datadir

cp -f  $workdir/*xml  .
cp -f  $workdir/stdout  ${myID}_stdout
cp -f  $workdir/Rapid.tgz  ${myID}_Rapid.tgz
cp -f  $workdir/fitFractions.root  ${myID}_fitFractions.root
rm -rf $workdir

