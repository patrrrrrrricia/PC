#include <stdio.h>
#include <stdlib.h>

//5
int descompune(long long x, long long* p1, long long* p2){
    *p1 = x / 2;
    *p2 = x - *p1;
    return *p1 != *p2;  // Returnează 1 dacă părțile nu sunt egale
}

int main()
{
    long long x = 123456789LL;  // 0 <= x <= 10^18
    long long tmp1, tmp2;
    long long* p1 = &tmp1;  // Pointez pe tmp1
    long long* p2 = &tmp2;  // Pointez pe tmp2
    int nr1 = 0;  // Contor pentru numărul de descompuneri unde părțile sunt diferite

    // Bucla continuă până când x devine 0
    while (x) {
        nr1 += descompune(x, p1, p2);  // Apelăm funcția de descompunere
        x = *p1;  // Setăm x la valoarea primei părți
    }

    // Afișăm rezultatul
    printf("%d\n", nr1);
    return 0;
}
