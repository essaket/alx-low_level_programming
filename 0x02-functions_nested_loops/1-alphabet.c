#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: Always 0 for success
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x < 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
