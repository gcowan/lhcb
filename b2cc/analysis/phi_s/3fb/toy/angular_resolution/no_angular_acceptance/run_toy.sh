#! /bin/bash

for i in `seq -w 1 100`; do
~/software/RapidFit/trunk/bin/fitting -f Bs2JpsiPhi_2012_singlebin_toy_gen.xml --saveOneDataSet test.root;
~/software/RapidFit/trunk/bin/fitting -f Bs2JpsiPhi_2012_singlebin_toy_fit_nominal.xml --doPulls pulls_nominal$i.root;
done

