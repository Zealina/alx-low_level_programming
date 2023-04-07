#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table and initialize it to NULL
 * @size: The size of the table
 *
 * Return: The created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	return (table);
}
