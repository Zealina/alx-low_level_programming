#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * Description: Print some numbers (zero to a thousand)
 * Return: end the program
 */
int main(void)
{
	int a;
	int b;

	for (a = 0, b = 1; b < 100; a = a + b, b = b + a)
	{
		printf("%d, %d, ", a, b);
	};
	printf("\n");
	return (0);
}
