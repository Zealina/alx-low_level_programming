#include <stdio.h>

/**
 * main - the entry point
 * Description: Print the prime factor of a really long number
 * Return: alwayz zero
 */
int main(void)
{
	unsigned long int a, n = 612852475143;

	for (a = 2; a < n; a++)
	{
		if (n % a == 0)
		{
			n /= a;
		}
	}
	printf("%lu\n", n);
	return (0);
}
