#include "main.h"
#include <string.h>

/**
 * puts_half - functio that prints half of a string
 *
 * @str: input of function
 *
 * Return: a void
 */

void puts_half(char *str)
{
	int i;
	long x;

	x = strlen(str);

	if (x % 2 == 0)
	{
		for (i = x / 2; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
	}
	else
	{
		for (i = x / 2; i <= x; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
