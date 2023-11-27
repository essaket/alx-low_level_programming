#include "main.h"

/**
 * read_textfile - function that reads a text file and prints id to the POSIX
 *
 * @filename: input pointer of function
 * @letters: input pointer of function
 *
 * Return: the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nmb;
	char *buf = malloc(sizeof(char) * (letters));

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	nmb = read(fd, buf, letters);
	nmb = write(STDOUT_FILEND, buf, nmb);
	close(fd);

	return (nmb);
}
