#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - print string in reverse using recursion function
 * @b : input
 * Return: retung null if fails.
 */
void *malloc_checked(unsigned int b)
{
	char *result = malloc(b);

	if (result == NULL)
	{
		exit(98);
	}

	return (result);
}
