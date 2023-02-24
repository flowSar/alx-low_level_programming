#include "main.h"
/**
 * print_triangle - this function print trinagle of # depends on arg
 * @size: input
 *
 * Return: always 0
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int k = 1;
		int j;

		while (k < size + 1)
		{
			int i = 0;

			while (i < size - k)
			{
				_putchar(' ');
				i++;
			}
			j = 0;

			while (j < k)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			k++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
