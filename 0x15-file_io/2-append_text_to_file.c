#include "main.h"

/**
 * append_text_to_file - function that apprends text at the end of a file
 *
 * @filename: input pointer of function
 * @text_content: input pointer of function
 *
 * Return: 1 for success or -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nmb, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (; text_content[len]; len++)
			;
		nmb = write(fd, text_content, len);
	}
	close(fd);

	return (nmb == len ? 1 : -1);
}
