#include <stdio.h>
#include <stdlib.h>


int EPrim(int n)
{
    int prim = 1; // este prim
    if(n > 1)
    {
        prim = 0;
        for(int d = 2 ; d * d <= n ; d ++)
        {
            if(n % d == 0)
                prim = 1;
        }
    }
    if(prim == 0)
        printf("este prim");
    else
        printf("nu este prim");
}

int main()
{
    int n, nr = 2;
    scanf("%d", &n);
    EPrim(n);
    return 0;
}
