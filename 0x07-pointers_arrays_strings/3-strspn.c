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

	while (s)
	{
		if (s[i] == accept[0])
		{
			for (x = 0; accept[x] >= '\0'; x++)
			{
				if (s[x] == accept[x])
					return (x);
			}
		}
		i++;
	}

	return (x);
}
