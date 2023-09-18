#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers- function that print n number givent to a function
 * as a parameter.
 * of all its parameter.
 * @separator: seprate number by seperator.
 * @n: n parameter.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL && i < (int)n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(arg);
}
