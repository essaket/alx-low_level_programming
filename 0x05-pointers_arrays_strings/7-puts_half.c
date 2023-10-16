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
	int i, x;

	x = strlen(str);

	for (i = x / 2; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
}
