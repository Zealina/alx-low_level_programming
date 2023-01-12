#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Check for and return a pointer
 * @b: The size of the memory allocated
 * Return: Pointer to the allocated memory location
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
