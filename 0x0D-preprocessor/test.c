#include <stdio.h>

#define ABS(x) ((x) < (-1) ? (-1) * (x) : (x))


int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}