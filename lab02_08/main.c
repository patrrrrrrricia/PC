#include <stdio.h>
#include <stdlib.h>

int main()
{
//    float nr;
//    int a;
//    scanf("%f", &nr);
//    a = nr * 10;
//    printf("%d", abs(a % 10));

    //parte intreaga, parte fractionara
    //doresc prima cifra din p.f
    int pi, pf;
    scanf("%d.%ld", &pi, &pf);
    printf("%d", pf);
    return 0;
}
