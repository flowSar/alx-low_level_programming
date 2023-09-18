#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - function that add node at the end of a linkedlist.
 * @head: head of linkedlist.
 * @n : linked list data
 * Return: address of a new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *tmp_head, *new;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		(*head) = malloc(sizeof(listint_t));
		if ((*head) == NULL)
			return (NULL);
		(*head)->n = (int)n;
		(*head)->next = NULL;
		return (*head);
	}
	tmp_head = (*head);
	tmp = (tmp_head)->next;
	while (tmp)
	{
		(tmp_head) = tmp;
		tmp = (tmp_head)->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = (int)n;
	new->next = NULL;
	(tmp_head)->next = new;
	return (new);
}
