#include <stdio.h>
#include "main.h"

/**
 * _isupper - Function to check for the case of a letter
 * Description: same as above
 * @c: Argument
 * Return: The answer and end of program
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
