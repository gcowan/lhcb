from sympy import *

s1 = Symbol('s1')
s2 = Symbol('s2')
f1 = Symbol('f1')

s_eff = sqrt(f1*s1*s1 + (1-f1)*s2*s2)

jacobians = []
jacobians.append(diff(s_eff, s1))
jacobians.append(diff(s_eff, s2))
jacobians.append(diff(s_eff, f1))

# These expressions could be used in your RooFit code
print jacobians

# Convert into numerical form for one bin
jacobians_n = [ j.subs([ (s1, 3.51141e-02), (s2, 8.67935e-02), (f1, 7.02977e-01)]) for j in jacobians ]

# Corresponding covariance matrix
cov = [ [7.171e-07,  2.671e-06,  6.106e-06],  
	[2.671e-06,  1.590e-05,  4.261e-05], 
	[6.106e-06,  4.261e-05,  6.871e-04]]
# uncorrelated
#cov = [ [7.171e-07,  0.,  0.],  
#	[0.,  1.590e-05,  0.], 
#	[0.,  0.,  6.871e-04]]

# Compute the uncertainty (squared)
s_eff_err_sq = 0. 
for i in range(len(jacobians)):
	for j in range(len(jacobians)):
		s_eff_err_sq += jacobians_n[i]*jacobians_n[j]*cov[i][j]

print s_eff.subs([ (s1, 3.51141e-02), (s2, 8.67935e-02), (f1, 7.02977e-01)]), sqrt(s_eff_err_sq)

