#include <stdio.h>
#include "dog.h"
/**
 * init_dog - entry function
 * Description: Creates a multidimensional array
 * @d: input
 * @name: input
 * @age : input
 * @owner : input
 * Return: 0 if it success and 1 if it fails.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
