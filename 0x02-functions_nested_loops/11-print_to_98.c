#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers
 *
 * @n: checks input of function
 *
 * Return: value of function
 */

void print_to_98(int n)
{
	int z;

	if (n < 98)
		for (z = n; z < 98; z++)
		{
			printf("%d. ", z);
		}
	else
		for (z = n; z > 98; z--)
		{
			printf("%d", z);
			_putchar('.');
			_putchar(' ');
		}
	_putchar(98 + '0');
	_putchar('\n');
}
