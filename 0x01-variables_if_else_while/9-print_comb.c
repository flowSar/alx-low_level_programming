#include <stdio.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x [] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(x[i]);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return(0);
}
