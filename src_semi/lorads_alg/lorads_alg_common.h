#ifndef LORADS_ALG_COMMON_H
#define LORADS_ALG_COMMON_H

#include "def_lorads_elements.h"
#include "lorads_solver.h"


dllexp void LORADSInitConstrValAll(lorads_solver *ASolver, lorads_lp_dense *uLpDummy, lorads_lp_dense *vLpDummy, lorads_sdp_dense **U, lorads_sdp_dense **V);
dllexp void LORADSInitConstrValAllLP(lorads_solver *ASolver, lorads_lp_dense *uLp, lorads_lp_dense *vLp, lorads_sdp_dense **U, lorads_sdp_dense **V);
dllexp void LORADSInitConstrValSum(lorads_solver *ASolver);
dllexp void LORADSInitConstrValSumLP(lorads_solver *ASolver);
dllexp void LORADSUpdateSDPVar(lorads_solver *ASolver, double rho, double CG_tol, lorads_int CG_maxIter);
dllexp void LORADSUpdateSDPLPVar(lorads_solver *ASolver, double rho, double CG_tol, lorads_int CG_maxIter);
dllexp void LORADSUVt(sdp_coeff *UVt_w_sum, lorads_sdp_dense *U, lorads_sdp_dense *V);
dllexp void copyRtoV(lorads_lp_dense *rLpDummy, lorads_lp_dense *vlpDummy, lorads_sdp_dense **R, lorads_sdp_dense **V, lorads_int nCones);
dllexp void copyRtoVLP(lorads_lp_dense *rLp, lorads_lp_dense *vlp, lorads_sdp_dense **R, lorads_sdp_dense **V, lorads_int nCones);
dllexp void LORADSUpdateDimacsErrorALM(lorads_solver *ASolver, lorads_sdp_dense **R, lorads_sdp_dense **R2, lorads_lp_dense *r, lorads_lp_dense *r2);
dllexp void LORADSUpdateDimacsErrorALMLP(lorads_solver *ASolver, lorads_sdp_dense **R, lorads_sdp_dense **R2, lorads_lp_dense *r, lorads_lp_dense *r2);
dllexp void LORADSUpdateDimacsErrorADMM(lorads_solver *ASolver, lorads_sdp_dense **U, lorads_sdp_dense **V, lorads_lp_dense *u, lorads_lp_dense *v);
dllexp void LORADSUpdateDimacsErrorADMMLP(lorads_solver *ASolver, lorads_sdp_dense **U, lorads_sdp_dense **V, lorads_lp_dense *u, lorads_lp_dense *v);
dllexp void LORADSNrmInfObj(lorads_solver *ASolver);
dllexp void LORADSUpdateDualVar(lorads_solver *ASolver, double rho);
dllexp void LORADSCalDualObj(lorads_solver *ASolver);
dllexp void LORADSNuclearNorm(lorads_solver *ASolver);
dllexp void LORADSCheckDimacErrALMCriteria(lorads_solver *ASolver);
dllexp void LORADSObjConstrValAll(lorads_solver *ASolver, lorads_sdp_dense **U, lorads_sdp_dense **V, double *UVobjVal);
dllexp void LORADSObjConstrValAllLP(lorads_solver *ASolver, lorads_lp_dense *uLp, lorads_lp_dense *vLp, lorads_sdp_dense **U, lorads_sdp_dense **V, double *UVobjVal);
dllexp lorads_int LORADSCheckSolverStatus(lorads_solver *ASolver);


#endif