#include <stdio.h>

/**
 * print_natural_numbers -  Function to print natural numbers
 * @n: The argument
 */
void print_natural_numbers(int n)
{
	int a, c = 0;

	for (a = 0; a < n; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		{
			c += a;
		}
	}
	printf("%d\n", c);
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
