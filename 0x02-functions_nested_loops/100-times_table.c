#include "main.h"

/**
 * print_times_table - function that prints the n times table
 *
 * @n: checks input of functon
 *
 * Return: value of function
 */

void print_times_table(int n)
{
	int x, y, j;

	if (n <= 15 && n >= 0)

		for (x = 0; x <= n ; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				j = x * y;
				if (j <= 9)
					_putchar(' ');
				if (j <= 99)
					_putchar(' ');
				if (j > 99)
				{
					_putchar((j / 100) + '0');
					_putchar((j / 10) % 10 + '0');
				}
				else
				{
					if (j <= 99 && j >= 10)
						_putchar((j / 10) + 48);
				}
				_putchar((j % 10) + '0');
			}
			_putchar('\n');
		}
}
