#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: decimal number.
 * @index : index.
 * Return: return.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int x = 1 << index;
	int res;

	if (n == NULL || index > 30)
		return (-1);

	res = x | *n;
	*n = res;
	return (1);
}
