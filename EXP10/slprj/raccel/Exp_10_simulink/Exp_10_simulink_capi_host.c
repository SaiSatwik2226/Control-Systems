#include "Exp_10_simulink_capi_host.h"
static Exp_10_simulink_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Exp_10_simulink_host_InitializeDataMapInfo(&(root), "Exp_10_simulink");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
