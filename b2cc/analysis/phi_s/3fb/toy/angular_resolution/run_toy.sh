#! /bin/bash

for i in `seq -w 105 200`; do
~/software/RapidFit/trunk/bin/fitting -f Bs2JpsiPhi_2012_singlebin_toy_gen.xml --saveOneDataSet test.root;
~/software/RapidFit/trunk/bin/fitting -f Bs2JpsiPhi_2012_singlebin_toy_fit_nominal.xml --doPulls pulls_nominal$i.root;
python Preselection_trans.py test.root;
~/software/RapidFit/trunk/bin/fitting -f Bs2JpsiPhi_2012_singlebin_toy_fit.xml --doPulls pulls_smeared$i.root;
done

