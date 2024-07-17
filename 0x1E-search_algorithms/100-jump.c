#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump search function
 *
 * @array: array we're looking at
 * @size: size of the arrat
 * @value: value that we're looking for in the array
 *
 * Return: return -1 if the value not found or value index if was found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_steps = sqrt(size);
	int start = 0;
	int i = 0;
	int end = jump_steps;

	while (start < end && end < size)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[end] >= value)
		{
			printf("Value found between indexes [%i] and [%i]\n", start, end);
			while (i <= end)
			{
				printf("Value checked array[%i] = [%i]\n", i, array[i]);
				if (array[i] == value)
					return (i);
				i++;
			}
		}
		else
		if (array[i] == value)
			return (i);
		if (array[end] == value)
			return (end);
		if (array[end] < value)
		{
			start = end;
			i = start;
			end += jump_steps;

			if (end > size)
			{
				printf("Value found between indexes [%i] and [%i]\n", start, end);
			}
		}
	}
	return (-1);
}
