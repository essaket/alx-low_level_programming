#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: input pointer of function
 * @needle: input pointer of function
 *
 * Return: a string
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;
	char *p1, *p2;

	x = 0;
	while (hystack[x] != '\0')
	{
		*p1 = haystack;
		*p2 = needle;

		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
			p2++;
		}

		if (*p2 == '\0')
			return (hystack);
		x++;
	}

	return (0);
}
