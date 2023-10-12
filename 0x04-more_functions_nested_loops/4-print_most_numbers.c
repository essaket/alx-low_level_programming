#include "main.h"

/**
 * print_most_numbers - function that prints the numbers
 *			from 0 to 9 and don't print 2 and 4
 *
 * Return: a void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 and i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
