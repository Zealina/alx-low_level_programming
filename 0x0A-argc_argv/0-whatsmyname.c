#include "main.h"

/**
 * main - prints the name of the program even if its changed
 *	without having to recompile
 * @argc: Number of arguments
 * @argv: pointer to the arguments
 *
 * Return: Always 0
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	int i = 0;
	char *prog_name = argv[0];

	while (prog_name[i])
	{
		_putchar(prog_name[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
