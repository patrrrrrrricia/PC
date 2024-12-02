#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int p = 2;
    while(p <= n)
    {
        while(n % p == 0)
        {
            n = n / p;
            printf("%d ", p);
        }
        p = p + 1;
    }
    return 0;
}
