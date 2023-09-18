#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - delete node at index .
 * @head: head of linkedlist.
 * @index: node index.
 * Return: return 0 if node is empty and sum if not.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = -1;
	listint_t *prev, *tmp, *deleted;

	if ((*head) == NULL || (int)index < 0)
		return (-1);
	else if ((*head)->next == NULL)
	{
		free(*head);
		(*head) = NULL;
		return (1);
	}
	else if (index == 0 && (*head)->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = NULL;
		(*head) = tmp;
		return (1);
	}
	tmp = (*head);
	while (tmp)
	{
		i++;
		if (i == index)
		{
			deleted = tmp;
			free(tmp);
			tmp = deleted->next;
			prev->next = tmp;
			return (1);
		}
		else
		{
			prev = tmp;
			tmp = prev->next;
		}

	}
	return (-1);

}
