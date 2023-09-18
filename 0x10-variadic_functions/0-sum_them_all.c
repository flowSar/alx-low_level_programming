#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all- function that return the sum
 * of all its parameter.
 * @n: input number of parameter.
 * Return: the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum, i;
	va_list arg;

	va_start(arg, n);
	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
