#include <stdio.h>
#include <stdlib.h>

void cifre(int* c, int* k, int p, int q, int b) {
    if (*k == 0 || !p)
        return;
    (*k)--;  // Decrementăm valoarea lui k corect
    *c = (p * b) / q;  // Calculăm cifra curentă
    cifre(c + 1, k, (p * b) % q, q, b);  // Calculăm restul și continuăm recursiv
}

int main() {
    int p = 1;      // p fixat la 1
    int q = 7;      // 0 < q <= 100
    int b = 10;     // 1 < b <= 10
    int a[21] = {}; // tablou pentru a stoca cifrele fracției
    int k = 20;     // k fixat la 20
    cifre(a, &k, p, q, b);  // Calculăm fracția în baza b
    for(int i = 0; i < 20; i++)  // Afișăm primele 20 de cifre
        printf("%d", a[i]);
    return 0;
}
