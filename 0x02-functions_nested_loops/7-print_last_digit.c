#include "main.h"

/**
 * print_last_digit - is a function that prints the last digit of a number
 *
 * @x: checks of input function
 *
 * Return: value of last_digit
 */

int print_last_digit(int x)
{
	int last_digit;

	if (x < 0)
		last_digit = (x % 10) * -1;
	else
		last_digit = x % 10;
	_putchar(last_digit + 48);

	return (last_digit);
}
