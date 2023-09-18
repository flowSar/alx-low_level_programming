#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - fthis functio print all nodes data;
 * @h: first node.
 * Return: length of linkedlist.
 */
size_t print_list(const list_t *h)
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
		if (tmp_list->str == NULL)
			printf("[%d] (nil)\n", tmp_list->len);
		else
			printf("[%d] %s\n", tmp_list->len, tmp_list->str);
		len++;
		tmp_list = tmp;
		if (tmp != NULL)
			tmp = tmp_list->next;

	}
	return (len);
}
