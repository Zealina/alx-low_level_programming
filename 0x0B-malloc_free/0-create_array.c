#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array using malloc
 * @size: the size of the array
 * @c: Thw character to initialize with
 * Return: a char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int n;

	ptr = malloc(sizeof(char) * size);
	if (ptr != NULL && ptr != 0)
	{
		for (n = 0; n < size; n++)
			*(ptr + n)  = c;
		return (ptr);
	}
	return (NULL);
}
