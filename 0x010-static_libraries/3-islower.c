#include <stdio.h>
#include <ctype.h>

/**
 * _islower - the entry point
 * Description: Function to check for the case of character
 * @c: value of the input in the function
 * Return: int c
 */
#include "main.h"
int _islower(int c)
{
	int n;

	if ((c >= 97 && c <= 121) || (c >= 48 && c <= 57))
	{
		n = 1;
	}
	else
	{
		n = 0;
	};
	return (n);
}
