#include "main.h"
#include <string.h>

/**
 * _puts - function that prints a string followed by a new line
 *
 * @str: input of function
 *
 * Return: a void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
