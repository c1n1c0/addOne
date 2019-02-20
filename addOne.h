/*
 * MATLAB Compiler: 6.5 (R2017b)
 * Date: Wed Feb 20 12:49:58 2019
 * Arguments:
 * "-B""macro_default""-W""lib:addOne""-T""link:lib""-d""C:\Users\Cnico\Desktop\
 * Testing DLL\addOne\addOne\for_testing""-v""C:\Users\Cnico\Desktop\Testing
 * DLL\addOne\addOne.m"
 */

#ifndef __addOne_h
#define __addOne_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#ifdef __cplusplus
extern "C" {
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_addOne_C_API 
#define LIB_addOne_C_API /* No special import/export declaration */
#endif

/* GENERAL LIBRARY FUNCTIONS -- START */

extern LIB_addOne_C_API 
bool MW_CALL_CONV addOneInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_addOne_C_API 
bool MW_CALL_CONV addOneInitialize(void);

extern LIB_addOne_C_API 
void MW_CALL_CONV addOneTerminate(void);

extern LIB_addOne_C_API 
void MW_CALL_CONV addOnePrintStackTrace(void);

/* GENERAL LIBRARY FUNCTIONS -- END */

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_addOne_C_API 
bool MW_CALL_CONV mlxAddOne(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

/* C INTERFACE -- MLF WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_addOne_C_API bool MW_CALL_CONV mlfAddOne(int nargout, mxArray** out, mxArray* in);

#ifdef __cplusplus
}
#endif
/* C INTERFACE -- MLF WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

#endif
