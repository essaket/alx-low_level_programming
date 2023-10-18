#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: input pointer of function
 * @n: the number of elements of array
 *
 * Return: a void
 */

void reverse_array(int *a, int n)
{
	int x, c, k;

	k = n - 1;

	for (x = 0; x < k; x++, k--)
	{
		c = a[x];
		a[x] = a[k];
		a[k] = c;
	}
}
