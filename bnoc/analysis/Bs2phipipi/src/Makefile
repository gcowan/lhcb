# $Id: Makefile,v 1.30 2009/11/11 17:18:14 gcowan Exp $
SHELL = /bin/sh
UNAME = $(shell uname)

# Root variables
ROOTCFLAGS   = -L$(ROOTSYS)/lib $(shell $(ROOTSYS)/bin/root-config --cflags)
ROOTLIBS     = -L$(ROOTSYS)/lib $(shell $(ROOTSYS)/bin/root-config --libs)
ROOTGLIBS    = -L$(ROOTSYS)/lib $(shell $(ROOTSYS)/bin/root-config --glibs)

 #GSLPATH      =/usr/local#/afs/cern.ch/sw/lcg/external/GSL/1.8/$(CMTCONFIG)
 #GSLINC       =$(GSLPATH)/include
 #GSLLIB       =$(GSLPATH)/lib

################
##linux
CXX          = g++
RM           = rm -f
AR           = ar cru

##Flags
#CXXFLAGS     += -D_DEBUG
CXXFLAGS     = -O3 -fPIC -funroll-loops -D__ROOFIT_NOBANNER # -Wall

GARBAGE  = $(OBJDIR)/*.o *.so *.rootmap 
INCDIR = /Users/gcowan_ed/software/lib

#################
##Dependencies
# Linux
ifeq "$(UNAME)" "Linux"
RANLIB       = ranlib
CXXFLAGS    += -I$(INCDIR) $(ROOTCFLAGS) #-I$(GSLINC)
LINKFLAGS    =
endif

# OS X
ifeq "$(UNAME)" "Darwin"
RANLIB       = ranlib
CXXFLAGS    += -I$(INCDIR) $(ROOTCFLAGS) #-I$(GSLINC)
LINKFLAGS    = 
endif

##Libraries
LIBS       += $(ROOTLIBS) -lHtml -lThread -lMinuit -lMathCore -lMinuit2 -lRooStats -lRooFit -lRooFitCore -lFoam #-lProof #-lboost_thread #-lMathMore

eff : eff.C
	$(CXX) $(CXXFLAGS) $(LIBS) eff.C -o eff

plot_legendre_moments_simple : plot_legendre_moments_simple.C
	$(CXX) $(CXXFLAGS) $(LIBS) plot_legendre_moments_simple.C -o plot_legendre_moments_simple

plot_legendre_moments : plot_legendre_moments.C
	$(CXX) $(CXXFLAGS) $(LIBS) plot_legendre_moments.C -o plot_legendre_moments

clean   :
	$(RM) $(GARBAGE)

cleanall:
	$(RM) $(GARBAGE)


