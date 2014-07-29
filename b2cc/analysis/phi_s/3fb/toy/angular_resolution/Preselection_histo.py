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

histo_file = TFile.Open("/Home/gcowan1/lhcb/lhcb/b2cc/analysis/phi_s/3fb/toy/angular_resolution/angular_hist.root")
histo_thetaK = histo_file.Get("thetaK_diff")
histo_thetaL = histo_file.Get("thetaL_diff")
histo_phi    = histo_file.Get("phi_diff")

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

for i in range(nEntries):
    ch.GetEntry(i)
    if i%10000==0:
        print i
    st.helcosthetak = float(ch.helcosthetaK)
    st.helphi = float(ch.helphi)
    st.helcosthetal = float(ch.helcosthetaL)

    shift_k = histo_thetaK.GetRandom()
    valuek = math.acos(st.helcosthetak)+shift_k
    st.helcosthetak = math.cos(valuek)

    shift_l = histo_thetaL.GetRandom()
    valuel = math.acos(st.helcosthetal)+shift_l
    st.helcosthetal = math.cos(valuel)

    shift_p = histo_phi.GetRandom()
    #if abs(shift_p) > 0.5: shift_p = 0. 
    valuep = st.helphi + shift_p if abs(st.helphi + shift_p) < math.pi else -st.helphi + shift_p
    st.helphi = valuep
    ch_new.Fill()

# use GetCurrentFile just in case we went over the (customizable) maximum file size
ch_new.GetCurrentFile().Write()
ch_new.GetCurrentFile().Close()

print 'nEntries: ' + str(nEntries)
