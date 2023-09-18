#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - add node at the beginning of a list;
 * @head: first node.
 * @str: data string.
 * Return: length of linkedlist.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp_head;
	int i;

	if (str == NULL)
		return (NULL);
	tmp_head = (*head);
	(*head) = malloc(sizeof(list_t));
	if ((*head) == NULL)
	{
		free((*head));
		return (NULL);
	}
	(*head)->str = (char *)malloc(sizeof(get_length((char *)str)));
	for (i = 0; str[i] != '\0'; i++)
		(*head)->str[i] = str[i];
	if ((*head)->str == NULL)
	{
		free((*head)->str);
	}
	(*head)->len = (int)get_length((char *)str);
	(*head)->next = tmp_head;
	return (*head);
}

/**
 * get_length - get length of string;
 * @s: given parameter.
 * Return: length of string.
 */

int get_length(char *s)
{
	int length = 0, i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
