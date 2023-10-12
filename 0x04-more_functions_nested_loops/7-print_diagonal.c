#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: checks input of function
 *
 * Return: a void
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
