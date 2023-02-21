#include <stdio.h>

/**
 * print_alphabet - pritn phabet in lowercase
 *
 */

void print_alphabet(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

