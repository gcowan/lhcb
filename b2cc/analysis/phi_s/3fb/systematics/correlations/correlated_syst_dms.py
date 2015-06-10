from scipy import stats
import numpy as np

def print_correlation( covariance, total_err ):
	for i in range(9):
		for j in range(9):
			rho = covariance[i,j]/(total_err[i]*total_err[j])
			print "%+0.4f" % rho,
		print

def print_covariance( covariance ):
	for i in range(9):
		for j in range(9):
			print "%+0.4g" % covariance[i,j],
		print

def print_correlation_latex( covariance, total_err, names ):
	for n in names: print "$\\%s$ & " % n,
	print
	for i in range(9):
		print "$\\%s$ & " % names[i],
		for j in range(9):
			rho = covariance[i,j]/(total_err[i]*total_err[j])
			if j >= i:
				if abs(rho) > 0.3:
					print "$\\bf{%+0.2f}$ &" % rho,
				else:
					print "$%+0.2f$ &" % rho,
			else:
				print " & ",
		print "\\\\"

# Here is the table of systematic uncertainties
errs = [i for i in range(14)] 
names    = ['Gamma_s',	'DeltaGamma_s',	'Aperp_sq',	'Azero_sq',	'delta_para',	'delta_perp',	'phi_s',	'lambda',	'Deltam_s']
errs[0]  = [ 0.       	 ,0.0007	 ,0.0031 	 ,0.0064	 ,0.05 		,0.05 	         ,0.002	         ,0.001   	 ,0.004  ]#MassFactorisation
errs[1]  = [ 0.0001	 ,0.0008	 ,0. 	         ,0.0001	 ,0.		,0.	 	 ,0.	         ,0.   	 	 ,0.     ]#SignalWeights
errs[2]  = [ 0.0001	 ,0.0004 	 ,0.0004	 ,0.0002 	 ,0.02 	        ,0.02 		 ,0.002 	 ,0.003          ,0.001	 ]#ResonantBackground
errs[3]  = [ 0.0005	 ,0. 		 ,0. 		 ,0.		 ,0.		,0. 		 ,0.		 ,0. 		 ,0.	 ]#BcBackground
errs[4]  = [ 0.	 	 ,0. 		 ,0.0006 	 ,0.0001 	 ,0.03		,0.01 		 ,0. 		 ,0. 		 ,0.	 ]#AngularResolution 
errs[5]  = [ 0.0001 	 ,0.             ,0.0011	 ,0.0020	 ,0.01 	        ,0.		 ,0.001		 ,0.005	         ,0.002  ]#AngEfficiencyReweighting
errs[6]  = [ 0.0001  	 ,0.0002	 ,0.0011	 ,0.0004	 ,0.02		,0.01		 ,0.004		 ,0.002	         ,0.001	 ]#AngEfficiencyStat
errs[7]  = [ 0.     	 ,0.    	 ,0. 		 ,0. 		 ,0. 	        ,0.01	 	 ,0.002 	 ,0.001 	 ,0.005  ]#DecayTimeResolution
errs[7]  = [ 0.     	 ,0.    	 ,0. 		 ,0. 		 ,0. 	        ,0.	 	 ,0. 	 ,0. 	 ,0.  ]#DecayTimeResolution
errs[8]  = [ 0.0011 	 ,0.0009 	 ,0. 		 ,0. 		 ,0. 		,0. 		 ,0. 		 ,0.  		 ,0.	 ]#TriggerEfficiencyStat 	
errs[9]  = [ 0.0007      ,0.0029	 ,0.0005 	 ,0.0006	 ,0.02 	 	,0.002 	         ,0.001	         ,0.001   	 ,0.006  ]#TrackReconstructionSimul
errs[10] = [ 0.0005      ,0.0002	 ,0. 	 	 ,0.	  	 ,0. 	 	,0. 	         ,0.	         ,0.   	 	 ,0.001  ]#TrackReconstructionStat
errs[11] = [ 0.0002 	 ,0. 		 ,0. 		 ,0. 		 ,0.	 	,0. 		 ,0. 		 ,0. 		 ,0.005	 ]#LengthScale
errs[12] = [ 0.       	 ,0.             ,0.             ,0.             ,0.01		,0.01            ,0.             ,0.001        	 ,0.002  ]#SPCouplingFactors
errs[13] = [ 0. 	 ,0. 		 ,0.0005 	 ,0. 		 ,0. 		,0.01 		 ,0.		 ,0.001 	 ,0.	 ]#FitBias

# Define some matrices that we need later
identity = np.identity( 9 )
one  	 = np.ones ( (9,9) )
zero     = np.zeros( (9,9) )

# Now define the correlations between the parameters for each systematic
correlations = [i for i in range(14)] 
# We state that correlations for comparing two sets of fits are +-100% correlated
# where the sign is defined by the shift seen in the fit. 
import syst_mass, syst_MCfit, syst_accrew
correlations[0]  = syst_mass.correlation#np.matrix(one)#MassFactorisation 
correlations[2]  = np.matrix(identity)#ResonantBackground ## This is more complicated, 2 sources are evaluated
correlations[5]  = syst_accrew.correlation#AngEfficiencyReweighting 
correlations[9]  = syst_MCfit.correlation#TrackReconstructionSimul 
correlations[12] = np.matrix(identity)#SPCouplingFactors ## This is more complicated, 2 sources are evaluated(same problem as in peaking bkg

# Correlations that are ignored, so just use identity
correlations[1]  = np.matrix(identity)#SignalWeights 
correlations[3]  = np.matrix(identity)#BcBackground
correlations[4]  = np.matrix(identity)#AngularResolution
correlations[6]  = np.matrix(identity)#AngEfficiencyStat
correlations[7]  = np.matrix(identity)#DecayTimeResolution
correlations[8]  = np.matrix(identity)#TriggerEfficiencyStat
correlations[10] = np.matrix(identity)#TrackReconstructionStat
correlations[11] = np.matrix(identity)#LengthScale 
correlations[13] = np.matrix(identity)#FitBias

# For each systematic, compute the covariance and add it to the total
covariance = np.matrix( zero )
for k in range(14):
	for i in range(9):
		for j in range(9):
			covariance[i,j] += errs[k][i]*errs[k][j]*correlations[k][i,j]

print "Here is the systematic covariance matrix"
print covariance

# Sanity check to print out the quadrature sum of systematics for each parameter
from math import sqrt
total_syst = []
for i in range(9):
	total_syst.append(sqrt(covariance[i,i]))
print
print "Here are the total systematics, summed in quadrature (should match the second-last line of Table 36)"
print total_syst
print
print "Here is the corresponding systematic correlation matrix"
print_correlation( covariance, total_syst )
print_correlation_latex( covariance, total_syst, names )

# Now add the systematic and statistical correlation matrices
import cov_stat
print "Here is the statistical correlation"
print_correlation( cov_stat.covariance, cov_stat.errors )
tot_cov = covariance + cov_stat.covariance
print "Here is the sum of systematic and statistical covariance matrices"
print tot_cov
print
print_covariance(tot_cov)

# Sanity check to print out the quadrature sum of statistical + systematics for each parameter
total_err = []
for i in range(9):
	total_err.append(sqrt(tot_cov[i,i]))
print "Here are the total uncertainties, summed in quadrature (should match the last line of Table 36)"
print total_err
print
print "Here is the total statistical + systematic correlation matrix"
print_correlation( tot_cov, total_err )
print_correlation_latex( tot_cov, total_err, names )

