#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all base 10 numbers from 0 - 10
 * Return: return 0
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		printf("%d", b);
	};
	putchar ('\n');
	return (0);
}
