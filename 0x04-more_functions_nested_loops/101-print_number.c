#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: checks input of function
 *
 * Return: value of function
 */

void print_number(int n)
{
	unsigned int x;

	/*check if the number is negative*/
	if (n < 0)
	{
		x = -n;
		_putchar('-');
	} else/*if number is positive*/
	{
		x = n;
	}

	if (x / 10)
	{
		print_number(x / 10);
	}

	_putchar((x % 10) + '0');
}
