#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: input of function
 * @size: input of function
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pnt;
	int i = 0, j = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	pnt = malloc(sizeof(int) * nmemb + 1);

	if (pnt == 0)
		return (NULL);

	i = sizeof(int) * nmemb + 1;

	while (j < i)
	{
		pnt[j] = 0;
		j++;
	}
	pnt[j] = '\0';

	return (pnt);
}
