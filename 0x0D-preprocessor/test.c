#include <stdio.h>

#define ABS(x) ((x) < (-1) ? (-1) * (x) : (x))

#define SUM(x, y) (x + y)

int main(void)
{
    int i;
    int j;

    int sum = SUM(31, 7);
    printf("%d\n", sum);
    return (0);
}