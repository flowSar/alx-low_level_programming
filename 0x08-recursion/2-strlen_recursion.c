#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - function that return the length of a string
 * @s : input
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (0);
	s++;
	i = 1 + _strlen_recursion(s);
	return (i);
}
