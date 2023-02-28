#include <string.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * _atoi - sget length of a tring
 * @s : input
 *
 * Return: the length ofstring
 */
int _atoi(char *s)
{
	int x = atoi(s);
	if (isdigit(x))
		return (x);
	else
		return (0);
}
