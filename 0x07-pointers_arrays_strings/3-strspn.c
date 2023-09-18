#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strspn - function that copies memory area
 * @s : input
 * @accept : input
 *
 * Return: return the rest of pointer,
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*accept != '\0')
	{
		while (*s != '\0')
		{
			if (*s == *accept)
			{
				s++;
				len++;
			}
			else
			{
				s++;
			}
			if (*s == ',')
				break;
		}
		while (*s != '\0')
			s--;
		s++;
		accept++;
	}
	return (len);
}
