#include "hash_tables.h"

/**
 * hash_table_t - this function create a hash table
 * @size: size of the array
 *
 * Return: return the has table that was created
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	unsigned long int i;
	hash_node_t *node;

	hash_table_t *hash_table = malloc(size * sizeof(hash_table_t));
	hash_table->size = size;

	for (i = 0; i < size; i++)
	{
		node = malloc(sizeof(hash_node_t));
		node->key = 0;
		node->value = 0;
		node->next = NULL;
		hash_table[i].array = &node;
	}
	return (hash_table);
}


/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
} 