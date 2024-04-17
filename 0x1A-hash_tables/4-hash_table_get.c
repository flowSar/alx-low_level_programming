#include "hash_tables.h"
/**
 * hash_table_get - this function retreive valur from hashtable
 * base on the kek_>index
 * @ht: hash table reference
 * @key: key elment
 *
 * Return: Return the found value or NULL if it isn't found.
 */



char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}
