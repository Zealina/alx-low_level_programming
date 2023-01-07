#include "main.h"

/**
 * *_strcpy - Contemporary of strcpy
 * @dest: The copy to
 * @src: The copy from file
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
