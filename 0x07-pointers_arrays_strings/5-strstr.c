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

	while (*haystack)
	{
		x = 0;
	
		while (haystack[x] == needle[x])
		{
			x++;
			if (needle[x + 1] == '\0')
				return (haystack);
		}
		haystack++;
	}

	return (0);
}
