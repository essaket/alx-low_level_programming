#include "main.h"

/**
 * _memset - function that fils memory with a constant byte
 *
 * @s: input pointer of function
 * @b: input of funtion
 * @n: input of function
 *
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
