#include "main.h"

/**
 * _atoi - function to convert string to number
 * @string: Poiner to the string of numbers
 *
 * Return: The converted integer
 */
int _atoi(char *string)
{
	unsigned int number = 0, i = 0;

	while (string[i])
	{
		number = number * 10 + (string[i] - '0');
		i++;
	}
	return (number);
}
/**
 * print_number - print the number using putchar
 * @num: the number to be printed
 *
 * Return: void
 */
void print_number(int num)
{
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
/**
 * main - add positive numbers from args and print the result
 *
 * @argc: count for the number of arguments
 * @argv: Pointer to the arguments
 * Return: 1 if an error occured, 0 otherwise
 */
int main(int argc, char **argv)
{
	unsigned int i = 0, j = 0;
	int res = 0;

	if (argc == 1)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	while (argv[i])
	{
		res += _atoi(argv[i]);
		i++;
	}
	print_number(res);
	_putchar('\n');
	return (0);
}
