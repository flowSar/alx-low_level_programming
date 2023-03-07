#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 * _strpbrk - function revers string
 * @s : input
 * @accept : input
 *
 * Return: the rest of string
 */
char *_strpbrk(char *s, char *accept)
{
	int p = -1, i, j;

	for (i = 0; *accept != '\0'; i++)
	{
		for (j = 0; *s != '\0'; j++)
		{
			if (*accept == *s)
			{
				if (p >= j)
					p = j;
				if (p == -1)
					p = j;
				break;
			}
			else
				s++;
		}
		accept++;
		s -= j;
	}
	if (p == -1)
		return ('\0');
	else
		return (s += p);
}
