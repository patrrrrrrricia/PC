#include <stdio.h>
#include <stdlib.h>

//4
int gcd(int a, int b)
{
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int* phii(int n)
{
    int* phi = calloc(n + 1, sizeof(int));

    int k = 0;
    int nr, m;
    for(int i = 1; i <= n; i++)
        phi[i] = i;
    for(int p = 2; p <= n; p++)
    {
        for(m = 1; m <= n; m++)
            nr = 0;
        if(gcd(p, m)==1)
            nr++;
        k++;
        phi[k] = nr;
    }
    phi[0] = k;

    return phi;
}
int main()
{
    int* a = phii(9);
    for(int i = 1; i <= a[0]; i++)
        printf("%d ", a[i]);
    free(a);
    return 0;
}
