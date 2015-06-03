#!/usr/bin/env python
# =============================================================================
# $Id:$
## @file
#  Helper file to define the data type for davinci 
# =============================================================================
the_year = '2012'
# =============================================================================
from Configurables import DaVinci, CondDB
dv = DaVinci ( DataType                  = the_year )  ## ATTENTION !!!
db = CondDB  ( LatestGlobalTagByDataType = the_year )  ## ATTENTION !!! 


if '__main__' == __name__ :
    
    print ' The year: ', the_year
    
## # =============================================================================
## # The END 
## # =============================================================================

