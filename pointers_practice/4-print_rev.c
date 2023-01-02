#include "main.h"

/**
 * print_rev - Print a string in reverse
 * @s: Pointer to the string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int ind, index, length = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		length++;
	}
	for (ind = length - 1; ind >= 0; ind--)
	{
		_putchar(s[ind]);
	}
	_putchar('\n');
}
