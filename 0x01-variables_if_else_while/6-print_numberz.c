#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numbers[10] = "0123456789";
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(numbers[c]);
	}
	putchar('\n');
	return (0);
}

