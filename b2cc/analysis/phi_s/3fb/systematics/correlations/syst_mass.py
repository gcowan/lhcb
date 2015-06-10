#from scipy import stats
import numpy as np
my_matrix  = np.ones(  (9,9) )
#case_A = []
#case_B = []
#names    = ['Gamma_s',	'DeltaGamma_s',	'Aperp_sq',	'Azero_sq',	'delta_para',	'delta_perp',	'phi_s',	'lambda',	'Deltam_s']
delta = [-0.001,-0.075,0.631,-1.868,0.401,0.363,0.035,-0.045,0.074]
correlation = np.matrix(my_matrix)
for i in range(9):
    dx = delta[i]#case_A[i] - case_B[i]
    
    for j in range(9):
        dy = delta[j]#case_A[j] - case_B[j]
        slope = dx/dy
        correlation[i,j] = slope/abs(slope)
