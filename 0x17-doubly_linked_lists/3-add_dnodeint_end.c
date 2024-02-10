#include "lists.h"

/**
 * add_dnodeint_end- function that add node at the end.
 * @head: linkedlist head.
 * @n: data.
 * Return: return the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp = NULL;

	if ((*head) == NULL)
	{
		(*head) = malloc(sizeof(dlistint_t));
		if (!(*head))
			return (NULL);
		(*head)->n = (int)n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}
	else
	{
		tmp = (*head);
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = (int)n;
		new->next = NULL;
		new->prev = tmp;
		tmp->next = new;
		return (new);
	}
}
