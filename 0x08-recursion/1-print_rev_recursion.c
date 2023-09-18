#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - print string in reverse using recursion function
 * @s : input
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion((s + 1));

	printf("%c", *s);
}
