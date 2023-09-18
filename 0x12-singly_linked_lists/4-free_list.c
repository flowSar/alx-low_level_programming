#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - functio that free a list;
 * @head: first node.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
