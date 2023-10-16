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
	int i;

	i = strlen(s);

	while (i--)
		_putchar(s[i] + 0);
	_putchar('\n');
}
