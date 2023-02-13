#include "main.h"

/**
 * set_bit - set the bit at a particular index to 1
 * @index: the location to set bit
 * @n: The number with the location
 * Return: 1 if successful and -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
