#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Function to copy a string including the null
 *	terminated byte to a new string
 * @dest: Pointer to the destination
 * @src: Pointer to the source string
 * Return: Pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int ind;

	for (ind = 0; *(src + ind) != '\0'; ind++)
	{
		*(dest + ind) = *(src + ind);
	}
	*(dest + ind) = '\0';
	return (dest);
}
