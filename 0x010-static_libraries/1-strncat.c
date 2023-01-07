#include "main.h"

/**
 * _strncat - Function to concatenate two strings n bytes
 * @dest: Pointer to first string
 * @src: Pointer to second string
 * @n: The limiting number of bytes
 * Return: Nothing
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != 0)
		x++;

	while (src[y] != 0 && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
