#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: input of function
 * @src: input of function
 *
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	/* get the size of array dest*/
	while (dest[x] != '\0')/* or while (dest[x])*/
		x++;

	for (y = 0; src[y]; y++)
	{
		dest[x] = src[y];
		x++;
	}

	return (dest);
}
