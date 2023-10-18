#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: input pointer of function
 * @s2: input pointer of function
 *
 * Return: a int
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}

	return (0);
}
