#include "search_algos.h"
#include <math.h>
/**
 * linear_skip - linear_skip search algorithm
 *
 * @list: linked list head
 * @value: value that we're looking for in the array
 *
 * Return: return NULL if the value not found or value node if was found.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *jump_pointer;
	skiplist_t *start = list;

	if (list == NULL)
		return (NULL);

    jump_pointer = list->express;
	while (jump_pointer != start)
	{
		printf("Value checked at index [%li] = [%i]", start->index, start->n);
		if (start->n == value)
			return (start);
		if (jump_pointer->n >= value)
		{
			return (start_comparing(start, jump_pointer, value));
		}
		else
		{
			start = jump_pointer;
			jump_pointer = jump_pointer->express;
			if (jump_pointer == NULL)
			{
				return (start_comparing(start, jump_pointer, value));
			}
		}
	}
	return (NULL);
}
/**
 * start_comparing - comapre the value with items between start and jump_ponter
 *
 * @start: pointer to a node that we are starting the comparing from
 * @jump_pointer: jump_pointer
 * @value: value that we're looking for in the list chunck
 *
 * Return: return NULL if the value not found or value node if was found.
 */
skiplist_t *start_comparing(skiplist_t *start,
							skiplist_t *jump_pointer, int value)
{
	printf("Value found between indexes [%li] and [%li]",
			start->index, jump_pointer->index);
	while (start)
	{
		printf("Value checked at index [%li] = [%i]", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}
	return (NULL);
}
