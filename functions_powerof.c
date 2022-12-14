#include <stdio.h>

int power(int m, int n);

/* test power function */
main()
{
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-2,i)); /* 2 to the power of i loop --- and -2 to the power of i loop */
    return 0;

}

/* Power: raise base to n-th power; n >= 0 */
int power(int base, int n)
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
        return p;
}