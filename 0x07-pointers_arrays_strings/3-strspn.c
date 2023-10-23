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

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == accept[0])
			return (i);
	}

	return (0);
}
