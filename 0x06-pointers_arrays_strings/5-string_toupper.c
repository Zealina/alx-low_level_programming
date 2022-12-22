#include "main.h"

/**
 * string_toupper - Function to convert a string to upper
 * @ptr: The Poiner to the string
 * Return: The string in uppercase
 */
char *string_toupper(char *ptr)
{
	int x;

	for (x = 0; ptr[x]; x++)
	{
		if (ptr[x] >= 97 && ptr[x] <= 122)
		{
			ptr[x] -= 32;
		}
	}
	return (ptr);
}
