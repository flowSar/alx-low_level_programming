#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - print string in reverse using recursion function
 * @s1 : input
 * @s2 : input
 * @n : input
 * Return: null if function fail if not return the concatenate string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s2_length = 0, s1_length = 0, length = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0')
	{
		s1_length++;
		s1++;
	}
	s1 -= s1_length;
	while (*s2 != '\0')
	{
		s2_length++;
		s2++;
	}
	s2 -= s2_length;
	if (n >= s2_length)
		length = s1_length + s2_length;
	else
		length = s1_length + n;
	result = malloc(length + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; *s1 != '\0'; i++)
	{
		result[i] = *s1;
		s1++;
	}
	for (j = i; j < length && *s2 != '\0'; j++)
	{
		result[j] = *s2;
		s2++;
	}
	result[j] = '\0';
	return (result);
}
