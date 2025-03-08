#ifndef LORADS_ELEMENTS_H
#define LORADS_ELEMENTS_H






__declspec(dllexport) void addDense(double *alpha, void *constrVal, double *vec);

__declspec(dllexport) void addSparse(double *alpha, void *constrVal, double *vec);

__declspec(dllexport) void zeroDense(void *constrVal);

__declspec(dllexport) void zeroSparse(void *constrVal);







#endif