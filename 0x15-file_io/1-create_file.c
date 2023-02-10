#include "main.h"

/**
 * create_file - Create a file and append a statement to it
 * @filename: Pointer to the name of the file
 * @text_content: The content of the file
 * Return: 1 if the file was created and written successfully
 * -1 if any eror occured in the crateing or writing
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t wrn, length = 0;
	int fd, ind;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (ind = 0; text_content[ind]; ind++)
		length++;
	wrn = write(fd, text_content, length);
	if (wrn == -1)
		return (-1);
	close(fd);
	return (1);
}
