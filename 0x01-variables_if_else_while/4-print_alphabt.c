#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets A-Z, without letters q and e
 * Return: ends the main function
 */
int main(void)
{
	char c1;

	for (c1 = 'a'; c1 <= 'z'; c1++)
	{
		if (c1 == 'e')
		{
			c1++;
		}
		else if (c1 == 'q')
		{
			c1++;
		}
		else
		{
			putchar (c1);
		};
	};
	putchar ('\n');
	return (0);
}
