#include <stdio.h>

void getbiggest(int n, double* res, double* x)
{
    double max = x[0];
    for(int i = 1; i < n; i++)
        if (x[i] > max)
            max = x[i];
    *res = max;  // Atribuim valoarea lui max direct, nu adresa lui max
}

int main()
{
    double x[] = {-1, 2, -5, 3};  // x are întotdeauna 4 elemente
    double pp;
    double* p = &pp;
    int n = sizeof(x) / sizeof(x[0]);  // Calculăm dimensiunea tabloului
    getbiggest(n, p, x);  // Transmitem dimensiunea corectă a tabloului
    printf("%f\n", *p);  // Afișăm valoarea cea mai mare găsită
    return 0;
}
