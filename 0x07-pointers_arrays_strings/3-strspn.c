#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: input pointer of function
 * @accept: input pointer of function
 *
 * Return: o for success
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int x = 0;

	while (s[i] != '\0')
	{
		for (; accept[x] != s[i]; x++)
		{
			if (accept[x] == '\0')
				return (x);
		}
		i++;
	}

	return (x);
}
