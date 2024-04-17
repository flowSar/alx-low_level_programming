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
	hash_node_t *prv_node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);

	prv_node = ht->array[index]->next;
	while (prv_node)
	{
		if (strcmp(prv_node->key, key) == 0)
			return (prv_node->value);

		prv_node = prv_node->next;
	}

	return (NULL);
}
