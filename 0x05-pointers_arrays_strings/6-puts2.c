#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string
 *		with the first character
 *
 * @str: input of function
 *
 * Return: a void
 */

void puts2(char *str)
{
	int i, x;

	x = strlen(str);

	for (i = 0; i < x ;i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
