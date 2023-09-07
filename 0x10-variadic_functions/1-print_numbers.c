#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Print all the numbers in the arguments
 * @separator: Pointer to the separator of the arguments
 * @n: The number of numbers to be printed
 *
 * Return: void function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
