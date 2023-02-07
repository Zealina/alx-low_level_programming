#include "main.h"

/**
 * read_textfile - Read a file
 * @filename: the name of the file
 * @letters: How many letters are to be read
 * Return: The actual number of letters that could be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rdret, wrret;
	char *buf;
	int fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	rdret = read(fd, buf, letters);
	wrret = write(STDOUT_FILENO, buf, rdret);
	free(buff);
	return (wrret);
}
