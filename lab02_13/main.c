#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
//    int w = 9;
    int w;
    printf("%-*d|%-9d|%-9d|%-9d|\n", 9, x, y, x + y, x * y);
    return 0;
}
