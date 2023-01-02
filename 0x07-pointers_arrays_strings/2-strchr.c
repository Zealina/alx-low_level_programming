#include "main.h"
#include <string.h>

/**
 * _strchr - Locate the first occurence of a string
 * @s: Pointer to the string
 * @c: The string to be located
 * Return: Return the pointer to the first occurence of the string
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
	}
	return (NULL);
}

