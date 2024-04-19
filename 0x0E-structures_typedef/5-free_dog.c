#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -  function that free dogs.
 * Description: will use this function to free the dogs that we created.
 * @d : input
 */
void free_dog(dog_t *d)
{
	dog_t *dog = (dog_t *)malloc(sizeof(d));

	free(dog->name)
	free(dog->owner)
	free(dog);
}
