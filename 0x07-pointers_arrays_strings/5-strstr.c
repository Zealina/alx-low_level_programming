#include "main.h"

/**
 * _strstr - check for the occurence of a substring
 * @haystack: The pointer to the string to be checked
 * @needle: The substring to check fro
 * Return: Nothing
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int ind1, ind2, a = 0, b = 0;
	unsigned int index, length = 0, loop = 0;
	int help = 1;
	char *ptr = '\0';

	for (index = 0; needle[index] != '\0'; index++)
	{
		length++;
		a += needle[index];
	}
	for (ind1 = 0, ind2 = 0; haystack[ind1] && help > 0; ind1++)
	{
		if (haystack[ind1] == needle[ind2])
		{
			for (loop = ind1; loop <= (length + ind1); loop++)
			{
				b += haystack[loop];
			}
			if (a == b)
			{
				ptr = &(haystack[ind1]);
				help = 0;
				break;
			}
		}
	}
	return (ptr);
}
