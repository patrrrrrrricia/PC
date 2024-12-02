#include <stdio.h>
#include <stdlib.h>

int EPP(int n)
{
    int pp = 0; // nu e pp
    for(int i = 0; i * i <= n; i++)
        if(i * i == n)
            pp =1;
    if(pp == 1)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    if(EPP(n))
        printf("este patrat perfect");
    else
        printf("nu este patrat perfect");
    return 0;
}
