#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print string in reverse
 * @str: The Argument
 * Return: Nothing
 */
void print_rev(char *str)
{
	int length, strlen;
	int index;

	for (length = 0; str[length]; length++)
	{
		strlen += sizeof(str[length]);
	}
	for (index = strlen - 1; str[index]; index--)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
