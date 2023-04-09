#include "hash_tables.h"

/**
 * hash_table_get - Get data at the node with key "key"
 * @ht: The hash table
 * @key: The key to retrieve value from
 * Return: Value assocated with key or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (ht->array[key_index((unsigned char *)key, ht->size)])
		return ((ht->array[key_index((unsigned char *)key, ht->size)])->value);
	else
		return (NULL);
}
