#include "lists.h"

/**
 * insert_dnodeint_at_index- insert new node at index .
 * @h: linkedlist head.
 * @idx: index.
 * @n: data.
 * Return: return NULL if it fails and new a node if it succeeds.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = NULL, *new = NULL;
	unsigned int i = 0;

	if (n == 0)
	{
		(*h) = malloc(sizeof(dlistint_t));
		(*h)->n = (int)n;
		(*h)->next = NULL;
		(*h)->prev = NULL;
		return (*h);
	}
	else
	{

		tmp = (*h);
		while (tmp->next)
		{
			i++;
			if (i == idx)
			{
				new = malloc(sizeof(dlistint_t));
				if (!new)
					return (NULL);
				new->n = n;
				new->next = tmp->next;
				tmp->next->prev = new;
				tmp->next = new;
				new->prev = tmp;

			}
			tmp = tmp->next;
		}
		return (new);
	}
	return (NULL);
}
