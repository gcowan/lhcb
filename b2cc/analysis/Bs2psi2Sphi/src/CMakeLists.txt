# include ROOT library and include files

SET( CMAKE_CXX_FLAGS "-DSVN_REV=${SVN_REV} -Weffc++ -Os -msse -msse2 -msse3 -m3dnow -ansi -fPIC -fmerge-all-constants -funroll-all-loops -g -D__ROOFIT_NOBANNER -Wconversion -Weffc++ -Wextra -Wsign-compare -Wfloat-equal -Wmissing-noreturn -Wall -Wno-non-virtual-dtor -std=c++11" )

SET (LIBRARIES RooGaussModelWithOffset)
FOREACH ( lib ${LIBRARIES} ) 
ADD_LIBRARY ( ${lib} ${PROJECT_SOURCE_DIR}/src/${lib}.cxx )
TARGET_LINK_LIBRARIES( ${lib} dl Core RooFit RooFitCore RooStats RIO Net Hist Graf Graf3d Gpad Tree Rint Postscript Matrix Physics MathCore Thread Gui pthread m)
ENDFOREACH ( lib )

ADD_EXECUTABLE ( plot_resolution_sim_2g_with_offset.exe ${PROJECT_SOURCE_DIR}/src/plot_resolution_sim_2g_with_offset.C )
TARGET_LINK_LIBRARIES( plot_resolution_sim_2g_with_offset.exe
    RooGaussModelWithOffset dl Core RooFit RooFitCore RooStats RIO Net Hist Graf Graf3d Gpad Tree Rint Postscript Matrix Physics MathCore Thread Gui pthread m)

ADD_EXECUTABLE ( reduceTree.exe ${PROJECT_SOURCE_DIR}/src/reduceTree.C )
TARGET_LINK_LIBRARIES( reduceTree.exe dl Core RooFit RooFitCore RooStats RIO Net Hist Graf Graf3d Gpad Tree Rint Postscript Matrix Physics MathCore Thread Gui pthread m)

ADD_EXECUTABLE ( find_multiple_candidates.exe ${PROJECT_SOURCE_DIR}/src/find_multiple_candidates.C )
TARGET_LINK_LIBRARIES( find_multiple_candidates.exe dl Core RooFit RooFitCore RooStats RIO Net Hist Graf Graf3d Gpad Tree Rint Postscript Matrix Physics MathCore Thread Gui pthread m)

ADD_EXECUTABLE ( fit_lifetime_efficiency.exe ${PROJECT_SOURCE_DIR}/src/fit_lifetime_efficiency.C )
TARGET_LINK_LIBRARIES( fit_lifetime_efficiency.exe dl Core RooFit RooFitCore RooStats RIO Net Hist Graf Graf3d Gpad Tree Rint Postscript Matrix Physics MathCore Thread Gui pthread m)


