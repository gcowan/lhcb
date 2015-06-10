#!/bin/bash
#$ -e ~/logs/
#$ -o ~/logs/

RAPIDFITROOT=~/software/RapidFit/trunk
SRC=/Users/gcowan/lhcb/rd/MoM
BC=/Users/gcowan/lhcb/rd/MoM/toy_g1_g2
CONFIG1=$BC/B2Kll_nominal_gen.xml
CONFIG2=$BC/B2Kll_nominal_fit.xml
CONFIG3=$BC/B2Kll_modified_fit.xml

myID=`hostid`_$RANDOM
#workdir=/tmp/${myID}
#mkdir -p $workdir
#echo "Workdir "$workdir
#cd $workdir

datadir=$BC/results/
mkdir -p $datadir
cd $datadir

export RAPIDFITROOT=~/software/RapidFit/trunk

for i in `seq -w 0 200`
do
    # First generate some events
    $RAPIDFITROOT/bin/fitting -f $CONFIG1 --saveOneDataSet toy.root --useUUID | tee gen_stdout

    # Then fit those events and calculate fit fractions
    $RAPIDFITROOT/bin/fitting -f $CONFIG2 --OutputLevel 1 --doPulls pulls.root | tee fit_stdout_${i}

    # Then compute the moments
    $SRC/get_moments toy.root

    mv toy.root toy_${i}.root
    mv pulls.root pulls_${i}.root
    mv moments.root moments_${i}.root
done
