#include "main.h"

/**
 * puts2 - Function to prints one character and skips the other
 * @str: pointer to the string
 * Return: void
 */
void puts2(char *str)
{
	int index, checker;

	for (index = 0; str[index]; index++)
	{
		checker = index % 2;
		if (checker == 0)
		{
			_putchar(str[index]);
		}
	}
	_putchar('\n');
}
