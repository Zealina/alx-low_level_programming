#include "main.h"

/**
 * swap_int - Swap the value of two arguments
 * @a: Pointer to the first argument
 * @b: Pointer to the second argument
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
