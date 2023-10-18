#include "main.h"

/**
 * _strncat - function that concatenates two strings used the n bytes
 *
 * @dest: input pointer of function
 * @src: input pointer of function
 * @n: input number bytes of function
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;

	while (dest[x] != '\0')
		x++;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
