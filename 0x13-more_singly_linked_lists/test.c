#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
listint_t *reverse_listint_helper(listint_t **prev, listint_t **nxt);
/**
 * reverse_listint - function that reverse linked list.
 * @head: head of linkedlist.
 * Return: the first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last_node;

	if (*head == NULL)
		return (NULL);
	else if ((*head)->next == NULL)
		return ((*head));
	last_node = reverse_listint_helper(head, &((*head)->next));
	(*head)->next = NULL;
	(*head) = last_node;
	return (last_node);
}
/**
 * reverse_listint_helper - help us revers list.
 * @prev: previous node.
 * @nxt : next node.
 * Return: return last node.
 */
listint_t *reverse_listint_helper(listint_t **prev, listint_t **nxt)
{
	listint_t *head;

	if ((*nxt) == NULL)
	{
		return (*prev);
	}
	head = reverse_listint_helper(nxt, &((*nxt)->next));
	(*nxt)->next = (*prev);
	return (head);
}
