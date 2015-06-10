#! /bin/bash

hadd -f pulls.root pulls_*root
hadd -f mod_pulls.root mod_pulls_*root
hadd -f moments.root moments_*root
~/software/RapidFit/trunk/bin/RapidPlot pulls.root 
~/software/RapidFit/trunk/bin/RapidPlot mod_pulls.root 
root -l ../../plot_moments.C 
root -l ../../plot_toy_by_toy_diff.C 
