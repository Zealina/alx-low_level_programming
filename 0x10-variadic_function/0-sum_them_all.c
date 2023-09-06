#include "variadic_functions.h"

/**
 * sum_them_all - sum all the arguments of a variadic function
 * @c: The number of arguments present
 *
 * Return: The sum of all the arguments
 */
int sum_them_all(const unsigned int c, ...)
{
	int result = 0, n = c;
	va_list sum;

	if (c == 0)
		return (0);
	va_start(sum, c);
	while (n)
	{
		result += va_arg(sum, int);
		n--;
	}
	va_end(sum);
	return (result);
}
