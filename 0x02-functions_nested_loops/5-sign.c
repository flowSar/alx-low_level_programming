#include "main.h"
#include <ctype.h>
/**
* print_sign - print_sign
* @n: input
*
* Description: pritn the sign of n
* Return: 0 and 1 and -1 if n is 0 or posistive or negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
