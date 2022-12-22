#include "main.h"

/**
 * cap_string - Function to capitalize first letters of a string
 * @ptr: Pointer to the string
 * Return: The Pointer to the string
 */
char *cap_string(char *ptr)
{
	int x, y;
	char checker[14] = {44, 46, 123, 125, 59,
		40, 41, 34, 33, 63, ' ', '\t', '\n'};

	for (x = 0; ptr[x]; x++)
	{
		for (y = 0; checker[y]; y++)
		{
			if (ptr[x + 1] >= 97 && ptr[x + 1] <= 12)
			{
				ptr[x + 1] -= 32;
			}
		}
	}
	return (ptr);
}
