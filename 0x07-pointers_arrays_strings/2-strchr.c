#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strchr - function that copies memory area
 * @s : input
 * @c : input
 *
 * Return: return the rest of pointer,
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (s);

}
