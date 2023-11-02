#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: input of function
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *pnt = malloc(b);

	if (pnt == 0)
		exit(98);

	return (pnt);
}
