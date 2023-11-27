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
	ssize_t nmb = 0, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, O_TRUNC | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (!text_content)
		len = 0;
	else
		for (; text_content[len]; len ++)
			;
	if (len)
		nmb = write(fd, text_content, len);
	close(fd);
	if (nmb == len)
		return (1);
	else
		return (-1);
}
