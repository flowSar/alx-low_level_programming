#include "main.h"
#include <stdio.h>
#include <string.h>

int get_power_two(int i);
/**
 * binary_to_uint - convert binary to decimal.
 * @b: binary number.
 * Return: decimal number of binary.
 */
unsigned int binary_to_uint(const char *b)
{
	int c, idx, p = 0, number = 0;

	if (b == NULL)
		return (0);

	idx = strlen(b);
	while (idx > 0)
	{
		idx--;
		c = b[idx] - '0';
		if (c > 1)
			return (0);
		number += c * get_power_two(p);
		p++;
	}
	return (number);
}
/**
 * get_power_two - calculate 2 power  i.
 * @i: i.
 * Return: the result of 2 ^ i.
 */
int get_power_two(int i)
{
	int sum;

	if (i <= 0)
		return (1);
	sum = 2 * get_power_two(i - 1);
	return (sum);
}
