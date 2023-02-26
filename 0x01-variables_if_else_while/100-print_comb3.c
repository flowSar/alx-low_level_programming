#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j > i)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
