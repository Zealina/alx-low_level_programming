#include "main.h"

/**
 * _strcat - Function to to concatenate two strings
 * @dest: The first string
 * @src: The source, Second string
 * Return: A pointer to the first string
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, length_a = 0, x;
	char *pointer;

	while (dest[index++])
	{
		length_a++;
	}
	for (x = 0; src[x]; x++)
	{
		dest[length_a - 1] = src[x];
		length_a++;
	}
	pointer = dest;
	return (pointer);
}
