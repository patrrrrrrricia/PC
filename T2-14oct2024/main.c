#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Nume[101], Prenume[101];
    unsigned int NumarOrd, Numar;
    scanf("%s %s", &Nume, &Prenume);
    scanf("%d", &NumarOrd);
    scanf("%d", &Numar);

    printf("%s", Prenume);
    printf("%0*d", 3, NumarOrd); //3 de 0
    //printf("%03\\d, NumarOrd);
    printf("%c", 92); //simbolul "\"
    printf("%X", Numar); //hexazecimal majuscule
    return 0;
}
