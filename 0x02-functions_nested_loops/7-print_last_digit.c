#include "main.h"
/**
*print_last_digit - print the last digit of integer
*@x: input
* 
*Description: print the last digit of a number
*Return: retur teh last digit
*/
int print_last_digit(int x)
{
	int last_digit = x % 10;

	_putchar((char)last_digit);
	if (last_digit < 0)
	{
		_putchar((x*-1) % 10);
		return ((x*-1) % 10);
	}

	return (last_digit);
}
