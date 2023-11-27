#include "main.h"

/**
 * main - a program that copies the content of a file to another file
 *
 * @ac: argument of function
 * @av: argument o function
 *
 * Retunr: 1 or 0
 */

int main(int ac, char **av)
{
	int fd1 = 0, fd2 = 0;
	ssize_t nmb;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((nmb = read(fd1, buf, 1024)) > 0)
		if (write(fd2, buf, nmb) != nmb)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	if (nmb == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd1 = close(fd1);
	fd2 = close(fd2);
	if (fd1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	if (fd2)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);

	return (EXIT_SUCCESS);
}
