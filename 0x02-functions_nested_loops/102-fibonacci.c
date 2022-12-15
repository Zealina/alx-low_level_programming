#include <stdio.h>

/**
 * fibonacci - the entry point
 * Description: Print first 50 numbers of fibonacci
 * @n: The argument
 */
void fibonacci(int n)
{
	int a;
	int b = 0;
	int c = 1;

	for (a = 0; a <= n; a++)
	{
		b += c;
		c += b;
		printf("%d, ", b);
		printf("%d", c);
		if (a != 50)
		{
			printf(", ");
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
