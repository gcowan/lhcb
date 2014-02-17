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
CXXFLAGS     = -O3 -gstabs -fPIC -funroll-loops -D__ROOFIT_NOBANNER # -Wall

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
LINKFLAGS    = -m64
endif

##Libraries
LIBS       += $(ROOTLIBS) -lHtml -lThread -lMinuit -lMathCore -lMinuit2 -lRooStats -lRooFit -lRooFitCore -lFoam #-lProof #-lboost_thread #-lMathMore

mKK : mKK.C
	$(CXX) $(CXXFLAGS) $(LIBS) mKK.C -o mKK
MakePlots : MakePlots.C
	$(CXX) $(CXXFLAGS) $(LIBS) MakePlots.C -o MakePlots
MakePlots_MC : MakePlots_MC.C
	$(CXX) $(CXXFLAGS) $(LIBS) MakePlots_MC.C -o MakePlots_MC
clean   :
	$(RM) $(GARBAGE)

cleanall:
	$(RM) $(GARBAGE)


