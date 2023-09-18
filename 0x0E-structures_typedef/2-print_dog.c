#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog -  function that prints a struct dog.
 * Description: Creates a multidimensional array
 * @d: input
 * Return: 0 if it success and 1 if it fails.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL)
			(*d).name = "(nil)";
		if ((*d).age == 0.0)
			(*d).age = 0.0;
		if ((*d).owner == NULL)
			(*d).owner = "(nil)";

		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}


}
