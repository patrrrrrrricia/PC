#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    scanf("%c", &x);
    if(x >= 'A' && x <= 'Z')
       puts("este litera mare");
    if(x >= 'a' && x <= 'z')
        puts("este litera mica");
    if(x >= '0' && x <= '9')
        puts("este cifra");
    else
        puts("alt caracter");
    return 0;
}
