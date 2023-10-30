#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars, and
 *			initializes it with a specific char
 *
 * @size: input of function
 * @c: input of function
 *
 * Return: a pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *pnt = malloc(sizeof(char) * size);
	unsigned int i;

	if (pnt == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		pnt[i] = c;

	return (0);
}
