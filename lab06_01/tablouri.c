#include "tablouri.h"
#include <stdio.h>

void citire(int n, float a[])
{
    for(int i = 0; i < n; i++)
        scanf("%f", &a[i]);
}

void afisare(int n, float a[])
{
    for(int i = 0; i < n; i++)
       printf("%f ", a[i]);
       printf("\n");
}

float Min(int n, float a[])
{
    float Min = 1000000;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < Min)
            Min = a[i];
    }
    return Min;
}

int IndexMin(int n, float a[])
{
    int indexMin = 0;
    for(int i = 0; i <= n; i++)
    {
        if(a[i] < a[indexMin])
            indexMin = i;
    }
    return indexMin;
}

int Sum(int n, float a[])
{
    int s = 0;
    for(int i = 0; i <= n; i++)
    {
        s += a[i];
    }
    return s;
}
