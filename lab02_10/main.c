#include <stdio.h>
#include <stdlib.h>

int main()
{
//    char a;
//    scanf("%s %s", &a);
    char sir[101];
    gets(sir);

    char linie[101]; //alocam un sir de caractere cu 101 elemente(lmax)
    scanf("%[^\n]", linie); //citeste pana la sf liniei(pana la '\n')

    printf("%s", linie); //afiseaza

    return 0;
}
