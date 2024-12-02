#include <stdio.h>
#include <stdlib.h>


double SumDiv(int n, int k)
{
    double s = 0; //s = 1
    for(int d = 1; d <= n; d++) //d = 2
    {
        if(n % d == 0)
            s = s + pow(d, k);
    }
    return s;

}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%.15lf", SumDiv(n, k));
    return 0;
}
