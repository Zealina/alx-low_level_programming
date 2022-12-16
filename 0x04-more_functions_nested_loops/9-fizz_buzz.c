#include <stdio.h>

/**
 * main - the entry point
 * Description: Program to print fizzbuzz
 * Return: zero, end of program
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a != 1)
		{
			if (a % 15 == 0)
			{
				printf(" FizzBuzz");
			}
			else if (a % 5 == 0)
			{
				printf(" Buzz");
			}
			else if (a % 3 == 0)
			{
				printf(" Fizz");
			}
			else
			{
				printf(" %d", a);
			}
		}
		else
		{
			printf("%d", a);
		}
	}
	printf("\n");
	return (0);
}
