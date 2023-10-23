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
	int i, x;

	i = 0;
	while(s)
	{
		for (x = 0; accept[x] != s[i]; x++)
		{
			if (accept[x] == '\0')
				return (i);
		}
		i++;
	}

	return (i);
}
