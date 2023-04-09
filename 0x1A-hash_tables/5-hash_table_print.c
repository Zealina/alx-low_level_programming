#include "hash_tables.h"

/**
 * hash_table_print - Print all the content of the hashtable
 * @ht: The hash table to print from 
 * Return: Nothing, void function
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp, *linked_list;
	unsigned long int i, comma = 0;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			if (comma == 1)
				printf(", ");
			printf("\'%s\': \'%s\'", temp->key, temp->value);
			linked_list = temp->next;
			while (linked_list != NULL)
			{
				if (comma == 1)
					printf(", ");
				printf("\'%s\': \'%s'\'", linked_list->key, linked_list->value);
				linked_list = linked_list->next;
			}
			comma = 1;
		}
	}
	printf("}\n");
}
