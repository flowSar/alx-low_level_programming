#include "hash_tables.h"
/**
 * hash_table_print - this function for printing hashtable
 * @ht: hash table reference
 *
 * Return: No return.
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i;
	int found = 0;

	size = ht->size;
	i = 0;

	printf("{");
	while (i < size)
	{
		if (ht->array[i] != NULL)
		{
			printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
			found = 1;
		}
		i++;
	}
	if (found == 1)
		printf("}\n");
	else
		printf("}\n");
}
