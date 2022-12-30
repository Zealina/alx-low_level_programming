#include "main.h"

/**
 * recursion - Function to practice recursion
 * @n: The number to find the factorial
 * Return: Pointer to the number
 */
int recursion(int n)
{
	int fac, index;

	for (index = n; index > 0; index--)
	{
		fac = n * recursion(n - 1);
	}
	return (fac);
}

