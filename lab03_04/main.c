#include <stdio.h>
#include <stdlib.h>

int main()
{
    //partea fractionara a unui nr
    float x, f1, f2;
    scanf("%f", &x);
    f1 = x - (int)x; //parte intreaga
    f2 = x - (int)x + 1; //parte fractionara
    if(x > 0)
        printf("%f", f1);
    else
        printf("%f", f2);
    return 0;
}
