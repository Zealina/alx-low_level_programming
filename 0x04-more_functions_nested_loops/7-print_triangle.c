#include "main.h"

/**
 * print_triangle - Function to print triangle for argument
 * @size: The argument
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, n;

	for (a = 1; a <= size; a++)
	{
		for (b = a - 1; b <= size; b++)
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
