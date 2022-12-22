#include "main.h"

/**
 * _strncpy - function to copy one string to another
 * @dest: Pointer to string 1
 * @src: Pointer to string source
 * @n: Number of limiting bytes
 * Return: Poiniter to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x]; x++)
	{
		dest[x] = src[x];
	}
	for ( ; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
