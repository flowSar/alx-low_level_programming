#include "lists.h"

/**
 * print_dlistint- print all element of a linkedlist
 * @h: linkedlist head
 * Return: number of printed item in a linkedlist.
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp = NULL;
	int len = 0;

	if (h == NULL)
		return (0);

	tmp = (dlistint_t *)h;
	while (tmp)
	{
		len++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}

	return (len);
}
