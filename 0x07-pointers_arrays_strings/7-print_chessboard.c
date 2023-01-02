#include "main.h"

/**
 * print_chessboard - Print the chessboard with multi-arrays
 * @a: The source of the multiarry
 * Return: Nothing, void
 */
void print_chessboard(char (*a)[8])
{
	int ind1 = 0, ind2 = 0;

	for (ind1 = 0; ind1 < 8; ind1++)
	{
		for (ind2 = 0; ind2 < 8; ind2++)
		{
			_putchar(a[ind1][ind2]);
		}
		_putchar('\n');
	}
}
