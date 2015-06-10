cd moments_toy
for i in `seq -w 0 500`
do
    ~/software/RapidFit/trunk/bin/fitting -f ../B2Kstll_nominal_gen.xml --saveOneDataSet B2Kstll_gen_3.root
    ../get_moments_B2Kstll B2Kstll_gen_3.root total_and_partial_moments_${i}.root
    ../plot_moments total_and_partial_moments_${i}.root partial_moments_fit_${i}.root
done
cd -
