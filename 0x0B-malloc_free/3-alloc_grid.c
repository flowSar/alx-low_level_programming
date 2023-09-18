#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function create dynamic 2d array;
 * @width : input
 * @height : input
 * Return: 2D array or null if it fails.
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, f, **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (f = 0; f <= i; f++)
				free(array[f]);
			free(array);
			return (NULL);
		}
	}


	for (j = 0; j < height; j++)
		for (k = 0; k < width; k++)
			array[j][k] = 0;

	return (array);
}
