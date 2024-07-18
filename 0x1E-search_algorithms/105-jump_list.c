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
	size_t jump_steps = sqrt(size);
	listint_t *start = get_node_index(list, 0);
	listint_t *end = get_node_index(list, jump_steps);

	if (list == NULL)
		return (NULL);

	while (end != start)
	{
		printf("Value checked at index [%li] = [%i]", start->index, start->n);
		if (start->n == value)
			return (start);
		if (end->n >= value)
		{
			printf("Value found between indexes [%li] and [%li]",
				   start->index, end->index);
			while (start)
			{
				printf("Value checked at index [%li] = [%i]", start->index, start->n);
				if (start->n == value)
					return (start);
				start = start->next;
			}
			return (NULL);
		}
		else
		{
			start = get_node_index(list, jump_steps);
			jump_steps += jump_steps;
			end = get_node_index(list, jump_steps);
			if (start->next == NULL)
				return (NULL);
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

	if (index)
		return (NULL);
	while (head)
	{
		if (head->index == index)
			return (head);
		prev = head;
		head = head->next;
	}
	return (prev);
}
