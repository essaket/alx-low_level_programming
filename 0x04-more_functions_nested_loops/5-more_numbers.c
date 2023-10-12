#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 *		from 0 to 14
 *
 * Return: a void
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y < 14; y++)
		{
			_putchar(y + 48);
		}
		_putchar('\n');
	}
}
