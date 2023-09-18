#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - print string in reverse using recursion function
 * @size : input
 * @c : input
 * Return: null if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *result;
	unsigned int i;

	if (size == 0)
		return (NULL);
	result = malloc(size);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		result[i] = c;

	return (result);
}
