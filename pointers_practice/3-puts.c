#include "main.h"

/**
 * _puts - Prints a string to standard output
 * @str: Pointer to the string
 * Return: Nothing
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index]; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
