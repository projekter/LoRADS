#ifndef LORADS_USER_DATA_H
#define LORADS_USER_DATA_H


#include "lorads.h"
#include "def_lorads_user_data.h"
#include "lorads_utils.h"

typedef struct lorads_user_data user_data;

#ifdef __cplusplus
extern "C" {
#endif

__declspec(dllexport) void LUserDataCreate( user_data **pHdata );
__declspec(dllexport) void LUserDataSetConeData( user_data *Hdata, cone_type cone, lorads_int nRow, lorads_int nCol,
                                  lorads_int *coneMatBeg, lorads_int *coneMatIdx, double *coneMatElem);
__declspec(dllexport) cone_type LUserDataChooseCone( user_data *Hdata );
__declspec(dllexport) void LUserDataClear( user_data *Hdata );
__declspec(dllexport) void LUserDataDestroy( user_data **pHdata );
__declspec(dllexport) void LORADSCreateSDPDatas(user_data ***SDPDatas, lorads_int nCones);
__declspec(dllexport) void LORADSClearUsrData(lorads_int **coneMatBeg, lorads_int **coneMatIdx, double **coneMatElem, lorads_int nBlks,
 lorads_int *BlkDims, double *rowRHS, lorads_int *LpMatBeg, lorads_int *LpMatIdx, double *LpMatElem, user_data **SDPDatas);

#ifdef __cplusplus
}
#endif

#endif /* LORADS_USER_DATA_H */
