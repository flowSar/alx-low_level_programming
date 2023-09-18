#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - print string in reverse using recursion function
 * @s1 : input
 * @s2 : input
 * Return: the concat of two strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, j, m, k = 0, sizes1 = 0, sizes2 = 0, size = 0, ss1 = 0, ss2 = 0;

	for (i = 0; *s1 != '\0'; i++)
	{
		sizes1 += 1;
		s1++;
	}
	while (k < sizes1)
	{
		k++;
		s1--;
	}
	k = 0;
	for (j = 0; *s2 != '\0'; j++)
	{
		sizes2 += 1;
		s2++;
	}
	while (k < sizes2)
	{
		k++;
		s2--;
	}
	size = sizes1 + sizes2;
	new_str = malloc(size + 1);
	if (new_str == NULL)
		return (NULL);
	for (m = 0; m < size; m++)
	{
		if (m < sizes1)
			new_str[m] = s1[ss1++];
		if (m >= sizes1)
			new_str[m] = s2[ss2++];
	}
	return (new_str);
}
