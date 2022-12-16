#include "main.h"

/**
 * print_diagonal - function to print diagonal
 * @n: The argument
 * Return: Always zero
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int a, b;

		for (a = 1; a <= n; a++)
		{
			for (b = 1; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
