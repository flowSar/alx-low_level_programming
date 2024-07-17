#include "search_algos.h"
/**
 * interpolation_search - jump search function
 *
 * @array: array we're looking at
 * @size: size of the arrat
 * @value: value that we're looking for in the array
 *
 * Return: return -1 if the value not found or value index if was found.
 */
int interpolation_search(int *array, size_t size, int value)
{

    size_t low = 0;
    size_t high = size;
    size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low])); 
    
}
