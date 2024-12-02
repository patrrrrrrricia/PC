#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned int n = 4; /// 0 < n <= 20
    short b[n];

    // Generăm valori aleatoare pentru tabloul b
    for(int i=0; i<n; i++){
        b[i] = rand();
        printf("%hd ", b[i]);
    }
    printf("\n");

    // Pointerii p1 și p2 care indică jumătatea stângă și dreaptă
    short* p1 = b + n/2 - 1; // p1 este la ultimul element al primei jumătăți
    short* p2 = b + n/2;     // p2 este la primul element al celei de-a doua jumătăți

    // Inversăm jumătatea din stânga cu jumătatea din dreapta
    while(p1 >= b && p2 < b + n) {
        short tmp = *p1;
        *p1 = *p2;
        *p2 = tmp;
        p1--;
        p2++;
    }

    // Afișăm tabloul după inversare
    for(int i=0; i<n; i++){
        printf("%hd ", b[i]);
    }

    return 0;
}
