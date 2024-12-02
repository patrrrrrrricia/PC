#include <stdio.h>
#include <stdlib.h>


int conversie(long long n, int b, int c[])
{
//    int c[100];
    int k = 0;
    do
    {
        c[k] = n % b;
        n = n / b;
        k++;

    }while(n);

    return k;

}

char digit2char(int x)
{
    if(x < 10)
        return '0' + x;
    else
        return 'A' + x - 10;
}

int main()
{
    long long n;
    int b;
    scanf("%lld%d", &n, &b);
    int c[100];
    int k = conversie(n, b, c);

    for(int i = k - 1; i >= 0; i--)
        printf("%c", digit2char(c[i]));
    printf("\n");
    return 0;
}
