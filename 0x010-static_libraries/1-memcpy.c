#include "main.h"

/**
 * _memcpy - Copy one memory area to another
 * @dest: Pointer to the destination area
 * @src: Pointer to the source of the char
 * @n: The number of bytes to be copied
 * Return: Pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ind1;

	for (ind1 = 0; ind1 < n; ind1++)
	{
		dest[ind1] = src[ind1];
	}
	return (dest);
}
