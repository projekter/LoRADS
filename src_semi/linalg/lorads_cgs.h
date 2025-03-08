#ifndef LORADS_CG_H
#define LORADS_CG_H


#include "def_lorads_elements.h"
#include "def_lorads_cgs.h"
#include "lorads_solver.h"

typedef struct
{
    lorads_sdp_cone *ACone;
    lorads_sdp_dense *noUpdateVar;
    lorads_sdp_dense *UpdateVarShell;
    double *weight;
} admmCG;

__declspec(dllexport) void LORADSCGSolverCreate(lorads_cg_linsys **pCGSolver, lorads_int blkDim, lorads_int rank, lorads_int nConstr);
__declspec(dllexport) void LORADSCGSolverReCreate(lorads_cg_linsys **pCGSolver, lorads_int blkDim, lorads_int rank, lorads_int nConstr);
__declspec(dllexport) void CGSolve(void *linSys, double *x, double *b, double cg_tol, lorads_int cg_maxIter);
__declspec(dllexport) void CGSetData (lorads_cg_linsys *cg, void *MMat, void (*Mvec) (void *, double *, double *));
__declspec(dllexport) void CGSolverClear(void *pCGSolver);
__declspec(dllexport) void LORADSCGDestroy(lorads_solver *ASolver);
#endif //LORADS_CG_H
