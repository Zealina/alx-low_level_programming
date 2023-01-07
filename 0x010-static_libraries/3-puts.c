#include "main.h"

/**
 * _puts - Contemporary of the stdio puts
 * @str: The Argument
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
