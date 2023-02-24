#include "main.h"

/**
 * main - print the number of arguments the program receives
 * @argc: Counter for the number of args
 * @argv: Pointer to the arguments
 *
 * Return: Always 0
 */
int main(int argc, __attribute__((unused))char **argv)
{
	unsigned int n;

	n = argc - 1;
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
	return (0);
}

