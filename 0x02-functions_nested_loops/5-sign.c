#include "main.h"

/**
 * print_sign - a function that prints the sign of number
 *
 * @n: ckecks input of function
 *
 * Return: Always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else	if (n == 0)
		{
		_putchar('0');
		return (0);
		}
	else
	{
		_putchar('-');
		return (-1);
	}
}
