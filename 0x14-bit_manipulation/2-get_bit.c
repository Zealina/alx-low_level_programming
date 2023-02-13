#include "main.h"

/**
 * get_bit - Get the bit at a particular index
 * @index: The index to get the bit at
 * @n: The number to get the bit
 * Return: -1 for error and the value of the bit if successful
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 31)
		return (-1);
	result = (n >> index) & 1;
	return (result);
}
