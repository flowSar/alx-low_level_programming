#include "hash_tables.h"
/**
 * hash_table_delete - this functio delete a hash table
 * base on the kek_>index
 * @ht: hash table reference
 * @key: key elment
 *
 * Return: Return the found value or NULL if it isn't found.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table = ht;
	unsigned long int size, i;
	int found = 0;

	size = ht->size;
	i = 0;

	while (i < size)
	{
		if (table->array[i] != NULL)
		{
			free(table->array[i]->key);
			free(table->array[i]->value);
			found++;
		}
		free(table->array[i]);
		table->array[i] = NULL;
		i++;
	}
	free(ht);
}