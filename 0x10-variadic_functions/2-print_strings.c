#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Print strings in a variadic funtion
 * @separator: The separator of hte strings
 * @n: The number of strings passed to the argument
 *
 * Return: void function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		printf("%s", va_arg(ap, char *));
	}
	va_end(ap);
	putchar('\n');
}
