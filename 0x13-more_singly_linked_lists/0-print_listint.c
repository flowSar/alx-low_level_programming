#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that print all linkedlist data;
 * @h: head of linkedlist.
 * Return: length of linkedlist.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	int len = 0;

	if (h == NULL)
		return (0);
	tmp = h->next;
	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = tmp;
		if (h)
			tmp = h->next;
	}
	return (len);
}
