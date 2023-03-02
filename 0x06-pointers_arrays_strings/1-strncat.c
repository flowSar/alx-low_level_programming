#include <stdio.h>
#include <string.h>
/**
 * _strncat - sget length of a tring
 * @dest : input
 * @src : input
 * @n : input
 *
 * Return: full string if success
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
