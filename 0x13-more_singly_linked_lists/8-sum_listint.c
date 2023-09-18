#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function return sum of all data in linkedlist.
 * @head: head of linkedlist.
 * Return: return 0 if node is empty and sum if not.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int  sum = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		head = tmp->next;
		tmp = head;
	}
	return (sum);

}
