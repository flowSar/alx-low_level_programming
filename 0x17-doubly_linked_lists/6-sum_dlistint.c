#include "lists.h"

/**
 * sum_dlistint- return the sum of all data in list .
 * @head: linkedlist head.
 * Return: return sum of all nodes.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;
	int result = 0;

	if (head == NULL)
		return (result);

	tmp = head;
	while (tmp)
	{
		result += tmp->n;
		tmp = tmp->next;
	}
	return (result);
}
