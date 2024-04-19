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

	char *new_name = malloc(get_length(name));
	char *new_owner = malloc(get_length(owner));

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	if (new_dog == NULL)
	{
		return (NULL);
	}
	return (new_dog);
}

/**
 * get_length -  return length of str.
 * @str: string
 *
 * Return: return length of string or 0 if str= NULL.
 */
int get_length(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
