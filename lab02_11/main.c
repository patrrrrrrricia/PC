#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int n, inv;
//    scanf("%d", &n);
//    while(n != 0)
//    {
//        inv = (inv * 10) + n % 10;
//        n /= 10;
//    }
//    printf("%d\n", inv);

    //oglinditul / inversul
    int a, b, c, d;
    scanf("%ld%ld%ld%ld", &a, &b, &c, &d);
    printf("%d%d%d%d", d, c, b, a);
    return 0;
}
