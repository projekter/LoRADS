#ifndef LORADS_ADMM_H
#define LORADS_ADMM_H


#include "lorads_solver.h"
#include "lorads.h"

dllexp lorads_int LORADSADMMOptimize(lorads_params *params, lorads_solver *ASolver, lorads_admm_state *admm_iter_state, lorads_int iter_celling, double timeSolveStart);
dllexp lorads_int LORADSADMMOptimize_reopt(lorads_params *params, lorads_solver *ASolver, lorads_admm_state *admm_iter_state, lorads_int iter_celling, double timeSolveStart);
dllexp void LORADSCalObjUV_ADMM(lorads_solver *ASolver);
dllexp void LORADSCalObjUV_ADMM_LP(lorads_solver *ASolver);
dllexp void averageUV(lorads_sdp_dense *U, lorads_sdp_dense *V, lorads_sdp_dense *UVavg);
dllexp void averageUVLP(lorads_lp_dense *ulp, lorads_lp_dense *vlp, lorads_lp_dense *uvavg);
dllexp void LORADSUpdateSDPVarOne(lorads_solver *ASolver, lorads_sdp_dense *updateVar, lorads_sdp_dense *noUpdateVar, lorads_int iCone, double rho, double CG_tol, lorads_int CG_maxIter);
dllexp void LORADSUpdateSDPVarOne_positive_S(lorads_solver *ASolver, lorads_sdp_dense *updateVar, lorads_sdp_dense *noUpdateVar, lorads_sdp_dense *S, lorads_int iCone, double rho, double CG_tol, lorads_int CG_maxIter);
dllexp void LORADSUpdateSDPVarOne_negative_S(lorads_solver *ASolver, lorads_sdp_dense *updateVar, lorads_sdp_dense *noUpdateVar, lorads_sdp_dense *S, lorads_int iCone, double rho, double CG_tol, lorads_int CG_maxIter);


dllexp void LORADSUpdateLPVarOne(lorads_solver *ASolver,  double *UpdateVar, double *noUpdateVar, lorads_int iCol, double rho);
dllexp void LORADSUpdateLPVarOne_positive_S(lorads_solver *ASolver,  double *UpdateVar, double *noUpdateVar, lorads_int iCol, double rho, double *sLp);
dllexp void LORADSUpdateLPVarOne_negative_S(lorads_solver *ASolver,  double *UpdateVar, double *noUpdateVar, lorads_int iCol, double rho, double *sLp);
#endif