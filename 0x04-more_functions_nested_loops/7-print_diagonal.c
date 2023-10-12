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
	int i, j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j-1; i++)
				_putchar('_');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
