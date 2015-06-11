hadd -f results_new_Fit1/chi2.root results_new_Fit1/*_chi2.root
root -l -b -q '../../../src/plot_CL_chi2_roofit.C("results_new_Fit1/chi2.root", 10, 110, 40, 10, 100, "CL_roofit.pdf")'
hadd -f results_new_Fit1_high_N/chi2.root results_new_Fit1_high_N/*_chi2.root
root -l -b -q '../../../src/plot_CL_chi2_roofit.C("results_new_Fit1_high_N/chi2.root", 10, 110, 40, 10, 100, "CL_roofit_10times.pdf")'
hadd -f results_new_Fit1_very_high_N/chi2.root results_new_Fit1_very_high_N/*_chi2.root
root -l -b -q '../../../src/plot_CL_chi2_roofit.C("results_new_Fit1_very_high_N/chi2.root", 10, 110, 40, 10, 100, "CL_roofit_100times.pdf")'
hadd -f results_new_Fit1_high_N/chi2_large.root results_new_Fit1_high_N/*_chi2_large.root
root -l -b -q '../../../src/plot_CL_chi2_roofit.C("results_new_Fit1_high_N/chi2_large.root", 500, 720, 600, 550, 650, "CL_roofit_10times_more_bins.pdf")'

