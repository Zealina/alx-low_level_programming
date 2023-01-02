#include "main.h"

/**
 * rev_string - Function to reverse a string
 * @s: The pointer to the string
 * Return: Nothing, void
 */
void rev_string(char *s)
{
	int ind1, ind2, inc = 0, length = 0;
	int kip = 0;

	for (ind1 = 0; s[ind1] != '\0'; ind1++)
	{
		length++;
	}
	for (ind2 = length - 1; ind2 >= (length - 1) / 2; ind2--, inc++)
	{
		kip = s[ind2];
		s[ind2] = s[inc];
		s[inc] = kip;
	}
}
