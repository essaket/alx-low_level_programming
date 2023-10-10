#include "main.h"

/**
 * times_table - function that prints the 9 times table strating with 0
 *
 * Return: value of function
 */

void times_table(void)
{
	int x, y, j;

	for (x = 0; x <= 9 ; x++)
	{
		_putchar('0');
		for (y = 0; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			j = x * y;

			if (j <= 9)
				_putchar(' ');
			else
				_putchar((j / 10) + 48);
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
