#include "hash_tables.h"

/**
 * hash_table_set - add elements to a hash table
 *
 * @ht: the hash table
 * @key: the key of the node
 * @value: the value to store at said node
 * Return: 1 if succeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *move;
	unsigned long int index;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	if (ht == NULL || !key || !value || key == "" || value = "")
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = item;
	else
	{
		if ((ht->array[index])->key == key)
			(ht->array[index])->value = strdup(value);
		else
		{
			move = ht->array[index];
			ht->array[index] = item;
			item->next = move;
		}
	}
	return (1);
}
