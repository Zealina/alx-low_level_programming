#include "main.h"

/**
 * _strcmp - Function to compare two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Number of different integers
 */
int _strcmp(char *s1, char *s2)
{
	int x, y = 0;

	for (x = 0; s1[x]; x++)
	{
		if ((s1[x] > s2[x]) || (s1[x] < s2[x]))
		{
			y += (s1[x] - s2[x]);
			break;
		}
		else
			y += 0;
	}
	return (y);
}
