#include "main.h"

/**
 * *_strcpy - Contemporary of strcpy
 * @dest: The copy to
 * @src: The copy from file
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
	{
		dest[x] = src[x];
	}
	dest[x + 1] = '\0';
	dest[x + 2] = '\0';
	return (dest);
}
