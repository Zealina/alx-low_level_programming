#include "main.h"

/**
 * main - a program that copies the content of one file
 * to another.
 * @ac: counter for the number of arguments
 * @av: pointer to the arguments
 * Return: 97, 98, 99 or 100 for various errors
 */
int main(int ac, char **av)
{
	ssize_t nwr, nrd;
	int file_f, file_t, ncl, ncl2;
	char *buf;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_f = open(av[1], O_RDONLY);
	buf = malloc(sizeof(char) * 1024);
	nrd = read(file_f, buf, 1024);
	if (file_f == -1 || nrd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_t = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	nwr = write(file_t, buf, nrd);
	if (file_t == -1 || nwr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[1]);
		exit(99);
	}
	ncl = close(file_f);
	if (ncl == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", ncl);
		exit(100);
	}
	ncl2 = close(file_t);
	if (ncl2 == -1)
	{
		dprintf(2, "Error: Can't close fc %d\n", ncl2);
		exit(100);
	}
	free(buf);
	