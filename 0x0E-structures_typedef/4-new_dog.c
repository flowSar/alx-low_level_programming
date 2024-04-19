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

	char *n_name = malloc(get_length(name));
	char *n_owner = malloc(get_length(owner));

	if (n_name == NULL || n_owner == NULL)
		return (NULL);

	if (name == NULL || owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}

	new_dog->name = n_name;
	new_dog->owner = n_owner;
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
