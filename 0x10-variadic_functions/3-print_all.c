#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all- function that prints anything based on the format.
 * @format: n paramaters.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	char *c = (char *)format, *str;
	int i = 0, j = 0;
	va_list arg;

	va_start(arg, format);

	while (c[i])
	{
		switch (c[i])
		{
			case 's':
				str = (char *)va_arg(arg, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			default:
				j = 1;
				break;
		}
		if (j == 0 && c[i + 1] != '\0')
			printf(", ");
		j = 0;
		i++;
	}
	printf("\n");
}
