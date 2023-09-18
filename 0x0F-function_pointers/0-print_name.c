#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name -  print a name that passed as argument
 * Description: this function take pointer to a char and pointer
 * to a function and use pointer to function to print name.
 * @name: name
 * @f: pointer to a function;
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(98);
	f(name);
}
