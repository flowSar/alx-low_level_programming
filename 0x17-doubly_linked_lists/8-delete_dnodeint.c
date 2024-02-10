#include "lists.h"

/**
 * delete_dnodeint_at_index- delete node at index .
 * @head: linkedlist head.
 * @index: index.
 * Return: return 1 if delete successed and -1 if it fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL, *pv;
	unsigned int i = 0;

	if ((*head) == NULL)
		return (-1);
	if (index == 0 && (*head) != NULL)
	{
		if ((*head)->next == NULL)
		{
			free((*head));
			(*head) = NULL;
			return (1);
		}
		tmp = (*head)->next;
		free((*head));
		(*head) = tmp;
		tmp->prev = NULL;
		return (1);
	}
	else
	{
		tmp = (*head)->next;
		while (tmp)
		{
			i++;
			if (i == index)
			{
				pv = tmp->prev;
				tmp->next->prev = pv;
				pv->next = tmp->next;
				tmp->next = NULL;
				tmp->prev = NULL;
				free(tmp);
				tmp = NULL;
				return (1);
			}
			tmp = tmp->next;
		}
	}
	return (-1);
}
