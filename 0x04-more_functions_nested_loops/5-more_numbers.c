#include "main.h"
/**
 * more_numbers- print number from 0 to 14 for 10 times
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j <= 14)
		{
			_putchar("%s", j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
