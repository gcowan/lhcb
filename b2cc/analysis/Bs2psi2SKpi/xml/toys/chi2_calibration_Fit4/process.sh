hadd -f results_new_Fit4/chi2.root results_new_Fit4/*_chi2.root
root -l -b -q '../../../src/plot_CL_chi2_roofit.C("results_new_Fit4/chi2.root", 10, 110, 40, 10, 100, "CL_roofit.pdf")'
root -l -b -q '../../../src/plot_CL_chi2_roofit.C("results_new_Fit4/chi2.root", 10, 110, 40, 10, 100, "CL_roofit_pearson.pdf", "pearson_chi2")'

