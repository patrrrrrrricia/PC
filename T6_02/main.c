#include <stdio.h>
#include <stdlib.h>


//3
void mul(long long* px, int a) {
    *px = *px * a;
}

int main()
{
    long long x = 1;    // Schimbăm x la long long pentru a preveni depășirea capacității
    int a = 2;          // 0 <= a <= 2 (a rămâne 2, conform codului original)
    long long* px = &x;

    for(int i = 0; i < 60; i++) {
        mul(px, a);   // Multiplicăm x cu a (care este 2)
    }

    printf("%lld", x);  // Folosim %lld pentru a afișa long long
    return 0;
}

/*
#include <stdio.h>

int main() {
    long long x = 1;    // Inițializăm x cu valoarea 1

    // Înmulțim x cu 2^60 prin shiftare la stânga
    x = x << 60;    // Echivalent cu x = x * (2^60)

    printf("%lld\n", x);   // Afișăm rezultatul
    return 0;
}*/
