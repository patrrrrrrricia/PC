#include <stdio.h>
#include <stdlib.h>

//3

//int divizor(int k)
//{
//    for(int i = 1; i <= k; i++)
//        if(k % i == 0)
//    return i;
//}

//6 -> {2, 3, 6}
int* diviz(int n)
{
    int* a = calloc(n + 1, sizeof(int));
    int k = 0;
    for(int p = 2; p <= n; p++)
        if(n % p == 0)
    {
        k++;
        a[k] = p;
    }
    a[0] = k;
    return a;
}
int main()
{
    int* a = diviz(6);
    for(int i = 1; i <= a[0]; i++)
        printf("%d ", a[i]);
    free(a);
    return 0;
}
