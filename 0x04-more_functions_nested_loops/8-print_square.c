#include "main.h"
/**
 * print_triangle - this function print square of # depends on arg
 * @size: input
 *
 * Return: always 0
 */
void print_square(int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
