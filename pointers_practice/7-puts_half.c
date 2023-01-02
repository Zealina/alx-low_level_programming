#include "main.h"

/**
 * puts_half - Function to print half of the array
 * @str: Pointer to the string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int index, length = 0, ind2;

	for (index = 0; str[index] != '\0'; index++)
	{
		length++;
	}
	if (length % 2 != 0)
	{
		length = length - 1;
	}
	for (ind2 = length / 2; str[ind2]; ind2++)
	{
		_putchar(str[ind2]);
	}
	_putchar('\n');
}
