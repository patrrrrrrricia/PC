#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n)
{
    long long fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;

}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", (Factorial(n)));
    return 0;
}
