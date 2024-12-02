#include <stdio.h>

// Funcția prod calculează produsul cifrelor unui număr
// și returnează numărul de cifre (stocate în array-ul a[])
int prod(int x, int a[]) {
    int r = 1, n = 0, temp[100];

    // Extragem cifrele în ordine inversă și calculăm produsul
    while (x > 0) {
        temp[n] = x % 10;
        r *= temp[n];
        x /= 10;
        n++;
    }

    // Inversăm cifrele pentru a le stoca în ordine corectă în a[]
    for (int i = 0; i < n; i++) {
        a[i] = temp[n - i - 1];
    }

    return r;  // Returnăm produsul cifrelor
}

int main() {
    int a[100];  // Array pentru stocarea cifrelor unui număr

    // Iterăm prin numerele de la 1 la 12
    for (int x = 1; x <= 12; x++) {
        int n = 0;
        int r = prod(x, a);  // Obținem produsul și array-ul cu cifre

        printf("%d = ", r);  // Afișăm produsul

        // Afișăm cifrele cu "x" între ele
        for (int i = 0; i < n - 1; i++) {
            printf("%d x ", a[i]);
        }
        printf("%d\n", a[n - 1]);  // Ultima cifră, fără "x"
    }

    return 0;
}
