#include "main.h"

/**
 * append_text_to_file - Function to append text to file
 * @filename: Pointer to the name of the file
 * @text_content: Content to append
 * Return: 1 if append is successful and -1 if append
 * is not successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nwr, length;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	for (length = 0; text_content[length]; length++)
		;
	if (!text_content)
		close(fd);
	else
	{
		nwr = write(fd, text_content, length);
		if (nwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
