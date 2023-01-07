#include "main.h"

/**
 * _strlen - Prints the length of a string
 * @s: The argument
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i]; i++)
	{
		length += sizeof(s[i]);
	}
	return (length);
}
