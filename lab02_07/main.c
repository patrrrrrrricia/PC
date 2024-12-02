#include <stdio.h>
#include <stdlib.h>

int main()
{
    //A -> a
    char a;
    scanf("%c", &a);
    a = a - 32; //transform din litera mare(A) in litera mica(a)
    printf("%c", a);
    return 0;
}
