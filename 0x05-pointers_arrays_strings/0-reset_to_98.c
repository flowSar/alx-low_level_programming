#include "main.h"
/**
 * reset_to_98 - function change  the value of that pointer point to
 * @n: input
 *
 * Return: Always 0 (Success)
 */
void reset_to_98(int *n)
{
	*n = 89;
}

#include <stdio.h>

int main(void)
{
    int n;

    n = 402;
    printf("%d\n", n);
    reset_to_98(&n);
    printf("%d\n", n);
    return (0);
}