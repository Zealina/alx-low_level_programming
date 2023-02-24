#include "main.h"
#include <stdio.h>

/**
 * main - Print all the arguments it receives
 * @argc: The count of the argument
 * @argv: Pointer to the arguments
 *
 * Return: Alwayx 0
 */
int main(__attribute__((unused))int argc, char **argv)
{
	unsigned int i = 0;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
