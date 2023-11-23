#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at given index
 *
 * @n: input pointer of function
 * @index: input index of function
 *
 * Return: 1 for success or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (index >= (sizeof(n) * 8))
		return (-1);
	x <<= index;
	*n ^= x;

	return (1);
}
