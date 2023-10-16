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
	int i, x;
	int *ptr;

	for (i = 0; i < strlen(str); i++)
	{
		ptr = &i;
		_putchar(ptr + 48);
	}
}
