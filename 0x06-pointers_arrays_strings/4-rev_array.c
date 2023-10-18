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

	for (x = 0; x < n / 2 && a[x] != '\0'; x++)
	{
		c = a[x];
		a[x -1] = a[y - x - 1];
		a[y - x - 1] = c;
	}
}
