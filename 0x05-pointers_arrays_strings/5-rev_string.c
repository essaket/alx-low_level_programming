#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 *
 * @s: input of function
 *
 * Return: a void
 */

void rev_string(char *s)
{
	int x, y;
	char c;

	x = strlen(s);

	for (y = 0; y < x / 2; y++)
	{
		c = s[y];
		s[y] = s[x - y - 1];
		s[x - y - 1] = c;
	}
}
