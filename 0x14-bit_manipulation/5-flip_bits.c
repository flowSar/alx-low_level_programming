#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * flip_bits - sets the value of a bit to 1 at a given index.
 * @n: decimal number.
 * @m : index.
 * Return: return.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n;
	unsigned long int v = m;
	int i;

	int mask = 1;
	int flip = 0;

	for (i = 0; i <= 32; i++)
	{
		int mask_a = a & mask;
		int mask_v = v & mask;

		if (mask_v != mask_a)
			flip++;
		mask = mask << 1;
	}
	return (flip);
}
