#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function that executes a function
 * Description: function that executes a function and given each and
 * given to it each element of an array.
 * @array: array
 * @size: size.
 * @action : pointer point to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array)
	{
		if (action == NULL || size == 0)
			exit(98);
		for (i = 0; i < size; i++)
			action(array[i]);
	}

}
