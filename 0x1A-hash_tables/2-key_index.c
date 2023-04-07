#include "hash_tables.h"

/**
 * key_index - Produces key from hash_djb2
 *
 * @key: The key to produce index fron
 * @size: the size of the array
 * Return: The index where the key/pair value should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
