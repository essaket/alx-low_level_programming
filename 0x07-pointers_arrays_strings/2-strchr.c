#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: input pointer of function
 * @c: input of function
 *
 * Return: 0 for success
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i])/* or return (s + i)*/
	}

	return (0);
}
