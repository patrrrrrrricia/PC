#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
//    float grad, rad;
//    scanf("%f", &grad);
//    rad = (grad * 2 * 3.14) / 360;
//    printf("%.10f\n", rad);
    float grad, rad;
    double pi = acos(-1); //PE PI IL PUTEN SCRIE CA SI acos(-1), DAR TREBUIE SA INCLUDEM BIBLIOTECA math.h
    rad = grad * (pi / 180);
    printf("%.10f\n", r); //afiseaza numarul cu 10 zecimale
    return 0;
}
