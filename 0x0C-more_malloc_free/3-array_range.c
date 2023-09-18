#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -  function that creates an array of integers
 * @min : input
 * @max : input
 * Return: null if function fails or min > max and pointer if array was ceated.
 */
int *array_range(int min, int max)
{
	int *array, i, total;

	total = max - min;
	if (total == 0)
		total = 1;
	if (min > max)
		return (NULL);

	array = malloc(total * sizeof(int) + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
