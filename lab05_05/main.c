#include <stdio.h>
#include <stdlib.h>


int EPrim(int n)
{
    if(n > 1)
        return 0;
    for(int d = 2 ; d * d <= n ; d ++)
    {
        if(n % d == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, nr = 2;
    scanf("%d", &n);
    while(n)
    {
        if(EPrim(n) == 1)
        {
            printf("%d\n", nr);
            n--;
        }
        nr++;
    }
    return 0;
}
