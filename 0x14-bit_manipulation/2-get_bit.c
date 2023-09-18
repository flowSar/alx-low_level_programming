#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_bit - get the value of a bit at index.
 * @n: decimal number.
 * @index : index.
 * Return: return.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x = n >> index;
	int i = x & 1;

	if (index > 100)
		return (-1);

	if (i == 1)
		return (1);
	else
		return (0);

	return (0);
}
