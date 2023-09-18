#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - unction that allocates memory for an array, using malloc.
 * @nmemb : input
 * @size : input
 * Return: null if function fail if not return the concatenate string.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	int j;
	unsigned int total;

	total = size * nmemb;
	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(total);
	if (array == NULL)
		return (NULL);
	for (j = 0; j < (int)total; j++)
		array[j] = 0;
	return ((void *)array);
}
