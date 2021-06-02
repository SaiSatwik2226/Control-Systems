#ifndef RTW_HEADER_Exp_10_simulink_h_
#define RTW_HEADER_Exp_10_simulink_h_
#include <stddef.h>
#include <float.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef Exp_10_simulink_COMMON_INCLUDES_
#define Exp_10_simulink_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Exp_10_simulink_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Exp_10_simulink
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (23) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (6)   
#elif NCSTATES != 6
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T jwld2otcqe [ 2 ] ; real_T mvg2n3jsda [ 4 ] ; real_T
njamja3elk ; real_T n3lt3gcgaq ; real_T fseab3nnid ; real_T lzkjpemtzl ;
real_T byzllgsbmh ; real_T ntzgholibf ; real_T p305evyac5 ; real_T hsuga2dhnf
; real_T glxss2ulmc ; real_T pvcie1a5tt ; real_T jkou5c1tf5 ; real_T
phn5u4ju5u ; real_T nc54yc0wg2 ; real_T g4haxbo4nw ; real_T ak52jwgs24 ;
real_T o22v5z0fum ; real_T b5zu12nw5c ; real_T loif4t1zya ; real_T ivxphhjz2b
; real_T b0gmvcjor3 ; boolean_T crpszgzido ; } B ; typedef struct { real_T
cmlmjzljsv ; real_T jp1g2it1ba [ 2 ] ; struct { real_T modelTStart ; }
fxsllhtyy4 ; void * f3fcweuhai [ 22 ] ; struct { void * TUbufferPtrs [ 2 ] ;
} ds5e0njkvh ; struct { void * LoggedData ; } g32qnehjn1 ; struct { void *
AQHandles ; } ghz3iauwmh ; struct { void * AQHandles ; } ei3ribixeo ; struct
{ void * AQHandles ; } h5zmdhih00 ; struct { void * LoggedData [ 2 ] ; }
jfvbwfvbfd ; struct { void * LoggedData ; } dpm41iscdf ; struct { void *
LoggedData ; } hkvyyqjk2k ; int_T h2sv51bdk0 [ 23 ] ; struct { int_T Tail ;
int_T Head ; int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
ki4nfkwjpt ; int_T lry5fglmvi [ 3 ] ; boolean_T cxfvdt3yaf ; } DW ; typedef
struct { real_T irjavf1llg [ 3 ] ; real_T cgqzjveozn ; real_T gotxyo3aly ;
real_T njc0ttmsn5 ; } X ; typedef struct { real_T irjavf1llg [ 3 ] ; real_T
cgqzjveozn ; real_T gotxyo3aly ; real_T njc0ttmsn5 ; } XDot ; typedef struct
{ boolean_T irjavf1llg [ 3 ] ; boolean_T cgqzjveozn ; boolean_T gotxyo3aly ;
boolean_T njc0ttmsn5 ; } XDis ; typedef struct { real_T irjavf1llg [ 3 ] ;
real_T cgqzjveozn ; real_T gotxyo3aly ; real_T njc0ttmsn5 ; } CStateAbsTol ;
typedef struct { real_T irjavf1llg [ 3 ] ; real_T cgqzjveozn ; real_T
gotxyo3aly ; real_T njc0ttmsn5 ; } CXPtMin ; typedef struct { real_T
irjavf1llg [ 3 ] ; real_T cgqzjveozn ; real_T gotxyo3aly ; real_T njc0ttmsn5
; } CXPtMax ; typedef struct { real_T ocqxqxkf02 [ 3 ] ; real_T e3gal4bhdc ;
} ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { real_T DCVoltageSource12V_Amplitude ; real_T PIDController_D ;
real_T PIDController_I ; real_T PIDController_InitialConditionForFilter ;
real_T PIDController_InitialConditionForIntegrator ; real_T PIDController_N ;
real_T PIDController_P ; real_T RepeatingSequence_rep_seq_y [ 2 ] ; real_T
Gain_Gain ; real_T Constant_Value ; real_T StateSpace_P1_Size [ 2 ] ; real_T
StateSpace_P1 [ 119 ] ; real_T StateSpace_P2_Size [ 2 ] ; real_T
StateSpace_P2 [ 4 ] ; real_T StateSpace_P3_Size [ 2 ] ; real_T StateSpace_P3
[ 3 ] ; real_T StateSpace_P4_Size [ 2 ] ; real_T StateSpace_P4 [ 578 ] ;
real_T StateSpace_P5_Size [ 2 ] ; real_T StateSpace_P5 [ 4 ] ; real_T
StateSpace_P6_Size [ 2 ] ; real_T StateSpace_P6 [ 2 ] ; real_T
StateSpace_P7_Size [ 2 ] ; real_T StateSpace_P7 [ 2 ] ; real_T
StateSpace_P8_Size [ 2 ] ; real_T StateSpace_P8 [ 2 ] ; real_T
StateSpace_P9_Size [ 2 ] ; real_T StateSpace_P9 ; real_T StateSpace_P10_Size
[ 2 ] ; real_T StateSpace_P10 ; real_T integrator_IC ; real_T
TransportDelay_Delay ; real_T TransportDelay_InitOutput ; real_T K1_Value ;
real_T Memory_InitialCondition ; real_T donotdeletethisgain_Gain ; real_T
LookUpTable1_bp01Data [ 2 ] ; real_T donotdeletethisgain_Gain_fqzwhw3qlf ;
real_T Constant_Value_kpkyenjwdq ; real_T Constant_Value_fyzozc4wzq ; real_T
eee_Value ; real_T gate_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
Exp_10_simulink_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ;
extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern
const int_T gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ;
extern const char * gblInportFileName ; extern const int_T
gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern const
int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
