#include "main.h"

/**
 * _memset - Fills the allocated space of a buffer with a const char
 * @s: Pointer to the buffer
 * @b: The char
 * @n: Number of allocated space
 * Return: Pointer to the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
