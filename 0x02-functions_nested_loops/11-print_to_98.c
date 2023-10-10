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
	int x;

	if (n > 98)
		for (x = n; x > 98; x--)
			printf("%d, ", x);
	else
		for (x = n; x < 98; x++)
			printf("%d, ", x);
	printf("98\n");
}
