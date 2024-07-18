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
	int start = 0, i = 0, end = jump_steps;

	while (end <= size)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[end] >= value)
		{
			printf("Value found between indexes [%i] and [%i]\n", start, end);
			return (compare(array, i, end, value));
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
			if (end >= (int)size)
			{
				printf("Value checked array[%i] = [%i]\n", i, array[i]);
				printf("Value found between indexes [%i] and [%i]\n", start, end);
				return (compare(array, i, size - 1, value));
			}
		}
	}
	return (-1);
}
/**
 * compare - compare
 *
 * @array: array we're looking at
 * @index: index that we are starting from
 * @end: last index.
 * @value: value that we're looking for in the array
 *
 * Return: return -1 if the value not found or value index if was found.
 */
int compare(int *array, int index, int end, int value)
{
	while (index <= end)
	{
		printf("Value checked array[%i] = [%i]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
