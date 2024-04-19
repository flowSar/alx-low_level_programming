#ifndef INV_TREE_H
#define INV_TREE_H
/**
 * struct dog - is struct is lick a block of code that.
 * you can use in multiple times with different .
 * image.
 * @name : input
 * @age : input
 * @owner : input
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

int get_length(char *str);

#endif
