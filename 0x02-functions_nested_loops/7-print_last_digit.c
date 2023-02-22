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

	_putchar(''+last_digit);
	return (last_digit);
}
