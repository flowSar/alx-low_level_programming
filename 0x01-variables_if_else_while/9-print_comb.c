#include <stdio.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i / 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	return(0);
}
