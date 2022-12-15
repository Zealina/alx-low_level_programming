#include <stdio.h>

/**
 * fibonacci_add - the entry point
 * Description: Print first 50 numbers of fibonacci
 */
void fibonacci_add(void)
{
	long int sum;
	long int b = 0;
	long int c = 1;

	while (c < 4000000)
	{
		b += c;
		c += b;
		if ((b % 2) == 0)
		{
			sum += b;
		}
		if ((c % 2) == 0)
		{
			sum += c;
		}
	}
	printf("%ld\n", sum);
}
/**
 * main - the entry point
 * Return: End of program
 */
int main(void)
{
	fibonacci_add();
	return (0);
}
