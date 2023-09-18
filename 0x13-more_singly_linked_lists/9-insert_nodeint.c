#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

listint_t *add_new_node_end(listint_t *prev, int n);
/**
 * insert_nodeint_at_index - insert node at index idx.
 * @head: head of linkedlist.
 * @idx : index.
 * @n : node data.
 * Return: return 0 if node is empty and sum if not.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *prev, *new;
	unsigned int i = -1;

	if ((int)idx < 0)
		return (NULL);
	if ((*head) == NULL && idx == 0)
	{
		(*head) = malloc(sizeof(listint_t));
		if ((*head) == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		return ((*head));
	}
	tmp = (*head);
	while (tmp)
	{
		i++;
		if (i == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			if (idx == 0)
			{
				(*head) = new;
				new->next = tmp;
			}
			else
			{
				prev->next = new;
				new->next = tmp;
			}
			return (new);
		}
		prev = tmp;
		tmp = prev->next;
	}
	if (idx == i + 1)
	{
		return (add_new_node_end(prev, n));
	}
	return (tmp);
}
/**
 * add_new_node_end - add node at the end.
 * @prev: head of linkedlist.
 * @n : node data.
 * Return: return new node if success and null if it fails.
 */
listint_t *add_new_node_end(listint_t *prev, int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	prev->next = new;
	new->next = NULL;
	return (new);
}
