#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * factorial - function calculate factorial number.
 * @n : input
 *
 * Return: return -1 if n < 0 and if not retunr the factorial number,
 */
int factorial(int n)
{
	int f;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	f = n * factorial((n - 1));
	return (f);
}
