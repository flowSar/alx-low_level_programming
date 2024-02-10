#include "lists.h"

/**
 * free_helper- recursion function that free travel trought
 * linked list to free it.
 * @head: linkedlist head.
 */
void free_helper(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_helper(head->next);
	free(head);
}
/**
 * free_dlistint- function that free dlistint( memory.
 * @head: linkedlist head.
 */
void free_dlistint(dlistint_t *head)
{

	if (head != NULL)
	{
		free_helper(head);
	}
}
