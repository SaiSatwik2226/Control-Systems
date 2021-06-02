#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Exp_10_simulink_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Exp_10_simulink.h"
#include "Exp_10_simulink_capi.h"
#include "Exp_10_simulink_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Exp_10_simulink/Constant" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
1 , 0 , TARGET_STRING ( "Exp_10_simulink/Sum" ) , TARGET_STRING ( "error" ) ,
0 , 0 , 0 , 0 , 1 } , { 2 , 0 , TARGET_STRING ( "Exp_10_simulink/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"Exp_10_simulink/Compare To Zero/Compare" ) , TARGET_STRING ( "" ) , 0 , 1 ,
0 , 0 , 2 } , { 4 , 0 , TARGET_STRING (
"Exp_10_simulink/Repeating Sequence/Look-Up Table1" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"Exp_10_simulink/Voltage Measurement/do not delete this gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"Exp_10_simulink/Voltage Measurement1/do not delete this gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"Exp_10_simulink/DC Voltage Source 12V/Model/DC" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"Exp_10_simulink/Diode/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 9 , 0 , TARGET_STRING ( "Exp_10_simulink/Diode/Model/eee" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"Exp_10_simulink/IGBT//Diode/Model/Data Type Conversion" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 2 } , { 11 , 0 , TARGET_STRING (
"Exp_10_simulink/Mean/Model/K1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2
} , { 12 , 0 , TARGET_STRING ( "Exp_10_simulink/Mean/Model/integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 13 , 0 , TARGET_STRING (
"Exp_10_simulink/Mean/Model/Memory" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 2 } , { 14 , 0 , TARGET_STRING ( "Exp_10_simulink/Mean/Model/Switch" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
"Exp_10_simulink/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"Exp_10_simulink/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"" ) , 1 , 0 , 2 , 0 , 1 } , { 17 , 0 , TARGET_STRING (
"Exp_10_simulink/PID Controller/D Gain/Internal Parameters/Derivative Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"Exp_10_simulink/PID Controller/Filter/Cont. Filter/Filter" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 19 , 0 , TARGET_STRING (
"Exp_10_simulink/PID Controller/Filter/Cont. Filter/SumD" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 20 , 0 , TARGET_STRING (
"Exp_10_simulink/PID Controller/I Gain/Internal Parameters/Integral Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 21 , 0 , TARGET_STRING (
"Exp_10_simulink/PID Controller/Integrator/Continuous/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"Exp_10_simulink/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 23 , TARGET_STRING (
"Exp_10_simulink/DC Voltage Source 12V" ) , TARGET_STRING ( "Amplitude" ) , 0
, 0 , 0 } , { 24 , TARGET_STRING ( "Exp_10_simulink/PID Controller" ) ,
TARGET_STRING ( "P" ) , 0 , 0 , 0 } , { 25 , TARGET_STRING (
"Exp_10_simulink/PID Controller" ) , TARGET_STRING ( "I" ) , 0 , 0 , 0 } , {
26 , TARGET_STRING ( "Exp_10_simulink/PID Controller" ) , TARGET_STRING ( "D"
) , 0 , 0 , 0 } , { 27 , TARGET_STRING ( "Exp_10_simulink/PID Controller" ) ,
TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 28 , TARGET_STRING (
"Exp_10_simulink/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 29 , TARGET_STRING (
"Exp_10_simulink/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 30 , TARGET_STRING (
"Exp_10_simulink/Repeating Sequence" ) , TARGET_STRING ( "rep_seq_y" ) , 0 ,
3 , 0 } , { 31 , TARGET_STRING ( "Exp_10_simulink/Constant" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 32 , TARGET_STRING (
"Exp_10_simulink/Compare To Zero/Constant" ) , TARGET_STRING ( "Value" ) , 0
, 0 , 0 } , { 33 , TARGET_STRING (
"Exp_10_simulink/Repeating Sequence/Constant" ) , TARGET_STRING ( "Value" ) ,
0 , 0 , 0 } , { 34 , TARGET_STRING (
"Exp_10_simulink/Repeating Sequence/Look-Up Table1" ) , TARGET_STRING (
"BreakpointsForDimension1" ) , 0 , 3 , 0 } , { 35 , TARGET_STRING (
"Exp_10_simulink/Voltage Measurement/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 36 , TARGET_STRING (
"Exp_10_simulink/Voltage Measurement1/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 37 , TARGET_STRING (
"Exp_10_simulink/Diode/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 38 , TARGET_STRING ( "Exp_10_simulink/Diode/Model/eee" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 39 , TARGET_STRING (
"Exp_10_simulink/Mean/Model/K1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } ,
{ 40 , TARGET_STRING ( "Exp_10_simulink/Mean/Model/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 41 , TARGET_STRING (
"Exp_10_simulink/Mean/Model/integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 42 , TARGET_STRING (
"Exp_10_simulink/Mean/Model/Memory" ) , TARGET_STRING ( "InitialCondition" )
, 0 , 0 , 0 } , { 43 , TARGET_STRING (
"Exp_10_simulink/Mean/Model/Transport Delay" ) , TARGET_STRING ( "DelayTime"
) , 0 , 0 , 0 } , { 44 , TARGET_STRING (
"Exp_10_simulink/Mean/Model/Transport Delay" ) , TARGET_STRING (
"InitialOutput" ) , 0 , 0 , 0 } , { 45 , TARGET_STRING (
"Exp_10_simulink/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P1" ) , 0 , 4 , 0 } , { 46 , TARGET_STRING (
"Exp_10_simulink/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P2" ) , 0 , 5 , 0 } , { 47 , TARGET_STRING (
"Exp_10_simulink/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P3" ) , 0 , 6 , 0 } , { 48 , TARGET_STRING (
"Exp_10_simulink/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P4" ) , 0 , 7 , 0 } , { 49 , TARGET_STRING (
"Exp_10_simulink/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P5" ) , 0 , 8 , 0 } , { 50 , TARGET_STRING (
"Exp_10_simulink/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P6" ) , 0 , 3 , 0 } , { 51 , TARGET_STRING (
"Exp_10_simulink/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P7" ) , 0 , 1 , 0 } , { 52 , TARGET_STRING (
"Exp_10_simulink/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P8" ) , 0 , 3 , 0 } , { 53 , TARGET_STRING (
"Exp_10_simulink/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P9" ) , 0 , 0 , 0 } , { 54 , TARGET_STRING (
"Exp_10_simulink/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P10" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static
const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0
, 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0
, 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . b5zu12nw5c , & rtB . ntzgholibf ,
& rtB . nc54yc0wg2 , & rtB . crpszgzido , & rtB . phn5u4ju5u , & rtB .
o22v5z0fum , & rtB . byzllgsbmh , & rtB . b0gmvcjor3 , & rtB . ivxphhjz2b , &
rtB . loif4t1zya , & rtB . g4haxbo4nw , & rtB . n3lt3gcgaq , & rtB .
njamja3elk , & rtB . fseab3nnid , & rtB . lzkjpemtzl , & rtB . jwld2otcqe [ 0
] , & rtB . mvg2n3jsda [ 0 ] , & rtB . hsuga2dhnf , & rtB . glxss2ulmc , &
rtB . pvcie1a5tt , & rtB . ak52jwgs24 , & rtB . p305evyac5 , & rtB .
jkou5c1tf5 , & rtP . DCVoltageSource12V_Amplitude , & rtP . PIDController_P ,
& rtP . PIDController_I , & rtP . PIDController_D , & rtP . PIDController_N ,
& rtP . PIDController_InitialConditionForIntegrator , & rtP .
PIDController_InitialConditionForFilter , & rtP . RepeatingSequence_rep_seq_y
[ 0 ] , & rtP . Constant_Value_kpkyenjwdq , & rtP . Constant_Value , & rtP .
Constant_Value_fyzozc4wzq , & rtP . LookUpTable1_bp01Data [ 0 ] , & rtP .
donotdeletethisgain_Gain_fqzwhw3qlf , & rtP . donotdeletethisgain_Gain , &
rtP . gate_Value , & rtP . eee_Value , & rtP . K1_Value , & rtP . Gain_Gain ,
& rtP . integrator_IC , & rtP . Memory_InitialCondition , & rtP .
TransportDelay_Delay , & rtP . TransportDelay_InitOutput , & rtP .
StateSpace_P1 [ 0 ] , & rtP . StateSpace_P2 [ 0 ] , & rtP . StateSpace_P3 [ 0
] , & rtP . StateSpace_P4 [ 0 ] , & rtP . StateSpace_P5 [ 0 ] , & rtP .
StateSpace_P6 [ 0 ] , & rtP . StateSpace_P7 [ 0 ] , & rtP . StateSpace_P8 [ 0
] , & rtP . StateSpace_P9 , & rtP . StateSpace_P10 , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 14 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } } ; static const uint_T
rtDimensionArray [ ] = { 1 , 1 , 2 , 1 , 4 , 1 , 1 , 2 , 17 , 7 , 1 , 4 , 3 ,
1 , 17 , 34 , 2 , 2 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 ,
1.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL
) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 2 , 0 }
, { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 1 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 23 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 32 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3654228086U , 2293059367U , 3043174388U , 3143096838U } , ( NULL ) , 0 ,
0 } ; const rtwCAPI_ModelMappingStaticInfo * Exp_10_simulink_GetCAPIStaticMap
( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Exp_10_simulink_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( (
* rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Exp_10_simulink_host_InitializeDataMapInfo (
Exp_10_simulink_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
