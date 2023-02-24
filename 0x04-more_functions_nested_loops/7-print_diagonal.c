#include "main.h"
/**
 * print_diagonal - this function print diagonal of \ depends on arg
 * @n: input
 *
 * Return: always 0
 */
void print_diagonal(int n)
{
	int j = 0;

	while (j < n)
	{
		int i = 0;

		while (i < j + 1)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
	}
}
