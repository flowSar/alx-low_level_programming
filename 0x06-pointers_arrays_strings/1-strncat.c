#include <stdio.h>
#include <string.h>
/**
 * _strcat - sget length of a tring
 * @dest : input
 * @src : input
 * @n : input
 *
 * Return: full string if success
 */
char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src);

	return (dest);
}