#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - function that conatenates all the arguments of your program
 *
 * @ac: input of function
 * @av: input pointer of pointer of function
 *
 * Return: a pointer
 */

char *argstostr(int ac, char **av)
{
	int i = 0, x = 0, j = 0, z = 0;
	char *pnt;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		while (av[i] != '\0')
			x++;
		x++;
	}

	pnt = malloc(x * sizeof(char) + 1)

	if (pnt == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, z++)
			pnt[z] = av[i][j];
		pnt[z] = '\n';
		z++;
	}

	pnt[z] = '\0';

	return (pnt);
}
