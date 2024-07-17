#include "search_algos.h"
/**
 * linear_search - linear search function
 *
 * @array: array we're looking at
 * @size: size of the arrat
 * @value: value that we're looking for in the array
 *
 * Return: return -1 if the value not found or value index if was found.
 */

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
