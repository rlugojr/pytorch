#ifndef THCS_GENERIC_FILE
#define THCS_GENERIC_FILE "generic/THCSTensorMath.h"
#else

/* The convention is:
 * spOP has one of the OP as a sparse tensor
 * sspOP returns a sparse result
 * spOPs has all arguments sparse
 *
 * Everything is is up to discretion
 */

// dense = beta * dense + alpha * sparse * dense
TH_API void THCSTensor_(spaddmm)(THCState *state, THCTensor *r_, real beta, THCTensor *t, real alpha, THCSTensor *sparse, THCTensor *dense);
// sparse = beta * sparse + alpha * sparse * dense
TH_API void THCSTensor_(sspaddmm)(THCState *state, THCSTensor *r_, real beta, THCSTensor *t, real alpha, THCSTensor *sparse, THCTensor *dense);
TH_API void THCSTensor_(spcadd)(THCState *state, THCTensor *r_, THCTensor *dense, real value, THCSTensor *sparse);

#endif

