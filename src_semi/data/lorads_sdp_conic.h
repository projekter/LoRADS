#ifndef LORADS_SDP_CONIC
#define LORADS_SDP_CONIC


#include "def_lorads_sdp_conic.h"

__declspec(dllexport) void LORADSSetCone(lorads_solver *ASolver, lorads_int iCone, void *userCone);
__declspec(dllexport) void AConeProcData(lorads_sdp_cone *ACone );
__declspec(dllexport) void AConePresolveData( lorads_sdp_cone *ACone, lorads_int Dim);
__declspec(dllexport) void LORADSSumSDPData(lorads_solver *ASolver);
__declspec(dllexport) void destroyForAuxiSparse(void **pA);
__declspec(dllexport) void AConeDenseDetectSparsity(sdp_coeff **sdp_coeff_w_sum_pointer);
__declspec(dllexport) void LORADSDetectSparsityOfSumSDP(lorads_solver *ASolver);
__declspec(dllexport) void AConeDestroyPresolveData(lorads_sdp_cone *ACone);
__declspec(dllexport) void sdpDenseConeClearImpl( void *cone );
__declspec(dllexport) void sdpDenseConeDestroyImpl( void **pCone );
__declspec(dllexport) void sdpDenseConeFeatureDetectImpl( void *cone, double *rowRHS, lorads_int coneIntFeatures[20], double coneDblFeatures[20] );
__declspec(dllexport) void sdpDenseConeViewImpl( void *cone );
__declspec(dllexport) void sdpDenseConeAUVImpl( void *coneIn, lorads_sdp_dense *U, lorads_sdp_dense *V, double *constrVal, sdp_coeff *UVt);
__declspec(dllexport) void sdpDenseObjAUVImpl( void *coneIn, lorads_sdp_dense *U, lorads_sdp_dense *V, double *pObj, sdp_coeff *UVt);
__declspec(dllexport) void sdpDenseConeObjNrm1(void *cone, double *objConeNrm1);
__declspec(dllexport) void sdpDenseConeObjNrm2Square(void *coneIn, double *objConeNrm2Square);
__declspec(dllexport) void sdpDenseConeObjNrmInf(void *coneIn, double *objConeNrmInf);
__declspec(dllexport) void sdpDenseConeAddObjCoeff(void *cone, sdp_coeff *w_sum);
__declspec(dllexport) void sdpDenseConeAddObjCoeffRand(void *cone, sdp_coeff *w_sum);
__declspec(dllexport) void sdpDenseConeDataScale(void *coneIn, double scaleFactorSDPData);
__declspec(dllexport) void sdpDenseConeNnzStat(void *coneIn, lorads_int *stat);
__declspec(dllexport) void sdpDenseConeNnzStatCoeff(void *coneIn, double *stat, lorads_int *nnzStat, lorads_int *eleStat);

/* Declaration of ARPACK functions */
extern void dsaupd_(int *ido, char *bmat,  lorads_int *n, char *which,  int *nev, double *tol, double *resid,
                     int *ncv, double *v,  lorads_int *ldv,  int *iparam,  int *ipntr, double *workd,
                    double *workl,  int *lworkl,  int *info);

extern void dseupd_(int *rvec, char *HowMny,  int *select, double *d, double *z,  lorads_int *ldz, double *sigma,
                    char *bmat,  lorads_int *n, char *which,  int *nev, double *tol, double *resid,
                     int *ncv, double *v,  lorads_int *ldv,  int *iparam,  int *ipntr, double *workd,
                    double *workl,  int *lworkl,  int *info);

int dual_infeasible(void (*matvec) (void *M, double *x, double *y, lorads_int n), void *M, double *res, lorads_int n);

#endif