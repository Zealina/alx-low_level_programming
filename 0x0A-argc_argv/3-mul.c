#include "main.h"
#include <stdio.h>

/**
 * _atoi - function to convert a character to number
 * @*temp: Pointer to the string of numbers
 *
 * Return: The number converted from character
 */
int _atoi(char *num_string)
{
	unsigned int i = 0;
	int result = 0, sign = 1;

	while (num_string[i])
	{
		if (num_string[i] >= '0' && num_string[i] <= '9')
		{
			result = (result * 10) + (num_string[i] - '0');
		}
		if (num_string[i] == '-')
			sign *= -1;
		i++;
	}
	result *= sign;
	return (result);
}
/**
 * print_number - function to print number using putchar
 * @num: the number
 *
 * Return: nothing
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
 * main - Multiply two numbers in argument
 * @argc: Counter of the nubmer of arguments
 * @argv: Pointer to the arguments
 *
 * Return: 1 if an error occured, 0 otherwise
 */
int main(int argc, char **argv)
{
	char *error = "Error\n";
	int i = 0;
	int res, var1, var2;

	if (argc != 3)
	{
		while (error[i])
		{
			_putchar(error[i]);
			i++;
		}
		return (1);
	}
	else
	{
		var1 = _atoi(argv[1]);
		var2 = _atoi(argv[2]);
		res = var1 * var2;
		if (res < 0)
		{
			_putchar('-');
			res *= -1;
		}
		print_number(res);
	}
	_putchar('\n');
	return (0);
}
