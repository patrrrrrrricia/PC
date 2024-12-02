#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1
void inter(int* pa, int*pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

//2
void minp(float *px, float y)
{
    if(*px > y)
        *px = y;
}

//3
float minim(float *a, int n)
{
    float min = a[0];
    for(int i = 1; i < n; i++)
        minp(&min, a[i]);
    return min;
}

//void minmax(float *b, float m, float* pmin, float* pmax)
//{
//    pmin = b[0];
//    pmax = b[0];
//    for(int i = 1; i < m; i++)
//    {
//        if(b[i] < pmin)
//            pmin = b[i];
//        if(b[i] > pmax)
//            pmax = b[i];
//    }
//}

void minmax(float p, float* pmin, float* pmax)
{
    if(*pmin < p)
        *pmin = p;
    if(*pmax > p)
        *pmax = p;
}

//4
void frac(float numar, int* pi, float* pf)
{
    *pi = floor(numar);
    *pf = numar - *pi;
}

//5
//void descompune_timp(long long secunde_totale, )

int main()
{
    //float a, b;
    //scanf("%f%f", &a, &b);

    //pb1
    //inter(&a, &b);
    //printf("a = %d b = %d", a, b);

    //pb2
//    minp(&a, b);
//    printf("a = %.0f b = %.0f", a, b);

    //pb3

//    minim(&a, b);
//    printf("a = %.0f b = %.0f", a, b);
//    for(int i = 1; i < n; i++)
//        scanf("%f", b[i]);


//    float a[1001], n, pmin, pmax;
//    scanf("%f", &n);
//    for(int i = 1; i < n; i++)
//       scanf("%f", a[i]);
//    minmax(&b, m, &pmin, &pmax);
//
//    printf("Minimul este %f", pmin);
//    printf("Maximul este %f", pmax);
//
//    pmin = a[0];
//    pmax = a[0];
//    for(int i = 1; i < n; i++)
//        minmax(a[i], &pmin, &pmax);
//    printf("Minimul este %f", pmin);
//    printf("Maximul este %f", pmax);

    //pb 4
    float numar, pf;
    int pi;
    scanf("%f", &numar);

    frac(numar, &pi, &pf);
    printf("Parte intreaga: %d\n", pi);
    printf("Parte fractionara: %f\n", pf);

    //pb 5

    return 0;
}
