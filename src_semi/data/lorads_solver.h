#ifndef LORADS_SOLVER
#define LORADS_SOLVER

#include "def_lorads_solver.h"
#include "lorads.h"
#include "lorads_user_data.h"
dllexp void LORADSInitSolver(lorads_solver *ASolver, lorads_int nRows, lorads_int nCones, lorads_int *blkDims, lorads_int nLpCols);
dllexp void LORADSDestroySolver(lorads_solver *ASolver);
dllexp void LORADSSetDualObjective(lorads_solver *ASolver, double *dObj);
dllexp void LORADSInitConeData(lorads_solver *ASolver, user_data **SDPDatas,
                               double **coneMatElem, lorads_int **coneMatBeg, lorads_int **coneMatIdx,
                               lorads_int *BlkDims, lorads_int nConstrs, lorads_int nBlks,
                               lorads_int nLpCols, lorads_int *LpMatBeg, lorads_int *LpMatIdx, double *LpMatElem);
dllexp void LORADSPreprocess(lorads_solver *ASolver, lorads_int *BlkDims);
dllexp void LORADSDestroyConeData(lorads_solver *ASolver);
dllexp void destroyPreprocess(lorads_solver *ASolver);
dllexp void LORADSDetermineRank(lorads_solver *ASolver, lorads_int *blkDims, double timesRank);
dllexp void detectSparsitySDPCoeff(lorads_solver *ASolver);
dllexp void LORADSInitALMVars(lorads_solver *ASolver, lorads_int *rankElem, lorads_int *BlkDims, lorads_int nBlks, lorads_int nLpCols, lorads_int lbfgsHis);
dllexp void LORADSDestroyALMVars(lorads_solver *ASolver);
dllexp void LORADSInitADMMVars(lorads_solver *ASolver, lorads_int *rankElem, lorads_int *BlkDims, lorads_int nBlks, lorads_int nLpCols);
dllexp void LORADSDestroyADMMVars(lorads_solver *ASolver);
dllexp void LORADSInitFuncSet(lorads_func **pfunc, lorads_int nLpCols);
dllexp lorads_int CheckAllRankMax(lorads_solver *asolver, double aug_factor);
dllexp lorads_int AUG_RANK(lorads_solver *ASolver, lorads_int *BlkDims, lorads_int nBlks, double aug_factor);
dllexp void  LORADSEndProgram( lorads_solver *ASolver);
dllexp void printRes(double pObj, double dObj, double constrVio, double dualInfe, double pdgap, double constrVioInf, double dualInfeInf);
dllexp void LORADS_ALMtoADMM(lorads_solver *ASolver, lorads_params *params, lorads_alm_state *alm_state, lorads_admm_state *admm_state);
dllexp void calculate_dual_infeasibility_solver(lorads_solver *ASolver);
dllexp void objScale_dualvar(lorads_solver *ASolver, double *scaleTemp, double *scaleHis);
dllexp void cal_sdp_const(lorads_params *params, lorads_solver *ASolver, SDPConst *sdpConst);
dllexp void initial_solver_state(lorads_params *params, lorads_solver *ASolver, lorads_alm_state *alm_state_pointer, lorads_admm_state *admm_state_pointer, SDPConst *sdpConst);
dllexp double reopt(lorads_params *params, lorads_solver *ASolver, lorads_alm_state *alm_state_pointer, lorads_admm_state *admm_state_pointer, double *reopt_param, lorads_int *reopt_alm_iter, lorads_int *reopt_admm_iter, double timeSolveStart, int *admm_bad_iter_flag, int reopt_level);
dllexp void printfProbInfo(lorads_solver *ASolver);
#endif