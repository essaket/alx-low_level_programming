#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 *
 * @min: input of function
 * @max: input of function
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *pnt;
	int i, j;

	if (min > max)
		return (NULL);

	j = max - min + 1;
	pnt = malloc(sizeof(int) * j);

	if (pnt == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		pnt[i] = min++;

	return (pnt);
}
