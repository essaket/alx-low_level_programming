#include "main.h"
#include <stdio.h>

/**
 * print_array - functiion that prints n elements of an array of integers
 *
 * @a: input of function
 * @n: input of function
 *
 * Return: a void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	_putchar('\n');
}
