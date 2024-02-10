#include "lists.h"

/**
 * add_dnodeint- add element at the beginning of a list.
 * @head: linkedlist head.
 * @n: data
 * Return: return new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = (int)n;
		new->prev = NULL;
		(*head) = new;
		(*head)->next = tmp;
		tmp->prev = new;
		return (new);
	}
	return (new);
}
