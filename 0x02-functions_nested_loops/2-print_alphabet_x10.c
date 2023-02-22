#include <main.h>
/**
 * print_alphabet_x10 - Prints the alphabets10 times, in lowercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			++c;
		}
		_putchar('\n');
	}
}
