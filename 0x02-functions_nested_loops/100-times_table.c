#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: value
 *
 * Return: 0 if running is success
 */
void print_times_table(int n)
{
	if (n < 15 && n >= 0)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int res = i * j;

				if (res < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(res % 10 + '0');
					if (j != n)
						_putchar(',');
				}
				else if (res >= 100)
				{
					_putchar(' ');
					_putchar(res / 100 + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar(res % 10 + '0');
					if (j != n)
						_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
					if (j != n)
						_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
