#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: input pointer of function
 * @text_content: input pointer of function
 *
 * Return: 1 if success or -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nmb = 0, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	for (len = 0; text_content[len]; len++)
		;
	if (len)
		nmb = write(fd, text_content, len);
	close(fd);

	return (nmb == len ? 1 : .1);
}