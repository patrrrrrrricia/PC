#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Tf, Tc;
    scanf("%f", &Tc);
    Tf = ( Tc * 1.8 ) + 32;
    printf("%.1f\n", Tf);
    return 0;
}
