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
	int i, x, z = 0, y = 0;
	char *pnt;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			y++;
	}

	y += ac;

	pnt = malloc(sizeof(char) * y);
	if (pnt == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			pnt[z] = av[i][x];
			z++;
		}

	if (pnt[z] == '\0')
		pnt[z++] = '\n';
	}

	return (pnt);
}
