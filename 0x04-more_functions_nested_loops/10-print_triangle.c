#include "main.h"

/**
 * print_triangle - Function to print triangle for argument
 * @size: The argument
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, n;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size - a; b++)
			{
				_putchar(' ');
			}
			for (n = 1; n <= a; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
