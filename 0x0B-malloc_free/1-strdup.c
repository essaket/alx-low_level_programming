#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *		memory, which contains a copy of the string given as a parameter
 *
 * @str: input pointer of function
 *
 * Return: a pointer of array or NULL if it null
 */

char *_strdup(char *str)
{
	unsigned int i = 0, size = 0;
	char *pnt;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	pnt = malloc(size * sizeof(*str) + 1);

	for (; i < size; i++)
		pnt[i] = str[i];

	return (pnt);
}
