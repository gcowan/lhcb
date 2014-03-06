#!/usr/bin/env python

# Usage:
#  python Preselection.py.py file1.root

import copy
import ROOT

from ROOT import *

import sys
import random
import math
import array


print "sys.argv = ", sys.argv
file = sys.argv[1]
print "inputFiles = ", file
treename="dataNTuple"
ch = TChain(treename)
ch.Add(file)

nEntries = ch.GetEntries()
print "nEntries = ", nEntries

# All off first
ch.SetBranchStatus("*",1)
ch.SetBranchStatus('cosTheta',0)
ch.SetBranchStatus('cosPsi',0)
ch.SetBranchStatus('phi',0)
# Write to new file
outFile = "%s.root" % (treename)
newFile = TFile(outFile, "RECREATE")

ch_new = ch.CloneTree(0)
print 'start looop'
from ctypes import addressof
cosTheta = array.array('f',[0])
phi = array.array('f',[0])
cosPsi = array.array('f',[0])
gROOT.ProcessLine("struct struct1{\
Float_t cosTheta;\
Float_t cosPsi;\
Float_t phi;\
};")
st = struct1()

ch_new.Branch("cosTheta",ROOT.AddressOf(st, "cosTheta"),'cosTheta/F')
ch_new.Branch("cosPsi",ROOT.AddressOf(st, "cosPsi"),'cosPsi/F')
ch_new.Branch("phi",ROOT.AddressOf(st, "phi"),'phi/F')
ch.SetBranchStatus('cosTheta',1)
ch.SetBranchStatus('cosPsi',1)
ch.SetBranchStatus('phi',1)

scale0 = 0.
scale = 3.

mean1_k=0.0
mean2_k=-0.00082	
width1_k=scale0*0.0115
width2_k=scale0*0.0467
f1_k=0.68

mean1_l=0.001
mean2_l=-0.00002
width1_l=scale0*0.037
width2_l=scale0*0.0147
f1_l=0.15

width1_p=scale*0.0076
width2_p=scale*0.0496 
mean1_p=0.0 
mean2_p=0.0
f1_p=0.719

for i in range(nEntries):
	ch.GetEntry(i)
	print_it=False

	if i%10000==0:
		print i
		print_it=True
        st.cosTheta = float(ch.cosTheta)
	st.phi = float(ch.phi)
        st.cosPsi = float(ch.cosPsi)
	checkphi = True

	# cosTheta shift
	r1_k=random.gauss(mean1_k,width1_k)
	r2_k=random.gauss(mean2_k, width2_k)
        f=random.random()
        if (f>=0) and (f<f1_k):
                shift_k=r1_k
        else:
                shift_k=r2_k
	valuek=math.acos(st.cosTheta)+shift_k
	st.cosTheta=math.cos(valuek)	

	# modify cosPsi
	r1_l=random.gauss(mean1_l,width1_l)
	r2_l=random.gauss(mean2_l, width2_l)

        f=random.random()
        if (f>=0) and (f<f1_l):
                shift_l=r1_l
        else:
                shift_l=r2_l
	valuel=math.acos(st.cosPsi)+shift_l
	st.cosPsi=math.cos(valuel)	

	sign = lambda x: (1, -1)[x<0]
	# modify phi
        r1_p=random.gauss(mean1_p, width1_p)
        r2_p=random.gauss(mean2_p, width2_p)
        f=random.random()
        if (f>=0) and (f<f1_p):
        	shift_p=r1_p
        else:
                shift_p=r2_p
	valuep = st.phi + shift_p if abs(st.phi + shift_p) < math.pi else -sign(st.phi)*abs(st.phi) + shift_p
	st.phi=valuep	
	ch_new.Fill()

# use GetCurrentFile just in case we went over the (customizable) maximum file size
ch_new.GetCurrentFile().Write()
ch_new.GetCurrentFile().Close()

print 'nEntries: ' + str(nEntries)
