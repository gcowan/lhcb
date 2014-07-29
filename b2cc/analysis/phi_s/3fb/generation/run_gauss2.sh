#!/bin/bash

source /cvmfs/lhcb.cern.ch/group_login.sh
. SetupProject.sh Gauss

BC=/Home/gcowan1/lhcb/lhcb/b2cc/analysis/phi_s/3fb/generation

ID=$RANDOM

myID=`hostid`_${ID}
workdir=/tmp/${myID}
mkdir -p $workdir
echo "Workdir "$workdir
cd $workdir

sed s/"GaussGen.RunNumber        = 1082"/"GaussGen.RunNumber        = ${ID}"/g $BC/Gauss-Job.py > Gauss-Job.py

#gaudirun.py Gauss-Job.py /cvmfs/lhcb.cern.ch/lib/lhcb/GAUSS/GAUSS_v45r3/Sim/Gauss/options/Gauss-2012.py $GAUSSOPTS/GenStandAlone.py $DECFILESROOT/options/13144001.py  $LBPYTHIAROOT/options/Pythia.py
gaudirun.py Gauss-Job.py /cvmfs/lhcb.cern.ch/lib/lhcb/GAUSS/GAUSS_v45r3/Sim/Gauss/options/Gauss-2012.py $GAUSSOPTS/GenStandAlone.py $DECFILESROOT/options/13144004.py  $LBPYTHIAROOT/options/Pythia.py

datadir=/Disk/speyside8/lhcb/gcowan1/generation/Bs2JpsiPhi_dG0/
mkdir -p $datadir
cd $datadir

#cp -f  $workdir/Gauss-13144001-1000ev-2014*.xgen ${myID}_Gauss-13144001-1000ev-20140527.xgen
cp -f  $workdir/Gauss-13144004-1000ev-2014*.xgen ${myID}_Gauss-13144004-1000ev-20140610.xgen
rm -rf $workdir
