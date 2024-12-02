#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    scanf("%s", &s);
    int x;
    sscanf(s, "%d", &x);
    printf("%d\n", x);
    return 0;
}
