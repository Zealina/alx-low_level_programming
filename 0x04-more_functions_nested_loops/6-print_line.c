#include "main.h"

/**
 * print_line - Print the number of underscore in argument
 * @n: The argument
 * Return: void
 */
void print_line(int n)
{
	int c = 1;
	int b = '_';

	while (c <= n)
	{
		_putchar(b);
		c++;
	}
	_putchar('\n');
}
