#include <stdio.h>

/**
 * fibonacci - the entry point
 * Description: Print first 50 numbers of fibonacci
 * @n: The argument
 */
void fibonacci(int n)
{
	int a;
	long int b = 0;
	long int c = 1;

	n /= 2;
	for (a = 0; a < n; a++)
	{
		b += c;
		c += b;
		if (a == 0)
		{
			printf("%ld", b);
			printf(", %ld", c);
		}
		else
		{
			printf(", %ld", b);
			printf(", %ld", c);
		}
	}
	printf("\n");
}
/**
 * main - the entry point
 * Return: End of program
 */
int main(void)
{
	fibonacci(50);
	return (0);
}
