#include "main.h"

/**
 * puts2 - print one skip one
 * @str: The string
 * Return: void, Nothing
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x]; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
