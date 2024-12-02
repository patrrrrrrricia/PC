#include <stdio.h>
#include <stdlib.h>

int cnt(int n, int* a, int x) {
    while (n && *a != x) {   // Căutăm valoarea x
        n--;
        a++;
    }
    int r = 0;
    while (*a == x) {  // Numărăm aparițiile consecutive ale lui x
        r++;
        a++;
    }
    return r;
}

int main() {
    int p = 5;     // 0 <= p <= 10
    int n = 10;    // 0 <= n <= 100
    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = p / (i + 1); // Atribuim p / (i + 1)
    }

    int r = cnt(n, a, 1); // Căutăm numărul de apariții consecutive ale valorii 1
    printf("%d\n", r); // Afișăm rezultatul
    return 0;
}
