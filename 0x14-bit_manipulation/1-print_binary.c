#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_binary - convert decimal to binary and print it.
 * @n: decimal number.
 */
void print_binary(unsigned long int n)
{
	int bit = n;

	if (n == 0)
		_putchar('0');
	else
	{
		while (bit > 0)
		{
			if ((bit & n) == 0)
			{
				_putchar('0');
			}
			else
				_putchar('1');
			bit >>= 1;
		}
	}
}
