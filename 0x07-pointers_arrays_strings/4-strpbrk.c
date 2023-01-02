#include "main.h"

/**
 * _strpbrk - Check for the first occurence of any byte of a string
 *	in the array
 * @s: Pointer to the string
 * @accept: Pointer to the checking values
 * Return: Pointer to first byte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int ind1, ind2, a = 1;
	char *ptr = '\0';

	for (ind1 = 0; s[ind1] != '\0' && a != 0; ind1++)
	{
		for (ind2 = 0; accept[ind2]; ind2++)
		{
			if (s[ind1] == accept[ind2])
			{
				ptr = &(s[ind1]);
				a = 0;
				break;
			}
		}
	}
	return (ptr);
}
