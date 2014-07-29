#!/usr/bin/env python

# Author:      T. Bristow (Edinburgh) <Timothy.Michael.Bristow@cern.ch>

# Usage:
#  python Preselection.py.py file1.root sampleType

import copy
import ROOT

from ROOT import *

import sys
import random
import math
import array

sign = lambda x: (1, -1)[x<0]

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
ch.SetBranchStatus('helcosthetaK',0)
ch.SetBranchStatus('helcosthetaL',0)
ch.SetBranchStatus('helphi',0)
# Write to new file
outFile = "%s_%s" % (treename, file)
newFile = TFile(outFile, "RECREATE")

ch_new = ch.CloneTree(0)
print 'start looop'
from ctypes import addressof
helcosthetak = array.array('f',[0])
phiangle = array.array('f',[0])
helcosthetal = array.array('f',[0])
gROOT.ProcessLine("struct struct1{\
Float_t helcosthetak;\
Float_t helcosthetal;\
Float_t helphi;\
};")
st = struct1()

ch_new.Branch("helcosthetaK",ROOT.AddressOf(st, "helcosthetak"),'helcosthetak/F')
ch_new.Branch("helcosthetaL",ROOT.AddressOf(st, "helcosthetal"),'helcosthetal/F')
ch_new.Branch("helphi",ROOT.AddressOf(st, "helphi"),'helphi/F')
ch.SetBranchStatus('helcosthetaK',1)
ch.SetBranchStatus('helcosthetaL',1)
ch.SetBranchStatus('helphi',1)

scale0 = 1.
scale = 0.

mean1_k=-0.000006
mean2_k=0.000006
mean3_k=-0.0032
width1_k=scale*0.0126
width2_k=scale*0.0254
width3_k=scale*0.139
f1_k=0.719902
f2_k=0.274667

mean1_l=-0.00001538
mean2_l=0.00001538
mean3_l=-0.0007
width1_l=scale*0.0060289
width2_l=scale*0.003531
width3_l=scale*0.015508
f1_l=0.41423
f2_l=0.579095

width1_p=scale0*2.20889e-02
width2_p=scale0*5.81127e-02
width3_p=scale0*2.58840e-02
mean1_p=-1.09566e-04
mean2_p=-1.06335e-04
mean3_p=8.11251e-06
f1_p=5.61165e-01
f2_p=1.77495e-01

for i in range(nEntries):
    ch.GetEntry(i)
    if i%10000==0:
        print i
        print_it=True
    st.helcosthetak = float(ch.helcosthetaK)
    st.helphi = float(ch.helphi)
    st.helcosthetal = float(ch.helcosthetaL)
    checkhelphi = True

    #print "old", st.helphi, st.helcosthetak, st.helcosthetal
	# helcosthetak shift
    r1_k=random.gauss(mean1_k,width1_k)
    r2_k=random.gauss(mean2_k, width2_k)
    r3_k=random.gauss(mean3_k, width3_k)
    f=random.random()
    if (f>=0) and (f<f1_k):
                shift_k=r1_k
    elif (f>f1_k) and (f<f1_k+f2_k):
                shift_k=r2_k
    else:
                shift_k=r3_k
    valuek=math.acos(st.helcosthetak)+shift_k
    st.helcosthetak=math.cos(valuek)
    # modify helcosthetaL
    r1_l=random.gauss(mean1_l,width1_l)
    r2_l=random.gauss(mean2_l, width2_l)
    r3_l=random.gauss(mean3_l, width3_l)
    f=random.random()
    if (f>=0) and (f<f1_l):
                shift_l=r1_l
    elif (f>f1_l) and (f<f1_l+f2_l):
                shift_l=r2_l
    else:
                shift_l=r3_l
    valuel=math.acos(st.helcosthetal)+shift_l
    st.helcosthetal=math.cos(valuel)

    r1_p=random.gauss(mean1_p, width1_p)
    r2_p=random.gauss(mean2_p, width2_p)
    r3_p=ROOT.gRandom.BreitWigner(mean3_p, width3_p)
    f=random.random()
    if (f>=0) and (f<f1_p):
            shift_p=r1_p
    elif (f>f1_p) and (f<f1_p+f2_p):
            shift_p=r2_p
    else:
            shift_p=r3_p
	#valuep = st.helphi + shift_p if abs(st.helphi + shift_p) < math.pi else -sign(st.helphi)*abs(st.helphi) + shift_p
    valuep = st.helphi + shift_p if abs(st.helphi + shift_p) < math.pi else -st.helphi + shift_p
    st.helphi=valuep
    #print "new", st.helphi, st.helcosthetak, st.helcosthetal
    ch_new.Fill()

# use GetCurrentFile just in case we went over the (customizable) maximum file size
ch_new.GetCurrentFile().Write()
ch_new.GetCurrentFile().Close()

print 'nEntries: ' + str(nEntries)
