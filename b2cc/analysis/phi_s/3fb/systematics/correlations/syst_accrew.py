#from scipy import stats
import numpy as np
my_matrix  = np.ones(  (9,9) )

#names    = ['Gamma_s',	'DeltaGamma_s',	'Aperp_sq',	'Azero_sq',	'delta_para',	'delta_perp',	'phi_s',	'lambda',	'Deltam_s']
case_A = [0.65914001, 0.088678015,0.25223541, 0.52166482, 3.265784, 3.0972812, 0.072795631, 0.96754113, 17.72058] 
case_B = [0.65915087, 0.08852178, 0.25119177, 0.52368891, 3.2568101,3.0986762, 0.072951992, 0.96269579, 17.72303]
#delta = [-0.001,-0.075,0.631,-1.868,0.401,0.363,0.035,-0.045,0.074]
correlation = np.matrix(my_matrix)
for i in range(9):
    dx = case_A[i] - case_B[i]
    
    for j in range(9):
        dy = case_A[j] - case_B[j]
        slope = dx/dy
        correlation[i,j] = slope/abs(slope)
