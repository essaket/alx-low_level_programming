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
	int i;
	long x = strlen(str);
	
	for (i = 0; i < x; i++)
		_putchar(*str + 48);
	_putchar('\n');
}
