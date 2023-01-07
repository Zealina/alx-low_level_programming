#include "main.h"

/**
 * _abs - the entry point
 * @c: the argument
 * Description: Prints the absolute value of any number
 * Return: The absolute value of the number
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		c = c * (-1);
		return (c);
	};
}
