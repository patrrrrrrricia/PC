#include <stdio.h>

void getaverage(int n, double* res, double* x)
{
    *res = 0;
    for(int i=0; i<n; i++)
        *res = *res + x[i];
    *res /= n;
}

int main()
{
    double x[] = {-1, 2, -5, 3};		// x are max 10 elemente
    double p;  // Variabilă pentru a stoca rezultatul mediei
    getaverage(sizeof(x)/sizeof(double), &p, x);  // Pasăm adresa lui p
    printf("%f\n", p);  // Afișăm media calculată
    return 0;
}
