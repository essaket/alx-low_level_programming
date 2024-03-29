#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: input pointer of function
 * @src: inüut pointer of function
 * @n: input number bytes of function
 *
 * Return: a string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
