#include <stdio.h>
#include <stdlib.h>

//2

//5 -> {2, 3, 5}
int prim(int x)
{
    int nrd = 0;
    for(int i = 1;  i <= x; i++)
        nrd += x % i == 0;
    return nrd == 2;
}
int* prime(int n)
{
    int* a = calloc(n + 1, sizeof(int));
    int k = 0;
    for(int p = 2; p <= n; p++)
        if(prim(p))
        {
            k++;
            a[k] = p;
        }
    a[0] = k;
    return a;
}

int main()
{
    int* a = prime(5);
    for(int i = 1; i <= a[0]; i++)
        printf("%d ", a[i]);
    free(a);
    return 0;
}
