#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int r = scanf("%d", &x);
    if(r == 1)
        printf("am citit cu succes = %d\n", x);
    else
        puts("format gresit");
    return 0;
}
