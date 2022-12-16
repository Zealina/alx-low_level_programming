#include <stdio.h>

/**
 * fibonacci - Prints the first 98 Fibonacci numbers, starting with
 */
void fibonacci(void)
{
	int count;
	unsigned long num1 = 0, num2 = 1, sum;
	unsigned long num1_part1, num1_part2, num2_part1, num2_part2;
	unsigned long part1, part2;

	for (count = 0; count < 92; count++)
	{
		sum = num1 + num2;
		printf("%lu, ", sum);

		num1 = num2;
		num2 = sum;
	}

	num1_part1 = num1 / 10000000000;
	num2_part1 = num2 / 10000000000;
	num1_part2 = num1 % 10000000000;
	num2_part2 = num2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		part1 = num1_part1 + num2_part1;
		part2 = num1_part2 + num2_part2;
		if (num1_part2 + num2_part2 > 9999999999)
		{
			part1 += 1;
			part2 %= 10000000000;
		}

		printf("%lu%lu", part1, part2);
		if (count != 98)
			printf(", ");

		num1_part1 = num2_part1;
		num1_part2 = num2_part2;
		num2_part1 = part1;
		num2_part2 = part2;
	}
	printf("\n");
}
/**
 * main - the entry point
 * Return: always zero
 */
int main(void)
{
	fibonacci();
	return (0);
}
