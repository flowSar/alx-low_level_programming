#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get node at index.
 * @head: head of linkedlist.
 * @index: node index.
 * Return: return the node at index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp_head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	tmp_head = head;
	while (tmp_head)
	{
		if (i == index)
			return (tmp_head);
		i++;
		head = tmp_head;
		tmp_head = head->next;
	}

	return (tmp_head);
}
