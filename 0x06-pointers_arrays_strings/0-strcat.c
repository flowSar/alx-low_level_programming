#include <stdio.h>
#include <string.h>
/**
 * _strcat - sget length of a tring
 * @dest : input
 * @src : input
 *
 * Return: 0 if success
 */
char *_strcat(char *dest, char *src)
{
	char *result;

	result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (result);
}
