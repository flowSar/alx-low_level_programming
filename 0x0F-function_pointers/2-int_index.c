#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index- function that searches for an integer.
 * Description: function that executes a function and given and
 * given to it each element of an array to compare it .
 * @array: array
 * @size: size.
 * @cmp : pointer point to a function
 * Return: -1 if it fails and index of element and the array that match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res = -1;

	if (array == NULL || cmp == NULL || size <= 0)
		return (res);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res == 1)
			return (i);
		if (res == 0)
			res = -1;
	}

	return (res);
}
