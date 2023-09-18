#include <stdio.h>
#include <string.h>
/**
 * _strncpy - sget length of a tring
 * @dest : input
 * @src : input
 * @n : input
 *
 * Return: full string if success
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
