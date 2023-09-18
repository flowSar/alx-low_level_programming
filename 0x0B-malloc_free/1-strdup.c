#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - print string in reverse using recursion function
 * @str : input
 * Return: a poiter to duplicated string.
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, size = 0, j, k = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; *str != '\0'; i++)
	{
		size += 1;
		str++;
	}
	while (k < size)
	{
		str--;
		k++;
	}
	new_str = malloc(size + 1);
	if (new_str == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		new_str[j] = str[j];
	}

	return (new_str);
}
