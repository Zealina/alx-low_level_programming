#include <stdio.h>

/**
 * print_natural_numbers -  Function to print natural numbers
 * main - the entry point
 * @n: The argument
 * Return: Always zero
 */
void print_natural_numbers(int n)
{
	int a, b, c = 0;

	for (a = 0; a < n; a++)
	{
		b = (a % 3) || (a % 5);
		if (b == 0)
		{
			c += a;
		}
	}
	printf("%d\n", c);
}
