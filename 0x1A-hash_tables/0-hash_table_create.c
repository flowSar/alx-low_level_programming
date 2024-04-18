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
	hash_node_t **array;
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->count = 0;
	array = malloc(size * sizeof(hash_node_t *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;
	hash_table->array = array;

	return (hash_table);
}
