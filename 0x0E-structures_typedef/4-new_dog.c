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

	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	new_dog->name = malloc(get_length(name) + 1);
	new_dog->owner = malloc(get_length(owner) + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL || new_dog == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	if (name == NULL || owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}


/**
 * get_length - get string length.
 * @str: string
 *
 * Return: return str length.
 */
int get_length(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;

	return (i);
}
