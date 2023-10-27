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
	for (; *haystack != '\0'; haystack++)
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
			p2++;
		}

		if (*p2 == '\0')
			return (haystack);
	}
	return (0);
}
