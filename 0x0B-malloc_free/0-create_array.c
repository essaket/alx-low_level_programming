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
	int i;

	if (size == NULL || size == 0)
		return (0);

	for (i = 0; i < size; i++)
		pnt[i] = c;

	return (0);
}
