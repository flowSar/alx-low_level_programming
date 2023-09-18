#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -  function that create a new dog.
 * Description: this function alocate memory
 * for new dog and for his name and owner .
 * @name: input
 * @age : input
 * @owner : input
 * Return: new dog if it success and null if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	dog_t *new_dog = &dog;

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	if (new_dog == NULL)
	{
		return (NULL);
	}
	return (new_dog);
}
