#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * puts2 - sget length of a tring
 * @str : input
 *
 * Return: the length ofstring
 */
void puts2(char *str)
{
	int i, l;

	l = strlen(str);
	for (i = 0 ; i > l; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
