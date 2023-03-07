#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 * _strstr - function that locates a substring.
 * @haystack : input
 * @needle : input
 *
 * Return: the substing you alocate
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, p = -1;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			p = i;
			break;
		}
	}
	if (p != -1)
	{
		i = 0;
		for (j = p; needle[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
				i++;
			else
				return ('\0');
		}
		return (haystack + p);
	}
	else
		return ('\0');
}
