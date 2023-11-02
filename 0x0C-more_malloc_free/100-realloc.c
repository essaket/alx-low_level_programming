#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: input pointer of function
 * @old_size: input of function
 * @new_size: input of function
 *
 * Return: a pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pnt;
	unsigned int i;

	if (new_size == ola_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pnt = malloc(new_size);
		if (pnt == NULL)
			return (NULL);
		return (pnt);
	}
	if (new_size > ola_size)
	{
		pnt = malloc(new_size);
		if (pnt == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)pnt + i) = *((char *)ptr + i);/* cast */
		free(ptr);
	}

	return (pnt);
}
