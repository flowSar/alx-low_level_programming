#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - print string using recursion function
 * @s : input
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
		return;
	printf("%c", *s);
	s++;
	if (*s == '\0')
	{
		printf("\n");
		return;
	}

	_puts_recursion(s);
}
