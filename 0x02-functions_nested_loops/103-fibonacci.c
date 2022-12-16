#include <stdio.h>

/**
 * fibonacci_add - the entry point
 * Description: Print sum of numbers of fibonacci
 */
void fibonacci_add(void)
{
	unsigned long int b = 0, c = 1, a;
	float sum;

	while (1)
	{
		a = b + c;
		if (a > 4000000)
		{
			break;
		}
		if ((a % 2) == 0)
		{
			sum += a;
		}
		b = c;
		c = a;
	}
	printf("%.0f\n", sum);
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
