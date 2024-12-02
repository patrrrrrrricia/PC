#include <stdio.h>

int main(){
    int a[] = {1, 1, 3, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);  // Calculăm dimensiunea tabloului corect
    for(int i=0; i<n; i++){
        int mp = i;
        for(int j=i; j<n; j++)
            if (*(a+j) < *(a+mp))
                mp = j;
        int tmp = a[mp];
        a[mp] = a[i];
        a[i] = tmp;
    }
    int i = 0;
    while(i<n){
        int x = a[i];
        int cnt = 0;
        while(a[i] == x){
            i++;
            cnt++;
        }
        if (cnt > 1)
            printf("%d ", x);
    }
    return 0;
}
