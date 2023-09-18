#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: decimal number.
 * @index : index.
 * Return: return new nalue of n.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int x = 1 << index;
	int res;

	if (n == NULL || index > 100)
		return (-1);

	if (*n == 0)
		x  = 0;
	res = x ^ *n;
	if ((x & *n) != 0)
		*n = res;
	return (1);
}
