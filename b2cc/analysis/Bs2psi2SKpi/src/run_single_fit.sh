#PBS -S /bin/bash
#PBS -N spin2_sFit
#PBS -e /home/gcowan/logs
#PBS -o /home/gcowan/logs
#PBS -l walltime=48:00:00
#PBS -l pmem=8gb
#PBS -l mem=8gb

# Setup work directory
myID=`echo $PBS_JOBID  | cut -f 1 -d .` 
workdir=/scratch/$USER/$myID
mkdir -p $workdir
echo "Workdir "$workdir

# Where do I put the output?
#datadir=/home/gcowan/lhcb/Z4430/B_s0/fits/K892_K21430_sFit_tight_data/
datadir=/home/gcowan/lhcb/Z4430/B_s0/fits/new_bkg/res_params/K892_K21430_NR_cFit_tight_data/
#datadir=/home/gcowan/lhcb/Z4430/B_s0/fits/new_bkg/K892_NR_cFit_tight_data/
mkdir -p $datadir

cd $workdir

/sw/lib/lhcb/LBSCRIPTS/LBSCRIPTS_v7r1/InstallArea/scripts/SetupProject.sh DaVinci
RAPIDFITROOT=/home/gcowan/public/test_Bs0/trunk 
#$RAPIDFITROOT/bin/fitting -f /home/gcowan/lhcb/Z4430/B_s0/xml/Bs2psi2SKpi_fit_Isobar_with_K892_K1410_sFit.xml --saveFitXML --calculateFitFractions | tee stdout                                                                                                                      
#$RAPIDFITROOT/bin/fitting -f /home/gcowan/lhcb/Z4430/B_s0/xml/Bs2psi2SKpi_fit_Isobar_with_K892_K21430_K11410_sFit.xml --saveFitXML --calculateFitFractions | tee stdout                                                                                                                      
#$RAPIDFITROOT/bin/fitting -f /home/gcowan/lhcb/Z4430/B_s0/xml/Bs2psi2SKpi_fit_Isobar_with_K892_K21430_sFit.xml --saveFitXML --calculateFitFractions | tee stdout                                                                                                                      
$RAPIDFITROOT/bin/fitting -f /home/gcowan/lhcb/Z4430/B_s0/xml/Bs2psi2SKpi_fit_Isobar_with_K892_K21430_NR_cFit.xml --saveFitXML --calculateFitFractions --OutputLevel 2| tee stdout                                                                                                                      
#$RAPIDFITROOT/bin/fitting -f /home/gcowan/lhcb/Z4430/B_s0/xml/Bs2psi2SKpi_fit_Isobar_with_K892_NR_cFit.xml --saveFitXML --calculateFitFractions | tee stdout                                                                                                                      
#$RAPIDFITROOT/bin/fitting -f /home/gcowan/lhcb/Z4430/B_s0/xml/Bs2psi2SKpi_fit_Isobar_with_full_sWave_sFit.xml --saveFitXML --calculateFitFractions | tee stdout                                                                                                                      
#$RAPIDFITROOT/bin/fitting -f /home/gcowan/lhcb/Z4430/B_s0/xml/Bs2psi2SKpi_fit_Isobar_with_spin2_sFit.xml --saveFitXML --calculateFitFractions | tee stdout                                                                                                                      

tar cvfz Rapid.tgz RapidFitOutput*

cd $datadir

cp -f  $workdir/*xml  .
cp -f  $workdir/stdout  ${myID}_stdout
cp -f  $workdir/Rapid.tgz  ${myID}_Rapid.tgz
rm -rf $workdir

