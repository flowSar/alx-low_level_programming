#include <stdio.h>

/**
 * print_alphabet - pritn phabet in lowercase
 *
 */

void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		++c;
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

