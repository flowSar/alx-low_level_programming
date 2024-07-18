#include "search_algos.h"
#include <math.h>
/**
 * jump_list - jump_list search algorithm
 *
 * @list: linked list head
 * @size: size of the list
 * @value: value that we're looking for in the array
 *
 * Return: return NULL if the value not found or value node if was found.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_steps = sqrt(size), i = 0;
	size_t step = jump_steps;
	listint_t *start = get_node_index(list, i);
	listint_t *end = get_node_index(list, jump_steps);

	if (list == NULL)
		return (NULL);

	while (i <= size)
	{
		printf("Value checked at index [%li] = [%i]\n", end->index, end->n);
		if (start->n == value)
			return (start);
		if (end->n >= value)
		{
			return (traverse_and_compare(start, end, value));
		}
		else
		{
			i = step;
			step += jump_steps;
			start = get_node_index(list, i);
			end = get_node_index(list, step);
			if (end->next == NULL)
			{
				return (traverse_and_compare(start, end, value));
			}
		}
	}
	return (NULL);
}
/**
 * get_node_index - get node at index
 *
 * @list: linked list head
 * @index: index of the node we need
 *
 * Return: return nodeif it was found at index or last node if wasn't found
 */
listint_t *get_node_index(listint_t *list, size_t index)
{
	listint_t *head = list;
	listint_t *prev = NULL;

	if (index == 0)
		return (list);
	while (head)
	{
		if (head->index == index)
			return (head);
		prev = head;
		head = head->next;
	}
	return (prev);
}
/**
 * traverse_and_compare - compare
 *
 * @start: first node
 * @end: last node
 * @value: value that we're looking for
 *
 * Return: return nodeif it was found at index or last node if wasn't found
 */
listint_t *traverse_and_compare(listint_t *start, listint_t *end, int value)
{
	printf("Value found between indexes [%li] and [%li]\n",
		   start->index, end->index);
	while (start)
	{
		printf("Value checked at index [%li] = [%i]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}
	return (NULL);
}
