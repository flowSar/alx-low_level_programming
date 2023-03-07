#include <string.h>
#include <stdio.h>
/**
 * _strstr - function revers string
 * @haystack : input
 * @needle : input
 *
 * Return: the rest of string after finding first char.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
