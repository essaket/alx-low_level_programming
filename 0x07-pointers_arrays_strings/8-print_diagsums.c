#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *			of a square matrix of integers
 *
 * @a: an array
 * @size: input of function
 *
 * Return: 0 for success
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	for (; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", sum2, sum2);
}
