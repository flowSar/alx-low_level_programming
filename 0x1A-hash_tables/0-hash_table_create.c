#include "hash_tables.h"

/**
 * hash_table_create - this function create a hash table
 * @size: size of the array
 *
 * Return: return the has table that was created
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	unsigned long int i;
	hash_node_t **array, *node;
	hash_table_t *hash;

	hash_table = malloc(sizeof(hash_table_t));
	hash_table->size = size;
	array = malloc(size * sizeof(hash_node_t *));

	for (i = 0; i < size; i++)
	{
		node = malloc(sizeof(hash_node_t));
		node->key = NULL;
		node->value = NULL;
		node->next = NULL;
		array[i] = node;
	}
	hash_table->array = array;



	return (hash_table);
}
