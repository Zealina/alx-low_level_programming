#include "main.h"

/**
 * _strcat - Function to concatenate two strings
 * @dest: The first string
 * @src: The second and source string
 * Return: Pointer to the first stringg
 */
char *_strcat(char *dest, char *src)
{
	int x1, x2, length = 0;

	for (x2 = 0; dest[x2] != 0; x2++)
	{
		length++;
	}
	for (x1 = 0; src[x1] != 0; x1++)
	{
		dest[length] = src[x1];
		length++;
	}
	dest[length + 1] = '\0';
	return (dest);
}
