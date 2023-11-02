#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_convert - function that checked if number is positve or not
 *			and convert it from char to int
 *
 * @c: input string of function
 * Return: an int
 */

int check_convert(char *c)
{
	int j = 1;
	unsigned int f, k, x = 0;

	for (f = 0; !(c[f] >= '0' && c[f] <= '9'); f++)
	{
		if (c[f] == '-')
			j *= -1;
	}

	for (k = f; c[k] >= '0' && c[k] <= '9'; k++)
	{
		x *= 10;
		x += (c[k] - '0');
	}

	return (i * x);
}

/**
 * print_convert - function that prints an integer after convert it
 *				from int to char
 * @n: input of function
 * Return: 0 for success
 */

void print_convert(unsigned int n)
{
	unsigned int i, x = 0, d;

	for (i = 0; n / d > 9; i++, d *= 10)
		;

	for (d = 1; d >= 1; n %= d, d /= 10)
	{
		x = n / d;
		_putchar(x + '0');
	}
}

/**
 * main - a program that multiplies two positive numbers
 * @argc: input argument of function
 * @argv: input array argument of function
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;
	char er[] = "Error\n";

	if (argc != 3)
	{
		for (i = 0; er[i]; i++)
			_putchar(er[i]);
		exit(98);
	}
	print_convert(check_convert(argv[1]) * check_convert(argv[2]));
	_putchar('\n');

	return (0);
}
