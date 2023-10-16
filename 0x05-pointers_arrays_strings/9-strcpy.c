#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 *
 * @dest: input of function
 * @src: input of function
 *
 * Return: a char
 */

char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');

	return (dest);
}
