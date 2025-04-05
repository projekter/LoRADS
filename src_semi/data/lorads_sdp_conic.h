#ifndef LORADS_SDP_CONIC
#define LORADS_SDP_CONIC

#include "def_lorads_sdp_conic.h"

dllexp void LORADSSetCone(lorads_solver *ASolver, lorads_int iCone, void *userCone);
dllexp void AConeProcData(lorads_sdp_cone *ACone );
dllexp void AConePresolveData( lorads_sdp_cone *ACone, lorads_int Dim);
dllexp void LORADSSumSDPData(lorads_solver *ASolver);
dllexp void destroyForAuxiSparse(void **pA);
dllexp void AConeDenseDetectSparsity(sdp_coeff **sdp_coeff_w_sum_pointer);
dllexp void LORADSDetectSparsityOfSumSDP(lorads_solver *ASolver);
dllexp void AConeDestroyPresolveData(lorads_sdp_cone *ACone);
dllexp void sdpDenseConeClearImpl( void *cone );
dllexp void sdpDenseConeDestroyImpl( void **pCone );
dllexp void sdpDenseConeFeatureDetectImpl( void *cone, double *rowRHS, lorads_int coneIntFeatures[20], double coneDblFeatures[20] );
dllexp void sdpDenseConeViewImpl( void *cone );
dllexp void sdpDenseConeAUVImpl( void *coneIn, lorads_sdp_dense *U, lorads_sdp_dense *V, double *constrVal, sdp_coeff *UVt);
dllexp void sdpDenseObjAUVImpl( void *coneIn, lorads_sdp_dense *U, lorads_sdp_dense *V, double *pObj, sdp_coeff *UVt);
dllexp void sdpDenseConeObjNrm1(void *cone, double *objConeNrm1);
dllexp void sdpDenseConeObjNrm2Square(void *coneIn, double *objConeNrm2Square);
dllexp void sdpDenseConeObjNrmInf(void *coneIn, double *objConeNrmInf);
dllexp void sdpDenseConeAddObjCoeff(void *cone, sdp_coeff *w_sum);
dllexp void sdpDenseConeAddObjCoeffRand(void *cone, sdp_coeff *w_sum);
dllexp void sdpDenseConeDataScale(void *coneIn, double scaleFactorSDPData);
dllexp void sdpDenseConeNnzStat(void *coneIn, lorads_int *stat);
dllexp void sdpDenseConeNnzStatCoeff(void *coneIn, double *stat, lorads_int *nnzStat, lorads_int *eleStat);

#ifdef __cplusplus
extern "C" {
#endif

#ifdef UNDER_BLAS
extern void dsyevr_( const char *jobz, const char *range, const char *uplo,
    const lorads_int  *n, double *a, const lorads_int *lda,
    const double *vl, const double *vu, const lorads_int *il,
    const lorads_int *iu, const double *abstol, lorads_int *m,
    double *w, double *z, const lorads_int *ldz, lorads_int *isuppz,
    double *work, const lorads_int *lwork, lorads_int *iwork,
    const lorads_int *liwork, lorads_int *info );
#else
extern void dsyevr( const char *jobz, const char *range, const char *uplo,
    const lorads_int  *n, double *a, const lorads_int *lda,
    const double *vl, const double *vu, const lorads_int *il,
    const lorads_int *iu, const double *abstol, lorads_int *m,
    double *w, double *z, const lorads_int *ldz, lorads_int *isuppz,
    double *work, const lorads_int *lwork, lorads_int *iwork,
    const lorads_int *liwork, lorads_int *info );
#endif

#ifdef __cplusplus
}
#endif

int dual_infeasible(sdp_coeff_dense *M, double *res);

#endif