#include "lists.h"

/**
 * get_dnodeint_at_index- get element at the index .
 * @head: linkedlist head.
 * @index: index
 * Return: return node at index or NUll if doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i = 0;
	dlistint_t *tmp = NULL;

	if ((int)index < 0)
		return (NULL);
	tmp = head;
	while (tmp)
	{

		if (i == (int)index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
