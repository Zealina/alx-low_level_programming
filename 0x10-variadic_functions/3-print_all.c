#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Prints everything
 * @format: A character specifing what format to print
 *
 * Return: Nothing, Void Function
 */
void print_all(const char *format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char acter;
	char *sep = "";
	char *temp;

	va_start(ap, format);
	while (format[i])
	{
		acter = format[i];
		switch (acter)
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				temp = va_arg(ap, char *);
				if (!temp)
					temp = "(nil)";
				printf("%s%s", sep, temp);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	va_end(ap);
	putchar('\n');
}
