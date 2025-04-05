#ifndef dense_opts_h
#define dense_opts_h
#include "def_lorads_sdp_data.h"



#ifdef __cplusplus
extern "C" {
#endif

extern void BLAS(dsymm)(const char *side, const char *uplo,  lorads_int *m,
                        lorads_int *n, const double *alpha, const double *a,
                        lorads_int *lda, const double *b,  lorads_int *ldb,
                        const double *beta, double *c,  lorads_int *ldc );
extern void BLAS(dsyr2k)(const char *uplo, const char *trans, lorads_int *n,
                         lorads_int *k, const double *alpha, const double *a, lorads_int *lda,
                         const double *b, lorads_int *ldb, const double *beta,  double *c,
                         lorads_int *ldc);


#ifdef __cplusplus
}
#endif

#endif /* dense_opts_h */
