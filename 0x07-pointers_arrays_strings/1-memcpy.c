#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _memcpy - function that copies memory area
 * @dest : input
 * @src : input
 * @n : input
 *
 * Return: s pointer that filled with data
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
