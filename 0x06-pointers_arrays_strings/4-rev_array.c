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
	int x, c;
	int y = 0;

	while (a[y] != '\0')
		y++;

	for (x = 0; x < n - 1; x++)
	{
		c = a[x];
		a[x] = a[y - x];
		a[y - x] = c;
	}
}
