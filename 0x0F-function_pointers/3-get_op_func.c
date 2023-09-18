#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
/**
 * get_op_func- function that executes a function
 * Description: function that executes a function and given each and
 * given to it each element of an array.
 * @s: array
 * Return: pointer point to a function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if ((ops[i].op)[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
