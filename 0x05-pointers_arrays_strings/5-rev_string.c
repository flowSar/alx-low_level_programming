#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * rev_string - function revers string
 * @s : input
 *
 * Return: the length ofstring
 */
void rev_string(char *s)
{
	int length, i;
	char *first, *last, tmp;

	length = strlen(s);
	last = s + length - 1;
	first = s;
	for (i = 0; i < (length) / 2; i++)
	{
		tmp = *last;
		*last = *first;
		*first = tmp;
		last--;
		first++;
	}
}
