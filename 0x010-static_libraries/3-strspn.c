#include "main.h"

/**
 * _strspn - Count the number of bytes in the prefix substring
 *	containing @accept
 * @s: Pointer to the string
 * @accept: Pointer to the checking values
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ind1, ind2, a = 0;

	for (ind1 = 0; s[ind1] != ' '; ind1++)
	{
		for (ind2 = 0; accept[ind2]; ind2++)
		{
			if (accept[ind2] == s[ind1])
			{
				a++;
			}
		}
	}
	return (a);
}
