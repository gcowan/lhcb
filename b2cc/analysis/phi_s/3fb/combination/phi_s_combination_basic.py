from scipy import stats
from sys import argv
import numpy as np
import ROOT
from array import array as arr

def read_cov_matrix( filename ):
	f = open(filename)
	lines = f.readlines()
	rows = []
	for l in lines:
		row = l.split()
		float_row = [ float(r) for r in row ]
		rows.append(float_row)	
	return np.matrix(rows)

def read_values( filename, num_matrices ):
	f = open(filename)
	lines = f.readlines()
	num_params = len(lines)
	vals = []
	rows = []
	for l in lines:
		row = l.split()
		float_row = [ float(r) for r in row ]
		rows.append(float_row)
	for i in range(num_matrices):
		for j in range(num_params):
			vals.append(rows[j][i*2])
	return np.matrix(vals)

def read_values2( filename ):
	f = open(filename)
	lines = f.readlines()
	num_params = len(lines)
	vals = []
	for l in lines:
		vals.append( float(l) )
	return vals

def FCN( number_of_parameters, derivatives, f, parameters, internal_flag ):
	params = []
	for i in range(num_matrices):
		for j in range(number_of_parameters[0]):
			params.append(parameters[j])
	m_params = np.matrix( params ) 
	m_diff = m_vals - m_params
	f[0] = (m_diff*(m_cov.I)*(m_diff.T)).item(0)

cov_matrices = []
pre ='simple_'
pre = ''
#cov_matrices.append( read_cov_matrix( 'cov_bpt1.txt' ) )
#cov_matrices.append( read_cov_matrix( 'cov_bpt2.txt' ) )
#cov_matrices.append( read_cov_matrix( 'cov_bpt3.txt' ) )
#cov_matrices.append( read_cov_matrix( 'cov_bpt4.txt' ) )
#cov_matrices.append( read_cov_matrix( pre+'cov_npv1.txt' ) )
#cov_matrices.append( read_cov_matrix( pre+'cov_npv2.txt' ) )
#cov_matrices.append( read_cov_matrix( pre+'cov_npv3.txt' ) )
#cov_matrices.append( read_cov_matrix( pre+'cov_npv4.txt' ) )
cov_matrices.append( read_cov_matrix( 'cov_KK.txt' ) )
cov_matrices.append( read_cov_matrix( 'cov_pipi.txt' ) )

num_matrices = len(cov_matrices)

#m_vals = read_values( 'vals_bpt1.txt', num_matrices )
#vals  = read_values2( pre+'vals_npv1.txt' )
#vals += read_values2( pre+'vals_npv2.txt' )
#vals += read_values2( pre+'vals_npv3.txt' )
#vals += read_values2( pre+'vals_npv4.txt' )
vals = read_values2( 'vals_KK.txt' )
vals += read_values2( 'vals_pipi.txt' )
m_vals = np.matrix( vals )

print m_vals

num_params   = m_vals.size/num_matrices

print "number of matrices  ", num_matrices
print "number of parameters", num_params

# build large covariance matrix
m_cov = np.matrix(np.zeros((num_matrices*num_params, num_matrices*num_params)))
for m in range(num_matrices):
	for i in range(num_params):
		for j in range(num_params):
			#if i == j: # uncomment this if you want to simply calculate the weighted average
				m_cov[i + m*num_params,j + m*num_params] = cov_matrices[m][i,j]
print m_cov

# set up minimisation
minuit = ROOT.TMinuit(num_params)
minuit.SetFCN(FCN)

error_code = ROOT.Long(0)

names = [
 'gamma_act'
,'d_gamma'
,'lambda'
,'phi'
,'ap_zero_2'
,'ap_perp_2'
,'f_s_mKK0'
,'delta_par'
,'delta_perp'
,'delta_s_perp_mKK0'
,'delta_m'
,'p0'
,'p1'
,'p0_ss'
,'p1_ss'
,'deltap0'
,'deltap1'
,'deltap0_ss'
,'deltap1_ss'
,'f_s_mKK1'
,'delta_s_perp_mKK1'
,'f_s_mKK2'
,'delta_s_perp_mKK2'
,'f_s_mKK3'
,'delta_s_perp_mKK3'
,'f_s_mKK4'
,'delta_s_perp_mKK4'
,'f_s_mKK5'
,'delta_s_perp_mKK5'
]

names = ['phis','lambda']
#names = ['gamma_act', 'd_gamma', 'ap_zero_2', 'ap_perp_2']

for i in range(num_params):
	minuit.mnparm(i, names[i],  0.0, 0.01, 0, 0, error_code)
minuit.mnexcm("migrad", arr('d', [6000, 0.01]), 2, error_code)
minuit.mnexcm("hesse", arr('d', [6000]), 1, error_code)

if (false): # for making NLL scans
   for i in range(num_params):
	c = ROOT.TCanvas()
	minuit.mnexcm("SCAN",  arr('d', [i, 20]), 2, error_code);
	gr = minuit.GetPlot()
	gr.Draw("AL")
	gr.GetXaxis().SetTitle(names[i])
	c.SaveAs(names[i]+".pdf")

#par0, par1 = ROOT.Double(0), ROOT.Double(0)
#par0e, par1e = ROOT.Double(0), ROOT.Double(0)
#minuit.GetParameter(0, par0, par0e)
#minuit.GetParameter(1, par1, par1e)

