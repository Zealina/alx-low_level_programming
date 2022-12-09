#include <stdio.h>

/**
 * main - function to print lower case alphabet in reverse
 * Return: return the end of file
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	};
	putchar('\n');
	return (0);
}
