#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function that print lisnkeed list.
 * @head: head of linkedlist.
 * Return: the length  of list.
 */
size_t print_listint_safe(const listint_t *head)
{
	int len = -1;
	listint_t *tmp, *fast;

	if (head == NULL)
		return (0);
	if (head->next == NULL)
		return (1);

	tmp = (listint_t *)head;
	fast = (listint_t *)head;
	while (tmp)
	{
		printf("[%p] %i\n", (void *)tmp, tmp->n);

		len++;
		tmp = tmp->next;
		if (fast && fast->next)
		{
			fast = fast->next->next;
			if (tmp == fast)
			{
				printf("->: [%p] %i\n", (void *)fast, fast->n);
				return (len);
			}

		}
	}

	return (len);

}
