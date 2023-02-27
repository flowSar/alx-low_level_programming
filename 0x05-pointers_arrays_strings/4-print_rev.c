#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * print_rev - sget length of a tring
 * @s : input
 *
 * Return: the length ofstring
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1 ; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
