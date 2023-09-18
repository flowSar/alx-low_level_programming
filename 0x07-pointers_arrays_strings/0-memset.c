#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _memset -function that fills memory with a constant byte
 * @s : input
 * @b : input
 * @n : input
 *
 * Return: s pointer that filled with data
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
