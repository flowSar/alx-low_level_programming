#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- function that print n string given to a function
 * as a parameter.
 * of all its parameter.
 * @separator: seprate number by seperator.
 * @n: n parameter.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i, s = 1;
	char *par;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < (int)n; i++)
	{
		par = va_arg(arg, char *);
		if (par == NULL || par[0] == '\0')
		{
			s += 1;
			continue;
		}
		printf("%s", par);
		if (separator != NULL && i < (int)n - s)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(arg);
}
