#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * puts_half - print half of a string
 * @str : input
 *
 * Return: the length ofstring
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i, n;

	if (len % 2 != 0)
		n = (len + 1) / 2;
	else
		n = len / 2;

	for (i = n; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
