#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function that add node at the beginning of a linkedlist.
 * @head: head of linkedlist.
 * @n : linked list data
 * Return: address of a new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp, *new;

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
	tmp = (*head);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = (int)n;
	new->next = tmp;
	(*head) = new;
	return (new);
}
