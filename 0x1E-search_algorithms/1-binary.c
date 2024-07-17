#include "search_algos.h"
/**
 * binary_search - binary search function
 *
 * @array: array we're looking at
 * @size: size of the arrat
 * @value: value that we're looking for in the array
 *
 * Return: return -1 if the value not found or value index if was found.
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);
	index = binary_search_handler(array, value, 0, size);

	return (index);
}
/**
 * binary_search_handler - this function use divide and conqure algorithm
 * to search for a value in the array
 *
 * @array: array we're looking at
 * @value: value that we're looking for in the array
 * @f: first index that we're going to start searching from
 * @l: last index that we're going to stop searching at
 *
 * Return: return -1 if the value not found or value index if was found.
 */
int binary_search_handler(int *array, int value,  int f, int l)
{
	int middle = (f + l) / 2;

	searching_in_array(array, f, l);
	if (f > l)
		return (-1);

	if (value == array[middle])
		return (middle);
	if (f == l)
		return (-1);
	if (array[middle] > value)
		return (binary_search_handler(array, value, f, middle - 1));
	else
		return (binary_search_handler(array, value, middle + 1, l));
}
/**
 * searching_in_array - the array that we're searching at
 *
 * @array: array we're looking at
 * @f: first index of th e array
 * @l: last index the array
 */
void searching_in_array(int *array, int f, int l)
{
	int i;

	if (f < l)
	{
		printf("Searching in array: ");
		for (i = f; i < l; i++)
		{
			printf("%i", array[i]);
			if (i != l - 1)
				printf(",");
		}
		printf("\n");
	}


}
