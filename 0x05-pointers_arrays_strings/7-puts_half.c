#include "main.h"

/**
 * puts_half - Function to print half of a string
 * @str: The argument
 * Return: Void, Nothing
 */
void puts_half(char *str)
{
	int x, length, n, y;

	for (x = 0; str[x]; x++)
		length += sizeof(str[x]);
	if (length % 2 != 0)
		n = (length - 1) / 2;
	else
		n = length / 2;
	for (y = n; str[y]; y++)
		_putchar(str[y]);
	_putchar('\n');
}
