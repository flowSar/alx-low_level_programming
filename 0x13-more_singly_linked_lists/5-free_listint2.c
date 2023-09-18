#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that free linkedlist.
 * @head: head of linkedlist.
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if ((*head) == NULL)
	{
		return;
	}

	tmp = (*head)->next;
	free_listint2(&tmp);
	free((*head));
	(*head) = NULL;
}
