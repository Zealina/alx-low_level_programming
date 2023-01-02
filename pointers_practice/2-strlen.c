#include "main.h"

/**
 * _strlen - Returns the length of any string
 * @s: Pointer to the array of characters
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int index, length = 0;

	for (index = 0; s[index]; index++)
	{
		length++;
	}
	return (length);
}
