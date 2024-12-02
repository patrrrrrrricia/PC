#include <stdio.h>
#include <stdlib.h>

int main()
{
    int an;
    scanf("%d", &an);
    if(an % 400 == 0 || (an % 100 != 0 && an % 4 == 0))
        puts("este an bisect");
    else
        puts("nu este an bisect");
    return 0;
}
