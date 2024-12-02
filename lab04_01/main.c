#include <stdio.h>
#include <stdlib.h>

int main()
{

//    int x = 5;
//    int k;
//    //pozitia
//    scanf("%d", &k);
//    //             k
//    //1 << k 00000010000
//    if(x & ( 1 << k))
//        puts("bitul k este activ");
//    else
//        puts("bitul k este INACTIV");
//
//    //pb 3
//    printf("%d", x & ~(1 << k)); //bitul k dezactivat
//
//    //pb 2
//    printf("%d", x | (1 << k)); //setez bitul k pe 1
//
//    //pb 4
//    printf("%d", x ^ (1 << k));
//
//    //pb 5
//    int k1, k2;
//    scanf("%d %d", &k1, &k2);
//    printf("%d", x | (1 << k1) | (1 << k2));
//    printf("%d", x & ~(1 << k1) & ~(1 << k2));
//    printf("%d", x ^ (1 << k) ^ (1 << k))
//
//    //pb 6
//    printf("%d", x << k); //inmultire cu 2^k
//    printf("%d", x >> k); //impartire cu 2^k

    //pb 7
    int x = 100;
    int k;
    int mask = (1 << k) - 1; //poz de interes, genereaza un nr care are exact n biti de 1 aliniati la dreapta
    //            k ... 10
    //             1111111
    if((x % mask) == 0)
        puts("divizibil cu 2^k");
    else
        puts("nu este divizibil cu 2^k");

    //pb 8
    //int y = x % (1 << k); //fara %
    printf("x mod 1^k = %d", x & mask); //pastreaza bitii de la sfarsitul nr

    //pb 11
    char c;
    scanf(" %c", &c);
    printf("%c vs %c", c, c ^ 32);
    return 0;
}
