#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z;
    char o;
    scanf("%f %c %f = %f", &x, &o, &y, &z);
    if(o == '+')
    {
        if(x + y == z)
            printf("Adevarat\n");
        else
            printf("Fals\n");
    }
    else if(o == '*')
    {
        if(x * y == z)
            printf("Adevarat\n");
        else
            printf("Fals\n");
    }
    return 0;
}
