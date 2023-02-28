#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strcpy - print half of a string
 * @dest : input
 * @src: input
 *
 * Return: the value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = strlen(src);
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
