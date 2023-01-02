#include "main.h"

/**
 * print_chessboard - Print the chessboard with multi-arrays
 *
 * Return: Nothing, void
 */
void print_chessboard(char (*a)[8])
{
	int ind1 = 0, ind2 = 0;

	for (ind1 = 0; a[ind1][ind2]; ind1++)
	{
		for (ind2 = 0; a[ind1][ind2]; ind2++)
		{
