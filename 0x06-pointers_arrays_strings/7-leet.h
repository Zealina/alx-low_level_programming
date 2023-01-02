#include "main.h"

/**
 * leet - function to replace some alphabets with numbers
 * @str: The string
 * Return: Pointer to the string
 */
char *leet(char *str)
{
	int x, y;
	char nice[5] = {'4', '3', '0', '7', '1'};
	char noce[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (x = 0; str[x]; x++)
	{
		for (y = 0; y <= 4; y++)
		{
			if (str[x] == noce[y] || str[x] == noce[y * 2])
			{
				str[x] = nice[y];
			}
		}
	}
	return (str);
}
