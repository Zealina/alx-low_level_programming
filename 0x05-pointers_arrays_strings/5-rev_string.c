#include "main.h"

/**
 * rev_string - Returns string in reverse
 * @s: The Argument
 * Return: Nothing
 */
void rev_string(char *s)
{
	int length, strlen;
	int index, rev_index = 0;
	char *r;

	for (length = 0; s[length]; length++)
	{
		strlen += sizeof(s[length]);
	}
	for (index = strlen; s[index]; --index)
	{
		r[rev_index] = s[index];
		rev_index++;
	}
	s = r;
}
