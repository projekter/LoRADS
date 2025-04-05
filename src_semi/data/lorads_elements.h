#ifndef LORADS_ELEMENTS_H
#define LORADS_ELEMENTS_H






dllexp void addDense(double *alpha, void *constrVal, double *vec);

dllexp void addSparse(double *alpha, void *constrVal, double *vec);

dllexp void zeroDense(void *constrVal);

dllexp void zeroSparse(void *constrVal);







#endif