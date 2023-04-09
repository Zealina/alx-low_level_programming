#include "hash_tables.h"

/**
 * hash_table_get - Get data at the node with key "key"
 * @ht: The hash table
 * @key: The key to retrieve value from
 * Return: Value assocated with key or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ret;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	if (ht->array == NULL)
		return (NULL);

	if (ht->array[key_index((unsigned char *)key, ht->size)])
	{
		ret = ht->array[key_index((unsigned char *)key, ht->size)];
		if (strcmp(ret->key, key) == 0)
			return (ret->value);
		while (ret->next != NULL)
		{
			ret = ret->next;
			if (strcmp(ret->key, key) == 0)
				return (ret->value);
		}
	}
	return (NULL);
}
