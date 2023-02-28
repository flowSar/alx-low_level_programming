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
	int i;

	for (i = len / 2 ; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
