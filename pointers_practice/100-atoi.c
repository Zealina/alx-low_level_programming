#include "main.h"

/**
 * _atoi - Function to get numbers from string
 * @s: Pointer to the string
 * Return: The number gotten from the string
 */
int _atoi(char *s)
{
	int ind, ind2, number;
	int a = 0, n = 0, c;

	for (ind = 0; s[ind]; ind++)
	{
		if (s[ind] >= '0' && s[ind] <= '9')
		{
			number = s[ind] - '0';
			n++;
			if (n == 1)
			{
				a = number;
			}
			else if (n > 1)
			{
				a = (a * 10) + number;
			}
			c = ind;
			if (!(s[ind + 1] >= '0' && s[ind + 1] <= '9'))
				break;
		}
	}
	for (ind2 = 0; ind2 < c; ind2++)
	{
		if (s[ind2] == '-')
			a *= (-1);
	}
	return (a);
}
