#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: checks input of function
 *
 * Return: a void
 */

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				if (x + y < size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
