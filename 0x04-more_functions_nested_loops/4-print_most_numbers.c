#include "main.h"
/**
 * print_most_numbers - this function print number from 0to 9 exclude 2 and 4
 *
 * Return : alway 0
 */
void print_most_numbers(void)
{
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		if (numbers != '2' && numbers != '4')
			_putchar(numbers);
	}
	_putchar('\n');
}
