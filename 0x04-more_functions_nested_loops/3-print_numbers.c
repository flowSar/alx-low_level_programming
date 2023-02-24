#include "main.h"
/**
*_print_numbers - print numbers
* Description: this function print numbes from 0 to 9
* Return: always return 0 (success)
*/
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
