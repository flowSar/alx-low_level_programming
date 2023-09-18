#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - function alocate new block of memory with differnt size.
 * @ptr : input
 * @old_size : input
 * @new_size : input
 * Return: null if function fails or new allocated block of memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *tmp = (char *)ptr;
	unsigned int i, j;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr == NULL)
		for (j = 0; j < new_size; j++)
			new_ptr[j] = 0;
	else
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = tmp[i];
	}
	free(ptr);
	return ((void *)new_ptr);
}
