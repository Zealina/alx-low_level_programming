#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Function to check for digit
 *	Zero through Nine
 * @c: The argument
 * Return: the end of progra
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
