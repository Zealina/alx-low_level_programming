#include "main.h"

/**
 * swap_int - Function to interchange values
 * @a: First argument
 * @b: Second argument
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
