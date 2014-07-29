from Gaudi.Configuration import * 
from Configurables import DaVinci 
import PartProp.Service 
DaVinci (  
   DataType = 'MC09' 
) 
from GaudiKernel.Bindings import AppMgr 
gaudi = AppMgr() 
ppSvc = gaudi.ppSvc() 
print ppSvc.all()       ## print as table: 
