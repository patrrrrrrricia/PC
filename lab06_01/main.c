#include <stdio.h>
#include <stdlib.h>
#include "tablouri.h"

int main()
{
    float a[10] = {0};
    citire(3, a);
    afisare(3, a);
    printf("Minimul este: %f\n", Min(3, a));
    printf("Indexul minim este: %d\n", IndexMin(3, a));
    printf("Suma este: %d\n", Sum(3, a));
    return 0;
}
