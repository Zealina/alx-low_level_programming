#include "main.h"

/**
 * _strchr - Locate the first occurence of a string
 * @s: Pointer to the string
 * @c: The string to be located
 * Return: Return the pointer to the first occurence of the string
 */
char *_strchr(char *s, char c)
{
	int index;
	char *ptr = '\0';

	for (index = 0; s[index]; index++)
	{
		if (s[index] == c)
		{
			ptr = &(s[index]);
			break;
		}
	}
	return (ptr);
}

