#ifndef LORADS_ALG_COMMON_H
#define LORADS_ALG_COMMON_H

#include "def_lorads_elements.h"
#include "lorads_solver.h"


__declspec(dllexport) void LORADSInitConstrValAll(lorads_solver *ASolver, lorads_lp_dense *uLpDummy, lorads_lp_dense *vLpDummy, lorads_sdp_dense **U, lorads_sdp_dense **V);
__declspec(dllexport) void LORADSInitConstrValAllLP(lorads_solver *ASolver, lorads_lp_dense *uLp, lorads_lp_dense *vLp, lorads_sdp_dense **U, lorads_sdp_dense **V);
__declspec(dllexport) void LORADSInitConstrValSum(lorads_solver *ASolver);
__declspec(dllexport) void LORADSInitConstrValSumLP(lorads_solver *ASolver);
__declspec(dllexport) void LORADSUpdateSDPVar(lorads_solver *ASolver, double rho, double CG_tol, lorads_int CG_maxIter);
__declspec(dllexport) void LORADSUpdateSDPLPVar(lorads_solver *ASolver, double rho, double CG_tol, lorads_int CG_maxIter);
__declspec(dllexport) void LORADSUVt(sdp_coeff *UVt_w_sum, lorads_sdp_dense *U, lorads_sdp_dense *V);
__declspec(dllexport) void copyRtoV(lorads_lp_dense *rLpDummy, lorads_lp_dense *vlpDummy, lorads_sdp_dense **R, lorads_sdp_dense **V, lorads_int nCones);
__declspec(dllexport) void copyRtoVLP(lorads_lp_dense *rLp, lorads_lp_dense *vlp, lorads_sdp_dense **R, lorads_sdp_dense **V, lorads_int nCones);
__declspec(dllexport) void LORADSUpdateDimacsErrorALM(lorads_solver *ASolver, lorads_sdp_dense **R, lorads_sdp_dense **R2, lorads_lp_dense *r, lorads_lp_dense *r2);
__declspec(dllexport) void LORADSUpdateDimacsErrorALMLP(lorads_solver *ASolver, lorads_sdp_dense **R, lorads_sdp_dense **R2, lorads_lp_dense *r, lorads_lp_dense *r2);
__declspec(dllexport) void LORADSUpdateDimacsErrorADMM(lorads_solver *ASolver, lorads_sdp_dense **U, lorads_sdp_dense **V, lorads_lp_dense *u, lorads_lp_dense *v);
__declspec(dllexport) void LORADSUpdateDimacsErrorADMMLP(lorads_solver *ASolver, lorads_sdp_dense **U, lorads_sdp_dense **V, lorads_lp_dense *u, lorads_lp_dense *v);
__declspec(dllexport) void LORADSNrmInfObj(lorads_solver *ASolver);
__declspec(dllexport) void LORADSUpdateDualVar(lorads_solver *ASolver, double rho);
__declspec(dllexport) void LORADSCalDualObj(lorads_solver *ASolver);
__declspec(dllexport) void LORADSNuclearNorm(lorads_solver *ASolver);
__declspec(dllexport) void LORADSCheckDimacErrALMCriteria(lorads_solver *ASolver);
__declspec(dllexport) void LORADSObjConstrValAll(lorads_solver *ASolver, lorads_sdp_dense **U, lorads_sdp_dense **V, double *UVobjVal);
__declspec(dllexport) void LORADSObjConstrValAllLP(lorads_solver *ASolver, lorads_lp_dense *uLp, lorads_lp_dense *vLp, lorads_sdp_dense **U, lorads_sdp_dense **V, double *UVobjVal);
__declspec(dllexport) lorads_int LORADSCheckSolverStatus(lorads_solver *ASolver);


#endif