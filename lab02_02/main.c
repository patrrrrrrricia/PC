#include <stdio.h>
#include <limits.h>

int main()
{
    //min si max
    printf("int [%d, %d]\n", INT_MIN, INT_MAX); //int
    printf("signed char [%d, %d]\n", SCHAR_MIN, SCHAR_MAX); //schar
    printf("short [%hd, %hd]\n", SHRT_MIN, SHRT_MAX); //short
    printf("long long [%lld, %lld]\n", LONG_LONG_MIN, LLONG_MAX); //long long

    printf("%d", SCHAR_WIDTH);
    return 0;
}
