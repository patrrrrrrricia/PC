#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    //a -> A
    scanf("%c", &a);
    a = a + 32; //transform din litera mica(a) in litera mare(A)
    printf("%c\n", a);
    return 0;
}
