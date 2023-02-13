#include "main.h"

/**
 * print_binary - Print binary without using array
 * @n: The number to convert to binary
 * Return: Void, nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
