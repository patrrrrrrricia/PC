#include <stdio.h>
#include <stdlib.h>

unsigned int* cautare_binara(unsigned int* x, int n, unsigned int y) {
    int a = 0, b = n - 1;  // corectăm limita pentru b
    while(a <= b) {         // corectăm condiția de terminare
        int c = (a + b) / 2;
        if (*(x + c) == y)
            return x + c;
        if (*(x + c) < y)
            a = c + 1;
        else
            b = c - 1;
    }
    return NULL;
}

int main() {
    unsigned int x[] = {1, 5, 6, 6, 7, 10};  // x este sortat și are max 100 elemente
    unsigned int y = 7;  // y poate fi orice
    unsigned int* p = cautare_binara(x, sizeof(x) / sizeof(x[0]), y);
    if (p == NULL)
        puts("nu am gasit");
    else
        printf("am gasit pe pozitia %d\n", (int)(p - x));  // adăugăm un \n pentru afișare corectă
    return 0;
}
