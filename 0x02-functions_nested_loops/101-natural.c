#include <stdio.h>

/**
 * print_natural_numbers -  Function to print natural numbers
 * @n: The argument
 */
void print_natural_numbers(int n)
{
	int a, b, c = 0;
	int d, e = 0;

	for (a = 0; a < n; a++)
	{
		b = (a % 3);
		d = (a % 5);
		if (b == 0)
		{
			c += a;
		}
		if (d == 0)
		{
			e += a;
		}
	}
	printf("%d\n", (c + e));
}
/**
 * main - the entry point
 * Return: always zero
 */
int main(void)
{
	print_natural_numbers(1024);
	return (0);
}
