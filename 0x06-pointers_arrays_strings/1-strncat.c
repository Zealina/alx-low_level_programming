#include "main.h"

/**
 * _strncat - Function to concatenate n bytes of a string
 * to another
 * @dest: The first string and result
 * @src: The source string
 * @n: The number of bytes
 * Return: Pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, length = 0;
	int x;
	char *pointer;

	while (dest[index++])
	{
		length++;
	}
	for (x = 0; src[x]; x++)
	{
		if (x <= n)
		{
			dest[length - 1] = src[x];
			length++;
		}
	}
	pointer = dest;
	return (pointer);
}
