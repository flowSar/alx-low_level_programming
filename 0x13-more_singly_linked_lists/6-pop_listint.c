#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete head node and get it value.
 * @head: head of linkedlist.
 * Return: return the head node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	(*head) = tmp;
	return (data);
}
