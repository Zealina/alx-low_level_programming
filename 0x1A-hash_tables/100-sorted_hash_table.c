#include "hash_tables.h"

/**
 * shash_table_create - Create a hash_table with sorted elements in the list
 *
 * @size: The size of the table to be created
 * Retrurn: The hash table if successful, NULL Otherwise
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}
/**
 * shash_table_set - Add elements to the hash table
 * @ht: The hash table
 * @key: Key to the element
 * @value: The associated value of the element
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *reassign, *sort, *temp;
	unsigned long int index;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL || ht == NULL || key == NULL || *key == '\0')
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL)
		return (0);
	new->next = NULL;

	index = key_index(key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		reassign = ht->array[index];
		loopptr = reassign;
		while (loopptr->next != NULL)
		{
			if (strcmp(loopptr->key, key) == 0)
				looptr
		ht->array[index] = new;
		new->next = reassign;
	}

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		ht->shead = new;
		new->snext = NULL;
		ht->stail = new;
		return (1);
	}
	sort = ht->shead;
	while (sort->snext != NULL)
	{
		if (strcmp(sort->key, key) > 0)
		{
			temp = sort;
			sort = new;
			sort->snext = temp;
			sort->sprev = temp->sprev;
			temp->sprev = sort;
			return (1);
		}
	}
	sort->snext = new;
	new->sprev = sort;
	new->snext = NULL;
	ht->stail = new;
	return (1);
}
