#include "ain.h"
#include <string.h>
/**
 * _memset - sget length of a tring
 * @s : input
 * @b : input
 * @n : input
 *
 * Return: s if success
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	while (i <= n)
	{
		*s = b
		s++;
		i++;
	}
	return (s);
}