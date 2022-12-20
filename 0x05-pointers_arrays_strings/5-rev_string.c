#include "main.h"

/**
 * rev_string - Returns string in reverse
 * @s: The Argument
 * Return: Nothing
 */
void rev_string(char *s)
{
	int bob = 0, i = 0;
	char z;

	while (s[i++])
		bob++;

	for (i = bob - 1; i >= bob / 2; i--)
	{
		z = s[i];
		s[i] = s[bob - i - 1];
		s[bob - i - 1] = z;
	}
}
