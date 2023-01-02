#include "main.h"

/**
 * rev_string - Returns string in reverse
 * @s: The Argument
 * Return: Nothing
 */
void rev_string(char *s)
{
	int length = 0, index = 0;
	char holder;

	while (s[i++])
		length++;

	for (index = length - 1; index >= length / 2; index--)
	{
		 holder = s[i];
		s[i] = s[length - index - 1];
		s[length - index - 1] = holder;
	}
}
