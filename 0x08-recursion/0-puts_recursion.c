#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - print string using recursion function
 * @s : input
 */
void _puts_recursion(char *s)
{
	printf("%c", *s);
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	s++;
	_puts_recursion(s);
}
