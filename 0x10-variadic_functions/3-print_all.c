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

	va_start(ap, format);
	while (format[i])
	{
		acter = format[i];
		switch (acter)
		{
			case 'c':
				if (i != 0)
					printf(", ");
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				if (i != 0)
					printf(", ");
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				if (i != 0)
					printf(", ");
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				if (i != 0)
					printf(", ");
				printf("%s", va_arg(ap, char *));
				break;
			default:
				break;
		}
		i++;
	}
	va_end(ap);
	putchar('\n');
}
