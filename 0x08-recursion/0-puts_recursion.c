#include "main.h"

/**
 * _puts_recursion - Print string using recursion
 * @s: Pointerto the string
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	int n = 0;

	if (*(s + n) == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*(s + n));
		n++;
		_puts_recursion((s + n));
	}
}
