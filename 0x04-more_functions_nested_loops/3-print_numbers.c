#include "main.h"
/**
 * print_numbers- this function print numbers from 0 to 9
 *
 * Return: always 0
 */
void print_numbers(void)
{
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
		_putchar(numbers);
	_putchar('\n');
}
