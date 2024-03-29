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
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pnt = malloc(nmemb * size);

	if (pnt == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		pnt[i] = 0;

	return (pnt);
}
