#include <stdio.h>

/**
 * _isalpha - the entry point
 * Description: Function to check for the case of character
 * @c: value of the input in the function
 * Return: int c
 */
#include "main.h"
int _isalpha(int c)
{
	int n;

	if ((c >= 65 && c <= 89) || (c >= 97 && c <= 121))
	{
		n = 1;
	}
	else
	{
		n = 0;
	};
	return (n);
}
