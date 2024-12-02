#include <stdio.h>

void getprod(int n, float* res, float* x);  // Schimbăm tipul parametrului x în float*

int main()
{
    float x[] = {-1, 2, -5, 3};  // x are max 10 elemente
    float p;
    getprod(sizeof(x)/sizeof(x[0]), &p, x);
    printf("%f\n", p);
    return 0;
}

void getprod(int n, float* res, float* x)  // Schimbăm tipul parametrului x în float*
{
    *res = 1;
    for(int i = 0; i < n; i++)
        *res = *res * x[i];  // Calculăm produsul valorilor din tablou
}
