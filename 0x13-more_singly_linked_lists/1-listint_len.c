#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that return elements of nodes in the list.
 * @h: head of linkedlist.
 * Return: length of linkedlist.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	int len = 0;

	if (h == NULL)
		return (0);
	tmp = h->next;
	while (h)
	{
		len++;
		h = tmp;
		if (h)
			tmp = h->next;
	}
	return (len);
}
