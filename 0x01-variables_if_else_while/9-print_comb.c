#include <stdio.h>

/**
 * main - prints combination of single digits numbers
 * Description: I have no description
 * Return: End the file
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
