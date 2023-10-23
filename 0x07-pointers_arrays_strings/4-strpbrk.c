#include "main.h"

/**
 * _strpbrk - function that searches a string for any of set of bytes
 *
 * @s: input pointer of function
 * @accept: input pointer of function
 *
 * Return: a string
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0;
	int y = 0;

	while (s[x] != '\0')
	{
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
				return (s + x);
			y++;
		}
		x++;
	}

	return (NULL);
}
