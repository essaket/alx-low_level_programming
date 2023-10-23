#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: input pointer of function
 * @src: input pointer of functio
 * @n: input of function
 *
 * Return: a pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
