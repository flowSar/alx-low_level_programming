#include "lists.h"

/**
 * dlistint_len- function that return the number of element in a list.
 * @h: linkedlist head
 * Return: number of element in a linkedlist.
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp = NULL;
	int len = 0;

	if (h == NULL)
		return (0);

	tmp = (dlistint_t *)h;
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
