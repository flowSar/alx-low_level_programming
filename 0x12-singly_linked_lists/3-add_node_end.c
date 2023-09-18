#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
list_t *insert(list_t **head, const char *str);
/**
 * add_node_end - add node at the end of a list;
 * @head: first node.
 * @str: data string.
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *tmp2, *tmp3, *new;
	int i, j;

	if (str == NULL)
		return (NULL);
	if (!(*head))
	{
		insert(head, str);
	}
	else
	{
		tmp = (*head)->next;
		if (tmp == NULL)
		{
			tmp = malloc(sizeof(list_t));
			if (tmp == NULL)
				return (NULL);
			tmp->str = (char *)malloc(sizeof(get_length((char *)str)));
			for (i = 0; str[i] != '\0'; i++)
				tmp->str[i] = str[i];
			tmp->len = (int)get_length((char *)str);
			(*head)->next = tmp;
		}
		else
		{
			tmp2 = (*head)->next;
			while (tmp2)
			{
				tmp3 = tmp2;
				tmp2 = tmp3->next;
			}
			new = malloc(sizeof(list_t));
			if (new == NULL)
				return (NULL);
			new->len = (int)get_length((char *)str);
			new->str = (char *)malloc(sizeof(get_length((char *)str)));
			for (j = 0; str[j] != '\0'; j++)
				new->str[j] = str[j];
			new->next = NULL;
			tmp3->next = new;
		}
	}
	return (new);
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
/**
 * insert - create first node
 * @head: head.
 * @str: data.
 * Return: new node
 */
list_t *insert(list_t **head, const char *str)
{
	int j;

	(*head) = malloc(sizeof(list_t));
	if ((*head) == NULL)
		return (NULL);
	(*head)->str = (char *)malloc(sizeof(get_length((char *)str)));
	for (j = 0; str[j] != '\0'; j++)
		(*head)->str[j] = str[j];
	(*head)->len = (int)get_length((char *)str);
	(*head)->next = NULL;
	return (*head);
}
