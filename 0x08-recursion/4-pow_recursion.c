#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _pow_recursion - function calculate factorial number.
 * @x : input
 * @y : input
 *
 * Return: return -1 if n < 0 and if not retunr the factorial number,
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	res = x * _pow_recursion(x, (y - 1));
	return (res);
}
