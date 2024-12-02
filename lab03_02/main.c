#include <stdio.h>
#include <stdlib.h>

int main()
{
    //rezolvati ax+b=0, -1000, cu max 2 zecimale
    float a, b;
    scanf("%f%f", &a, &b);
    if(a == 0)
    {
        //b = 0
        if(b == 0)
            puts("adevarata pt orice x");
        else
            puts("nu are solutii");
    }
    else
        printf("x = %f", -b/a);
    return 0;
}
