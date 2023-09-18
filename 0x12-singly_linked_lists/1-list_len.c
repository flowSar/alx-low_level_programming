#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - functio the return the number of node in the list;
 * @h: first node.
 * Return: length of linkedlist.
 */
size_t list_len(const list_t *h)
{
	unsigned int len = 0;
	list_t *tmp;
	list_t *tmp_list;

	if (h == NULL)
		return (0);
	tmp_list = (list_t *)h;
	tmp = tmp_list->next;

	while (tmp_list)
	{
		len++;
		tmp_list = tmp;
		if (tmp != NULL)
			tmp = tmp_list->next;

	}
	return (len);
}
