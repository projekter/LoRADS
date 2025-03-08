#ifndef LORADS_SDP_DATA_H
#define LORADS_SDP_DATA_H

#include "def_lorads_sdp_data.h"

__declspec(dllexport) void sdpDataMatCreate(sdp_coeff **psdpCoeff );
__declspec(dllexport) void sdpDataMatSetData( sdp_coeff *sdpCoeff, lorads_int nSDPCol, lorads_int dataMatNnz, lorads_int *dataMatIdx, double *dataMatElem );
__declspec(dllexport) void sdpDataMatDestroy( sdp_coeff **psdpCoeff );
__declspec(dllexport) void dataMatDenseMultiRkMat(void *A, lorads_sdp_dense *X, double *AX);
__declspec(dllexport) lorads_int hash_function(lorads_int row, lorads_int col, lorads_int size);
__declspec(dllexport) void dataMatDenseMV(void *A, double *x, double *y, lorads_int n);
__declspec(dllexport) void dataMatSparseMultiRkMat(void *A, lorads_sdp_dense *X, double *AX);
__declspec(dllexport) void dataMatSparseMV(void *A, double *x, double *y, lorads_int n);
__declspec(dllexport) void dataMatSparseZeros(void *A);
__declspec(dllexport) void dataMatSparseScale(void *A, double scaleFactor);
__declspec(dllexport) void dataMatDenseZeros(void *A);
__declspec(dllexport) void dataMatDenseScale(void *A, double scaleFactor);
#endif